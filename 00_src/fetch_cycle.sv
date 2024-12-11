module fetch_cycle (
    input logic i_clk,
    input logic i_rst,
    input logic i_rst_F,
    input logic i_en_F,
    input logic i_branche_en_D,
    input logic i_jump_enb,
    input logic i_taken_E,
    input logic [31:0] i_pc_E,
    input logic [31:0] i_alu_data_E,
    input logic [9:0] i_pattern_E,
    output logic [31:0] o_instr_D,
    output logic [31:0] o_pc_4_D,
    output logic [31:0] o_pc_D,
    output logic o_rst_br_F,
    output logic [9:0] o_pattern_D
);
//wire
logic [31:0] pc_target_F;
logic [31:0] pc_four_F;
logic [31:0] pc_F,pc_Q1,pc_Q2,pc_rp;
logic pc_sel;
logic [31:0] instr_F;
logic pc_rp_sel;
logic [9:0] pattern_F;
//register
logic [31:0] reg_instr_F;
logic [31:0] reg_pc_4_F;
logic [31:0] reg_pc_F;
logic [9:0] reg_pattern_F;
gshare_v3 gshare_fetch 
    (   .i_clk(i_clk),
        .i_taken(i_taken_E),
        .i_pc(pc_F),
        .i_pc_E(i_pc_E),
        .i_alu_data_E(i_alu_data_E),
        .i_branche_en(i_branche_en_D),
        .i_jump_enb(i_jump_enb),
        .i_pattern_E(i_pattern_E),
        .o_pc_sel(pc_sel),
        .o_pc_target_F(pc_target_F),
        .o_pc_rp_sel(pc_rp_sel),
        .o_pc_rp(pc_rp),
        .o_rst_br_F(o_rst_br_F),
        .o_pattern_D(pattern_F)
    );
mux_2_1 block_mux_pc_1 (
      .data_1_i    (pc_target_F), 
      .data_0_i    (pc_four_F), 
      .sel_i       (pc_sel), 
      .data_out_o  (pc_Q1)
      );
mux_2_1 block_mux_pc_2 (
      .data_1_i    (pc_rp), 
      .data_0_i    (pc_Q1), 
      .sel_i       (pc_rp_sel), 
      .data_out_o  (pc_Q2)
      );
pc pc_fetch (
    .i_clk(i_clk)     , 
    .i_rst(i_rst)     ,
    .i_stall(i_en_F) ,
    .i_next_pc(pc_Q2)  ,
    .o_pc_current(pc_F)
);
pc_plus4 pc_plus_1 (
    .pc_current_i(pc_F),
    .i_rst(i_rst),
    .pc_plus4_o(pc_four_F)
);
/*
gshare_prediction gshare
(   .i_clk(i_clk),
    .i_instr(instr_F),
    .i_pc_4(pc_four_F),
    .i_branche_en(i_branche_en_D),
    .i_taken(i_taken_D),
    .i_pc(pc_F),
    .o_pc_target_F(pc_target_F),
    .o_pc_sel(pc_sel),
    .o_pc_rp_sel(pc_rp_sel),
    .o_pc_rp(pc_rp),
    .o_stall_E(o_stall_E)
);
*/
inst_memory inst_mem
(
    .o_rdata(instr_F),
    .i_addr (pc_F[13:0]),
    .i_rst(i_rst)
);
always_ff @(posedge i_clk) begin
    if (i_rst_F) begin
        reg_instr_F <= '0;
        reg_pc_4_F <= '0;
        reg_pc_F <= '0;
        reg_pattern_F <= '0;
    end
    else if (!i_en_F) begin
        reg_instr_F <= instr_F;
        reg_pc_4_F <= pc_four_F;
        reg_pc_F <= pc_F;
        reg_pattern_F <= pattern_F;
    end
end
assign o_instr_D = reg_instr_F;
assign o_pc_4_D = reg_pc_4_F;
assign o_pc_D = reg_pc_F;
assign o_pattern_D = reg_pattern_F;
endmodule


