// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmem_cycle__pch.h"

//============================================================
// Constructors

Vmem_cycle::Vmem_cycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmem_cycle__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_enb_M{vlSymsp->TOP.i_enb_M}
    , i_ins_n_vld_M{vlSymsp->TOP.i_ins_n_vld_M}
    , i_slt_sl_M{vlSymsp->TOP.i_slt_sl_M}
    , i_rd_wren_M{vlSymsp->TOP.i_rd_wren_M}
    , i_mem_wren_M{vlSymsp->TOP.i_mem_wren_M}
    , i_wb_sel_M{vlSymsp->TOP.i_wb_sel_M}
    , i_io_btn{vlSymsp->TOP.i_io_btn}
    , o_stall_M{vlSymsp->TOP.o_stall_M}
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
    , o_ins_n_vld_W{vlSymsp->TOP.o_ins_n_vld_W}
    , o_rd_wren_W{vlSymsp->TOP.o_rd_wren_W}
    , o_wb_sel_W{vlSymsp->TOP.o_wb_sel_W}
    , o_SRAM_DQ{vlSymsp->TOP.o_SRAM_DQ}
    , i_pc_4_M{vlSymsp->TOP.i_pc_4_M}
    , i_alu_data_M{vlSymsp->TOP.i_alu_data_M}
    , i_rs2_data_M{vlSymsp->TOP.i_rs2_data_M}
    , i_io_sw{vlSymsp->TOP.i_io_sw}
    , o_SRAM_ADDR{vlSymsp->TOP.o_SRAM_ADDR}
    , o_ld_data_W{vlSymsp->TOP.o_ld_data_W}
    , o_io_ledr{vlSymsp->TOP.o_io_ledr}
    , o_io_ledg{vlSymsp->TOP.o_io_ledg}
    , o_io_lcd{vlSymsp->TOP.o_io_lcd}
    , o_pc_4_W{vlSymsp->TOP.o_pc_4_W}
    , o_alu_data_W{vlSymsp->TOP.o_alu_data_W}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmem_cycle::Vmem_cycle(const char* _vcname__)
    : Vmem_cycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmem_cycle::~Vmem_cycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmem_cycle___024root___eval_debug_assertions(Vmem_cycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vmem_cycle___024root___eval_static(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___eval_initial(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___eval_settle(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___eval(Vmem_cycle___024root* vlSelf);

void Vmem_cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmem_cycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmem_cycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmem_cycle___024root___eval_static(&(vlSymsp->TOP));
        Vmem_cycle___024root___eval_initial(&(vlSymsp->TOP));
        Vmem_cycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmem_cycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmem_cycle::eventsPending() { return false; }

uint64_t Vmem_cycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmem_cycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmem_cycle___024root___eval_final(Vmem_cycle___024root* vlSelf);

VL_ATTR_COLD void Vmem_cycle::final() {
    Vmem_cycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmem_cycle::hierName() const { return vlSymsp->name(); }
const char* Vmem_cycle::modelName() const { return "Vmem_cycle"; }
unsigned Vmem_cycle::threads() const { return 1; }
void Vmem_cycle::prepareClone() const { contextp()->prepareClone(); }
void Vmem_cycle::atClone() const {
    contextp()->threadPoolpOnClone();
}
