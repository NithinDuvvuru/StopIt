// Copyright (c) 2024 Ethan Sifferman.
// All rights reserved. Distribution Prohibited.

module lfsr (
    input  logic       clk_i,
    input  logic       rst_ni,

    input  logic       next_i,
    output logic [4:0] rand_o
);

//TODO

logic [7:0] state;

always_ff @(posedge clk_i) begin
    if(!rst_ni) begin
        state <= 1;
    end
    else if (next_i) begin
        state <= {state[6:0], (state[0] ^ state[5] ^ state[6] ^ state[7])};
    end
    else begin
        state <= state;
    end
end

assign rand_o = state[4:0];


endmodule
