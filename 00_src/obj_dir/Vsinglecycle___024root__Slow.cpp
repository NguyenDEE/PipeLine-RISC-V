// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsinglecycle.h for the primary calling header

#include "Vsinglecycle__pch.h"
#include "Vsinglecycle__Syms.h"
#include "Vsinglecycle___024root.h"

void Vsinglecycle___024root___ctor_var_reset(Vsinglecycle___024root* vlSelf);

Vsinglecycle___024root::Vsinglecycle___024root(Vsinglecycle__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsinglecycle___024root___ctor_var_reset(this);
}

void Vsinglecycle___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsinglecycle___024root::~Vsinglecycle___024root() {
}
