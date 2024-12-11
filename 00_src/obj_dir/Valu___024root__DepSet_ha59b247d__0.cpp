// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu___024root.h"

void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf);

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ alu__DOT__carryFlag;
    alu__DOT__carryFlag = 0;
    IData/*31:0*/ alu__DOT__srl_tmp;
    alu__DOT__srl_tmp = 0;
    IData/*31:0*/ alu__DOT__srr_tmp;
    alu__DOT__srr_tmp = 0;
    IData/*31:0*/ alu__DOT__sra_tmp;
    alu__DOT__sra_tmp = 0;
    IData/*31:0*/ alu__DOT__shiftl_1__DOT__tmp;
    alu__DOT__shiftl_1__DOT__tmp = 0;
    IData/*31:0*/ alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i;
    alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ alu__DOT__shiftr_1__DOT__tmp;
    alu__DOT__shiftr_1__DOT__tmp = 0;
    IData/*31:0*/ alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i;
    alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ alu__DOT__shiftra_1__DOT__tmp;
    alu__DOT__shiftra_1__DOT__tmp = 0;
    IData/*31:0*/ alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i;
    alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0;
    // Body
    alu__DOT__carryFlag = (1U & (IData)((1ULL & ((1ULL 
                                                  + 
                                                  ((~ (QData)((IData)(vlSelfRef.i_operand_b))) 
                                                   + (QData)((IData)(vlSelfRef.i_operand_a)))) 
                                                 >> 0x20U))));
    alu__DOT__shiftl_1__DOT__tmp = vlSelfRef.i_operand_a;
    alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.i_operand_b))) {
        alu__DOT__shiftl_1__DOT__tmp = (alu__DOT__shiftl_1__DOT__tmp 
                                        << 1U);
        alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i);
    }
    alu__DOT__srl_tmp = alu__DOT__shiftl_1__DOT__tmp;
    alu__DOT__shiftr_1__DOT__tmp = vlSelfRef.i_operand_a;
    alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.i_operand_b))) {
        alu__DOT__shiftr_1__DOT__tmp = (alu__DOT__shiftr_1__DOT__tmp 
                                        >> 1U);
        alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i);
    }
    alu__DOT__srr_tmp = alu__DOT__shiftr_1__DOT__tmp;
    alu__DOT__shiftra_1__DOT__tmp = vlSelfRef.i_operand_a;
    alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.i_operand_b))) {
        alu__DOT__shiftra_1__DOT__tmp = ((0x80000000U 
                                          & vlSelfRef.i_operand_a) 
                                         | (alu__DOT__shiftra_1__DOT__tmp 
                                            >> 1U));
        alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i);
    }
    alu__DOT__sra_tmp = alu__DOT__shiftra_1__DOT__tmp;
    vlSelfRef.o_alu_data = ((8U & (IData)(vlSelfRef.i_alu_op))
                             ? ((4U & (IData)(vlSelfRef.i_alu_op))
                                 ? 0U : ((2U & (IData)(vlSelfRef.i_alu_op))
                                          ? ((1U & (IData)(vlSelfRef.i_alu_op))
                                              ? 0U : vlSelfRef.i_operand_b)
                                          : ((1U & (IData)(vlSelfRef.i_alu_op))
                                              ? alu__DOT__sra_tmp
                                              : alu__DOT__srr_tmp)))
                             : ((4U & (IData)(vlSelfRef.i_alu_op))
                                 ? ((2U & (IData)(vlSelfRef.i_alu_op))
                                     ? ((1U & (IData)(vlSelfRef.i_alu_op))
                                         ? alu__DOT__srl_tmp
                                         : (vlSelfRef.i_operand_a 
                                            & vlSelfRef.i_operand_b))
                                     : ((1U & (IData)(vlSelfRef.i_alu_op))
                                         ? (vlSelfRef.i_operand_a 
                                            | vlSelfRef.i_operand_b)
                                         : (vlSelfRef.i_operand_a 
                                            ^ vlSelfRef.i_operand_b)))
                                 : ((2U & (IData)(vlSelfRef.i_alu_op))
                                     ? ((1U & (IData)(vlSelfRef.i_alu_op))
                                         ? (IData)(alu__DOT__carryFlag)
                                         : (1U & ((
                                                   (vlSelfRef.i_operand_a 
                                                    >> 0x1fU) 
                                                   == 
                                                   (vlSelfRef.i_operand_b 
                                                    >> 0x1fU))
                                                   ? (IData)(alu__DOT__carryFlag)
                                                   : 
                                                  (vlSelfRef.i_operand_a 
                                                   >> 0x1fU))))
                                     : ((1U & (IData)(vlSelfRef.i_alu_op))
                                         ? ((IData)(1U) 
                                            + ((~ vlSelfRef.i_operand_b) 
                                               + vlSelfRef.i_operand_a))
                                         : (vlSelfRef.i_operand_a 
                                            + vlSelfRef.i_operand_b)))));
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_alu_op & 0xf0U))) {
        Verilated::overWidthError("i_alu_op");}
}
#endif  // VL_DEBUG
