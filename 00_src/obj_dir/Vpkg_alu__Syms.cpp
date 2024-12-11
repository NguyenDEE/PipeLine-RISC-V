// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpkg_alu__pch.h"
#include "Vpkg_alu.h"
#include "Vpkg_alu___024root.h"

// FUNCTIONS
Vpkg_alu__Syms::~Vpkg_alu__Syms()
{
}

Vpkg_alu__Syms::Vpkg_alu__Syms(VerilatedContext* contextp, const char* namep, Vpkg_alu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(173);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
