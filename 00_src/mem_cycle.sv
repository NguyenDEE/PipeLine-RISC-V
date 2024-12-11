module mem_cycle (
    input logic i_clk,
    input logic i_rst,
    input logic i_rst_M,
    input logic i_enb_M,
    input logic i_ins_n_vld_M,
    input logic [31:0] i_pc_4_M,
    input logic [31:0] i_alu_data_M,
    input logic [2:0] i_slt_sl_M,
    input logic i_rd_wren_M,
    input logic i_mem_wren_M,
    input logic [1:0] i_wb_sel_M,
    input logic [31:0] i_rs2_data_M,
    input logic [4:0] i_rd_addr_M,
    input logic  [31:0] i_io_sw,
    input logic [3:0] i_io_btn,
    //
    output logic o_stall_M,
    output logic [17:0]   o_SRAM_ADDR,
    inout  wire [15:0]   o_SRAM_DQ  ,
    output logic          o_SRAM_CE_N,
    output logic          o_SRAM_WE_N,
    output logic          o_SRAM_LB_N,
    output logic          o_SRAM_UB_N,
    output logic          o_SRAM_OE_N, 
    output logic [31:0] o_ld_data_W ,
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
    //
    output logic o_ins_n_vld_W,
    output logic [31:0] o_pc_4_W,
    output logic [31:0] o_alu_data_W,
    output logic o_rd_wren_W,
    output logic [1:0] o_wb_sel_W,
    output logic [4:0] o_rd_addr_W
);
logic [31:0] ld_data_M;
logic stall_M;
//
logic [17:0]   SRAM_ADDR;
wire [15:0]   SRAM_DQ  ;
logic          SRAM_CE_N;
logic          SRAM_WE_N;
logic          SRAM_LB_N;
logic          SRAM_UB_N;
logic [31:0] io_ledr; 
logic [31:0] io_ledg ;
logic [6:0] io_hex0; 
logic [6:0] io_hex1; 
logic [6:0] io_hex2;   
logic [6:0] io_hex3; 
logic [6:0] io_hex4; 
logic [6:0] io_hex5; 
logic [6:0] io_hex6;   
logic [6:0] io_hex7; 
logic [31:0] io_lcd;
//reg
logic [31:0] reg_ld_data_M;
// logic reg_stall_M;
logic [17:0]   reg_SRAM_ADDR;
logic [15:0]   reg_SRAM_DQ  ;
logic          reg_SRAM_CE_N;
logic          reg_SRAM_WE_N;
logic          reg_SRAM_LB_N;
logic          reg_SRAM_UB_N;
//
logic reg_ins_n_vld_M;
logic [31:0] reg_pc_4_M;
logic [31:0] reg_alu_data_M;
logic reg_rd_wren_M;
logic [1:0] reg_wb_sel_M;
//out put
logic [31:0] reg_io_ledr; 
logic [31:0] reg_io_ledg ;
logic [6:0] reg_io_hex0; 
logic [6:0] reg_io_hex1; 
logic [6:0] reg_io_hex2;   
logic [6:0] reg_io_hex3; 
logic [6:0] reg_io_hex4; 
logic [6:0] reg_io_hex5; 
logic [6:0] reg_io_hex6;   
logic [6:0] reg_io_hex7; 
logic [31:0] reg_io_lcd;
logic [4:0] reg_rd_addr_M;
lsu lsu_mem (
  //input
  .i_clk(i_clk),
  .i_rst(i_rst),
  .i_st_data(i_rs2_data_M),
  .i_lsu_addr(i_alu_data_M),
  .i_lsu_wren(i_mem_wren_M),
  .i_io_sw(i_io_sw),
  .i_io_btn(i_io_btn),
  .slt_sl(i_slt_sl_M),
  .o_stall(stall_M),
  .o_SRAM_ADDR(o_SRAM_ADDR),
  .o_SRAM_DQ  (o_SRAM_DQ),
  .o_SRAM_CE_N(o_SRAM_CE_N),
  .o_SRAM_WE_N(o_SRAM_WE_N),
  .o_SRAM_LB_N(o_SRAM_LB_N),
  .o_SRAM_UB_N(o_SRAM_UB_N),
  .o_SRAM_OE_N(o_SRAM_OE_N), 
  .o_ld_data (ld_data_M),
  .o_io_ledr(io_ledr), 
  .o_io_ledg (io_ledg),
  .o_io_hex0(io_hex0), 
  .o_io_hex1(io_hex1), 
  .o_io_hex2(io_hex2),   
  .o_io_hex3(io_hex3), 
  .o_io_hex4(io_hex4), 
  .o_io_hex5(io_hex5), 
  .o_io_hex6(io_hex6),   
  .o_io_hex7(io_hex7), 
  .o_io_lcd(io_lcd)
  );
always_ff @ (posedge i_clk, posedge i_rst_M) begin
    if (i_rst_M) begin
        reg_ld_data_M <= 32'h0;
//        reg_stall_M <= 1'b0;
        reg_SRAM_ADDR <= 18'h0;
        reg_SRAM_DQ   <= 16'h0;
        reg_SRAM_CE_N <= 1'b1;
        reg_SRAM_WE_N <= 1'b1;
        reg_SRAM_LB_N <= 1'b1;
        reg_SRAM_UB_N <= 1'b1;
        reg_io_ledr <=  32'h0;
        reg_io_ledg  <= 32'h0;
        reg_io_hex0 <=  7'h0;
        reg_io_hex1 <=  7'h0;
        reg_io_hex2 <=  7'h0;  
        reg_io_hex3 <=  7'h0;
        reg_io_hex4 <=  7'h0;
        reg_io_hex5 <=  7'h0;
        reg_io_hex6 <=  7'h0; 
        reg_io_hex7 <=  7'h0;
        reg_io_lcd <= 32'h0;
        reg_ins_n_vld_M <= 1'b0;;
        reg_pc_4_M <= 32'h0;
        reg_alu_data_M <= 32'h0;
        reg_rd_wren_M <= 1'b0;
        reg_wb_sel_M <= 2'h0;
        reg_rd_addr_M <= 5'h0;
    end
    else if (!i_enb_M)begin
        reg_ld_data_M <= ld_data_M;
//        reg_stall_M <= stall_M;
        reg_io_ledr <=  io_ledr;
        reg_io_ledg  <= io_ledg;
        reg_io_hex0 <=  io_hex0;
        reg_io_hex1 <=  io_hex1;
        reg_io_hex2 <=  io_hex2;  
        reg_io_hex3 <=  io_hex3;
        reg_io_hex4 <=  io_hex4;
        reg_io_hex5 <=  io_hex5;
        reg_io_hex6 <=  io_hex6; 
        reg_io_hex7 <=  io_hex7;
        reg_io_lcd <= io_lcd;
        reg_ins_n_vld_M <= i_ins_n_vld_M;
        reg_pc_4_M <= i_pc_4_M;
        reg_alu_data_M <= i_alu_data_M;
        reg_rd_wren_M <= i_rd_wren_M;
        reg_wb_sel_M <= i_wb_sel_M;  
        reg_rd_addr_M <= i_rd_addr_M;      
    end
end
assign o_ld_data_W = reg_ld_data_M;
assign o_stall_M = stall_M;
assign o_io_ledr =  reg_io_ledr;
assign o_io_ledg  = reg_io_ledg;
assign o_io_hex0 =  reg_io_hex0;
assign o_io_hex1 =  reg_io_hex1;
assign o_io_hex2 =  reg_io_hex2;  
assign o_io_hex3 =  reg_io_hex3;
assign o_io_hex4 =  reg_io_hex4;
assign o_io_hex5 =  reg_io_hex5;
assign o_io_hex6 =  reg_io_hex6; 
assign o_io_hex7 =  reg_io_hex7;
assign o_io_lcd = reg_io_lcd;  
assign o_ins_n_vld_W = reg_ins_n_vld_M;
assign o_pc_4_W = reg_pc_4_M;
assign o_alu_data_W = reg_alu_data_M;
assign o_rd_wren_W = reg_rd_wren_M;
assign o_wb_sel_W = reg_wb_sel_M;
assign o_rd_addr_W =reg_rd_addr_M;
endmodule
