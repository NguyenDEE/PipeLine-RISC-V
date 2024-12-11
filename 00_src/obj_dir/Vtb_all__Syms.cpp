// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_all__pch.h"
#include "Vtb_all.h"
#include "Vtb_all___024root.h"

// FUNCTIONS
Vtb_all__Syms::~Vtb_all__Syms()
{
}

Vtb_all__Syms::Vtb_all__Syms(VerilatedContext* contextp, const char* namep, Vtb_all* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(99);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
