// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc_tb.h for the primary calling header

#include "Vbrc_tb__pch.h"
#include "Vbrc_tb___024root.h"

VlCoroutine Vbrc_tb___024root___eval_initial__TOP__Vtiming__0(Vbrc_tb___024root* vlSelf);

void Vbrc_tb___024root___eval_initial(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbrc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vbrc_tb___024root___eval_initial__TOP__Vtiming__0(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.brc_tb__DOT__i_br_un = 0U;
    vlSelfRef.brc_tb__DOT__i_rs1_data = 0U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         20);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_br_un = 0U;
    vlSelfRef.brc_tb__DOT__i_rs1_data = 2U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         25);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 3U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         29);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 4U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         33);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 6U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         38);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 0xaU;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         42);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "brc_tb.sv", 
                                         44);
    vlSelfRef.brc_tb__DOT__i_br_un = 1U;
    vlSelfRef.brc_tb__DOT__i_rs1_data = 0xffffffffU;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         48);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 3U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         52);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 4U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         56);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 6U;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         61);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
    vlSelfRef.brc_tb__DOT__i_rs1_data = 0xaU;
    vlSelfRef.brc_tb__DOT__i_rs2_data = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "brc_tb.sv", 
                                         65);
    VL_WRITEF_NX("i_rs1 = %x i_rs2= %x i_uns = %x Co less %b Co euqall %b\n",0,
                 32,vlSelfRef.brc_tb__DOT__i_rs1_data,
                 32,vlSelfRef.brc_tb__DOT__i_rs2_data,
                 1,(IData)(vlSelfRef.brc_tb__DOT__i_br_un),
                 1,vlSelfRef.brc_tb__DOT__o_br_less,
                 1,(0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub)));
}

void Vbrc_tb___024root___act_sequent__TOP__0(Vbrc_tb___024root* vlSelf);

void Vbrc_tb___024root___eval_act(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vbrc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbrc_tb___024root___act_sequent__TOP__0(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.brc_tb__DOT__brc_test__DOT__sub = (0x1ffffffffULL 
                                                 & (1ULL 
                                                    + 
                                                    ((QData)((IData)(vlSelfRef.brc_tb__DOT__i_rs1_data)) 
                                                     + (QData)((IData)(
                                                                       (~ vlSelfRef.brc_tb__DOT__i_rs2_data))))));
    VL_WRITEF_NX("sub = %x\n",0,33,vlSelfRef.brc_tb__DOT__brc_test__DOT__sub);
    vlSelfRef.brc_tb__DOT__o_br_less = (1U & ((IData)(vlSelfRef.brc_tb__DOT__i_br_un)
                                               ? (~ (IData)(
                                                            (vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                                             >> 0x20U)))
                                               : ((
                                                   (vlSelfRef.brc_tb__DOT__i_rs1_data 
                                                    >> 0x1fU) 
                                                   == 
                                                   (vlSelfRef.brc_tb__DOT__i_rs2_data 
                                                    >> 0x1fU))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                                              >> 0x20U)))
                                                   : 
                                                  (vlSelfRef.brc_tb__DOT__i_rs1_data 
                                                   >> 0x1fU))));
}

void Vbrc_tb___024root___eval_nba(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbrc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vbrc_tb___024root___timing_resume(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vbrc_tb___024root___eval_triggers__act(Vbrc_tb___024root* vlSelf);

bool Vbrc_tb___024root___eval_phase__act(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbrc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbrc_tb___024root___timing_resume(vlSelf);
        Vbrc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbrc_tb___024root___eval_phase__nba(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbrc_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc_tb___024root___dump_triggers__nba(Vbrc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc_tb___024root___dump_triggers__act(Vbrc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbrc_tb___024root___eval(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbrc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("brc_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbrc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("brc_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbrc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbrc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbrc_tb___024root___eval_debug_assertions(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
