// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlsu__pch.h"

//============================================================
// Constructors

Vlsu::Vlsu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlsu__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_lsu_wren{vlSymsp->TOP.i_lsu_wren}
    , i_io_btn{vlSymsp->TOP.i_io_btn}
    , slt_sl{vlSymsp->TOP.slt_sl}
    , o_io_hex0{vlSymsp->TOP.o_io_hex0}
    , o_io_hex1{vlSymsp->TOP.o_io_hex1}
    , o_io_hex2{vlSymsp->TOP.o_io_hex2}
    , o_io_hex3{vlSymsp->TOP.o_io_hex3}
    , o_io_hex4{vlSymsp->TOP.o_io_hex4}
    , o_io_hex5{vlSymsp->TOP.o_io_hex5}
    , o_io_hex6{vlSymsp->TOP.o_io_hex6}
    , o_io_hex7{vlSymsp->TOP.o_io_hex7}
    , i_st_data{vlSymsp->TOP.i_st_data}
    , i_lsu_addr{vlSymsp->TOP.i_lsu_addr}
    , i_io_sw{vlSymsp->TOP.i_io_sw}
    , o_ld_data{vlSymsp->TOP.o_ld_data}
    , o_io_ledr{vlSymsp->TOP.o_io_ledr}
    , o_io_ledg{vlSymsp->TOP.o_io_ledg}
    , o_io_lcd{vlSymsp->TOP.o_io_lcd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlsu::Vlsu(const char* _vcname__)
    : Vlsu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlsu::~Vlsu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlsu___024root___eval_debug_assertions(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
void Vlsu___024root___eval_static(Vlsu___024root* vlSelf);
void Vlsu___024root___eval_initial(Vlsu___024root* vlSelf);
void Vlsu___024root___eval_settle(Vlsu___024root* vlSelf);
void Vlsu___024root___eval(Vlsu___024root* vlSelf);

void Vlsu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlsu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlsu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlsu___024root___eval_static(&(vlSymsp->TOP));
        Vlsu___024root___eval_initial(&(vlSymsp->TOP));
        Vlsu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlsu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlsu::eventsPending() { return false; }

uint64_t Vlsu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlsu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlsu___024root___eval_final(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu::final() {
    Vlsu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlsu::hierName() const { return vlSymsp->name(); }
const char* Vlsu::modelName() const { return "Vlsu"; }
unsigned Vlsu::threads() const { return 1; }
void Vlsu::prepareClone() const { contextp()->prepareClone(); }
void Vlsu::atClone() const {
    contextp()->threadPoolpOnClone();
}
