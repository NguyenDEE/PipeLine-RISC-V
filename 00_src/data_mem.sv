module data_mem (
    input logic i_clk,
    input logic i_rst,
    input logic [31:0] i_addr,
    input logic [31:0] i_data,
    input logic i_rden,
    input logic i_wren,
    output logic [31:0] o_data,
    output logic o_stall,
    output logic o_ACK,
    output logic [17:0]   o_SRAM_ADDR,
    inout  wire [15:0]   o_SRAM_DQ  ,
    output logic          o_SRAM_CE_N,
    output logic          o_SRAM_WE_N,
    output logic          o_SRAM_LB_N,
    output logic          o_SRAM_UB_N,
    output logic          o_SRAM_OE_N 
);
logic ACK;
logic [31:0] addr_mem;
logic rd_mem;
logic wr_mem;
logic [31:0] wr_mem_data;
logic [31:0] data_back;
cache_sram_v3 cachemem 
(   .i_clk(i_clk),
    .i_rst(i_rst),
    .i_addr_pc(i_addr),
    .i_data_pc(i_data),
    .o_data_pc(o_data),
    .i_rd_pc(i_rden),
    .i_wr_pc(i_wren),
    .i_ACK(ACK),
    .o_addr_mem(addr_mem),
    .o_rd_mem(rd_mem),
    .o_wr_mem(wr_mem),
    .i_data_mem(data_back),
    .o_data_mem(wr_mem_data),
    .o_stall(o_stall)
);
sram_IS61WV25616_controller_32b_3lr sram_mem (
    .i_ADDR (addr_mem[17:0]),
    .i_WDATA (wr_mem_data),
    .i_BMASK (4'b1111),
    .i_WREN  (wr_mem),
    .i_RDEN  (rd_mem) ,
    .o_RDATA (data_back) ,
    .o_ACK   (ACK) ,
    .SRAM_ADDR(o_SRAM_ADDR),
    .SRAM_DQ  (o_SRAM_DQ),
    .SRAM_CE_N (o_SRAM_CE_N),
    .SRAM_WE_N (o_SRAM_WE_N),
    .SRAM_LB_N (o_SRAM_LB_N),
    .SRAM_UB_N (o_SRAM_UB_N),
    .SRAM_OE_N (o_SRAM_OE_N),
    .i_clk (i_clk),
    .i_reset (~i_rst)
);
assign o_ACK = ACK;
endmodule
