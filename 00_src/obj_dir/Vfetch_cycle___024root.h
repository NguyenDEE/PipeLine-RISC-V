// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfetch_cycle.h for the primary calling header

#ifndef VERILATED_VFETCH_CYCLE___024ROOT_H_
#define VERILATED_VFETCH_CYCLE___024ROOT_H_  // guard

#include "verilated.h"


class Vfetch_cycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfetch_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_en_F,0,0);
    VL_IN8(i_branche_en_D,0,0);
    VL_IN8(i_taken_E,0,0);
    VL_OUT8(o_rst_br_F,0,0);
    CData/*0:0*/ fetch_cycle__DOT__pc_sel;
    CData/*0:0*/ fetch_cycle__DOT__pc_rp_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ fetch_cycle__DOT__gshare_fetch__DOT__Pattern;
    VL_IN(i_pc_E,31,0);
    VL_IN(i_alu_data_E,31,0);
    VL_OUT(o_instr_D,31,0);
    VL_OUT(o_pc_4_D,31,0);
    VL_OUT(o_pc_D,31,0);
    IData/*31:0*/ fetch_cycle__DOT__pc_four_F;
    IData/*31:0*/ fetch_cycle__DOT__pc_F;
    IData/*31:0*/ fetch_cycle__DOT__pc_Q1;
    IData/*31:0*/ fetch_cycle__DOT__pc_Q2;
    IData/*31:0*/ fetch_cycle__DOT__pc_rp;
    IData/*31:0*/ fetch_cycle__DOT__reg_instr_F;
    IData/*31:0*/ fetch_cycle__DOT__reg_pc_4_F;
    IData/*31:0*/ fetch_cycle__DOT__reg_pc_F;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*21:0*/, 1024> fetch_cycle__DOT__gshare_fetch__DOT__tag;
    VlUnpacked<IData/*31:0*/, 1024> fetch_cycle__DOT__gshare_fetch__DOT__BTB;
    VlUnpacked<CData/*1:0*/, 1024> fetch_cycle__DOT__gshare_fetch__DOT__PHT;
    VlUnpacked<IData/*31:0*/, 2049> fetch_cycle__DOT__inst_mem__DOT__imem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfetch_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfetch_cycle___024root(Vfetch_cycle__Syms* symsp, const char* v__name);
    ~Vfetch_cycle___024root();
    VL_UNCOPYABLE(Vfetch_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
