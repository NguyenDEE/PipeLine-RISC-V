// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpkg_alu__pch.h"

//============================================================
// Constructors

Vpkg_alu::Vpkg_alu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpkg_alu__Syms(contextp(), _vcname__, this)}
    , i_alu_op{vlSymsp->TOP.i_alu_op}
    , i_operand_a{vlSymsp->TOP.i_operand_a}
    , i_operand_b{vlSymsp->TOP.i_operand_b}
    , o_alu_data{vlSymsp->TOP.o_alu_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpkg_alu::Vpkg_alu(const char* _vcname__)
    : Vpkg_alu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpkg_alu::~Vpkg_alu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpkg_alu___024root___eval_debug_assertions(Vpkg_alu___024root* vlSelf);
#endif  // VL_DEBUG
void Vpkg_alu___024root___eval_static(Vpkg_alu___024root* vlSelf);
void Vpkg_alu___024root___eval_initial(Vpkg_alu___024root* vlSelf);
void Vpkg_alu___024root___eval_settle(Vpkg_alu___024root* vlSelf);
void Vpkg_alu___024root___eval(Vpkg_alu___024root* vlSelf);

void Vpkg_alu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpkg_alu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpkg_alu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpkg_alu___024root___eval_static(&(vlSymsp->TOP));
        Vpkg_alu___024root___eval_initial(&(vlSymsp->TOP));
        Vpkg_alu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpkg_alu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpkg_alu::eventsPending() { return false; }

uint64_t Vpkg_alu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpkg_alu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpkg_alu___024root___eval_final(Vpkg_alu___024root* vlSelf);

VL_ATTR_COLD void Vpkg_alu::final() {
    Vpkg_alu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpkg_alu::hierName() const { return vlSymsp->name(); }
const char* Vpkg_alu::modelName() const { return "Vpkg_alu"; }
unsigned Vpkg_alu::threads() const { return 1; }
void Vpkg_alu::prepareClone() const { contextp()->prepareClone(); }
void Vpkg_alu::atClone() const {
    contextp()->threadPoolpOnClone();
}
