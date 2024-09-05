// Copyright (c) 2024 Ethan Sifferman.
// All rights reserved. Distribution Prohibited.

module game_counter (
    input  logic       clk_4_i,
    input  logic       rst_ni,
    input  logic       en_i,
    output logic [4:0] count_o
);

// TODO


logic [4:0] state_q;
logic [4:0] state_d;

always_ff @(posedge clk_4_i) begin
    if(!rst_ni) begin
        state_q <= 5'h1f;
    end
    else begin
        state_q <= state_d;
    end
end

always_comb begin
    if (en_i) begin
        state_d = state_q - 1;
    end
    else begin
        state_d = state_q;
    end
end

assign count_o = state_q;

endmodule
