// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODE_CYCLE__SYMS_H_
#define VERILATED_VDECODE_CYCLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecode_cycle.h"

// INCLUDE MODULE CLASSES
#include "Vdecode_cycle___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdecode_cycle__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecode_cycle* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecode_cycle___024root        TOP;

    // CONSTRUCTORS
    Vdecode_cycle__Syms(VerilatedContext* contextp, const char* namep, Vdecode_cycle* modelp);
    ~Vdecode_cycle__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
