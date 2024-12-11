// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode_cycle__pch.h"

//============================================================
// Constructors

Vdecode_cycle::Vdecode_cycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecode_cycle__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_enb_D{vlSymsp->TOP.i_enb_D}
    , i_rd_wren_W{vlSymsp->TOP.i_rd_wren_W}
    , o_ins_n_vld_E{vlSymsp->TOP.o_ins_n_vld_E}
    , o_slt_sl_E{vlSymsp->TOP.o_slt_sl_E}
    , o_rd_wren_E{vlSymsp->TOP.o_rd_wren_E}
    , o_op_a_sel_E{vlSymsp->TOP.o_op_a_sel_E}
    , o_op_b_sel_E{vlSymsp->TOP.o_op_b_sel_E}
    , o_alu_op_E{vlSymsp->TOP.o_alu_op_E}
    , o_mem_wren_E{vlSymsp->TOP.o_mem_wren_E}
    , o_wb_sel_E{vlSymsp->TOP.o_wb_sel_E}
    , o_taken_E{vlSymsp->TOP.o_taken_E}
    , o_rs1_addr_E{vlSymsp->TOP.o_rs1_addr_E}
    , o_rs2_addr_E{vlSymsp->TOP.o_rs2_addr_E}
    , o_rd_addr_E{vlSymsp->TOP.o_rd_addr_E}
    , i_pc_D{vlSymsp->TOP.i_pc_D}
    , i_pc_4_D{vlSymsp->TOP.i_pc_4_D}
    , i_instr_D{vlSymsp->TOP.i_instr_D}
    , i_result_W{vlSymsp->TOP.i_result_W}
    , o_imm_E{vlSymsp->TOP.o_imm_E}
    , o_rs1_data_E{vlSymsp->TOP.o_rs1_data_E}
    , o_rs2_data_E{vlSymsp->TOP.o_rs2_data_E}
    , o_pc_E{vlSymsp->TOP.o_pc_E}
    , o_pc_4_E{vlSymsp->TOP.o_pc_4_E}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecode_cycle::Vdecode_cycle(const char* _vcname__)
    : Vdecode_cycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecode_cycle::~Vdecode_cycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecode_cycle___024root___eval_debug_assertions(Vdecode_cycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode_cycle___024root___eval_static(Vdecode_cycle___024root* vlSelf);
void Vdecode_cycle___024root___eval_initial(Vdecode_cycle___024root* vlSelf);
void Vdecode_cycle___024root___eval_settle(Vdecode_cycle___024root* vlSelf);
void Vdecode_cycle___024root___eval(Vdecode_cycle___024root* vlSelf);

void Vdecode_cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode_cycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode_cycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecode_cycle___024root___eval_static(&(vlSymsp->TOP));
        Vdecode_cycle___024root___eval_initial(&(vlSymsp->TOP));
        Vdecode_cycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecode_cycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecode_cycle::eventsPending() { return false; }

uint64_t Vdecode_cycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecode_cycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecode_cycle___024root___eval_final(Vdecode_cycle___024root* vlSelf);

VL_ATTR_COLD void Vdecode_cycle::final() {
    Vdecode_cycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecode_cycle::hierName() const { return vlSymsp->name(); }
const char* Vdecode_cycle::modelName() const { return "Vdecode_cycle"; }
unsigned Vdecode_cycle::threads() const { return 1; }
void Vdecode_cycle::prepareClone() const { contextp()->prepareClone(); }
void Vdecode_cycle::atClone() const {
    contextp()->threadPoolpOnClone();
}
