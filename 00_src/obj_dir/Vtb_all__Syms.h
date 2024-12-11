// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ALL__SYMS_H_
#define VERILATED_VTB_ALL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_all.h"

// INCLUDE MODULE CLASSES
#include "Vtb_all___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_all__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_all* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_all___024root              TOP;

    // CONSTRUCTORS
    Vtb_all__Syms(VerilatedContext* contextp, const char* namep, Vtb_all* modelp);
    ~Vtb_all__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
