module pipeline (
    input logic i_clk,
    input logic i_rst,
    input logic  [31:0] i_io_sw,
    input logic [3:0] i_io_btn,
    //
    output logic [17:0]   o_SRAM_ADDR,
    inout  wire [15:0]   o_SRAM_DQ  ,
    output logic          o_SRAM_CE_N,
    output logic          o_SRAM_WE_N,
    output logic          o_SRAM_LB_N,
    output logic          o_SRAM_UB_N,
    output logic          o_SRAM_OE_N, 
    output logic [31:0] o_io_ledr, 
    output logic [31:0] o_io_ledg ,
    output logic [6:0] o_io_hex0, 
    output logic [6:0] o_io_hex1, 
    output logic [6:0] o_io_hex2,   
    output logic [6:0] o_io_hex3, 
    output logic [6:0] o_io_hex4, 
    output logic [6:0] o_io_hex5, 
    output logic [6:0] o_io_hex6,   
    output logic [6:0] o_io_hex7, 
    output logic [31:0] o_io_lcd,
    output  logic o_ins_n_vld,
    output  logic [31:0] o_pc_debug   
);
logic enb_F,enb_branch,enb_jump,br_taken,rst_br_F,enb_D,rst_F,rst_D,rst_M;
logic enb_E,enb_M,enb_W,rst_E;
logic [31:0] pc_E,alu_data_E;
logic [31:0] instr_D,pc_4_D,pc_D,result_W,ld_data_W;
logic ins_n_vld_E;
logic [2:0] slt_sl_E;
logic rd_wren_E;
logic op_a_sel_E;
logic op_b_sel_E;
logic [3:0] alu_op_E;
logic mem_wren_E;
logic [1:0] wb_sel_E;
logic [31:0] imm_E;
logic [4:0] rs1_addr_E;
logic [4:0] rs2_addr_E;
logic [4:0] rd_addr_E;
logic [4:0] rd_addr_M, rd_addr_W;
logic [31:0] rs1_data_E;
logic [31:0] rs2_data_E;
logic [31:0] pc_4_E;
logic ins_n_vld_M;
logic [31:0] pc_4_M;
logic [31:0] alu_data_M;
logic [2:0] slt_sl_M;
logic rd_wren_M, stall_M;
logic mem_wren_M;
logic [1:0] wb_sel_M;
logic [31:0] rs2_data_M;
logic o_ins_n_vld_W;
logic [31:0] pc_4_W;
logic [31:0] alu_data_W;
logic rd_wren_W;
logic [1:0] wb_sel_W;
logic [1:0] forwardA_E,forwardB_E;
logic [9:0] pattern_E,pattern_D;
logic rst_lw;
always_ff @ (posedge i_clk) begin
    o_pc_debug <= (i_rst == 1'b0) ? 32'h0: pc_D;
end
forward_unit forward_pipeline(
    .i_rs1_addr_E(rs1_addr_E),
    .i_rs2_addr_E(rs2_addr_E),
    .i_rd_addr_M(rd_addr_M),
    .i_rd_addr_W(rd_addr_W),
    .i_rd_wren_M(rd_wren_M),
    .i_rd_wren_W(rd_wren_W),
    .o_forwardA_E(forwardA_E),
    .o_forwardB_E(forwardB_E)
);
harzard_detection detect_pipline(
    .i_all_rst(!i_rst),
    .i_slt_sl_M(slt_sl_M),
    .i_rd_addr_M(rd_addr_M),
    .i_rs1_addr_E(rs1_addr_E),
    .i_rs2_addr_E(rs2_addr_E),
    .i_rst_br_F(rst_br_F),
    .i_stall_M(stall_M),
//    .o_rst_lw(rst_lw),
    .o_rst_F(rst_F),
    .o_rst_D(rst_D),
    .o_rst_E(rst_E),
    .o_rst_M(rst_M),
    .o_enb_F(enb_F),
    .o_enb_D(enb_D),
    .o_enb_E(enb_E),
    .o_enb_M(enb_M),
    .o_enb_W(enb_W)
);
fetch_cycle fetch_pipeline (
    .i_clk(i_clk),
    .i_rst(!i_rst),
    .i_rst_F(rst_F),
    .i_en_F(enb_F),
    .i_branche_en_D(enb_branch),
    .i_jump_enb(enb_jump),
    .i_taken_E(br_taken),
    .i_pc_E(pc_E),
    .i_alu_data_E(alu_data_E),
    .i_pattern_E(pattern_E),
    .o_instr_D(instr_D),
    .o_pc_4_D(pc_4_D),
    .o_pc_D(pc_D),
    .o_rst_br_F(rst_br_F),
    .o_pattern_D(pattern_D)
);
decode_cycle decode_pipeline(
    .i_clk(i_clk),
    .i_enb_D(enb_D),
    .i_rst(!i_rst),
    .i_rst_D(rst_D),
    .i_pc_D(pc_D),
    .i_pc_4_D(pc_4_D),
    .i_instr_D(instr_D),
    .i_result_W(result_W),
    .i_rd_addr_W(rd_addr_W),
    .i_alu_data_E(alu_data_E),
    //
    .i_rd_wren_W(rd_wren_W),
    .i_pattern_D(pattern_D),
    .o_ins_n_vld_E(ins_n_vld_E),
    .o_slt_sl_E(slt_sl_E),
    .o_rd_wren_E(rd_wren_E),
    .o_op_a_sel_E(op_a_sel_E),
    .o_op_b_sel_E(op_b_sel_E),
    .o_alu_op_E(alu_op_E),
    .o_mem_wren_E(mem_wren_E),
    .o_wb_sel_E(wb_sel_E),
    .o_imm_E(imm_E),
    .o_taken_E(br_taken),
    .o_enb_branch(enb_branch),
    .o_enb_jump(enb_jump),
    //
    .o_rs1_addr_E(rs1_addr_E),
    .o_rs2_addr_E(rs2_addr_E),
    .o_rd_addr_E(rd_addr_E),
    .o_rs1_data_E(rs1_data_E),
    .o_rs2_data_E(rs2_data_E),
    .o_pc_E(pc_E),
    .o_pc_4_E(pc_4_E),
    .o_pattern_E(pattern_E)
);
 execute_cycle execute_pipeline(
    .i_clk(i_clk),
    .i_rst(!i_rst),
    .i_rst_E(rst_E),
    .i_enb_E(enb_E),
    .i_ins_n_vld_E(ins_n_vld_E),
    .i_slt_sl_E(slt_sl_E),
    .i_rd_wren_E(rd_wren_E),
    .i_op_a_sel_E(op_a_sel_E),
    .i_op_b_sel_E(op_b_sel_E),
    .i_alu_op_E(alu_op_E),
    .i_mem_wren_E(mem_wren_E),
    .i_wb_sel_E(wb_sel_E),
    .i_pc_E(pc_E),
    .i_pc_4_E(pc_4_E),
    .i_imm_E(imm_E),
    //
    .i_rs1_data_E(rs1_data_E),
    .i_rs2_data_E(rs2_data_E),
    .i_forwardA_E(forwardA_E),
    .i_forwardB_E(forwardB_E),
    .i_alu_data_M(alu_data_M),
    .i_rs_W(result_W),
    .i_rd_addr_E(rd_addr_E),
//    .i_rst_lw(rst_lw),
    //
    .o_ins_n_vld_M(ins_n_vld_M),
    .o_pc_4_M(pc_4_M),
    .o_alu_data_E(alu_data_E),
    .o_alu_data_M(alu_data_M),
    .o_slt_sl_M(slt_sl_M),
    .o_rd_wren_M(rd_wren_M),
    .o_mem_wren_M(mem_wren_M),
    .o_wb_sel_M(wb_sel_M),
    .o_rs2_data_M(rs2_data_M),
    .o_rd_addr_M(rd_addr_M)
);
mem_cycle mem_pipeline(
    .i_clk(i_clk),
    .i_rst(!i_rst),
    .i_rst_M(rst_M),
    .i_enb_M(enb_M),
    .i_ins_n_vld_M(ins_n_vld_M),
    .i_pc_4_M(pc_4_M),
    .i_alu_data_M(alu_data_M),
    .i_slt_sl_M(slt_sl_M),
    .i_rd_wren_M(rd_wren_M),
    .i_mem_wren_M(mem_wren_M),
    .i_wb_sel_M(wb_sel_M),
    .i_rs2_data_M(rs2_data_M),
    .i_rd_addr_M(rd_addr_M),
    .i_io_sw(i_io_sw),
    .i_io_btn(i_io_btn),
    //
    .o_stall_M(stall_M), 
    .o_SRAM_ADDR(o_SRAM_ADDR),
    .o_SRAM_DQ  (o_SRAM_DQ),
    .o_SRAM_CE_N(o_SRAM_CE_N),
    .o_SRAM_WE_N(o_SRAM_WE_N),
    .o_SRAM_LB_N(o_SRAM_LB_N),
    .o_SRAM_UB_N(o_SRAM_UB_N),
    .o_SRAM_OE_N(o_SRAM_OE_N), 
    .o_ld_data_W (ld_data_W),
    .o_io_ledr(o_io_ledr), 
    .o_io_ledg (o_io_ledg),
    .o_io_hex0(o_io_hex0), 
    .o_io_hex1(o_io_hex1), 
    .o_io_hex2(o_io_hex2),   
    .o_io_hex3(o_io_hex3), 
    .o_io_hex4(o_io_hex4), 
    .o_io_hex5(o_io_hex5), 
    .o_io_hex6(o_io_hex6),   
    .o_io_hex7(o_io_hex7), 
    .o_io_lcd(o_io_lcd),
    //
    .o_ins_n_vld_W(o_ins_n_vld),
    .o_pc_4_W(pc_4_W),
    .o_alu_data_W(alu_data_W),
    .o_rd_wren_W(rd_wren_W),
    .o_wb_sel_W(wb_sel_W),
    .o_rd_addr_W(rd_addr_W)
);
wb_cycle wb_pipeline(
    .i_ld_data_M(ld_data_W),
    .i_pc_4_W(pc_4_W),
    .i_alu_data_W(alu_data_W),
    .i_wb_sel_W(wb_sel_W),
    .o_result_W(result_W)
);
endmodule



