module forward_br (
    input logic [4:0] i_rd_addr_E,
    input logic [4:0] i_rs1_addr_D,
    input logic [4:0] i_rs2_addr_D,
    input logic i_rd_wren_E,
    output logic o_sel_1,
    output logic o_sel_2
);
always_comb begin
    if ((i_rs1_addr_D != 5'h0)&&(i_rs1_addr_D == i_rd_addr_E) && i_rd_wren_E) begin
        o_sel_1 = 1'b1;
    end
    else begin
        o_sel_1 = 1'b0;
    end
    if ((i_rs2_addr_D != 5'h0)&&(i_rs2_addr_D == i_rd_addr_E) && i_rd_wren_E) begin
        o_sel_2 = 1'b1;
    end
    else begin
        o_sel_2 = 1'b0;
    end
end
endmodule