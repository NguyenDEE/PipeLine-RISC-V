// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sim.h for the primary calling header

#include "Vtb_sim__pch.h"
#include "Vtb_sim__Syms.h"
#include "Vtb_sim___024root.h"

void Vtb_sim___024root___ctor_var_reset(Vtb_sim___024root* vlSelf);

Vtb_sim___024root::Vtb_sim___024root(Vtb_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_sim___024root___ctor_var_reset(this);
}

void Vtb_sim___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sim___024root::~Vtb_sim___024root() {
}
