// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexecute_cycle.h for the primary calling header

#ifndef VERILATED_VEXECUTE_CYCLE___024ROOT_H_
#define VERILATED_VEXECUTE_CYCLE___024ROOT_H_  // guard

#include "verilated.h"


class Vexecute_cycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexecute_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_enb_E,0,0);
    VL_IN8(i_ins_n_vld_E,0,0);
    VL_IN8(i_slt_sl_E,2,0);
    VL_IN8(i_rd_wren_E,0,0);
    VL_IN8(i_op_a_sel_E,0,0);
    VL_IN8(i_op_b_sel_E,0,0);
    VL_IN8(i_alu_op_E,3,0);
    VL_IN8(i_mem_wren_E,0,0);
    VL_IN8(i_wb_sel_E,1,0);
    VL_IN8(i_forwardA_E,1,0);
    VL_IN8(i_forwardB_E,1,0);
    VL_OUT8(o_ins_n_vld_M,0,0);
    VL_OUT8(o_slt_sl_M,2,0);
    VL_OUT8(o_rd_wren_M,0,0);
    VL_OUT8(o_mem_wren_M,0,0);
    VL_OUT8(o_wb_sel_M,1,0);
    CData/*0:0*/ execute_cycle__DOT__reg_ins_n_vld_E;
    CData/*2:0*/ execute_cycle__DOT__reg_slt_sl_E;
    CData/*0:0*/ execute_cycle__DOT__reg_rd_wren_E;
    CData/*0:0*/ execute_cycle__DOT__reg_mem_wren_E;
    CData/*1:0*/ execute_cycle__DOT__reg_wb_sel_E;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(i_pc_E,31,0);
    VL_IN(i_pc_4_E,31,0);
    VL_IN(i_imm_E,31,0);
    VL_IN(i_rs1_data_E,31,0);
    VL_IN(i_rs2_data_E,31,0);
    VL_IN(i_alu_data_M,31,0);
    VL_IN(i_rs_W,31,0);
    VL_OUT(o_pc_4_M,31,0);
    VL_OUT(o_alu_data_M,31,0);
    VL_OUT(o_rs2_data_M,31,0);
    IData/*31:0*/ execute_cycle__DOT__operand_a_2;
    IData/*31:0*/ execute_cycle__DOT__operand_b_2;
    IData/*31:0*/ execute_cycle__DOT__reg_rs2_data_E;
    IData/*31:0*/ execute_cycle__DOT__reg_pc_4_E;
    IData/*31:0*/ execute_cycle__DOT__reg_alu_data_E;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__srl_tmp;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__srr_tmp;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__sra_tmp;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_1;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_2;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_3;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_4;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_1;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_2;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_3;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_4;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3;
    IData/*31:0*/ execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ execute_cycle__DOT__block_alu__DOT__sub;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexecute_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexecute_cycle___024root(Vexecute_cycle__Syms* symsp, const char* v__name);
    ~Vexecute_cycle___024root();
    VL_UNCOPYABLE(Vexecute_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
