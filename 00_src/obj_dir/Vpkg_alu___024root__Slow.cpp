// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpkg_alu.h for the primary calling header

#include "Vpkg_alu__pch.h"
#include "Vpkg_alu__Syms.h"
#include "Vpkg_alu___024root.h"

void Vpkg_alu___024root___ctor_var_reset(Vpkg_alu___024root* vlSelf);

Vpkg_alu___024root::Vpkg_alu___024root(Vpkg_alu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpkg_alu___024root___ctor_var_reset(this);
}

void Vpkg_alu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpkg_alu___024root::~Vpkg_alu___024root() {
}
