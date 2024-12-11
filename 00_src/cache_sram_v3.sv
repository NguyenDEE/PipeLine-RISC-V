// 4KiB, 2-way associative, 1 block cache = 8 byte = 2 word
// 1KiB, 2-way associative, 1 block cache = 8 byte = 2 word
/*
`define tag  31:11
`define index  10:2
`define offset  1:0
*/
`define tag  31:9
`define index  8:3
`define offset  2:0
module cache_sram_v3 
#( /*
    parameter blockbit = 32,
    parameter tagbit = 21,
    parameter indexbit = 9,
    parameter offsetbit = 2
    */
    parameter blockbit = 32,
    parameter tagbit = 23,
    parameter indexbit = 6,
    parameter offsetbit = 3
)
(   input logic i_clk,
    input logic i_rst,
    input logic [31:0] i_addr_pc,
    input logic [31:0] i_data_pc,
    output logic [31:0] o_data_pc,
    input logic i_rd_pc,
    input logic i_wr_pc,
    input logic i_ACK,
    output logic [31:0] o_addr_mem,
    output logic o_rd_mem,
    output logic o_wr_mem,
    input logic [31:0] i_data_mem,
    output logic [31:0] o_data_mem,
    output logic o_stall
); 
logic [blockbit-1:0] cache_mem_1 [2**indexbit -1:0];
logic [blockbit-1:0] cache_mem_2 [2**indexbit -1:0];
logic [tagbit -1: 0] tag_1 [2**indexbit -1:0];
logic [tagbit -1: 0] tag_2 [2**indexbit -1:0];
logic valid_1 [2**indexbit -1:0];
logic valid_2 [2**indexbit -1:0];
logic dirty_1 [2**indexbit -1:0];
logic dirty_2 [2**indexbit -1:0];
logic lru_1 [2**indexbit -1:0];
logic lru_2 [2**indexbit -1:0];
logic hit_miss_1,hit_miss_2;
logic [31:0] mem_q_1,mem_q_2;
logic [31:0] mem_d_1,mem_d_2;
logic [31:0] addr_d_1,addr_d_2;
logic [31:0] addr_q_1,addr_q_2;
typedef enum logic [3:0] { 
    Idle,
    write_end_1,
    write_end_2,
    read_end_1,
    read_end_2,
    Watwr_to_wr_1,
    Watwr_to_wr_2,
    Watrd_to_rd_1,
    Watrd_to_rd_2,
    Watwr_to_rd_1,
    Watwr_to_rd_2
} state;
logic [tagbit-1:0] addr_tag;
logic [indexbit-1:0] addr_index;
logic [offsetbit-1:0] addr_offset;
assign {addr_tag, addr_index, addr_offset} = i_addr_pc;
state current_state,nxt_state;
assign hit_miss_1 = (valid_1[addr_index] && (addr_tag == tag_1[addr_index]) && (!i_addr_pc[2]));
assign hit_miss_2 = (valid_2[addr_index] && (addr_tag == tag_2[addr_index]) && i_addr_pc[2]);
always_comb begin
    o_wr_mem = 1'b0;
    o_rd_mem = 1'b0;
    o_stall = 1'b0;
    o_addr_mem = 32'b0;
    o_data_mem = 32'b0;
    o_data_pc = 32'b0;
    addr_d_1 = 32'h0;  
    addr_d_2 = 32'h0;  
    mem_d_1 = 32'h0;   
    mem_d_2 = 32'h0;   
    nxt_state = current_state;
    case(current_state)
    Idle: begin
        if (~i_rd_pc & ~i_wr_pc) begin
            o_wr_mem = 1'b0;
            o_rd_mem = 1'b0;
            o_stall = 1'b0;
            nxt_state = Idle;
//            $display("Idle");
        end 
        else if (hit_miss_1) begin  // Hit Cache_1
         o_stall = 1'b0;
            if(i_wr_pc) begin
                mem_d_1 = i_data_pc;
                addr_d_1 = i_addr_pc;
                dirty_1[addr_index] = 1'b1;
                lru_1[addr_index] = 1'b0;
                lru_2[addr_index] = 1'b1;
                nxt_state = write_end_1;
            //    $display("Hit-wr 1");
            end
            else if (i_rd_pc) begin
                o_data_pc = cache_mem_1[addr_index];
                lru_1[addr_index] = 1'b0;
                lru_2[addr_index] = 1'b1;
                nxt_state = Idle;
            //    $display("Hit-rd 1 %h",cache_mem_1[addr_index]);
                end
        end
        else if (hit_miss_2) begin    // Hit Cache_2
         o_stall = 1'b0;
            if(i_wr_pc) begin
                mem_d_2 = i_data_pc;
                addr_d_2 =i_addr_pc;
                dirty_2[addr_index] = 1'b1;
                lru_1[addr_index] = 1'b1;
                lru_2[addr_index] = 1'b0;
                nxt_state = write_end_2;
            //    $display("Hit-wr 2");
                end
                else if (i_rd_pc)  begin
                o_data_pc = cache_mem_2[addr_index];
                lru_1[addr_index] = 1'b1;
                lru_2[addr_index] = 1'b0;
                nxt_state = Idle;
         //       $display("Hit-rd 2 %h",cache_mem_2[addr_index]);
                end
        end
        else if (i_wr_pc) begin  //Miss
            if (!valid_1[addr_index]) begin 
            mem_d_1 = i_data_pc;
            addr_d_1 = i_addr_pc;
            dirty_1[addr_index] = 1'b1;
            lru_1[addr_index] = 1'b0;
            lru_2[addr_index] = 1'b1;
            o_stall = 1'b0;
            nxt_state = write_end_1;
        //    $display("Miss-valid-wr 1 %h",cache_mem_1[addr_index]);
            end
            else if (!valid_2[addr_index]) begin
            mem_d_2 = i_data_pc;
            addr_d_2 = i_addr_pc;
            dirty_2[addr_index] = 1'b1;
            lru_1[addr_index] = 1'b1;
            lru_2[addr_index] = 1'b0;
            o_stall = 1'b0;
            nxt_state = write_end_2;
        //    $display("Miss-valid-wr 2 %h",cache_mem_2[addr_index]);
            end
            else if (lru_1[addr_index]) begin // Replace
            mem_d_1 = i_data_pc;
            addr_d_1 = i_addr_pc;
             if (dirty_1[addr_index]) begin
                o_addr_mem = {tag_1[addr_index], addr_index, {{offsetbit{1'b0}}}};
                o_data_mem = cache_mem_1[addr_index];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_wr_1;
            //    $display("Miss-dt-wr 1 %h",cache_mem_1[addr_index]);
                end
             else begin
                 o_wr_mem = 1'b0;
                 o_stall = 1'b0;
                 nxt_state = write_end_1;
            //     $display("Miss-wr 1 %h",cache_mem_1[addr_index]);
                end
                dirty_1[addr_index] = 1'b1;
            //    lru_1[addr_index] = 1'b0;
            //    lru_2[addr_index] = 1'b1;
            end 
            else if (lru_2[addr_index]) begin
                mem_d_2 = i_data_pc;
                addr_d_2 = i_addr_pc;
                if (dirty_2[addr_index]) begin
                o_addr_mem = {tag_2[addr_index],addr_index,{offsetbit{1'b0}}};
                o_data_mem = cache_mem_2[addr_index];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_wr_2;
            //    $display("Miss-dt-wr 2 %h",cache_mem_2[addr_index]);
                end
             else begin
                 o_wr_mem = 1'b0;  
                 o_stall = 1'b0;
                 nxt_state = write_end_2;  
             //    $display("Miss-wr 2 %h",cache_mem_2[addr_index]);
                end
                dirty_2[addr_index] = 1'b1;
            //    lru_1[addr_index] = 1'b1;
            //    lru_2[addr_index] = 1'b0;
                
            end
        end
        else if (i_rd_pc) begin
         if (!valid_1[addr_index]) begin   //Initial
            addr_d_1 = i_addr_pc;
            o_addr_mem = i_addr_pc;
            o_rd_mem = 1'b1;
            o_stall = 1'b1;
            nxt_state = Watrd_to_rd_1;
            dirty_1[addr_index] = 1'b0;
            lru_1[addr_index] = 1'b0;
            lru_2[addr_index] = 1'b1; 
        //    $display("Miss-valid-rd 1",cache_mem_1[addr_index]);
            end
        else if (!valid_2[addr_index]) begin   //Initial
            addr_d_2 = i_addr_pc;
            o_addr_mem = i_addr_pc;
            o_rd_mem = 1'b1;
            o_stall = 1'b1;
            nxt_state = Watrd_to_rd_2;
            dirty_2[addr_index] = 1'b0; 
            lru_1[addr_index] = 1'b1;
           lru_2[addr_index] = 1'b0;
        //    $display("Miss-valid-rd 2",cache_mem_2[addr_index]);
            end
        end
        else if (lru_1[addr_index]) begin
            mem_d_1 = i_data_pc;
            addr_d_1 = i_addr_pc;
             if (dirty_1[addr_index]) begin
                o_addr_mem = {tag_1[addr_index],addr_index,{offsetbit{1'b0}}};
                o_data_mem = cache_mem_1[addr_index];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_rd_1;
            //    $display("Miss-dt-rd 1",cache_mem_1[addr_index]);
                end
             else begin
                 o_wr_mem = 1'b0;
                 o_addr_mem = i_addr_pc;
                 o_rd_mem = 1'b1;
                 o_stall = 1'b1;
                 nxt_state = Watrd_to_rd_1;
             //    $display("Miss-rd 1",cache_mem_1[addr_index]); 
                end
                dirty_1[addr_index] = 1'b0;  
        end 
        else if (lru_2[addr_index]) begin
            mem_d_2 = i_data_pc;
            addr_d_2 = i_addr_pc;
             if (dirty_2[addr_index]) begin
                o_addr_mem = {tag_1[addr_index], addr_index, {offsetbit{1'b0}}};
                o_data_mem = cache_mem_2[addr_index];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_rd_2;
            //    $display("Miss-dt-rd 2",cache_mem_2[addr_index]);
                end
             else begin
                 o_wr_mem = 1'b0;
                 o_addr_mem = i_addr_pc;
                 o_rd_mem = 1'b1;
                 o_stall = 1'b1;
                 nxt_state = Watrd_to_rd_2;
            //     $display("Miss-rd 2",cache_mem_2[addr_index]);
                end
                dirty_2[addr_index] = 1'b0;  
        end 
 end
    
    write_end_1: begin
        o_stall = 1'b0;
        cache_mem_1[addr_q_1[`index]] = mem_q_1;
        tag_1[addr_q_1[`index]] = addr_q_1[`tag];
        valid_1[addr_q_1[`index]] = 1'b1;
        lru_1[addr_q_1[`index]] = 1'b0;
        lru_2[addr_q_1[`index]] = 1'b1;
        nxt_state = Idle;
//        $display("write_end_1");
    end
    write_end_2: begin
        o_stall = 1'b0;
        cache_mem_2[addr_q_2[`index]] = mem_q_2;
        tag_2[addr_q_2[`index]] = addr_q_2[`tag];
        valid_2[addr_q_2[`index]] = 1'b1;
        lru_1[addr_q_1[`index]] = 1'b1;
        lru_2[addr_q_1[`index]] = 1'b0;
        nxt_state = Idle;
 //       $display("write_end_2");
    end
    Watwr_to_wr_1: begin
        o_wr_mem = 1'b0;
        o_stall = 1'b1;
        addr_d_1 = addr_q_1;
        mem_d_1 = mem_q_1;
        if (i_ACK) begin
            nxt_state = write_end_1;
        end
        else begin
            nxt_state = Watwr_to_wr_1;
        end
//        $display("Watwr_to_wr_1");
    end
    Watwr_to_wr_2: begin
        o_wr_mem = 1'b0;
        o_stall = 1'b1;
        addr_d_2 = addr_q_2;
        mem_d_2 = addr_q_2;
        if (i_ACK) begin
            nxt_state = write_end_2;
        end
        else begin
            nxt_state = Watwr_to_wr_2;
        end
 //       $display("Watwr_to_wr_2");
    end
   Watrd_to_rd_1: begin
        o_rd_mem = 1'b0;
        o_stall = 1'b1;
        addr_d_1 = addr_q_1;
        mem_d_1 = mem_q_1;
        if(i_ACK) begin
            mem_d_1 = i_data_mem;
            nxt_state = read_end_1;
        end
        else nxt_state = Watrd_to_rd_1;  
//        $display("Watrd_to_rd_1");        
    end
    Watrd_to_rd_2: begin
        o_rd_mem = 1'b0;
        o_stall = 1'b1;
        addr_d_2 = addr_q_2;
        mem_d_2 = mem_q_2;
        if(i_ACK) begin
            mem_d_2 = i_data_mem;
            nxt_state = read_end_2;
        end
        else nxt_state = Watrd_to_rd_2;    
//        $display("Watrd_to_rd_2");      
    end
    read_end_1: begin
        o_stall = 1'b0;
        cache_mem_1[addr_q_1[`index]] = mem_q_1;
        tag_1[addr_q_1[`index]] = addr_q_1[`tag];
        valid_1[addr_q_1[`index]] = 1'b1;
        lru_1[addr_q_1[`index]] = 1'b0;
        lru_2[addr_q_1[`index]] = 1'b1;
        o_data_pc = mem_q_1;
        nxt_state = Idle;
//        $display("read_end_1");
    end
    read_end_2: begin
        o_stall = 1'b0;
        cache_mem_2[addr_q_1[`index]] = mem_q_2;
        tag_2[addr_q_2[`index]] = addr_q_2[`tag];
        valid_2[addr_q_2[`index]] = 1'b1;
        o_data_pc = mem_q_2;
        lru_1[addr_q_1[`index]] = 1'b1;
        lru_2[addr_q_1[`index]] = 1'b0;
        nxt_state = Idle;
 //       $display("read_end_2");
    end
    Watwr_to_rd_1: begin
    o_wr_mem = 1'b0;
    o_stall = 1'b1;
        addr_d_1 = addr_q_1;
        mem_d_1 = mem_q_1;
        if(i_ACK) begin
            o_addr_mem = addr_q_1;
            o_rd_mem = 1'b1;
            nxt_state = Watrd_to_rd_1;
        end
        else nxt_state = Watwr_to_rd_1;
//        $display("Watwr_to_rd_1");
    end
    Watwr_to_rd_2: begin
    o_wr_mem = 1'b0;
    o_stall = 1'b1;
    addr_d_2 = addr_q_2;
    mem_d_2 = mem_q_2;
        if(i_ACK) begin
            o_addr_mem = addr_q_2;
            o_rd_mem = 1'b1;
            nxt_state = Watrd_to_rd_2;
        end
        else nxt_state = Watwr_to_rd_2;
//        $display("Watwr_to_rd_2");
    end
endcase   
end
always_ff @(posedge i_clk, posedge i_rst) begin
 if(i_rst) begin
    current_state <= Idle;
    addr_q_1 <= '0;
    addr_q_2 <= '0;
    mem_q_1 <= '0;
    mem_q_2 <= '0;
 end
 else begin
    current_state <= nxt_state;
    addr_q_1 <= addr_d_1;
    addr_q_2 <= addr_d_2;
    mem_q_1 <= mem_d_1;
    mem_q_2 <= mem_d_2;
 end
 end
 /*
 always @ (posedge i_clk) begin
    $display("i_add_pc = %h i_data_pc=%h o_data_pc =%h i_rden = %h i_wren = %h i_ACK=%h",i_addr_pc,i_data_pc,o_data_pc, i_rd_pc,i_wr_pc,i_ACK);
    $display("hit_1 = %h, hit_2 = %h",hit_miss_1,hit_miss_2);
    $display("adr_q1=%h mem_q1 = %h addr_q2 = %h mem_q2 = %h",addr_q_1,mem_q_1,addr_q_2,mem_q_2);
    $display("mem_1 = %h , dirty_1 = %h ,valid_1 = %h stall %h", cache_mem_1[addr_index],dirty_1[addr_q_1[`index]],valid_1[addr_q_2[`index]],o_stall);
    $display("mem_2 = %h , dirty_2 = %h , valid_2 = %h stall %h ", cache_mem_2[addr_index],dirty_2[addr_q_2[`index]],valid_2[addr_q_2[`index]],o_stall);
    $display("lru1 = %h lru2 = %h",lru_1[addr_index],lru_2[addr_index]);
    $display("o_addrmem = %h o_rden_mem = %h o_rewn_mem = %h o_datamem=%h  o_datapc=%h \n", o_addr_mem,o_rd_mem,o_wr_mem,o_data_mem,o_data_pc);
 end
 */
endmodule :cache_sram_v3
