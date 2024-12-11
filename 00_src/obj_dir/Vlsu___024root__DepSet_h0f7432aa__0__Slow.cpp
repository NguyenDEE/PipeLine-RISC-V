// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu___024root.h"

VL_ATTR_COLD void Vlsu___024root___eval_static(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlsu___024root___eval_initial(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
}

VL_ATTR_COLD void Vlsu___024root___eval_final(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__stl(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlsu___024root___eval_phase__stl(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu___024root___eval_settle(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_settle\n"); );
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
            Vlsu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lsu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlsu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__stl(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__stl\n"); );
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

void Vlsu___024root___ico_sequent__TOP__0(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu___024root___eval_stl(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vlsu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vlsu___024root___eval_triggers__stl(Vlsu___024root* vlSelf);

VL_ATTR_COLD bool Vlsu___024root___eval_phase__stl(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlsu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vlsu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__ico(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vlsu___024root___dump_triggers__act(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge i_rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__nba(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge i_rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsu___024root___ctor_var_reset(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_st_data = VL_RAND_RESET_I(32);
    vlSelf->i_lsu_addr = VL_RAND_RESET_I(32);
    vlSelf->i_lsu_wren = VL_RAND_RESET_I(1);
    vlSelf->i_io_sw = VL_RAND_RESET_I(32);
    vlSelf->i_io_btn = VL_RAND_RESET_I(4);
    vlSelf->slt_sl = VL_RAND_RESET_I(3);
    vlSelf->o_ld_data = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledr = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledg = VL_RAND_RESET_I(32);
    vlSelf->o_io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex4 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex5 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex6 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex7 = VL_RAND_RESET_I(7);
    vlSelf->o_io_lcd = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT__en_datamem = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT__en_op_buf = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT__data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT__data_out_2 = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT__INPUT = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT____Vcellinp__mem_sdram__wr_en = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT__mem_sdram__DOT__dq_0_out = VL_RAND_RESET_I(16);
    vlSelf->lsu__DOT__mem_sdram__DOT__dq_1_out = VL_RAND_RESET_I(16);
    vlSelf->lsu__DOT__mem_sdram__DOT__dq_0_oe = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT__mem_sdram__DOT__dq_1_oe = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT__outputperiph__DOT__data_tmp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->lsu__DOT__outputperiph__DOT__MEMBF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->lsu__DOT__mux31__DOT__addr_sel = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst__0 = VL_RAND_RESET_I(1);
}
