// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbrc_tb.h for the primary calling header

#ifndef VERILATED_VBRC_TB___024ROOT_H_
#define VERILATED_VBRC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbrc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbrc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ brc_tb__DOT__i_br_un;
    CData/*0:0*/ brc_tb__DOT__o_br_less;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ brc_tb__DOT__i_rs1_data;
    IData/*31:0*/ brc_tb__DOT__i_rs2_data;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ brc_tb__DOT__brc_test__DOT__sub;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbrc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbrc_tb___024root(Vbrc_tb__Syms* symsp, const char* v__name);
    ~Vbrc_tb___024root();
    VL_UNCOPYABLE(Vbrc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
