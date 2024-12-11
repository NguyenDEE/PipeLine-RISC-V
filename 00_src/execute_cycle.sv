module execute_cycle (
    input logic i_clk,
    input logic i_rst,
    input logic i_rst_E,
    input logic i_enb_E,
    input logic i_ins_n_vld_E,
    input logic [2:0] i_slt_sl_E,
    input logic i_rd_wren_E,
    input logic i_op_a_sel_E,
    input logic i_op_b_sel_E,
    input logic [3:0] i_alu_op_E,
    input logic i_mem_wren_E,
    input logic [1:0] i_wb_sel_E,
    input logic [31:0] i_pc_E,
    input logic [31:0] i_pc_4_E,
    input logic [31:0] i_imm_E,
    //
    input logic [31:0] i_rs1_data_E,
    input logic [31:0] i_rs2_data_E,
    input logic [1:0] i_forwardA_E,
    input logic [1:0] i_forwardB_E,
    input logic [31:0] i_alu_data_M,
    input logic [31:0] i_rs_W,
    input logic [4:0] i_rd_addr_E,
//    input logic i_rst_lw,
    //
    output logic o_ins_n_vld_M,
    output logic [31:0] o_pc_4_M,
    output logic [31:0] o_alu_data_E,
    output logic [31:0] o_alu_data_M,
    output logic [2:0] o_slt_sl_M,
    output logic o_rd_wren_M,
    output logic o_mem_wren_M,
    output logic [1:0] o_wb_sel_M,
    output logic [31:0] o_rs2_data_M,
    output logic [4:0] o_rd_addr_M
);
logic [31:0] operand_a_1,operand_b_1;
logic [31:0] operand_a_2,operand_b_2;
logic [31:0] alu_data_E;
//reg
logic reg_ins_n_vld_E;
logic [2:0] reg_slt_sl_E;
logic reg_rd_wren_E;
logic reg_mem_wren_E;
logic [1:0] reg_wb_sel_E;
logic [31:0] reg_rs2_data_E;
logic [31:0] reg_pc_4_E;
logic [31:0] reg_alu_data_E;
logic [4:0] reg_rd_addr_E;
mux_3_1 mux_FWA_E (
  .data_0_i(i_rs1_data_E),
  .data_1_i(i_alu_data_M),
  .data_2_i(i_rs_W),
  .sel_i(i_forwardA_E),
  .data_out_o(operand_a_1)		
  );
mux_3_1 mux_FWB_E (
  .data_0_i(i_rs2_data_E),
  .data_1_i(i_alu_data_M),
  .data_2_i(i_rs_W),
  .sel_i(i_forwardB_E),
  .data_out_o(operand_b_1)		
  );
mux_2_1 mux_a (
      .data_1_i      (i_pc_E      ), 
      .data_0_i      (operand_a_1), 
      .sel_i         (i_op_a_sel_E), 
      .data_out_o    (operand_a_2  )
      ); 	
mux_2_1 mux_b (
      .data_1_i      (i_imm_E     ), 
      .data_0_i      (operand_b_1   ), 
      .sel_i         (i_op_b_sel_E), 
      .data_out_o    (operand_b_2  )
      );
alu block_alu (
      .i_operand_a   (operand_a_2  ), 
      .i_operand_b   (operand_b_2  ), 
      .i_alu_op      (i_alu_op_E    ),  
      .o_alu_data    (alu_data_E    )
      );
always_ff @(posedge i_clk) begin
    if (i_rst_E) begin
    reg_slt_sl_E <= 3'b0;
    reg_rd_wren_E <= 1'b0;
    reg_mem_wren_E <= 1'b0;
    reg_wb_sel_E <= 2'b0;
    reg_rs2_data_E <= 32'h0;
    reg_ins_n_vld_E <= 1'b0;
    reg_pc_4_E <= 32'h0;
    reg_alu_data_E <= 32'h0;
    reg_rd_addr_E <= 5'h0;
    end
    else if (!i_enb_E)begin
    reg_slt_sl_E <= i_slt_sl_E;
    reg_rd_wren_E <= i_rd_wren_E;
    reg_mem_wren_E <= i_mem_wren_E;
    reg_wb_sel_E <= i_wb_sel_E;  
    reg_rs2_data_E <= operand_b_1; 
    reg_ins_n_vld_E <= i_ins_n_vld_E;
    reg_pc_4_E <= i_pc_4_E;
    reg_alu_data_E <= alu_data_E;
    reg_rd_addr_E <= i_rd_addr_E;
    end
end
assign o_slt_sl_M =  reg_slt_sl_E;
assign o_rd_wren_M =   reg_rd_wren_E;
assign o_mem_wren_M =  reg_mem_wren_E;
assign o_wb_sel_M =   reg_wb_sel_E;  
assign o_rs2_data_M =  reg_rs2_data_E; 
assign o_ins_n_vld_M =  reg_ins_n_vld_E; 
assign o_pc_4_M =  reg_pc_4_E;
assign o_alu_data_M =  reg_alu_data_E;
assign o_rd_addr_M =  reg_rd_addr_E;
assign o_alu_data_E =  alu_data_E;
endmodule









