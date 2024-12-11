// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ctrl_unit.h for the primary calling header

#include "Vtb_ctrl_unit__pch.h"
#include "Vtb_ctrl_unit___024root.h"

VL_ATTR_COLD void Vtb_ctrl_unit___024root___eval_static(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ctrl_unit___024root___eval_final(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ctrl_unit___024root___dump_triggers__stl(Vtb_ctrl_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ctrl_unit___024root___eval_phase__stl(Vtb_ctrl_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_ctrl_unit___024root___eval_settle(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_ctrl_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_ctrl_unit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ctrl_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ctrl_unit___024root___dump_triggers__stl(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_ctrl_unit___024root___act_sequent__TOP__0(Vtb_ctrl_unit___024root* vlSelf);
VL_ATTR_COLD void Vtb_ctrl_unit___024root____Vm_traceActivitySetAll(Vtb_ctrl_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_ctrl_unit___024root___eval_stl(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ctrl_unit___024root___act_sequent__TOP__0(vlSelf);
        Vtb_ctrl_unit___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ctrl_unit___024root___eval_triggers__stl(Vtb_ctrl_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ctrl_unit___024root___eval_phase__stl(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ctrl_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ctrl_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ctrl_unit___024root___dump_triggers__act(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ctrl_unit___024root___dump_triggers__nba(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ctrl_unit___024root____Vm_traceActivitySetAll(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtb_ctrl_unit___024root___ctor_var_reset(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ctrl_unit__DOT__i_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_ctrl_unit__DOT__i_br_less = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__i_br_equal = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_ins_n_vld = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_slt_sl = VL_RAND_RESET_I(3);
    vlSelf->tb_ctrl_unit__DOT__o_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_ctrl_unit__DOT__o_mem_wren = VL_RAND_RESET_I(1);
    vlSelf->tb_ctrl_unit__DOT__o_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_ctrl_unit__DOT__o_imm_sel = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
