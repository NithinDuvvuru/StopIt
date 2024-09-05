// Copyright (c) 2024 Ethan Sifferman.
// All rights reserved. Distribution Prohibited.

module led_shifter (
    input  logic        clk_i,
    input  logic        rst_ni,

    input  logic        shift_i,

    input  logic [15:0] switches_i,
    input  logic        load_i,

    input  logic        off_i,
    output logic [15:0] leds_o
);

// TODO

logic [15:0] state;

always_ff @(posedge clk_i) begin
    if(!rst_ni) begin
        state <= 0;
    end
    else if (shift_i) begin
        state <= {state[14:0], 1'b1};
    end
    else if(load_i) begin
        state <= switches_i;
    end
end


always_comb begin
    case (off_i)
        0: leds_o = state;
        1: leds_o = 16'b0;
        default: leds_o = state;
    endcase
end


endmodule
