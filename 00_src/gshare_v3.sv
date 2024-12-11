    module gshare_v3
    # (
        // 10bit = 1KiB
        parameter GBIT = 10
    )
    (   input logic i_clk,
        input logic i_taken,
        input logic [31:0] i_pc,
        input logic [31:0] i_pc_E,
        input logic [31:0] i_alu_data_E,
        input logic i_branche_en,
        input logic i_jump_enb,
        input logic [9:0] i_pattern_E,
        output logic o_pc_sel,
        output logic [31:0] o_pc_target_F,
        output logic o_pc_rp_sel,
        output logic [31:0] o_pc_rp,
        output logic o_rst_br_F,
        output logic [9:0] o_pattern_D 
    );
    logic [GBIT - 1:0] Pattern;
    logic predict_taken;
    logic hit;
    logic [31-GBIT:0] tag [2**GBIT - 1:0];
    logic [31:0] BTB [2**GBIT - 1:0];
    logic [1:0] PHT [2**GBIT - 1:0];
    logic [GBIT - 1:0] addr_pht;
    logic [GBIT - 1:0] Pattern_buffer;
    initial begin
        Pattern = {GBIT{1'b0}};
        for (int i = 0;i <(2**GBIT - 1); i++) begin
            PHT[i] = 2'b01;
            BTB[i] = 32'h0;
            tag[i] = {31-GBIT+1{1'b1}};
        end
    end
    always_comb begin 
        addr_pht = i_pc[GBIT - 1:0] ^ Pattern;
            case (PHT[addr_pht]) 
                2'b00,2'b01: begin
                predict_taken = 1'b0;
                end
                2'b10,2'b11: begin
                predict_taken = 1'b1;
                end
            endcase
    end
    always_comb begin
        if (i_pc[31:GBIT] == tag[i_pc[GBIT-1:0]]) begin
            hit = 1'b1;
        end
        else begin
            hit = 1'b0;
        end
        o_pc_sel = hit & predict_taken;
        o_pc_target_F = BTB[i_pc[GBIT-1:0]];
        o_pattern_D = Pattern;
    end
    
    always_ff @ (posedge i_clk) begin
        Pattern <= Pattern_buffer;
    //    o_pattern_D <= Pattern;
    end
    
 //   logic [GBIT - 1:0] addr_pht_E;
//   logic [1:0] state;
 //   logic [31:0] btb_state;
    /*
    always_comb begin 
        addr_pht_E = i_pc_E[GBIT - 1:0] ^ Pattern;
        state = PHT[i_pc_E[GBIT - 1:0] ^ Pattern];
        btb_state = BTB[i_pc_E[GBIT - 1:0] ^ Pattern];
        if (i_branche_en) begin
            tag[i_pc_E[GBIT-1:0]] = i_pc_E[31-GBIT:0];
            Pattern_buffer = {i_taken,Pattern[GBIT - 1:1]};
            $display("tag = %h",tag[i_pc_E[GBIT-1:0]]);
            $display("pattern = %h",{i_taken,Pattern[GBIT - 1:1]});
         //   Pattern = {i_taken,Pattern[GBIT - 1:1]};
            case (PHT[i_pc_E[GBIT - 1:0] ^ Pattern]) 
            2'b00: begin
                o_pc_rp = i_alu_data_E;
                if(i_taken) begin
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b01;
                    BTB[i_pc_E[GBIT - 1:0] ^ Pattern] = i_alu_data_E;
                    o_rst_br_F = 1'b1;
                    o_pc_rp_sel = 1'b1;
                   // $display("TH1 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b00;
                    o_rst_br_F = 1'b0;
                    o_pc_rp_sel = 1'b0;
                  //  $display("TH2 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
            end
            2'b01: begin
                if(i_taken) begin
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b11;
                    BTB[i_pc_E[GBIT - 1:0] ^ Pattern] = i_alu_data_E;
                    o_rst_br_F = 1'b1;
                    o_pc_rp_sel = 1'b1;
                    o_pc_rp = BTB[i_pc_E[GBIT - 1:0] ^ Pattern];
                  //  $display("TH3 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b00;
                    o_rst_br_F = 1'b0;
                    o_pc_rp_sel = 1'b0;
                    BTB[i_pc[GBIT-1:0]] = i_pc_E + 32'h4;
                    o_pc_rp = i_alu_data_E;
                 //   $display("TH4 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
            end
            2'b10: begin
                o_pc_rp = i_pc_E + 32'd04;
                if(i_taken) begin
                    BTB[i_pc_E[GBIT - 1:0] ^ Pattern] = i_alu_data_E;
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b11;
                    o_rst_br_F = 1'b0;
                    o_pc_rp_sel = 1'b0;
                    BTB[i_pc[GBIT-1:0]] = i_alu_data_E;
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b00;
                    o_rst_br_F = 1'b1;
                    o_pc_rp_sel = 1'b1;
                    BTB[i_pc[GBIT-1:0]] = i_alu_data_E;
                end
            end
            2'b11: begin
                o_pc_rp = i_pc_E + 32'd04;
                if(i_taken) begin
                    BTB[i_pc_E[GBIT - 1:0] ^ Pattern] = i_alu_data_E;
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b11;
                    o_rst_br_F = 1'b0;
                    o_pc_rp_sel = 1'b0;
                    
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = 2'b10;
                    o_rst_br_F = 1'b1;
                    o_pc_rp_sel = 1'b1;
                end
            end
            endcase
        end
        else begin
            BTB[i_pc_E[GBIT - 1:0] ^ Pattern] = BTB[i_pc_E[GBIT - 1:0] ^ Pattern];
            o_pc_rp = 32'h0;
            PHT[i_pc_E[GBIT - 1:0] ^ Pattern] = PHT[i_pc_E[GBIT - 1:0] ^ Pattern];
            o_rst_br_F = 1'b0;
            o_pc_rp_sel = 1'b0;
        end
    end
    */
//    logic [1:0] state_q,state_q_E;
    always_ff @(negedge i_clk) begin 
 //       state = PHT[i_pc_E[GBIT - 1:0] ^ Pattern];
//        addr_pht_E = i_pc_E[GBIT - 1:0] ^ Pattern;
      //  state_q = PHT[addr_pht];
      //  state_q_E = PHT[i_pc_E[GBIT - 1:0] ^ Pattern];
        if (i_branche_en) begin
            tag[i_pc_E[GBIT-1:0]] <= i_pc_E[31:GBIT];
            Pattern_buffer <= {i_taken,Pattern[GBIT - 1:1]};
            BTB[i_pc_E[GBIT - 1:0]] <= i_alu_data_E;
//            $display ("pc = %h",i_pc);
 //           $display("pattren_addr = %h",i_pc_E[GBIT - 1:0] ^ Pattern);
 //           $display ("alu = %h",i_alu_data_E);
 //           $display("BTB = %h",BTB[i_pc_E[GBIT - 1:0]]);
//           $display("pattern = %h",{i_taken,Pattern[GBIT - 1:1]});
         //   Pattern <= {i_taken,Pattern[GBIT - 1:1]};
            case (PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E]) 
            2'b00: begin
                o_pc_rp <= i_alu_data_E;
                if(i_taken) begin
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b01;
        //            BTB[i_pc_E[GBIT - 1:0] ^ Pattern] <= i_alu_data_E;
                    o_rst_br_F <= 1'b1;
                    o_pc_rp_sel <= 1'b1;
                   // $display("TH1 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b00;
                    o_rst_br_F <= 1'b0;
                    o_pc_rp_sel <= 1'b0;
         //           BTB[i_pc_E[GBIT - 1:0] ^ Pattern] <= i_alu_data_E;
                  // $display("TH2 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
            end
            2'b01: begin
                o_pc_rp <= i_alu_data_E;
                if(i_taken) begin
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b11;
        //            BTB[i_pc_E[GBIT - 1:0] ^ Pattern] <= i_alu_data_E;
                    o_rst_br_F <= 1'b1;
                    o_pc_rp_sel <= 1'b1;
             //       $display ("PHT[8] = %h",PHT[8]);
                  //  $display("TH3 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b00;
                    o_rst_br_F <= 1'b0;
                    o_pc_rp_sel <= 1'b0;
                 //   BTB[i_pc[GBIT-1:0]] <= i_pc_E + 32'h4;
                   // $display("TH4 BTB=%h",BTB[i_pc_E[GBIT - 1:0] ^ Pattern]);
                end
            end
            2'b10: begin
                o_pc_rp <= i_pc_E + 32'd04;
                if(i_taken) begin
        //            BTB[i_pc_E[GBIT - 1:0] ^ Pattern] <= i_alu_data_E;
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b11;
                    o_rst_br_F <= 1'b0;
                    o_pc_rp_sel <= 1'b0;
          //          BTB[i_pc[GBIT-1:0]] <= i_alu_data_E;
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b00;
                    o_rst_br_F <= 1'b1;
                    o_pc_rp_sel <= 1'b1;
        //            BTB[i_pc[GBIT-1:0]] <= i_alu_data_E;
                end
            end
            2'b11: begin
                o_pc_rp <= i_pc_E + 32'd04;
                if(i_taken) begin
         //           BTB[i_pc_E[GBIT - 1:0] ^ Pattern] <= i_alu_data_E;
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b11;
                    o_rst_br_F <= 1'b0;
                    o_pc_rp_sel <= 1'b0;
                    
                end
                else begin
                    PHT[i_pc_E[GBIT - 1:0] ^ i_pattern_E] <= 2'b10;
                    o_rst_br_F <= 1'b1;
                    o_pc_rp_sel <= 1'b1;
                end
            end
            endcase
        end
        else if (i_jump_enb) begin
            o_pc_rp <= i_alu_data_E;
            o_pc_rp_sel <= 1'b1;
            o_rst_br_F <= 1'b1;
        end
        else begin
            o_pc_rp <= 32'h0;
            o_pc_rp_sel <= 1'b0;
            o_rst_br_F <= 1'b0;
            end
 /*       else begin
            BTB[i_pc_E[GBIT - 1:0] ^ Pattern] <= BTB[i_pc_E[GBIT - 1:0] ^ Pattern];
            o_pc_rp <= 32'h0;
            PHT[i_pc_E[GBIT - 1:0] ^ Pattern] <= PHT[i_pc_E[GBIT - 1:0] ^ Pattern];
           o_rst_br_F <= 1'b0;
           o_pc_rp_sel <= 1'b0;
        end
*/
/*        if(i_jump_enb) begin
            o_pc_rp <= i_alu_data_E;
            o_pc_rp_sel <= 1'b1;
            o_rst_br_F <= 1'b1;
        end
        else begin
            o_pc_rp <= 32'h0;
            o_pc_rp_sel <= 1'b0;
            o_rst_br_F <= 1'b0;
        end
        */
    end
    endmodule
