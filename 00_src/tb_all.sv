module tb_all(
    input logic CLOCK_50,
    input logic [17:0] SW,
    input logic [3:0] KEY,
    output logic [17:0] LEDR,
    output logic [8:0] LEDG,
    output logic [6:0] HEX0,
    output logic [6:0] HEX1,
    output logic [6:0] HEX2,
    output logic [6:0] HEX3,
    output logic [6:0] HEX4,
    output logic [6:0] HEX5,
    output logic [6:0] HEX6,
    output logic [6:0] HEX7,
    output logic [7:0] LCD_DATA,
    output logic LCD_RW,
    output logic LCD_EN,
    output logic LCD_RS,
    output logic LCD_ON,
	 output logic [17:0] SRAM_ADDR,
	 inout wire [15:0] SRAM_DQ,
	 output logic SRAM_WE_N,
	 input logic SRAM_OE_N,
	 output logic SRAM_UB_N,
	 output logic SRAM_LB_N,
	 output logic SRAM_CE_N 
);

    logic [31:0] io_sw;
    logic [31:0] io_ledg;
    logic [31:0] io_ledr;
    logic [31:0] io_lcd;
    logic ins_valid;  // Tạo tín hiệu trung gian cho o_ins_n_vld
	 logic [15:0] dq;
    assign io_sw[31:17] = 0;  
    assign io_sw[16:0] = SW[16:0];

    
    assign LEDG = io_ledg[7:0];
    assign LEDR[16:0] = io_ledr[16:0];
    assign LEDR[17] = ins_valid;  // Gán ins_valid cho LEDR[17]
    assign LCD_ON = 1'b1;
    assign {LCD_EN, LCD_RS, LCD_RW, LCD_DATA} = io_lcd[10:0];

    singlecycle dut (
        .i_clk(CLOCK_50),
        .i_rst(SW[17]),
        .i_io_sw(io_sw),
        .i_io_btn(KEY),
        .o_ins_n_vld(ins_valid),  // Sử dụng ins_valid làm đầu ra từ o_ins_n_vld
        .o_io_lcd(io_lcd),
        .o_io_ledg(io_ledg),
        .o_io_ledr(io_ledr),
        .o_io_hex0(HEX0),
        .o_io_hex1(HEX1),
        .o_io_hex2(HEX2),
        .o_io_hex3(HEX3),
        .o_io_hex4(HEX4),
        .o_io_hex5(HEX5),
        .o_io_hex6(HEX6),
        .o_io_hex7(HEX7),
        .o_pc_debug(),
		  .o_SRAM_WE_N(SRAM_WE_N),
		  .o_SRAM_OE_N(SRAM_OE_N),
		  .o_SRAM_UB_N(SRAM_UB_N),
		  .o_SRAM_LB_N(SRAM_LB_N),
		  .o_SRAM_CE_N(SRAM_CE_N),
		  .o_SRAM_ADDR(SRAM_ADDR),
		  .o_SRAM_DQ(SRAM_DQ)
    );

endmodule
