module forward_unit (
    input logic [4:0] i_rs1_addr_E,
    input logic [4:0] i_rs2_addr_E,
    input logic [4:0] i_rd_addr_M,
    input logic [4:0] i_rd_addr_W,
    input logic i_rd_wren_M,
    input logic i_rd_wren_W,
    output logic [1:0] o_forwardA_E,
    output logic [1:0] o_forwardB_E
);
always_comb begin
    if ((i_rs1_addr_E != 5'h0)&&(i_rs1_addr_E == i_rd_addr_M) && i_rd_wren_M) begin
        o_forwardA_E = 2'b01;
    end
    else if ((i_rs1_addr_E != 5'h0)&&(i_rs1_addr_E == i_rd_addr_W) && i_rd_wren_W) begin
        o_forwardA_E = 2'b10;
    end
    else begin
        o_forwardA_E = 2'b00;
    end
    if ((i_rs2_addr_E != 5'h0)&&(i_rs2_addr_E == i_rd_addr_M) && i_rd_wren_M) begin
        o_forwardB_E = 2'b01;
    end
    else if ((i_rs2_addr_E != 5'h0)&&(i_rs2_addr_E == i_rd_addr_W) && i_rd_wren_W) begin
        o_forwardB_E = 2'b10;
    end
    else begin
        o_forwardB_E = 2'b00;
    end
end
endmodule
