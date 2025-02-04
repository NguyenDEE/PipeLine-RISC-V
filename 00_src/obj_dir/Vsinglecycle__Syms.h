// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSINGLECYCLE__SYMS_H_
#define VERILATED_VSINGLECYCLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsinglecycle.h"

// INCLUDE MODULE CLASSES
#include "Vsinglecycle___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsinglecycle__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsinglecycle* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsinglecycle___024root         TOP;

    // CONSTRUCTORS
    Vsinglecycle__Syms(VerilatedContext* contextp, const char* namep, Vsinglecycle* modelp);
    ~Vsinglecycle__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
