// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFETCH_CYCLE__SYMS_H_
#define VERILATED_VFETCH_CYCLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfetch_cycle.h"

// INCLUDE MODULE CLASSES
#include "Vfetch_cycle___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfetch_cycle__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfetch_cycle* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfetch_cycle___024root         TOP;

    // CONSTRUCTORS
    Vfetch_cycle__Syms(VerilatedContext* contextp, const char* namep, Vfetch_cycle* modelp);
    ~Vfetch_cycle__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
