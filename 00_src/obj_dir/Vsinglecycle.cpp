// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsinglecycle__pch.h"

//============================================================
// Constructors

Vsinglecycle::Vsinglecycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsinglecycle__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_io_btn{vlSymsp->TOP.i_io_btn}
    , o_ins_n_vld{vlSymsp->TOP.o_ins_n_vld}
    , o_io_hex0{vlSymsp->TOP.o_io_hex0}
    , o_io_hex1{vlSymsp->TOP.o_io_hex1}
    , o_io_hex2{vlSymsp->TOP.o_io_hex2}
    , o_io_hex3{vlSymsp->TOP.o_io_hex3}
    , o_io_hex4{vlSymsp->TOP.o_io_hex4}
    , o_io_hex5{vlSymsp->TOP.o_io_hex5}
    , o_io_hex6{vlSymsp->TOP.o_io_hex6}
    , o_io_hex7{vlSymsp->TOP.o_io_hex7}
    , i_io_sw{vlSymsp->TOP.i_io_sw}
    , o_io_lcd{vlSymsp->TOP.o_io_lcd}
    , o_io_ledg{vlSymsp->TOP.o_io_ledg}
    , o_io_ledr{vlSymsp->TOP.o_io_ledr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsinglecycle::Vsinglecycle(const char* _vcname__)
    : Vsinglecycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsinglecycle::~Vsinglecycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsinglecycle___024root___eval_debug_assertions(Vsinglecycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vsinglecycle___024root___eval_static(Vsinglecycle___024root* vlSelf);
void Vsinglecycle___024root___eval_initial(Vsinglecycle___024root* vlSelf);
void Vsinglecycle___024root___eval_settle(Vsinglecycle___024root* vlSelf);
void Vsinglecycle___024root___eval(Vsinglecycle___024root* vlSelf);

void Vsinglecycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsinglecycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsinglecycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsinglecycle___024root___eval_static(&(vlSymsp->TOP));
        Vsinglecycle___024root___eval_initial(&(vlSymsp->TOP));
        Vsinglecycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsinglecycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsinglecycle::eventsPending() { return false; }

uint64_t Vsinglecycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsinglecycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsinglecycle___024root___eval_final(Vsinglecycle___024root* vlSelf);

VL_ATTR_COLD void Vsinglecycle::final() {
    Vsinglecycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsinglecycle::hierName() const { return vlSymsp->name(); }
const char* Vsinglecycle::modelName() const { return "Vsinglecycle"; }
unsigned Vsinglecycle::threads() const { return 1; }
void Vsinglecycle::prepareClone() const { contextp()->prepareClone(); }
void Vsinglecycle::atClone() const {
    contextp()->threadPoolpOnClone();
}
