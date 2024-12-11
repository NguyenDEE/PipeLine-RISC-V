module decode_cycle (
    input logic i_clk,
    input logic i_enb_D,
    input logic i_rst,
    input logic i_rst_D,
    input logic [31:0] i_pc_D,
    input logic [31:0] i_pc_4_D,
    input logic [31:0] i_instr_D,
    input logic [31:0] i_result_W,
    input logic [4:0] i_rd_addr_W,
    input logic [31:0] i_alu_data_E,
    input logic [9:0] i_pattern_D,
    //
    input logic i_rd_wren_W,
    output logic o_ins_n_vld_E,
    output logic [2:0] o_slt_sl_E,
    output logic o_rd_wren_E,
    output logic o_op_a_sel_E,
    output logic o_op_b_sel_E,
    output logic [3:0] o_alu_op_E,
    output logic o_mem_wren_E,
    output logic [1:0] o_wb_sel_E,
    output logic [31:0] o_imm_E,
    output logic o_taken_E,
    output logic o_enb_branch,
    output logic o_enb_jump,
    //
    output logic [4:0] o_rs1_addr_E,
    output logic [4:0] o_rs2_addr_E,
    output logic [4:0] o_rd_addr_E,
    output logic [31:0] o_rs1_data_E,
    output logic [31:0] o_rs2_data_E,
    output logic [31:0] o_pc_E,
    output logic [31:0] o_pc_4_E,
    output logic [9:0] o_pattern_E
);
//wire
logic [31:0] rs1_data_D,rs2_data_D;
logic [31:0] imm_D;
logic [2:0] immsel_D;
logic br_un_D,br_less_D,br_euqal_D;
//
logic ins_n_vld_D;
logic  [2:0]  slt_sl_D    ;
logic         rd_wren_D    ;
logic         op_a_sel_D   ;
logic         op_b_sel_D   ;
logic  [3:0]  alu_op_D    ;
logic         mem_wren_D   ;
logic  [1:0]  wb_sel_D    ;
logic [4:0] rs1_addr_D, rs2_addr_D, rd_addr_D;
logic taken_D;
logic enb_branch;
logic enb_jump;
// reg
logic reg_ins_n_vld_D;
logic  [2:0]  reg_slt_sl_D    ;
logic         reg_rd_wren_D    ;
logic         reg_op_a_sel_D   ;
logic         reg_op_b_sel_D   ;
logic  [3:0]  reg_alu_op_D    ;
logic         reg_mem_wren_D   ;
logic  [1:0]  reg_wb_sel_D    ;
logic [4:0] reg_rs1_addr_D, reg_rs2_addr_D, reg_rd_addr_D;
logic [31:0] reg_pc_D;
logic [31:0] reg_pc_4_D;
logic [31:0] reg_rs1_data_D,reg_rs2_data_D;
logic [31:0] reg_imm_D;
logic reg_taken_D;
logic reg_enb_branch;
logic reg_enb_jump;
logic [9:0] reg_pattern_D;
assign rs1_addr_D = i_instr_D[19:15];
assign rs2_addr_D = i_instr_D[24:20];
assign rd_addr_D = i_instr_D[11:7];
regfile reg_decode (
  .i_clk(i_clk),
  .i_stall(i_enb_D),
  .i_rst(i_rst),
  .i_rs1_addr(i_instr_D[19:15]), 
  .i_rs2_addr(i_instr_D[24:20]), 
  .i_rd_addr(i_rd_addr_W),
  .i_rd_data(i_result_W),
  .i_rd_wren(i_rd_wren_W),
  .o_rs1_data(rs1_data_D), 
  .o_rs2_data (rs2_data_D)
);

immgen  imm_decode (
	.i_inst(i_instr_D),
	.i_immsel(immsel_D),
	.o_imm(imm_D)
);

ctrl_unit  ctrl_decode (
	.i_instr(i_instr_D)     ,
	.i_br_less(br_less_D)   ,
	.i_br_equal(br_euqal_D)  ,
    .o_insn_vld(ins_n_vld_D) ,
    .o_slt_sl(slt_sl_D)  ,
    .o_pc_sel(taken_D)   ,
    .o_br_unsigned(br_un_D),
    .o_rd_wren(rd_wren_D ),
    .o_op_a_sel(op_a_sel_D),
    .o_op_b_sel(op_b_sel_D),
	.o_alu_op(alu_op_D) ,
	.o_mem_wren(mem_wren_D)  ,
	.o_wb_sel(wb_sel_D)    ,
	.o_imm_sel(immsel_D),
    .o_enb_branch(enb_branch),
    .o_enb_jump(enb_jump)
);

brc brc_decode(
	.i_rs1_data(data_br_1),
	.i_rs2_data(data_br_2),
	.i_br_un(br_un_D),
	.o_br_less(br_less_D),
	.o_br_equal(br_euqal_D)
);
mux_2_1 mux_br_1 (
      .data_1_i      (i_alu_data_E), 
      .data_0_i      (rs1_data_D), 
      .sel_i         (sel_1), 
      .data_out_o    (data_br_1  )
      ); 	
mux_2_1 mux_b (
      .data_1_i      (i_alu_data_E), 
      .data_0_i      (rs2_data_D ), 
      .sel_i         (sel_2), 
      .data_out_o    (data_br_2  )
      );
logic sel_1,sel_2;
logic [31:0] data_br_1,data_br_2;
forward_br forward_decode (
    .i_rd_addr_E(o_rd_addr_E),
    .i_rs1_addr_D(rs1_addr_D),
    .i_rs2_addr_D(rs2_addr_D),
    .i_rd_wren_E(o_rd_wren_E),
    .o_sel_1(sel_1),
    .o_sel_2(sel_2)
);
always_ff @(posedge i_clk) begin
    if(i_rst_D) begin
        reg_ins_n_vld_D <= 1'b1;
        reg_slt_sl_D <= 3'b0;
        reg_rd_wren_D <= 1'b0;
        reg_op_a_sel_D <= 1'b0;
        reg_op_b_sel_D <= 1'b0;
        reg_alu_op_D <= 4'b0;
        reg_mem_wren_D <= 1'b0;
        reg_wb_sel_D <= 2'b0;
        reg_rs1_addr_D <= 5'b0;
        reg_rs2_addr_D <= 5'b0;
        reg_rd_addr_D <= 5'b0;
        reg_pc_D <= 32'h0;
        reg_pc_4_D <= 32'h0;
        reg_rs1_data_D <= 32'h0;
        reg_rs2_data_D <= 32'h0;
        reg_imm_D <= 32'h0;
        reg_taken_D <= 1'b0;
       reg_enb_branch <= 1'b0;
       reg_enb_jump <= 1'b0;
       reg_pattern_D <= '0;
    end
    else if (!i_enb_D)begin
        reg_ins_n_vld_D <= ins_n_vld_D;
        reg_slt_sl_D <= slt_sl_D;
        reg_rd_wren_D <= rd_wren_D;
        reg_op_a_sel_D <= op_a_sel_D;
        reg_op_b_sel_D <= op_b_sel_D;
        reg_alu_op_D <= alu_op_D;
        reg_mem_wren_D <= mem_wren_D;
        reg_wb_sel_D <= wb_sel_D; 
        reg_rs1_addr_D <= rs1_addr_D;
        reg_rs2_addr_D <= rs2_addr_D;
        reg_rd_addr_D <= rd_addr_D; 
        reg_pc_D <= i_pc_D;  
        reg_pc_4_D <= i_pc_4_D;
        reg_rs1_data_D <= rs1_data_D;
        reg_rs2_data_D <= rs2_data_D;
        reg_imm_D <= imm_D;
        reg_taken_D <= taken_D;
        reg_enb_branch <= enb_branch;
        reg_enb_jump <= enb_jump;
        reg_pattern_D <= i_pattern_D;
    end
end
assign o_ins_n_vld_E = reg_ins_n_vld_D;
assign o_slt_sl_E = reg_slt_sl_D;
assign o_rd_wren_E = reg_rd_wren_D;
assign o_op_a_sel_E = reg_op_a_sel_D;
assign o_op_b_sel_E = reg_op_b_sel_D;
assign o_alu_op_E = reg_alu_op_D;
assign o_mem_wren_E = reg_mem_wren_D;
assign o_wb_sel_E = reg_wb_sel_D;  
assign o_rs1_addr_E = reg_rs1_addr_D;
assign o_rs2_addr_E = reg_rs2_addr_D;
assign o_rd_addr_E = reg_rd_addr_D; 
assign o_pc_E = reg_pc_D;
assign o_pc_4_E = reg_pc_4_D;
assign o_rs1_data_E = reg_rs1_data_D;
assign o_rs2_data_E = reg_rs2_data_D;
assign o_imm_E = reg_imm_D;
assign o_taken_E = reg_taken_D;
assign o_enb_branch = reg_enb_branch;
assign o_enb_jump = reg_enb_jump;
assign o_pattern_E = reg_pattern_D;
endmodule





