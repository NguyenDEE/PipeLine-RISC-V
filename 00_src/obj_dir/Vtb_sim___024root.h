// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sim.h for the primary calling header

#ifndef VERILATED_VTB_SIM___024ROOT_H_
#define VERILATED_VTB_SIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sim__DOT__i_clk;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__rst_M;
        CData/*0:0*/ tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst;
        CData/*0:0*/ tb_sim__DOT__i_rst;
        CData/*3:0*/ tb_sim__DOT__i_io_btn;
        CData/*0:0*/ tb_sim__DOT__o_SRAM_CE_N;
        CData/*0:0*/ tb_sim__DOT__o_SRAM_WE_N;
        CData/*0:0*/ tb_sim__DOT__o_SRAM_LB_N;
        CData/*0:0*/ tb_sim__DOT__o_SRAM_UB_N;
        CData/*0:0*/ tb_sim__DOT__o_SRAM_OE_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__enb_F;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__rst_br_F;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__enb_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__rst_F;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__rst_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__enb_E;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__enb_M;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__enb_W;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__rst_E;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__o_ins_n_vld_W;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__forwardA_E;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__forwardB_E;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__rst_lw;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit;
        CData/*2:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D;
        CData/*2:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D;
        CData/*3:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__mem_wren_D;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__taken_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_branch;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_jump;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D;
        CData/*2:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D;
        CData/*3:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D;
        CData/*4:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D;
        CData/*4:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D;
        CData/*4:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E;
        CData/*2:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E;
        CData/*4:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M;
    };
    struct {
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_CE_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_WE_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_LB_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_UB_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_CE_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_WE_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_LB_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_UB_N;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ins_n_vld_M;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6;
        CData/*6:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7;
        CData/*4:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
        CData/*0:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
        CData/*3:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state;
        CData/*3:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state;
        CData/*2:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d;
        CData/*2:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q;
        CData/*3:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d;
        CData/*3:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        CData/*1:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__i_clk__v0;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__i_clk__v1;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
        CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__rst_M__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F;
        SData/*9:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern;
        SData/*9:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht;
        SData/*9:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer;
        SData/*9:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D;
        SData/*15:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_DQ;
        SData/*15:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_DQ;
        SData/*15:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1;
        SData/*15:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2;
    };
    struct {
        IData/*31:0*/ tb_sim__DOT__i_io_sw;
        IData/*31:0*/ tb_sim__DOT__pc_debug;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__result_W;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4;
        IData/*17:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_ADDR;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M;
        IData/*17:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_ADDR;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
    };
    struct {
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
        IData/*17:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d;
        IData/*17:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
        IData/*31:0*/ tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8;
        IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub;
        QData/*32:0*/ tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub;
        VlUnpacked<IData/*21:0*/, 1024> tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag;
        VlUnpacked<IData/*31:0*/, 1024> tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB;
        VlUnpacked<CData/*1:0*/, 1024> tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT;
        VlUnpacked<IData/*31:0*/, 2049> tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem;
        VlUnpacked<IData/*31:0*/, 32> tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg;
        VlUnpacked<IData/*31:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1;
        VlUnpacked<IData/*31:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2;
        VlUnpacked<IData/*22:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1;
        VlUnpacked<IData/*22:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2;
        VlUnpacked<CData/*0:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1;
        VlUnpacked<CData/*0:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2;
        VlUnpacked<CData/*0:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1;
        VlUnpacked<CData/*0:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2;
        VlUnpacked<CData/*0:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1;
        VlUnpacked<CData/*0:0*/, 64> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2;
        VlUnpacked<IData/*31:0*/, 5> tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1;
        VlUnpacked<CData/*0:0*/, 16> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sim___024root(Vtb_sim__Syms* symsp, const char* v__name);
    ~Vtb_sim___024root();
    VL_UNCOPYABLE(Vtb_sim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
