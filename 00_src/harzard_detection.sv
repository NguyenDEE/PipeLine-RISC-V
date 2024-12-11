module harzard_detection (
    input logic i_all_rst,
    input logic [2:0] i_slt_sl_M,
    input logic [4:0] i_rd_addr_M,
    input logic [4:0] i_rs1_addr_E,
    input logic [4:0] i_rs2_addr_E,
    input logic i_rst_br_F,
    input logic i_stall_M,
    output logic o_rst_F,
    output logic o_rst_D,
    output logic o_rst_E,
    output logic o_rst_M,
    output logic o_enb_F,
    output logic o_enb_D,
    output logic o_enb_E,
    output logic o_enb_M,
    output logic o_enb_W
);
    // Định nghĩa giá trị SW, SB, SH, LW, LB, LH, LBU, LHU
 //   localparam LW = 3'b101, LB = 3'b011, LH = 3'b100;
always_comb begin
    o_rst_F = 1'b0;
    o_rst_D = 1'b0;
    o_rst_E = 1'b0;
    o_rst_M = 1'b0;
    o_enb_F = 1'b0;
    o_enb_D = 1'b0;
    o_enb_E = 1'b0;
    o_enb_M = 1'b0;
    o_enb_W = 1'b0;
    if (i_all_rst) begin
        o_rst_F = 1'b1;
        o_rst_D = 1'b1;
        o_rst_E = 1'b1;
        o_rst_M = 1'b1;
    end
    else if (i_rst_br_F) begin
        o_rst_F = 1'b1;
        o_rst_D = 1'b1;
    end
    else if (((i_slt_sl_M == 3'b101)|(i_slt_sl_M == 3'b011)|((i_slt_sl_M == 3'b011))) && ((i_rd_addr_M == i_rs1_addr_E) | (i_rd_addr_M == i_rs2_addr_E))) begin
       o_rst_E = 1'b1;
        o_enb_F = 1'b1;
        o_enb_D = 1'b1;
        o_enb_E = 1'b1;
    end
    else if (i_stall_M) begin
        o_enb_F = 1'b1;
        o_enb_D = 1'b1;
        o_enb_E = 1'b1;
        o_enb_E = 1'b1;
        o_enb_M = 1'b1;
        o_enb_W = 1'b1;
    end
    else begin
        o_enb_F = 1'b0;
        o_enb_D = 1'b0;
        o_enb_E = 1'b0;
        o_enb_E = 1'b0;
        o_enb_M = 1'b0;
        o_enb_W = 1'b0;
    end

end
endmodule
