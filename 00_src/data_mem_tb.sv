module data_mem_tb();
logic i_clk;
logic i_rst;
logic [31:0] i_addr;
logic [31:0] i_data;
logic i_rden;
logic i_wren;
logic [31:0] o_data;
logic o_stall;
logic [17:0]   o_SRAM_ADDR;
wire [15:0]   o_SRAM_DQ  ;
logic          o_SRAM_CE_N;
logic          o_SRAM_WE_N;
logic          o_SRAM_LB_N;
logic          o_SRAM_UB_N;
logic          o_SRAM_OE_N;
data_mem dut (
    .i_clk(i_clk),
    .i_rst(i_rst),
    .i_addr(i_addr),
    .i_data(i_data),
    .i_rden(i_rden),
    .i_wren(i_wren),
    .o_data(o_data),
    .o_stall(o_stall),
    .o_SRAM_ADDR(o_SRAM_ADDR),
    .o_SRAM_DQ  (o_SRAM_DQ),
    .o_SRAM_CE_N(o_SRAM_CE_N),
    .o_SRAM_WE_N(o_SRAM_WE_N),
    .o_SRAM_LB_N(o_SRAM_LB_N),
    .o_SRAM_UB_N(o_SRAM_UB_N),
    .o_SRAM_OE_N(o_SRAM_OE_N)
);
assign o_SRAM_DQ = (i_rden) ? 32'hFFFFFFFF : 16'bZ; // Hoặc giá trị mặc định khác

always begin
        i_clk <= 1'b1;
        #50;  // Thay đổi độ rộng xung nhịp nếu cần
        i_clk <= 1'b0;
        #50;
    end

    // Khởi tạo tín hiệu
    initial begin
        i_rst = 1'b1;
        #50
        i_rst = 1'b0;
        i_addr = 32'h2000;
        i_rden = 1'b1; 
        i_wren = 1'b0;
        #500
        i_addr = 32'h2000;
        i_data = 32'h1111FFFF;
        i_rden = 1'b0;
        i_wren = 1'b1;
        #500
        i_addr = 32'h3000;
        i_data = 32'h2222FFFF;
        i_rden = 1'b0;
        i_wren = 1'b1;
        #500   
        i_addr = 32'h3000;
        i_data = 32'h2222FFFF;
        i_rden = 1'b1;
        i_wren = 1'b0;
        #500  
        i_addr = 32'h0800;
        i_data = 32'h3333FFFF;
        i_rden = 1'b0;
        i_wren = 1'b1;
        #500
        i_addr = 32'h3000;
        i_data = 32'h3333FFFF;
        i_rden = 1'b1;
        i_wren = 1'b0;
        #200
        $finish;
    end
    initial begin
    $dumpfile("waveform.vcd");  // Tên file VCD
    $dumpvars(0, data_mem_tb);       // Ghi tất cả biến trong module tb_all
    end
    endmodule
