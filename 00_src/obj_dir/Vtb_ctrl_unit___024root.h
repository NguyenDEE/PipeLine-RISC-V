// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ctrl_unit.h for the primary calling header

#ifndef VERILATED_VTB_CTRL_UNIT___024ROOT_H_
#define VERILATED_VTB_CTRL_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ctrl_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ctrl_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ctrl_unit__DOT__i_br_less;
    CData/*0:0*/ tb_ctrl_unit__DOT__i_br_equal;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_ins_n_vld;
    CData/*2:0*/ tb_ctrl_unit__DOT__o_slt_sl;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_pc_sel;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_br_unsigned;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_rd_wren;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_op_a_sel;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_op_b_sel;
    CData/*3:0*/ tb_ctrl_unit__DOT__o_alu_op;
    CData/*0:0*/ tb_ctrl_unit__DOT__o_mem_wren;
    CData/*1:0*/ tb_ctrl_unit__DOT__o_wb_sel;
    CData/*2:0*/ tb_ctrl_unit__DOT__o_imm_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ctrl_unit__DOT__i_instr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ctrl_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ctrl_unit___024root(Vtb_ctrl_unit__Syms* symsp, const char* v__name);
    ~Vtb_ctrl_unit___024root();
    VL_UNCOPYABLE(Vtb_ctrl_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
