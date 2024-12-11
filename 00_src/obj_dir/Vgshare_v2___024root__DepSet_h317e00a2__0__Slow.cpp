// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgshare_v2.h for the primary calling header

#include "Vgshare_v2__pch.h"
#include "Vgshare_v2___024root.h"

VL_ATTR_COLD void Vgshare_v2___024root___eval_static(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vgshare_v2___024root___eval_initial__TOP(Vgshare_v2___024root* vlSelf);

VL_ATTR_COLD void Vgshare_v2___024root___eval_initial(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgshare_v2___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
}

VL_ATTR_COLD void Vgshare_v2___024root___eval_initial__TOP(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ gshare_v2__DOT__unnamedblk1__DOT__i;
    gshare_v2__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.gshare_v2__DOT__Pattern = 0U;
    gshare_v2__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3ffU, gshare_v2__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.gshare_v2__DOT__PHT[(0x3ffU & gshare_v2__DOT__unnamedblk1__DOT__i)] = 1U;
        vlSelfRef.gshare_v2__DOT__BTB[(0x3ffU & gshare_v2__DOT__unnamedblk1__DOT__i)] = 0U;
        gshare_v2__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + gshare_v2__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vgshare_v2___024root___eval_final(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__stl(Vgshare_v2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vgshare_v2___024root___eval_phase__stl(Vgshare_v2___024root* vlSelf);

VL_ATTR_COLD void Vgshare_v2___024root___eval_settle(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_settle\n"); );
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
            Vgshare_v2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("gshare_v2.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vgshare_v2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__stl(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___dump_triggers__stl\n"); );
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

void Vgshare_v2___024root___ico_sequent__TOP__0(Vgshare_v2___024root* vlSelf);

VL_ATTR_COLD void Vgshare_v2___024root___eval_stl(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vgshare_v2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vgshare_v2___024root___eval_triggers__stl(Vgshare_v2___024root* vlSelf);

VL_ATTR_COLD bool Vgshare_v2___024root___eval_phase__stl(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vgshare_v2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vgshare_v2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__ico(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__act(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__nba(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgshare_v2___024root___ctor_var_reset(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_taken = VL_RAND_RESET_I(1);
    vlSelf->i_pc = VL_RAND_RESET_I(32);
    vlSelf->i_pc_E = VL_RAND_RESET_I(32);
    vlSelf->i_alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->i_branche_en = VL_RAND_RESET_I(1);
    vlSelf->o_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->o_pc_target_F = VL_RAND_RESET_I(32);
    vlSelf->o_pc_rp_sel = VL_RAND_RESET_I(1);
    vlSelf->o_pc_rp = VL_RAND_RESET_I(32);
    vlSelf->o_rst_br_F = VL_RAND_RESET_I(1);
    vlSelf->gshare_v2__DOT__Pattern = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->gshare_v2__DOT__tag[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->gshare_v2__DOT__BTB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->gshare_v2__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gshare_v2__DOT__Pattern_buffer = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
}
