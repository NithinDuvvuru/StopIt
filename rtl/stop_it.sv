// Copyright (c) 2024 Ethan Sifferman.
// All rights reserved. Distribution Prohibited.

module stop_it import stop_it_pkg::*; (
    input  logic        rst_ni,
    input  logic        clk_4_i,
    input  logic        go_i,
    input  logic        stop_i,
    input  logic        load_i,
    input  logic [15:0] switches_i,
    output logic [15:0] leds_o,
    output logic        digit0_en_o,
    output logic [3:0]  digit0_o,
    output logic        digit1_en_o,
    output logic [3:0]  digit1_o,
    output logic        digit2_en_o,
    output logic [3:0]  digit2_o,
    output logic        digit3_en_o,
    output logic [3:0]  digit3_o
);

logic [4:0] timerVal;


logic timeRes;
logic timeEn;

time_counter time_counter(
    .clk_4_i(clk_4_i),
    .rst_ni(timeRes),
    .en_i(timeEn),
    .count_o(timerVal)
);

logic [4:0] gameVal;
logic gameRes;
logic gameEn;

game_counter game_counter(
    .clk_4_i(clk_4_i),
    .rst_ni(gameRes),
    .en_i(gameEn),
    .count_o(gameVal)
);

logic [4:0] randVal;
logic shift;

lfsr lfsr(
    .clk_i(clk_4_i),
    .rst_ni(rst_ni),
    .next_i(shift),
    .rand_o(randVal)
);

logic [15:0] ledVal;

led_shifter led_shifter(
    .clk_i(clk_4_i),
    .rst_ni(rst_ni),
    .shift_i(scoreIncrement),
    .switches_i(switches_i),
    .load_i(load_i),
    .off_i(flashing && timerVal[0]),
    .leds_o(ledVal)
);

state_t state_d, state_q;

always_ff @(posedge clk_4_i) begin
    if (!rst_ni) begin
        state_q <= WAITING_TO_START;
    end else begin
        state_q <= state_d;
    end
end

assign leds_o = ledVal;

logic scoreIncrement;
logic flashing;

always_comb begin
    state_d = state_q;

    scoreIncrement = 0;
    shift = 1;
    timeRes = 1;
    gameRes = 1;
    timeEn = 0;
    gameEn = 0;

    unique case (state_q)
        WAITING_TO_START: begin
            timeEn = 1;
            timeRes = 0;
            gameRes = 0;
            if(go_i) begin
                timeRes = 1;
                timeEn = 1;
                state_d = STARTING;
            end
            else begin
                state_d = WAITING_TO_START;
            end
        end
        STARTING: begin
            timeRes = 1;
            timeEn = 1;
            shift = 0;
            if(timerVal == 8) begin
                gameRes = 1;
                timeRes = 0;
                state_d = DECREMENTING;
            end
            else begin
                state_d = STARTING;
            end
        end
        DECREMENTING: begin
            gameEn = 1;
            shift = 0;
            if(stop_i) begin
                if(randVal == gameVal) begin
                    timeEn = 1;
                    gameEn = 0;
                    timeRes = 1;
                    gameRes = 1;
                    scoreIncrement = 0;
                    state_d = CORRECT;
                end
                else begin
                    timeEn = 1;
                    gameEn = 0;
                    timeRes = 1;
                    gameRes = 1;
                    state_d = WRONG;
                end
            end
            else begin
                gameEn = 1;
                state_d = DECREMENTING;
            end
        end
        WRONG: begin
            timeEn = 1;
            timeRes = 1;
            shift = 0;
            if(timerVal == 16) begin
                timeEn = 0;
                gameEn = 0;
                timeRes = 0;
                gameRes = 1;
                state_d = WAITING_TO_START;
            end
            else begin
                state_d = WRONG;
            end
        end
        CORRECT: begin
            timeEn = 1;
            timeRes = 1;
            shift = 0;
            scoreIncrement = 0;


            if(timerVal == 16) begin
                if(ledVal == 16'b1111111111111111) begin
                    state_d = WON;
                end
                else begin
                    timeEn = 0;
                    gameEn = 0;
                    timeRes = 0;
                    gameRes = 1;
                    scoreIncrement = 1;
                    state_d = WAITING_TO_START;
                end
            end
            else begin
                state_d = CORRECT;
            end
        end
        WON: begin
            timeEn = 1;
            gameEn = 0;
            timeRes = 1;
            gameRes = 1;
            shift = 0;
            state_d = WON;
        end
        default: begin
            state_d = WAITING_TO_START;
        end
    endcase
end


always_comb begin
    if(state_q == WON) begin
        flashing = 1;
    end
    else begin
        flashing = 0;
    end

    digit0_o = gameVal[3:0];
    digit1_o = {3'b000, gameVal[4]};
    digit2_o = randVal[3:0];
    digit3_o = {3'b000, randVal[4]};

    digit0_en_o = !((state_q == WAITING_TO_START) | (state_q == STARTING) |
    (state_q == DECREMENTING) |
    ((state_q == CORRECT) && timerVal[0]) | ((state_q == WRONG) && timerVal[0]) | (state_q == WON));

    digit1_en_o = !((state_q == WAITING_TO_START) | (state_q == STARTING) |
    (state_q == DECREMENTING) |
    ((state_q == CORRECT) && timerVal[0]) | ((state_q == WRONG) && timerVal[0]) | (state_q == WON));

    digit2_en_o = !((state_q == STARTING) | (state_q == DECREMENTING) | ((state_q == CORRECT)
    && timerVal[0]) |
    ((state_q == WRONG) && !timerVal[0]) | (state_q == WON));

    digit3_en_o = !((state_q == STARTING) | (state_q == DECREMENTING) | ((state_q == CORRECT)
    && timerVal[0]) |
    ((state_q == WRONG) && !timerVal[0]) | (state_q == WON));
end


endmodule
