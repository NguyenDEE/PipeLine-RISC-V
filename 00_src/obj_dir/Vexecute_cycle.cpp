// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexecute_cycle__pch.h"

//============================================================
// Constructors

Vexecute_cycle::Vexecute_cycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vexecute_cycle__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_enb_E{vlSymsp->TOP.i_enb_E}
    , i_ins_n_vld_E{vlSymsp->TOP.i_ins_n_vld_E}
    , i_slt_sl_E{vlSymsp->TOP.i_slt_sl_E}
    , i_rd_wren_E{vlSymsp->TOP.i_rd_wren_E}
    , i_op_a_sel_E{vlSymsp->TOP.i_op_a_sel_E}
    , i_op_b_sel_E{vlSymsp->TOP.i_op_b_sel_E}
    , i_alu_op_E{vlSymsp->TOP.i_alu_op_E}
    , i_mem_wren_E{vlSymsp->TOP.i_mem_wren_E}
    , i_wb_sel_E{vlSymsp->TOP.i_wb_sel_E}
    , i_forwardA_E{vlSymsp->TOP.i_forwardA_E}
    , i_forwardB_E{vlSymsp->TOP.i_forwardB_E}
    , o_ins_n_vld_M{vlSymsp->TOP.o_ins_n_vld_M}
    , o_slt_sl_M{vlSymsp->TOP.o_slt_sl_M}
    , o_rd_wren_M{vlSymsp->TOP.o_rd_wren_M}
    , o_mem_wren_M{vlSymsp->TOP.o_mem_wren_M}
    , o_wb_sel_M{vlSymsp->TOP.o_wb_sel_M}
    , i_pc_E{vlSymsp->TOP.i_pc_E}
    , i_pc_4_E{vlSymsp->TOP.i_pc_4_E}
    , i_imm_E{vlSymsp->TOP.i_imm_E}
    , i_rs1_data_E{vlSymsp->TOP.i_rs1_data_E}
    , i_rs2_data_E{vlSymsp->TOP.i_rs2_data_E}
    , i_alu_data_M{vlSymsp->TOP.i_alu_data_M}
    , i_rs_W{vlSymsp->TOP.i_rs_W}
    , o_pc_4_M{vlSymsp->TOP.o_pc_4_M}
    , o_alu_data_M{vlSymsp->TOP.o_alu_data_M}
    , o_rs2_data_M{vlSymsp->TOP.o_rs2_data_M}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vexecute_cycle::Vexecute_cycle(const char* _vcname__)
    : Vexecute_cycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vexecute_cycle::~Vexecute_cycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vexecute_cycle___024root___eval_debug_assertions(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vexecute_cycle___024root___eval_static(Vexecute_cycle___024root* vlSelf);
void Vexecute_cycle___024root___eval_initial(Vexecute_cycle___024root* vlSelf);
void Vexecute_cycle___024root___eval_settle(Vexecute_cycle___024root* vlSelf);
void Vexecute_cycle___024root___eval(Vexecute_cycle___024root* vlSelf);

void Vexecute_cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexecute_cycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexecute_cycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vexecute_cycle___024root___eval_static(&(vlSymsp->TOP));
        Vexecute_cycle___024root___eval_initial(&(vlSymsp->TOP));
        Vexecute_cycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vexecute_cycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vexecute_cycle::eventsPending() { return false; }

uint64_t Vexecute_cycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vexecute_cycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vexecute_cycle___024root___eval_final(Vexecute_cycle___024root* vlSelf);

VL_ATTR_COLD void Vexecute_cycle::final() {
    Vexecute_cycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vexecute_cycle::hierName() const { return vlSymsp->name(); }
const char* Vexecute_cycle::modelName() const { return "Vexecute_cycle"; }
unsigned Vexecute_cycle::threads() const { return 1; }
void Vexecute_cycle::prepareClone() const { contextp()->prepareClone(); }
void Vexecute_cycle::atClone() const {
    contextp()->threadPoolpOnClone();
}
