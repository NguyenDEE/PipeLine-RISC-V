module cache_sram_v2
#(
    parameter blockbit = 32,
    parameter tagbit = 23,
    parameter indexbit = 6,
    parameter offsetbit = 3
)
(
    input logic i_clk,
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

logic [blockbit-1:0] cache_mem_1 [2**indexbit-1:0];
logic [blockbit-1:0] cache_mem_2 [2**indexbit-1:0];
logic [tagbit-1:0] tag_1 [2**indexbit-1:0];
logic [tagbit-1:0] tag_2 [2**indexbit-1:0];
logic valid_1 [2**indexbit-1:0];
logic valid_2 [2**indexbit-1:0];
logic dirty_1 [2**indexbit-1:0];
logic dirty_2 [2**indexbit-1:0];
logic lru [2**indexbit-1:0]; // 0: cache 1, 1: cache 2
logic hit_miss_1, hit_miss_2;

// State machine for cache control
typedef enum logic [3:0] {
    Idle,
    WriteBack_1,
    WriteBack_2,
    Allocate_1,
    Allocate_2
} state_t;
state_t current_state, next_state;

// Decode address
logic [tagbit-1:0] addr_tag;
logic [indexbit-1:0] addr_index;
logic [offsetbit-1:0] addr_offset;
assign {addr_tag, addr_index, addr_offset} = i_addr_pc;

// Hit detection
assign hit_miss_1 = valid_1[addr_index] && (tag_1[addr_index] == addr_tag);
assign hit_miss_2 = valid_2[addr_index] && (tag_2[addr_index] == addr_tag);

// Outputs default
always_comb begin
    o_wr_mem = 1'b0;
    o_rd_mem = 1'b0;
    o_stall = 1'b0;
    o_addr_mem = 32'b0;
    o_data_mem = 32'b0;
    o_data_pc = 32'b0;
    next_state = current_state;

    case (current_state)
        Idle: begin
            if (i_rd_pc || i_wr_pc) begin
                if (hit_miss_1) begin
                    o_data_pc = cache_mem_1[addr_index];
                    if (i_wr_pc) begin
                        cache_mem_1[addr_index] = i_data_pc;
                        dirty_1[addr_index] = 1'b1;
                    end
                    lru[addr_index] = 1'b1;
                end else if (hit_miss_2) begin
                    o_data_pc = cache_mem_2[addr_index];
                    if (i_wr_pc) begin
                        cache_mem_2[addr_index] = i_data_pc;
                        dirty_2[addr_index] = 1'b1;
                    end
                    lru[addr_index] = 1'b0;
                end else begin // Cache miss
                    o_stall = 1'b1;
                    if (~lru[addr_index]) begin
                        if (dirty_1[addr_index]) begin
                            o_addr_mem = {tag_1[addr_index], addr_index, {offsetbit{1'b0}}};
                            o_data_mem = cache_mem_1[addr_index];
                            o_wr_mem = 1'b1;
                            next_state = WriteBack_1;
                        end else begin
                            o_addr_mem = i_addr_pc & ~({offsetbit{1'b1}});
                            o_rd_mem = 1'b1;
                            next_state = Allocate_1;
                        end
                    end else begin
                        if (dirty_2[addr_index]) begin
                            o_addr_mem = {tag_2[addr_index], addr_index, {offsetbit{1'b0}}};
                            o_data_mem = cache_mem_2[addr_index];
                            o_wr_mem = 1'b1;
                            next_state = WriteBack_2;
                        end else begin
                            o_addr_mem = i_addr_pc & ~({offsetbit{1'b1}});
                            o_rd_mem = 1'b1;
                            next_state = Allocate_2;
                        end
                    end
                end
            end
        end

        WriteBack_1: begin
            if (i_ACK) begin
                o_addr_mem = i_addr_pc & ~({offsetbit{1'b1}});
                o_rd_mem = 1'b1;
                next_state = Allocate_1;
            end else begin
                o_stall = 1'b1;
            end
        end

        WriteBack_2: begin
            if (i_ACK) begin
                o_addr_mem = i_addr_pc & ~({offsetbit{1'b1}});
                o_rd_mem = 1'b1;
                next_state = Allocate_2;
            end else begin
                o_stall = 1'b1;
            end
        end

        Allocate_1: begin
            if (i_ACK) begin
                cache_mem_1[addr_index] = i_data_mem;
                tag_1[addr_index] = addr_tag;
                valid_1[addr_index] = 1'b1;
                dirty_1[addr_index] = i_wr_pc;
                lru[addr_index] = 1'b1;
                next_state = Idle;
            end else begin
                o_stall = 1'b1;
            end
        end

        Allocate_2: begin
            if (i_ACK) begin
                cache_mem_2[addr_index] = i_data_mem;
                tag_2[addr_index] = addr_tag;
                valid_2[addr_index] = 1'b1;
                dirty_2[addr_index] = i_wr_pc;
                lru[addr_index] = 1'b0;
                next_state = Idle;
            end else begin
                o_stall = 1'b1;
            end
        end
    endcase
end

always_ff @(posedge i_clk or posedge i_rst) begin
    if (i_rst) begin
        current_state <= Idle;
    end else begin
        current_state <= next_state;
    end
end

endmodule
