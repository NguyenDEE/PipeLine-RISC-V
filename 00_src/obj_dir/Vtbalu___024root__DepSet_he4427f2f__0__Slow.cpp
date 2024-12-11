// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbalu.h for the primary calling header

#include "Vtbalu__pch.h"
#include "Vtbalu___024root.h"

VL_ATTR_COLD void Vtbalu___024root___eval_static(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtbalu___024root___eval_final(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__stl(Vtbalu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtbalu___024root___eval_phase__stl(Vtbalu___024root* vlSelf);

VL_ATTR_COLD void Vtbalu___024root___eval_settle(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_settle\n"); );
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
            Vtbalu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tbalu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtbalu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__stl(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___dump_triggers__stl\n"); );
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

void Vtbalu___024root___act_sequent__TOP__0(Vtbalu___024root* vlSelf);
VL_ATTR_COLD void Vtbalu___024root____Vm_traceActivitySetAll(Vtbalu___024root* vlSelf);

VL_ATTR_COLD void Vtbalu___024root___eval_stl(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbalu___024root___act_sequent__TOP__0(vlSelf);
        Vtbalu___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtbalu___024root___eval_triggers__stl(Vtbalu___024root* vlSelf);

VL_ATTR_COLD bool Vtbalu___024root___eval_phase__stl(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtbalu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtbalu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__act(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__nba(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vtbalu___024root____Vm_traceActivitySetAll(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtbalu___024root___ctor_var_reset(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tbalu__DOT__i_operand_a = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__i_operand_b = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__i_alu_op = VL_RAND_RESET_I(4);
    vlSelf->tbalu__DOT__o_alu_data = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__carryFlag = VL_RAND_RESET_I(1);
    vlSelf->tbalu__DOT__dut__DOT__srl_tmp = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__srr_tmp = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__sra_tmp = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
