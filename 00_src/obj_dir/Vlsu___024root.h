// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlsu.h for the primary calling header

#ifndef VERILATED_VLSU___024ROOT_H_
#define VERILATED_VLSU___024ROOT_H_  // guard

#include "verilated.h"


class Vlsu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlsu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_lsu_wren,0,0);
    VL_IN8(i_io_btn,3,0);
    VL_IN8(slt_sl,2,0);
    VL_OUT8(o_io_hex0,6,0);
    VL_OUT8(o_io_hex1,6,0);
    VL_OUT8(o_io_hex2,6,0);
    VL_OUT8(o_io_hex3,6,0);
    VL_OUT8(o_io_hex4,6,0);
    VL_OUT8(o_io_hex5,6,0);
    VL_OUT8(o_io_hex6,6,0);
    VL_OUT8(o_io_hex7,6,0);
    CData/*0:0*/ lsu__DOT__en_datamem;
    CData/*0:0*/ lsu__DOT__en_op_buf;
    CData/*0:0*/ lsu__DOT____Vcellinp__mem_sdram__wr_en;
    CData/*0:0*/ lsu__DOT__mem_sdram__DOT__dq_0_oe;
    CData/*0:0*/ lsu__DOT__mem_sdram__DOT__dq_1_oe;
    CData/*1:0*/ lsu__DOT__mux31__DOT__addr_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ lsu__DOT__mem_sdram__DOT__dq_0_out;
    SData/*15:0*/ lsu__DOT__mem_sdram__DOT__dq_1_out;
    VL_IN(i_st_data,31,0);
    VL_IN(i_lsu_addr,31,0);
    VL_IN(i_io_sw,31,0);
    VL_OUT(o_ld_data,31,0);
    VL_OUT(o_io_ledr,31,0);
    VL_OUT(o_io_ledg,31,0);
    VL_OUT(o_io_lcd,31,0);
    IData/*31:0*/ lsu__DOT__data_out_1;
    IData/*31:0*/ lsu__DOT__data_out_2;
    IData/*31:0*/ lsu__DOT__INPUT;
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__data_tmp;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 5> lsu__DOT__outputperiph__DOT__MEMBF;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlsu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlsu___024root(Vlsu__Syms* symsp, const char* v__name);
    ~Vlsu___024root();
    VL_UNCOPYABLE(Vlsu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
