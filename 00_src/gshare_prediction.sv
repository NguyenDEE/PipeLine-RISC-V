module gshare_prediction
# (
    // 10bit = 1KiB
    parameter GBIT = 10
)
(   input logic i_clk,
    input logic [31:0] i_instr,
    input logic [31:0] i_pc_4,
    input logic i_branche_en,
    input logic i_taken,
    input logic [31:0] i_pc,
    output logic [31:0] o_pc_target_F,
    output logic o_pc_sel,
    output logic o_pc_rp_sel,
    output logic [31:0] o_pc_rp,
    output logic o_stall_E
);
logic [GBIT - 1:0] GHR;
logic [1:0] PHT [2**GBIT - 1:0];
logic [GBIT - 1:0] addr_pht;
logic [31:0] imm_b,imm_j;
logic [31:0] pc_buffer;
initial begin
    GHR = {GBIT{1'b1}};
    for (int i = 0;i <(2**GBIT - 1); i++) begin
        PHT[i] = 2'b10;
    end
end
always_comb begin 
    imm_b = 32'b0;
    imm_j = 32'b0;
    o_pc_target_F = 32'b0;
    o_pc_sel = 1'b0;
    pc_buffer = 32'h0;
    addr_pht = '0;
    if (i_instr[6:0] == 7'b1100011) begin
        addr_pht = i_pc[GBIT - 1:0] ^ GHR;
        imm_b = {{20{i_instr[31]}},i_instr[7],i_instr[30:25],i_instr[11:8],1'b0};
        o_pc_target_F = i_pc + imm_b;
        case (PHT[addr_pht]) 
            2'b00,2'b01: begin
            o_pc_sel = 1'b0;
            pc_buffer = o_pc_target_F;
            $display ("TH1 pc_buffer = %h",pc_buffer);
            end
            2'b10,2'b11: begin
            o_pc_sel = 1'b1;
            pc_buffer = i_pc_4;
            $display ("TH2 pc_buffer = %h",pc_buffer);
            end
        endcase
    end
    else if ((i_instr[6:0] == 7'b1101111) || (i_instr[6:0] == 7'b1100111)) begin
        imm_j =  {{12{i_instr[31]}},i_instr[19:12],i_instr[20],i_instr[30:21],1'b0};
        o_pc_target_F = i_pc + imm_j;
        o_pc_sel = 1'b1;
    end
    else begin
        imm_b = 32'b0;
        imm_j = 32'b0;
        o_pc_target_F = 32'b0;
        o_pc_sel = 1'b0;
        pc_buffer = pc_buffer;
        addr_pht = addr_pht;
    end
end
always_ff @(posedge i_clk) begin 
    if (i_branche_en) begin
        GHR <= {i_taken,GHR[GBIT - 1:1]};
        case (PHT[addr_pht]) 
        2'b00: begin
            if(i_taken) begin
                PHT[addr_pht] <= 2'b01;
                o_stall_E <= 1'b1;
                o_pc_rp <= pc_buffer;
                o_pc_rp_sel <= 1'b1;
            end
            else begin
                o_stall_E <= 1'b0;
                o_pc_rp_sel <= 1'b0;
            end
        end
        2'b01: begin
            if(i_taken) begin
                PHT[addr_pht] <= 2'b11;
                o_stall_E <= 1'b1;
                o_pc_rp <= pc_buffer;
                o_pc_rp_sel <= 1'b1;
            end
            else begin
                PHT[addr_pht] <= 2'b00;
                o_stall_E <= 1'b0;
                o_pc_rp_sel <= 1'b0;
            end
        end
        2'b10: begin
            if(i_taken) begin
                PHT[addr_pht] <= 2'b11;
                o_stall_E <= 1'b0;
                o_pc_rp_sel <= 1'b0;
            end
            else begin
                PHT[addr_pht] <= 2'b00;
                o_stall_E <= 1'b1;
                o_pc_rp <= pc_buffer;
                o_pc_rp_sel <= 1'b1;
            end
        end
        2'b11: begin
            if(i_taken) begin
                PHT[addr_pht] <= 2'b11;
                o_stall_E <= 1'b0;
                o_pc_rp_sel <= 1'b0;
            end
            else begin
                PHT[addr_pht] <= 2'b10;
                o_stall_E <= 1'b1;
                o_pc_rp <= pc_buffer;
                o_pc_rp_sel <= 1'b1;
            end
        end
        endcase
    end
    else begin
        o_stall_E <= 1'b0;
        o_pc_rp_sel <= 1'b0;
    end
end
endmodule
