// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPKG_ALU__SYMS_H_
#define VERILATED_VPKG_ALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpkg_alu.h"

// INCLUDE MODULE CLASSES
#include "Vpkg_alu___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpkg_alu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpkg_alu* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpkg_alu___024root             TOP;

    // CONSTRUCTORS
    Vpkg_alu__Syms(VerilatedContext* contextp, const char* namep, Vpkg_alu* modelp);
    ~Vpkg_alu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
