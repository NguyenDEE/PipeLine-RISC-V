// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsinglecycle.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLE___024ROOT_H_
#define VERILATED_VSINGLECYCLE___024ROOT_H_  // guard

#include "verilated.h"


class Vsinglecycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsinglecycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_io_btn,3,0);
    VL_OUT8(o_ins_n_vld,0,0);
    VL_OUT8(o_io_hex0,6,0);
    VL_OUT8(o_io_hex1,6,0);
    VL_OUT8(o_io_hex2,6,0);
    VL_OUT8(o_io_hex3,6,0);
    VL_OUT8(o_io_hex4,6,0);
    VL_OUT8(o_io_hex5,6,0);
    VL_OUT8(o_io_hex6,6,0);
    VL_OUT8(o_io_hex7,6,0);
    CData/*1:0*/ singlecycle__DOT__wb_sel;
    CData/*3:0*/ singlecycle__DOT__alu_op;
    CData/*0:0*/ singlecycle__DOT__rd_wren;
    CData/*0:0*/ singlecycle__DOT__mem_wren;
    CData/*0:0*/ singlecycle__DOT__br_unsigned;
    CData/*2:0*/ singlecycle__DOT__slt_sl;
    CData/*0:0*/ singlecycle__DOT__block_lsu__DOT__en_datamem;
    CData/*0:0*/ singlecycle__DOT__block_lsu__DOT__en_op_buf;
    CData/*0:0*/ singlecycle__DOT__block_lsu__DOT____Vcellinp__mem_sdram__wr_en;
    CData/*0:0*/ singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe;
    CData/*0:0*/ singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe;
    CData/*1:0*/ singlecycle__DOT__block_lsu__DOT__mux31__DOT__addr_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_out;
    SData/*15:0*/ singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_out;
    VL_IN(i_io_sw,31,0);
    VL_OUT(o_io_lcd,31,0);
    VL_OUT(o_io_ledg,31,0);
    VL_OUT(o_io_ledr,31,0);
    IData/*31:0*/ singlecycle__DOT__alu_data;
    IData/*31:0*/ singlecycle__DOT__nxt_pc;
    IData/*31:0*/ singlecycle__DOT__pc;
    IData/*31:0*/ singlecycle__DOT__instr;
    IData/*31:0*/ singlecycle__DOT__rs2_data;
    IData/*31:0*/ singlecycle__DOT__operand_a;
    IData/*31:0*/ singlecycle__DOT__operand_b;
    IData/*31:0*/ singlecycle__DOT__imm;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__data_out_1;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__data_out_2;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__INPUT;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4096> singlecycle__DOT__block_imem__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> singlecycle__DOT__block_regfile__DOT__Reg;
    VlUnpacked<IData/*31:0*/, 5> singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsinglecycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsinglecycle___024root(Vsinglecycle__Syms* symsp, const char* v__name);
    ~Vsinglecycle___024root();
    VL_UNCOPYABLE(Vsinglecycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
