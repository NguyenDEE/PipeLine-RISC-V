// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc_tb.h for the primary calling header

#include "Vbrc_tb__pch.h"
#include "Vbrc_tb__Syms.h"
#include "Vbrc_tb___024root.h"

void Vbrc_tb___024root___ctor_var_reset(Vbrc_tb___024root* vlSelf);

Vbrc_tb___024root::Vbrc_tb___024root(Vbrc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbrc_tb___024root___ctor_var_reset(this);
}

void Vbrc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbrc_tb___024root::~Vbrc_tb___024root() {
}
