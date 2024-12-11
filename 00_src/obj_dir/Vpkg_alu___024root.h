// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpkg_alu.h for the primary calling header

#ifndef VERILATED_VPKG_ALU___024ROOT_H_
#define VERILATED_VPKG_ALU___024ROOT_H_  // guard

#include "verilated.h"


class Vpkg_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpkg_alu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_alu_op,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(i_operand_a,31,0);
    VL_IN(i_operand_b,31,0);
    VL_OUT(o_alu_data,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpkg_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpkg_alu___024root(Vpkg_alu__Syms* symsp, const char* v__name);
    ~Vpkg_alu___024root();
    VL_UNCOPYABLE(Vpkg_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
