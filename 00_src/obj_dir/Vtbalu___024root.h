// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtbalu.h for the primary calling header

#ifndef VERILATED_VTBALU___024ROOT_H_
#define VERILATED_VTBALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtbalu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtbalu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tbalu__DOT__i_alu_op;
    CData/*0:0*/ tbalu__DOT__dut__DOT__carryFlag;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tbalu__DOT__i_operand_a;
    IData/*31:0*/ tbalu__DOT__i_operand_b;
    IData/*31:0*/ tbalu__DOT__o_alu_data;
    IData/*31:0*/ tbalu__DOT__dut__DOT__srl_tmp;
    IData/*31:0*/ tbalu__DOT__dut__DOT__srr_tmp;
    IData/*31:0*/ tbalu__DOT__dut__DOT__sra_tmp;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3;
    IData/*31:0*/ tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtbalu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtbalu___024root(Vtbalu__Syms* symsp, const char* v__name);
    ~Vtbalu___024root();
    VL_UNCOPYABLE(Vtbalu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
