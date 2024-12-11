// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpipeline__pch.h"

//============================================================
// Constructors

Vpipeline::Vpipeline(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpipeline__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_io_btn{vlSymsp->TOP.i_io_btn}
    , o_SRAM_CE_N{vlSymsp->TOP.o_SRAM_CE_N}
    , o_SRAM_WE_N{vlSymsp->TOP.o_SRAM_WE_N}
    , o_SRAM_LB_N{vlSymsp->TOP.o_SRAM_LB_N}
    , o_SRAM_UB_N{vlSymsp->TOP.o_SRAM_UB_N}
    , o_SRAM_OE_N{vlSymsp->TOP.o_SRAM_OE_N}
    , o_io_hex0{vlSymsp->TOP.o_io_hex0}
    , o_io_hex1{vlSymsp->TOP.o_io_hex1}
    , o_io_hex2{vlSymsp->TOP.o_io_hex2}
    , o_io_hex3{vlSymsp->TOP.o_io_hex3}
    , o_io_hex4{vlSymsp->TOP.o_io_hex4}
    , o_io_hex5{vlSymsp->TOP.o_io_hex5}
    , o_io_hex6{vlSymsp->TOP.o_io_hex6}
    , o_io_hex7{vlSymsp->TOP.o_io_hex7}
    , o_ins_n_vld{vlSymsp->TOP.o_ins_n_vld}
    , o_SRAM_DQ{vlSymsp->TOP.o_SRAM_DQ}
    , i_io_sw{vlSymsp->TOP.i_io_sw}
    , o_SRAM_ADDR{vlSymsp->TOP.o_SRAM_ADDR}
    , o_io_ledr{vlSymsp->TOP.o_io_ledr}
    , o_io_ledg{vlSymsp->TOP.o_io_ledg}
    , o_io_lcd{vlSymsp->TOP.o_io_lcd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpipeline::Vpipeline(const char* _vcname__)
    : Vpipeline(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpipeline::~Vpipeline() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpipeline___024root___eval_debug_assertions(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
void Vpipeline___024root___eval_static(Vpipeline___024root* vlSelf);
void Vpipeline___024root___eval_initial(Vpipeline___024root* vlSelf);
void Vpipeline___024root___eval_settle(Vpipeline___024root* vlSelf);
void Vpipeline___024root___eval(Vpipeline___024root* vlSelf);

void Vpipeline::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpipeline::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpipeline___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpipeline___024root___eval_static(&(vlSymsp->TOP));
        Vpipeline___024root___eval_initial(&(vlSymsp->TOP));
        Vpipeline___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpipeline___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpipeline::eventsPending() { return false; }

uint64_t Vpipeline::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpipeline::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpipeline___024root___eval_final(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline::final() {
    Vpipeline___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpipeline::hierName() const { return vlSymsp->name(); }
const char* Vpipeline::modelName() const { return "Vpipeline"; }
unsigned Vpipeline::threads() const { return 1; }
void Vpipeline::prepareClone() const { contextp()->prepareClone(); }
void Vpipeline::atClone() const {
    contextp()->threadPoolpOnClone();
}
