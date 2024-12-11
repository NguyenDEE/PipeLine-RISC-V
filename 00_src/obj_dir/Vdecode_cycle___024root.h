// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode_cycle.h for the primary calling header

#ifndef VERILATED_VDECODE_CYCLE___024ROOT_H_
#define VERILATED_VDECODE_CYCLE___024ROOT_H_  // guard

#include "verilated.h"


class Vdecode_cycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecode_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_enb_D,0,0);
    VL_IN8(i_rd_wren_W,0,0);
    VL_OUT8(o_ins_n_vld_E,0,0);
    VL_OUT8(o_slt_sl_E,2,0);
    VL_OUT8(o_rd_wren_E,0,0);
    VL_OUT8(o_op_a_sel_E,0,0);
    VL_OUT8(o_op_b_sel_E,0,0);
    VL_OUT8(o_alu_op_E,3,0);
    VL_OUT8(o_mem_wren_E,0,0);
    VL_OUT8(o_wb_sel_E,1,0);
    VL_OUT8(o_taken_E,0,0);
    VL_OUT8(o_rs1_addr_E,4,0);
    VL_OUT8(o_rs2_addr_E,4,0);
    VL_OUT8(o_rd_addr_E,4,0);
    CData/*0:0*/ decode_cycle__DOT__br_un_D;
    CData/*0:0*/ decode_cycle__DOT__ins_n_vld_D;
    CData/*2:0*/ decode_cycle__DOT__slt_sl_D;
    CData/*0:0*/ decode_cycle__DOT__rd_wren_D;
    CData/*0:0*/ decode_cycle__DOT__op_a_sel_D;
    CData/*0:0*/ decode_cycle__DOT__op_b_sel_D;
    CData/*3:0*/ decode_cycle__DOT__alu_op_D;
    CData/*0:0*/ decode_cycle__DOT__mem_wren_D;
    CData/*1:0*/ decode_cycle__DOT__wb_sel_D;
    CData/*0:0*/ decode_cycle__DOT__taken_D;
    CData/*0:0*/ decode_cycle__DOT__reg_ins_n_vld_D;
    CData/*2:0*/ decode_cycle__DOT__reg_slt_sl_D;
    CData/*0:0*/ decode_cycle__DOT__reg_rd_wren_D;
    CData/*0:0*/ decode_cycle__DOT__reg_op_a_sel_D;
    CData/*0:0*/ decode_cycle__DOT__reg_op_b_sel_D;
    CData/*3:0*/ decode_cycle__DOT__reg_alu_op_D;
    CData/*0:0*/ decode_cycle__DOT__reg_mem_wren_D;
    CData/*1:0*/ decode_cycle__DOT__reg_wb_sel_D;
    CData/*4:0*/ decode_cycle__DOT__reg_rs1_addr_D;
    CData/*4:0*/ decode_cycle__DOT__reg_rs2_addr_D;
    CData/*4:0*/ decode_cycle__DOT__reg_rd_addr_D;
    CData/*0:0*/ decode_cycle__DOT__reg_taken_D;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(i_pc_D,31,0);
    VL_IN(i_pc_4_D,31,0);
    VL_IN(i_instr_D,31,0);
    VL_IN(i_result_W,31,0);
    VL_OUT(o_imm_E,31,0);
    VL_OUT(o_rs1_data_E,31,0);
    VL_OUT(o_rs2_data_E,31,0);
    VL_OUT(o_pc_E,31,0);
    VL_OUT(o_pc_4_E,31,0);
    IData/*31:0*/ decode_cycle__DOT__rs1_data_D;
    IData/*31:0*/ decode_cycle__DOT__imm_D;
    IData/*31:0*/ decode_cycle__DOT__reg_pc_D;
    IData/*31:0*/ decode_cycle__DOT__reg_pc_4_D;
    IData/*31:0*/ decode_cycle__DOT__reg_rs1_data_D;
    IData/*31:0*/ decode_cycle__DOT__reg_rs2_data_D;
    IData/*31:0*/ decode_cycle__DOT__reg_imm_D;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> decode_cycle__DOT__reg_decode__DOT__Reg;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecode_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecode_cycle___024root(Vdecode_cycle__Syms* symsp, const char* v__name);
    ~Vdecode_cycle___024root();
    VL_UNCOPYABLE(Vdecode_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
