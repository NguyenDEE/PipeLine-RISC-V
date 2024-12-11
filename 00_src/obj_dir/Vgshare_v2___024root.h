// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgshare_v2.h for the primary calling header

#ifndef VERILATED_VGSHARE_V2___024ROOT_H_
#define VERILATED_VGSHARE_V2___024ROOT_H_  // guard

#include "verilated.h"


class Vgshare_v2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgshare_v2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_taken,0,0);
    VL_IN8(i_branche_en,0,0);
    VL_OUT8(o_pc_sel,0,0);
    VL_OUT8(o_pc_rp_sel,0,0);
    VL_OUT8(o_rst_br_F,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ gshare_v2__DOT__Pattern;
    SData/*9:0*/ gshare_v2__DOT__Pattern_buffer;
    VL_IN(i_pc,31,0);
    VL_IN(i_pc_E,31,0);
    VL_IN(i_alu_data_E,31,0);
    VL_OUT(o_pc_target_F,31,0);
    VL_OUT(o_pc_rp,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*21:0*/, 1024> gshare_v2__DOT__tag;
    VlUnpacked<IData/*31:0*/, 1024> gshare_v2__DOT__BTB;
    VlUnpacked<CData/*1:0*/, 1024> gshare_v2__DOT__PHT;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgshare_v2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgshare_v2___024root(Vgshare_v2__Syms* symsp, const char* v__name);
    ~Vgshare_v2___024root();
    VL_UNCOPYABLE(Vgshare_v2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
