// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_cycle.h for the primary calling header

#include "Vfetch_cycle__pch.h"
#include "Vfetch_cycle___024root.h"

VL_ATTR_COLD void Vfetch_cycle___024root___eval_static(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfetch_cycle___024root___eval_initial__TOP(Vfetch_cycle___024root* vlSelf);

VL_ATTR_COLD void Vfetch_cycle___024root___eval_initial(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfetch_cycle___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
}

extern const VlWide<15>/*479:0*/ Vfetch_cycle__ConstPool__CONST_h37a9fbca_0;

VL_ATTR_COLD void Vfetch_cycle___024root___eval_initial__TOP(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i;
    fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern = 0U;
    fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3ffU, fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[(0x3ffU 
                                                            & fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 1U;
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[(0x3ffU 
                                                            & fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 0U;
        fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + fetch_cycle__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2049, 0, VL_CVT_PACK_STR_NW(15, Vfetch_cycle__ConstPool__CONST_h37a9fbca_0)
                 ,  &(vlSelfRef.fetch_cycle__DOT__inst_mem__DOT__imem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vfetch_cycle___024root___eval_final(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__stl(Vfetch_cycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfetch_cycle___024root___eval_phase__stl(Vfetch_cycle___024root* vlSelf);

VL_ATTR_COLD void Vfetch_cycle___024root___eval_settle(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_settle\n"); );
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
            Vfetch_cycle___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fetch_cycle.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfetch_cycle___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__stl(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vfetch_cycle___024root___stl_sequent__TOP__0(Vfetch_cycle___024root* vlSelf);

VL_ATTR_COLD void Vfetch_cycle___024root___eval_stl(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfetch_cycle___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfetch_cycle___024root___stl_sequent__TOP__0(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ fetch_cycle__DOT__gshare_fetch__DOT__predict_taken;
    fetch_cycle__DOT__gshare_fetch__DOT__predict_taken = 0;
    CData/*0:0*/ fetch_cycle__DOT__gshare_fetch__DOT__hit;
    fetch_cycle__DOT__gshare_fetch__DOT__hit = 0;
    SData/*9:0*/ fetch_cycle__DOT__gshare_fetch__DOT__addr_pht;
    fetch_cycle__DOT__gshare_fetch__DOT__addr_pht = 0;
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.o_instr_D = 0U;
        vlSelfRef.o_pc_4_D = 0U;
        vlSelfRef.o_pc_D = 0U;
        vlSelfRef.fetch_cycle__DOT__pc_four_F = 0U;
    } else {
        vlSelfRef.o_instr_D = vlSelfRef.fetch_cycle__DOT__reg_instr_F;
        vlSelfRef.o_pc_4_D = vlSelfRef.fetch_cycle__DOT__reg_pc_4_F;
        vlSelfRef.o_pc_D = vlSelfRef.fetch_cycle__DOT__reg_pc_F;
        vlSelfRef.fetch_cycle__DOT__pc_four_F = ((IData)(4U) 
                                                 + vlSelfRef.fetch_cycle__DOT__pc_F);
    }
    fetch_cycle__DOT__gshare_fetch__DOT__addr_pht = 
        (0x3ffU & (vlSelfRef.fetch_cycle__DOT__pc_F 
                   ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
    fetch_cycle__DOT__gshare_fetch__DOT__predict_taken 
        = (1U & (vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT
                 [fetch_cycle__DOT__gshare_fetch__DOT__addr_pht] 
                 >> 1U));
    fetch_cycle__DOT__gshare_fetch__DOT__hit = ((vlSelfRef.fetch_cycle__DOT__pc_F 
                                                 >> 0xaU) 
                                                == 
                                                vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__tag
                                                [(0x3ffU 
                                                  & vlSelfRef.fetch_cycle__DOT__pc_F)]);
    vlSelfRef.fetch_cycle__DOT__pc_sel = ((IData)(fetch_cycle__DOT__gshare_fetch__DOT__hit) 
                                          & (IData)(fetch_cycle__DOT__gshare_fetch__DOT__predict_taken));
    if (vlSelfRef.fetch_cycle__DOT__pc_sel) {
        if (vlSelfRef.fetch_cycle__DOT__pc_sel) {
            vlSelfRef.fetch_cycle__DOT__pc_Q1 = vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB
                [(0x3ffU & vlSelfRef.fetch_cycle__DOT__pc_F)];
        }
    } else {
        vlSelfRef.fetch_cycle__DOT__pc_Q1 = vlSelfRef.fetch_cycle__DOT__pc_four_F;
    }
    if (vlSelfRef.fetch_cycle__DOT__pc_rp_sel) {
        if (vlSelfRef.fetch_cycle__DOT__pc_rp_sel) {
            vlSelfRef.fetch_cycle__DOT__pc_Q2 = vlSelfRef.fetch_cycle__DOT__pc_rp;
        }
    } else {
        vlSelfRef.fetch_cycle__DOT__pc_Q2 = vlSelfRef.fetch_cycle__DOT__pc_Q1;
    }
}

VL_ATTR_COLD void Vfetch_cycle___024root___eval_triggers__stl(Vfetch_cycle___024root* vlSelf);

VL_ATTR_COLD bool Vfetch_cycle___024root___eval_phase__stl(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfetch_cycle___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfetch_cycle___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__ico(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__act(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__nba(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vfetch_cycle___024root___ctor_var_reset(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_en_F = VL_RAND_RESET_I(1);
    vlSelf->i_branche_en_D = VL_RAND_RESET_I(1);
    vlSelf->i_taken_E = VL_RAND_RESET_I(1);
    vlSelf->i_pc_E = VL_RAND_RESET_I(32);
    vlSelf->i_alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->o_instr_D = VL_RAND_RESET_I(32);
    vlSelf->o_pc_4_D = VL_RAND_RESET_I(32);
    vlSelf->o_pc_D = VL_RAND_RESET_I(32);
    vlSelf->o_rst_br_F = VL_RAND_RESET_I(1);
    vlSelf->fetch_cycle__DOT__pc_four_F = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__pc_Q1 = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__pc_Q2 = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__pc_rp = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->fetch_cycle__DOT__pc_rp_sel = VL_RAND_RESET_I(1);
    vlSelf->fetch_cycle__DOT__reg_instr_F = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__reg_pc_4_F = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__reg_pc_F = VL_RAND_RESET_I(32);
    vlSelf->fetch_cycle__DOT__gshare_fetch__DOT__Pattern = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->fetch_cycle__DOT__gshare_fetch__DOT__tag[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->fetch_cycle__DOT__gshare_fetch__DOT__BTB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->fetch_cycle__DOT__gshare_fetch__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2049; ++__Vi0) {
        vlSelf->fetch_cycle__DOT__inst_mem__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst__0 = VL_RAND_RESET_I(1);
}
