// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu__Syms.h"
#include "Vlsu___024root.h"

void Vlsu___024root___ctor_var_reset(Vlsu___024root* vlSelf);

Vlsu___024root::Vlsu___024root(Vlsu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlsu___024root___ctor_var_reset(this);
}

void Vlsu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlsu___024root::~Vlsu___024root() {
}
