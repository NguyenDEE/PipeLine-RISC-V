// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_cycle.h for the primary calling header

#include "Vmem_cycle__pch.h"
#include "Vmem_cycle__Syms.h"
#include "Vmem_cycle___024root.h"

void Vmem_cycle___024root___ctor_var_reset(Vmem_cycle___024root* vlSelf);

Vmem_cycle___024root::Vmem_cycle___024root(Vmem_cycle__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmem_cycle___024root___ctor_var_reset(this);
}

void Vmem_cycle___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmem_cycle___024root::~Vmem_cycle___024root() {
}
