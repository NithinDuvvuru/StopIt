module basys3_7seg_driver (
	clk_1k_i,
	rst_ni,
	digit0_en_i,
	digit0_i,
	digit1_en_i,
	digit1_i,
	digit2_en_i,
	digit2_i,
	digit3_en_i,
	digit3_i,
	anode_o,
	segments_o
);
	reg _sv2v_0;
	input clk_1k_i;
	input rst_ni;
	input wire digit0_en_i;
	input wire [3:0] digit0_i;
	input wire digit1_en_i;
	input wire [3:0] digit1_i;
	input wire digit2_en_i;
	input wire [3:0] digit2_i;
	input wire digit3_en_i;
	input wire [3:0] digit3_i;
	output reg [3:0] anode_o;
	output reg [6:0] segments_o;
	wire [1:0] state_d;
	reg [1:0] state_q;
	always @(posedge clk_1k_i)
		if (!rst_ni)
			state_q <= 0;
		else
			state_q <= state_d;
	assign state_d = state_q + 1;
	reg [3:0] digit = 4'b0000;
	always @(*) begin
		if (_sv2v_0)
			;
		anode_o = 4'b1111;
		case (state_q)
			0: begin
				digit = digit0_i;
				anode_o[0] = digit0_en_i;
			end
			1: begin
				digit = digit1_i;
				anode_o[1] = digit1_en_i;
			end
			2: begin
				digit = digit2_i;
				anode_o[2] = digit2_en_i;
			end
			3: begin
				digit = digit3_i;
				anode_o[3] = digit3_en_i;
			end
			default: begin
				digit = 4'b0000;
				anode_o = 4'b1111;
			end
		endcase
	end
	wire A;
	wire B;
	wire C;
	wire D;
	wire E;
	wire F;
	wire G;
	hex7seg hex7seg(
		.d3(digit[3]),
		.d2(digit[2]),
		.d1(digit[1]),
		.d0(digit[0]),
		.A(A),
		.B(B),
		.C(C),
		.D(D),
		.E(E),
		.F(F),
		.G(G)
	);
	always @(*) begin
		if (_sv2v_0)
			;
		if (anode_o == 4'b1111)
			segments_o = 7'b1111111;
		else
			segments_o = {A, B, C, D, E, F, G};
	end
	initial _sv2v_0 = 0;
endmodule
module clk_100M_to_clk_1k (
	clk_100M_i,
	clk_1k_o
);
	input wire clk_100M_i;
	output wire clk_1k_o;
	localparam signed [31:0] COUNTER_RESET = 100000;
	wire [17:0] counter_d;
	reg [17:0] counter_q = 0;
	assign counter_d = (counter_q == 99999 ? {18 {1'sb0}} : counter_q + 1);
	always @(posedge clk_100M_i) counter_q <= counter_d;
	wire clk_d;
	reg clk_q;
	assign clk_d = counter_q > 50000;
	assign clk_1k_o = clk_q;
	always @(posedge clk_100M_i) clk_q <= clk_d;
endmodule
module clk_100M_to_clk_4 (
	clk_100M_i,
	clk_4_o
);
	input wire clk_100M_i;
	output wire clk_4_o;
	localparam signed [31:0] COUNTER_RESET = 25000000;
	wire [25:0] counter_d;
	reg [25:0] counter_q = 0;
	assign counter_d = (counter_q == 24999999 ? {26 {1'sb0}} : counter_q + 1);
	always @(posedge clk_100M_i) counter_q <= counter_d;
	wire clk_d;
	reg clk_q;
	assign clk_d = counter_q > 12500000;
	assign clk_4_o = clk_q;
	always @(posedge clk_100M_i) clk_q <= clk_d;
endmodule
module hex7seg (
	d3,
	d2,
	d1,
	d0,
	A,
	B,
	C,
	D,
	E,
	F,
	G
);
	reg _sv2v_0;
	input wire d3;
	input wire d2;
	input wire d1;
	input wire d0;
	output reg A;
	output reg B;
	output reg C;
	output reg D;
	output reg E;
	output reg F;
	output reg G;
	reg [3:0] digits = {d3, d2, d1, d0};
	always @(*) begin
		if (_sv2v_0)
			;
		case (digits)
			4'h0: {A, B, C, D, E, F, G} = 7'b1000000;
			4'h1: {A, B, C, D, E, F, G} = 7'b1111001;
			4'h2: {A, B, C, D, E, F, G} = 7'b0100100;
			4'h3: {A, B, C, D, E, F, G} = 7'b0110000;
			4'h4: {A, B, C, D, E, F, G} = 7'b0011001;
			4'h5: {A, B, C, D, E, F, G} = 7'b0010010;
			4'h6: {A, B, C, D, E, F, G} = 7'b0000010;
			4'h7: {A, B, C, D, E, F, G} = 7'b1111000;
			4'h8: {A, B, C, D, E, F, G} = 7'b0000000;
			4'h9: {A, B, C, D, E, F, G} = 7'b0010000;
			4'ha: {A, B, C, D, E, F, G} = 7'b0001000;
			4'hb: {A, B, C, D, E, F, G} = 7'b0000011;
			4'hc: {A, B, C, D, E, F, G} = 7'b1000110;
			4'hd: {A, B, C, D, E, F, G} = 7'b0100001;
			4'he: {A, B, C, D, E, F, G} = 7'b0000110;
			4'hf: {A, B, C, D, E, F, G} = 7'b0001110;
			default: {A, B, C, D, E, F, G} = 7'b1111111;
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
module synchronizer (
	clk_sample_i,
	clk_target_i,
	async_data_i,
	sync_data_o
);
	reg _sv2v_0;
	parameter signed [31:0] WIDTH = 4;
	input wire clk_sample_i;
	input wire clk_target_i;
	input wire [WIDTH - 1:0] async_data_i;
	output wire [WIDTH - 1:0] sync_data_o;
	reg [WIDTH - 1:0] sync_data_d;
	reg [WIDTH - 1:0] sync_data_q;
	assign sync_data_o = sync_data_q;
	reg clk_target_q1;
	reg clk_target_q2;
	wire clk_target_edge;
	assign clk_target_edge = clk_target_q1 && !clk_target_q2;
	always @(*) begin
		if (_sv2v_0)
			;
		sync_data_d = sync_data_q;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < WIDTH; i = i + 1)
				if (clk_target_edge || async_data_i[i])
					sync_data_d[i] = async_data_i[i];
		end
	end
	always @(posedge clk_sample_i) begin
		clk_target_q1 <= clk_target_i;
		clk_target_q2 <= clk_target_q1;
		sync_data_q <= sync_data_d;
	end
	initial _sv2v_0 = 0;
endmodule
module game_counter (
	clk_4_i,
	rst_ni,
	en_i,
	count_o
);
	reg _sv2v_0;
	input wire clk_4_i;
	input wire rst_ni;
	input wire en_i;
	output wire [4:0] count_o;
	reg [4:0] state_q;
	reg [4:0] state_d;
	always @(posedge clk_4_i)
		if (!rst_ni)
			state_q <= 5'h1f;
		else
			state_q <= state_d;
	always @(*) begin
		if (_sv2v_0)
			;
		if (en_i)
			state_d = state_q - 1;
		else
			state_d = state_q;
	end
	assign count_o = state_q;
	initial _sv2v_0 = 0;
endmodule
module led_shifter (
	clk_i,
	rst_ni,
	shift_i,
	switches_i,
	load_i,
	off_i,
	leds_o
);
	reg _sv2v_0;
	input wire clk_i;
	input wire rst_ni;
	input wire shift_i;
	input wire [15:0] switches_i;
	input wire load_i;
	input wire off_i;
	output reg [15:0] leds_o;
	reg [15:0] state;
	always @(posedge clk_i)
		if (!rst_ni)
			state <= 0;
		else if (shift_i)
			state <= {state[14:0], 1'b1};
		else if (load_i)
			state <= switches_i;
	always @(*) begin
		if (_sv2v_0)
			;
		case (off_i)
			0: leds_o = state;
			1: leds_o = 16'b0000000000000000;
			default: leds_o = state;
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
module lfsr (
	clk_i,
	rst_ni,
	next_i,
	rand_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire next_i;
	output wire [4:0] rand_o;
	reg [7:0] state;
	always @(posedge clk_i)
		if (!rst_ni)
			state <= 1;
		else if (next_i)
			state <= {state[6:0], ((state[0] ^ state[5]) ^ state[6]) ^ state[7]};
		else
			state <= state;
	assign rand_o = state[4:0];
endmodule
module stop_it (
	rst_ni,
	clk_4_i,
	go_i,
	stop_i,
	load_i,
	switches_i,
	leds_o,
	digit0_en_o,
	digit0_o,
	digit1_en_o,
	digit1_o,
	digit2_en_o,
	digit2_o,
	digit3_en_o,
	digit3_o
);
	reg _sv2v_0;
	input wire rst_ni;
	input wire clk_4_i;
	input wire go_i;
	input wire stop_i;
	input wire load_i;
	input wire [15:0] switches_i;
	output wire [15:0] leds_o;
	output reg digit0_en_o;
	output reg [3:0] digit0_o;
	output reg digit1_en_o;
	output reg [3:0] digit1_o;
	output reg digit2_en_o;
	output reg [3:0] digit2_o;
	output reg digit3_en_o;
	output reg [3:0] digit3_o;
	wire [4:0] timerVal;
	reg timeRes;
	reg timeEn;
	time_counter time_counter(
		.clk_4_i(clk_4_i),
		.rst_ni(timeRes),
		.en_i(timeEn),
		.count_o(timerVal)
	);
	wire [4:0] gameVal;
	reg gameRes;
	reg gameEn;
	game_counter game_counter(
		.clk_4_i(clk_4_i),
		.rst_ni(gameRes),
		.en_i(gameEn),
		.count_o(gameVal)
	);
	wire [4:0] randVal;
	reg shift;
	lfsr lfsr(
		.clk_i(clk_4_i),
		.rst_ni(rst_ni),
		.next_i(shift),
		.rand_o(randVal)
	);
	wire [15:0] ledVal;
	reg flashing;
	reg scoreIncrement;
	led_shifter led_shifter(
		.clk_i(clk_4_i),
		.rst_ni(rst_ni),
		.shift_i(scoreIncrement),
		.switches_i(switches_i),
		.load_i(load_i),
		.off_i(flashing && timerVal[0]),
		.leds_o(ledVal)
	);
	reg [4:0] state_d;
	reg [4:0] state_q;
	always @(posedge clk_4_i)
		if (!rst_ni)
			state_q <= 5'd0;
		else
			state_q <= state_d;
	assign leds_o = ledVal;
	always @(*) begin
		if (_sv2v_0)
			;
		state_d = state_q;
		scoreIncrement = 0;
		shift = 1;
		timeRes = 1;
		gameRes = 1;
		timeEn = 0;
		gameEn = 0;
		(* full_case, parallel_case *)
		case (state_q)
			5'd0: begin
				timeEn = 0;
				timeRes = 0;
				gameRes = 0;
				if (go_i) begin
					timeRes = 1;
					timeEn = 1;
					state_d = 5'd1;
				end
				else
					state_d = 5'd0;
			end
			5'd1: begin
				timeRes = 1;
				timeEn = 1;
				shift = 0;
				if (timerVal == 8) begin
					gameRes = 1;
					timeRes = 0;
					state_d = 5'd2;
				end
				else
					state_d = 5'd1;
			end
			5'd2: begin
				gameEn = 1;
				shift = 0;
				if (stop_i) begin
					if (randVal == gameVal) begin
						timeEn = 1;
						gameEn = 0;
						timeRes = 1;
						gameRes = 1;
						scoreIncrement = 0;
						state_d = 5'd3;
					end
					else begin
						timeEn = 1;
						gameEn = 0;
						timeRes = 1;
						gameRes = 1;
						state_d = 5'd4;
					end
				end
				else begin
					gameEn = 1;
					state_d = 5'd2;
				end
			end
			5'd4: begin
				timeEn = 1;
				timeRes = 1;
				shift = 0;
				if (timerVal == 16) begin
					timeEn = 0;
					gameEn = 0;
					timeRes = 0;
					gameRes = 1;
					state_d = 5'd0;
				end
				else
					state_d = 5'd4;
			end
			5'd3: begin
				timeEn = 1;
				timeRes = 1;
				shift = 0;
				scoreIncrement = 0;
				if (timerVal == 16) begin
					if (ledVal == 16'b1111111111111111)
						state_d = 5'd5;
					else begin
						timeEn = 0;
						gameEn = 0;
						timeRes = 0;
						gameRes = 1;
						scoreIncrement = 1;
						state_d = 5'd0;
					end
				end
				else
					state_d = 5'd3;
			end
			5'd5: begin
				timeEn = 1;
				gameEn = 0;
				timeRes = 1;
				gameRes = 1;
				shift = 0;
				state_d = 5'd5;
			end
			default: state_d = 5'd0;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		if (state_q == 5'd5)
			flashing = 1;
		else
			flashing = 0;
		digit0_o = gameVal[3:0];
		digit1_o = {3'b000, gameVal[4]};
		digit2_o = randVal[3:0];
		digit3_o = {3'b000, randVal[4]};
		digit0_en_o = !((((((state_q == 5'd0) | (state_q == 5'd1)) | (state_q == 5'd2)) | ((state_q == 5'd3) && timerVal[0])) | ((state_q == 5'd4) && timerVal[0])) | (state_q == 5'd5));
		digit1_en_o = !((((((state_q == 5'd0) | (state_q == 5'd1)) | (state_q == 5'd2)) | ((state_q == 5'd3) && timerVal[0])) | ((state_q == 5'd4) && timerVal[0])) | (state_q == 5'd5));
		digit2_en_o = !(((((state_q == 5'd1) | (state_q == 5'd2)) | ((state_q == 5'd3) && timerVal[0])) | ((state_q == 5'd4) && !timerVal[0])) | (state_q == 5'd5));
		digit3_en_o = !(((((state_q == 5'd1) | (state_q == 5'd2)) | ((state_q == 5'd3) && timerVal[0])) | ((state_q == 5'd4) && !timerVal[0])) | (state_q == 5'd5));
	end
	initial _sv2v_0 = 0;
endmodule
module time_counter (
	clk_4_i,
	rst_ni,
	en_i,
	count_o
);
	reg _sv2v_0;
	input wire clk_4_i;
	input wire rst_ni;
	input wire en_i;
	output wire [4:0] count_o;
	reg [4:0] state_q;
	reg [4:0] state_d;
	always @(posedge clk_4_i)
		if (!rst_ni)
			state_q <= 0;
		else
			state_q <= state_d;
	always @(*) begin
		if (_sv2v_0)
			;
		if (en_i)
			state_d = state_q + 1;
		else
			state_d = state_q;
	end
	assign count_o = state_q;
	initial _sv2v_0 = 0;
endmodule