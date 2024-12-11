// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_ctrl_unit__Syms.h"


void Vtb_ctrl_unit___024root__trace_chg_0_sub_0(Vtb_ctrl_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_ctrl_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root__trace_chg_0\n"); );
    // Init
    Vtb_ctrl_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ctrl_unit___024root*>(voidSelf);
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_ctrl_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_ctrl_unit___024root__trace_chg_0_sub_0(Vtb_ctrl_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl),3);
        bufp->chgBit(oldp+2,(vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_ctrl_unit__DOT__o_alu_op),4);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren));
        bufp->chgCData(oldp+9,(vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel),2);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel),3);
    }
    bufp->chgIData(oldp+11,(vlSelfRef.tb_ctrl_unit__DOT__i_instr),32);
    bufp->chgBit(oldp+12,(vlSelfRef.tb_ctrl_unit__DOT__i_br_less));
    bufp->chgBit(oldp+13,(vlSelfRef.tb_ctrl_unit__DOT__i_br_equal));
}

void Vtb_ctrl_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root__trace_cleanup\n"); );
    // Init
    Vtb_ctrl_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ctrl_unit___024root*>(voidSelf);
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
