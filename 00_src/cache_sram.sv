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
module cache_sram 
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
state current_state,nxt_state;
assign hit_miss_1 = (valid_1[i_addr_pc[`index]] & (i_addr_pc[`tag] == tag_1[i_addr_pc[`index]]));
assign hit_miss_2 = (valid_2[i_addr_pc[`index]] & (i_addr_pc[`tag] == tag_2[i_addr_pc[`index]]));
always_comb begin
    o_wr_mem = 1'b0;
    o_rd_mem = 1'b0;
    o_stall = 1'b0;
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
                mem_q_1 = i_data_pc;
                addr_q_1 = i_addr_pc;
                dirty_1[i_addr_pc[`index]] = 1'b1;
                lru_1[i_addr_pc[`index]] = 1'b0;
                lru_2[i_addr_pc[`index]] = 1'b1;
                nxt_state = write_end_1;
            end
            else if (i_rd_pc) begin
                o_data_pc = cache_mem_1[i_addr_pc[`index]];
                lru_1[i_addr_pc[`index]] = 1'b0;
                lru_2[i_addr_pc[`index]] = 1'b1;
                nxt_state = Idle;
                end
        end
        else if (hit_miss_2) begin    // Hit Cache_2
         o_stall = 1'b0;
            if(i_wr_pc) begin
                mem_q_2 = i_data_pc;
                addr_q_2 =i_addr_pc;
                dirty_2[i_addr_pc[`index]] = 1'b1;
                lru_1[i_addr_pc[`index]] = 1'b1;
                lru_2[i_addr_pc[`index]] = 1'b0;
                nxt_state = write_end_2;
                end
                else if (i_rd_pc)  begin
                o_data_pc = cache_mem_2[i_addr_pc[`index]];
                lru_1[i_addr_pc[`index]] = 1'b1;
                lru_2[i_addr_pc[`index]] = 1'b0;
                nxt_state = Idle;
                end
        end
        else if (i_wr_pc) begin  //Miss
            if (!valid_1[i_addr_pc[`index]]) begin 
            mem_q_1 = i_data_pc;
            addr_q_1 = i_addr_pc;
            dirty_1[i_addr_pc[`index]] = 1'b1;
            lru_1[i_addr_pc[`index]] = 1'b0;
            lru_2[i_addr_pc[`index]] = 1'b1;
            o_stall = 1'b0;
            nxt_state = write_end_1;
            end
            else if (!valid_2[i_addr_pc[`index]]) begin
            mem_q_2 = i_data_pc;
            addr_q_2 = i_addr_pc;
            dirty_2[i_addr_pc[`index]] = 1'b1;
            lru_1[i_addr_pc[`index]] = 1'b1;
            lru_2[i_addr_pc[`index]] = 1'b0;
            o_stall = 1'b0;
            nxt_state = write_end_2;
            end
            else if (lru_1[i_addr_pc[`index]]) begin // Replace
            mem_q_1 = i_data_pc;
            addr_q_1 = i_addr_pc;
             if (dirty_1[i_addr_pc[`index]]) begin
                o_addr_mem = {tag_1[i_addr_pc[`index]], i_addr_pc[`index], {{offsetbit{1'b0}}}};
                o_data_mem = cache_mem_1[i_addr_pc[`index]];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_wr_1;
                end
             else begin
                 o_wr_mem = 1'b0;
                 o_stall = 1'b0;
                 nxt_state = write_end_1;
                end
                dirty_1[i_addr_pc[`index]] = 1'b1;
                lru_1[i_addr_pc[`index]] = 1'b0;
                lru_2[i_addr_pc[`index]] = 1'b1;
            end 
            else begin
                mem_q_2 = i_data_pc;
                addr_q_2 = i_addr_pc;
                if (dirty_2[i_addr_pc[`index]]) begin
                o_addr_mem = {tag_2[i_addr_pc[`index]],i_addr_pc[`index],{offsetbit{1'b0}}};
                o_data_mem = cache_mem_2[i_addr_pc[`index]];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_wr_2;
                end
             else begin
                 o_wr_mem = 1'b0;  
                 o_stall = 1'b0;
                 nxt_state = write_end_2;  
                end
                dirty_2[i_addr_pc[`index]] = 1'b1;
                lru_1[i_addr_pc[`index]] = 1'b1;
                lru_2[i_addr_pc[`index]] = 1'b0;
            end
        end
        else if (i_rd_pc) begin
         if (!valid_1[i_addr_pc[`index]]) begin   //Initial
            addr_q_1 = i_addr_pc;
            o_addr_mem = i_addr_pc;
            o_rd_mem = 1'b1;
            o_stall = 1'b1;
            nxt_state = Watrd_to_rd_1;
            dirty_1[i_addr_pc[`index]] = 1'b0;
            lru_1[i_addr_pc[`index]] = 1'b0;
            lru_2[i_addr_pc[`index]] = 1'b1; 
//            $display("Tao co xuat hien");
            end
        else if (!valid_2[i_addr_pc[`index]]) begin   //Initial
            addr_q_2 = i_addr_pc;
            o_addr_mem = i_addr_pc;
            o_rd_mem = 1'b1;
            o_stall = 1'b1;
            nxt_state = Watrd_to_rd_2;
            dirty_2[i_addr_pc[`index]] = 1'b0; 
            lru_1[i_addr_pc[`index]] = 1'b1;
            lru_2[i_addr_pc[`index]] = 1'b0;
            end
        end
        else if (lru_1[i_addr_pc[`index]]) begin
            mem_q_1 = i_data_pc;
            addr_q_1 = i_addr_pc;
             if (dirty_1[i_addr_pc[`index]]) begin
                o_addr_mem = {tag_1[i_addr_pc[`index]],i_addr_pc[`index],{offsetbit{1'b0}}};
                o_data_mem = cache_mem_1[i_addr_pc[`index]];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_rd_1;
                end
             else begin
                 o_wr_mem = 1'b0;
                 o_addr_mem = i_addr_pc;
                 o_rd_mem = 1'b1;
                 o_stall = 1'b1;
                 nxt_state = Watrd_to_rd_1;
                end
                dirty_1[i_addr_pc[`index]] = 1'b0;     
        end 
        else begin
            mem_q_2 = i_data_pc;
            addr_q_2 = i_addr_pc;
             if (dirty_2[i_addr_pc[`index]]) begin
                o_addr_mem = {tag_1[i_addr_pc[`index]], i_addr_pc[`index], {offsetbit{1'b0}}};
                o_data_mem = cache_mem_2[i_addr_pc[`index]];
                o_wr_mem = 1'b1;
                o_stall = 1'b1;
                nxt_state = Watwr_to_rd_2;
                end
             else begin
                 o_wr_mem = 1'b0;
                 o_addr_mem = i_addr_pc;
                 o_rd_mem = 1'b1;
                 o_stall = 1'b1;
                 nxt_state = Watrd_to_rd_2;
                end
                dirty_2[i_addr_pc[`index]] = 1'b0;  
        end 
 end
    
    write_end_1: begin
        o_stall = 1'b0;
        cache_mem_1[addr_q_1[`index]] = mem_q_1;
        tag_1[addr_q_1[`index]] = addr_q_1[`tag];
        valid_1[addr_q_1[`index]] = 1'b1;
        nxt_state = Idle;
//        $display("write_end_1");
    end
    write_end_2: begin
        o_stall = 1'b0;
        cache_mem_2[addr_q_2[`index]] = mem_q_2;
        tag_2[addr_q_2[`index]] = addr_q_2[`tag];
        valid_2[addr_q_2[`index]] = 1'b1;
        nxt_state = Idle;
 //       $display("write_end_2");
    end
    Watwr_to_wr_1: begin
        o_stall = 1'b1;
        if (i_ACK) begin
            nxt_state = write_end_1;
        end
        else begin
            nxt_state = Watwr_to_wr_1;
        end
//        $display("Watwr_to_wr_1");
    end
    Watwr_to_wr_2: begin
        o_stall = 1'b1;
        if (i_ACK) begin
            nxt_state = write_end_2;
        end
        else begin
            nxt_state = Watwr_to_wr_2;
        end
 //       $display("Watwr_to_wr_2");
    end
   Watrd_to_rd_1: begin
        o_stall = 1'b1;
        if(i_ACK) begin
            mem_q_1 = i_data_mem;
            nxt_state = read_end_1;
        end
        else nxt_state = Watrd_to_rd_1;  
//        $display("Watrd_to_rd_1");        
    end
    Watrd_to_rd_2: begin
        o_stall = 1'b1;
        if(i_ACK) begin
            mem_q_2 = i_data_mem;
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
        nxt_state = Idle;
 //       $display("read_end_2");
    end
    Watwr_to_rd_1: begin
    o_stall = 1'b1;
        if(i_ACK) begin
            o_addr_mem = addr_q_1;
            o_rd_mem = 1'b1;
            nxt_state = Watrd_to_rd_1;
        end
        else nxt_state = Watwr_to_rd_1;
//        $display("Watwr_to_rd_1");
    end
    Watwr_to_rd_2: begin
    o_stall = 1'b1;
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
 end
 else begin
    current_state <= nxt_state;
 end
 end
 /*
 always @ (posedge i_clk) begin
    $display("i_add_pc = %h i_data_pc=%h o_data_pc =%h i_rden = %h i_wren = %h i_ACK=%h",i_addr_pc,i_data_pc,o_data_pc, i_rd_pc,i_wr_pc,i_ACK);
    $display("hit_1 = %h, hit_2 = %h",hit_miss_1,hit_miss_2);
    $display("adr_q1=%h mem_q1 = %h addr_q2 = %h mem_q2 = %h",addr_q_1,mem_q_1,addr_q_2,mem_q_2);
    $display("mem_1 = %h , dirty_1 = %h ,valid_1 = %h stall %h", cache_mem_1[i_addr_pc[`index]],dirty_1[addr_q_1[`index]],valid_1[addr_q_2[`index]],o_stall);
    $display("mem_2 = %h , dirty_2 = %h , valid_2 = %h stall %h ", cache_mem_2[i_addr_pc[`index]],dirty_2[addr_q_2[`index]],valid_2[addr_q_2[`index]],o_stall);
    $display("o_addrmem = %h o_rden_mem = %h o_rewn_mem = %h o_datamem=%h \n", o_addr_mem,o_rd_mem,o_wr_mem,o_data_mem);
 end
 */
endmodule :cache_sram
