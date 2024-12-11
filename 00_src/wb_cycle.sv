module wb_cycle (
    input logic [31:0] i_ld_data_M,
    input logic [31:0] i_pc_4_W,
    input logic [31:0] i_alu_data_W,
    input logic [1:0] i_wb_sel_W,
    output logic [31:0] o_result_W
);
 mux_3_1 block_mux_wb (
    .data_0_i      (i_alu_data_W), 
    .data_1_i      (i_ld_data_M), 
    .data_2_i      (i_pc_4_W), 
    .sel_i         (i_wb_sel_W  ), 
    .data_out_o    (o_result_W )
);
endmodule

 
 
 
	
