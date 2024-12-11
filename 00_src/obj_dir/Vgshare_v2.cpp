// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgshare_v2__pch.h"

//============================================================
// Constructors

Vgshare_v2::Vgshare_v2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgshare_v2__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_taken{vlSymsp->TOP.i_taken}
    , i_branche_en{vlSymsp->TOP.i_branche_en}
    , o_pc_sel{vlSymsp->TOP.o_pc_sel}
    , o_pc_rp_sel{vlSymsp->TOP.o_pc_rp_sel}
    , o_rst_br_F{vlSymsp->TOP.o_rst_br_F}
    , i_pc{vlSymsp->TOP.i_pc}
    , i_pc_E{vlSymsp->TOP.i_pc_E}
    , i_alu_data_E{vlSymsp->TOP.i_alu_data_E}
    , o_pc_target_F{vlSymsp->TOP.o_pc_target_F}
    , o_pc_rp{vlSymsp->TOP.o_pc_rp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vgshare_v2::Vgshare_v2(const char* _vcname__)
    : Vgshare_v2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgshare_v2::~Vgshare_v2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgshare_v2___024root___eval_debug_assertions(Vgshare_v2___024root* vlSelf);
#endif  // VL_DEBUG
void Vgshare_v2___024root___eval_static(Vgshare_v2___024root* vlSelf);
void Vgshare_v2___024root___eval_initial(Vgshare_v2___024root* vlSelf);
void Vgshare_v2___024root___eval_settle(Vgshare_v2___024root* vlSelf);
void Vgshare_v2___024root___eval(Vgshare_v2___024root* vlSelf);

void Vgshare_v2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgshare_v2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgshare_v2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgshare_v2___024root___eval_static(&(vlSymsp->TOP));
        Vgshare_v2___024root___eval_initial(&(vlSymsp->TOP));
        Vgshare_v2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgshare_v2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgshare_v2::eventsPending() { return false; }

uint64_t Vgshare_v2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vgshare_v2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgshare_v2___024root___eval_final(Vgshare_v2___024root* vlSelf);

VL_ATTR_COLD void Vgshare_v2::final() {
    Vgshare_v2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgshare_v2::hierName() const { return vlSymsp->name(); }
const char* Vgshare_v2::modelName() const { return "Vgshare_v2"; }
unsigned Vgshare_v2::threads() const { return 1; }
void Vgshare_v2::prepareClone() const { contextp()->prepareClone(); }
void Vgshare_v2::atClone() const {
    contextp()->threadPoolpOnClone();
}
