// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VGSHARE_V2__SYMS_H_
#define VERILATED_VGSHARE_V2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vgshare_v2.h"

// INCLUDE MODULE CLASSES
#include "Vgshare_v2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vgshare_v2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vgshare_v2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vgshare_v2___024root           TOP;

    // CONSTRUCTORS
    Vgshare_v2__Syms(VerilatedContext* contextp, const char* namep, Vgshare_v2* modelp);
    ~Vgshare_v2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
