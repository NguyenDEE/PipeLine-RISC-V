// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfetch_cycle__pch.h"

//============================================================
// Constructors

Vfetch_cycle::Vfetch_cycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfetch_cycle__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_en_F{vlSymsp->TOP.i_en_F}
    , i_branche_en_D{vlSymsp->TOP.i_branche_en_D}
    , i_taken_E{vlSymsp->TOP.i_taken_E}
    , o_rst_br_F{vlSymsp->TOP.o_rst_br_F}
    , i_pc_E{vlSymsp->TOP.i_pc_E}
    , i_alu_data_E{vlSymsp->TOP.i_alu_data_E}
    , o_instr_D{vlSymsp->TOP.o_instr_D}
    , o_pc_4_D{vlSymsp->TOP.o_pc_4_D}
    , o_pc_D{vlSymsp->TOP.o_pc_D}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfetch_cycle::Vfetch_cycle(const char* _vcname__)
    : Vfetch_cycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfetch_cycle::~Vfetch_cycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfetch_cycle___024root___eval_debug_assertions(Vfetch_cycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vfetch_cycle___024root___eval_static(Vfetch_cycle___024root* vlSelf);
void Vfetch_cycle___024root___eval_initial(Vfetch_cycle___024root* vlSelf);
void Vfetch_cycle___024root___eval_settle(Vfetch_cycle___024root* vlSelf);
void Vfetch_cycle___024root___eval(Vfetch_cycle___024root* vlSelf);

void Vfetch_cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfetch_cycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfetch_cycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfetch_cycle___024root___eval_static(&(vlSymsp->TOP));
        Vfetch_cycle___024root___eval_initial(&(vlSymsp->TOP));
        Vfetch_cycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfetch_cycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfetch_cycle::eventsPending() { return false; }

uint64_t Vfetch_cycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfetch_cycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfetch_cycle___024root___eval_final(Vfetch_cycle___024root* vlSelf);

VL_ATTR_COLD void Vfetch_cycle::final() {
    Vfetch_cycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfetch_cycle::hierName() const { return vlSymsp->name(); }
const char* Vfetch_cycle::modelName() const { return "Vfetch_cycle"; }
unsigned Vfetch_cycle::threads() const { return 1; }
void Vfetch_cycle::prepareClone() const { contextp()->prepareClone(); }
void Vfetch_cycle::atClone() const {
    contextp()->threadPoolpOnClone();
}
