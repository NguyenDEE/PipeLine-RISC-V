// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbalu.h for the primary calling header

#include "Vtbalu__pch.h"
#include "Vtbalu___024root.h"

VlCoroutine Vtbalu___024root___eval_initial__TOP__Vtiming__0(Vtbalu___024root* vlSelf);

void Vtbalu___024root___eval_initial(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtbalu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtbalu___024root___eval_initial__TOP__Vtiming__0(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbalu__DOT__i_operand_a = 1U;
    vlSelfRef.tbalu__DOT__i_operand_b = 2U;
    vlSelfRef.tbalu__DOT__i_alu_op = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         17);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("ADD = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         20);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tbalu__DOT__i_operand_a = 1U;
    vlSelfRef.tbalu__DOT__i_operand_b = 2U;
    vlSelfRef.tbalu__DOT__i_alu_op = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         24);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SUB = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 1U;
    vlSelfRef.tbalu__DOT__i_operand_b = 2U;
    vlSelfRef.tbalu__DOT__i_alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SLT so duong = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 2U;
    vlSelfRef.tbalu__DOT__i_alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SLT so am = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 2U;
    vlSelfRef.tbalu__DOT__i_alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SLTU so am = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 2U;
    vlSelfRef.tbalu__DOT__i_operand_b = 1U;
    vlSelfRef.tbalu__DOT__i_alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SLTU so duong = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffff0000U;
    vlSelfRef.tbalu__DOT__i_operand_b = 0xffffU;
    vlSelfRef.tbalu__DOT__i_alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("XOR = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 3U;
    vlSelfRef.tbalu__DOT__i_alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SLTU = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 3U;
    vlSelfRef.tbalu__DOT__i_alu_op = 6U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AND = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 0xffffU;
    vlSelfRef.tbalu__DOT__i_alu_op = 5U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("OR = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 0xffffU;
    vlSelfRef.tbalu__DOT__i_alu_op = 5U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("OR = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 3U;
    vlSelfRef.tbalu__DOT__i_alu_op = 6U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SLL = %b\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 3U;
    vlSelfRef.tbalu__DOT__i_alu_op = 8U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRL = %b\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 3U;
    vlSelfRef.tbalu__DOT__i_alu_op = 9U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRA = %b\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    vlSelfRef.tbalu__DOT__i_operand_a = 0xffffffffU;
    vlSelfRef.tbalu__DOT__i_operand_b = 0xffffU;
    vlSelfRef.tbalu__DOT__i_alu_op = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tbalu.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("LUI = %x\n",0,32,vlSelfRef.tbalu__DOT__o_alu_data);
    VL_FINISH_MT("tbalu.sv", 104, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtbalu___024root___act_sequent__TOP__0(Vtbalu___024root* vlSelf);

void Vtbalu___024root___eval_act(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbalu___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtbalu___024root___act_sequent__TOP__0(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbalu__DOT__dut__DOT__carryFlag = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + 
                                                                ((~ (QData)((IData)(vlSelfRef.tbalu__DOT__i_operand_b))) 
                                                                 + (QData)((IData)(vlSelfRef.tbalu__DOT__i_operand_a)))) 
                                                               >> 0x20U))));
    if ((0x10U & vlSelfRef.tbalu__DOT__i_operand_b)) {
        if ((0x10U & vlSelfRef.tbalu__DOT__i_operand_b)) {
            vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__i_operand_a, 0x10U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__i_operand_a, 0x10U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                = (((- (IData)((vlSelfRef.tbalu__DOT__i_operand_a 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSelfRef.tbalu__DOT__i_operand_a 
                      >> 0x10U));
        }
    } else {
        vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1 
            = vlSelfRef.tbalu__DOT__i_operand_a;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1 
            = vlSelfRef.tbalu__DOT__i_operand_a;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
            = vlSelfRef.tbalu__DOT__i_operand_a;
    }
    if ((8U & vlSelfRef.tbalu__DOT__i_operand_b)) {
        if ((8U & vlSelfRef.tbalu__DOT__i_operand_b)) {
            vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1, 8U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1, 8U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                = (((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                                >> 0x1fU))) << 0x18U) 
                   | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                      >> 8U));
        }
    } else {
        vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1;
    }
    if ((4U & vlSelfRef.tbalu__DOT__i_operand_b)) {
        if ((4U & vlSelfRef.tbalu__DOT__i_operand_b)) {
            vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2, 4U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2, 4U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                = (((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                                >> 0x1fU))) << 0x1cU) 
                   | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                      >> 4U));
        }
    } else {
        vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2;
    }
    if ((2U & vlSelfRef.tbalu__DOT__i_operand_b)) {
        if ((2U & vlSelfRef.tbalu__DOT__i_operand_b)) {
            vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3, 2U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3, 2U);
            vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4 
                = (((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                                >> 0x1fU))) << 0x1eU) 
                   | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                      >> 2U));
        }
    } else {
        vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3;
        vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4 
            = vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3;
    }
    if ((1U & vlSelfRef.tbalu__DOT__i_operand_b)) {
        if ((1U & vlSelfRef.tbalu__DOT__i_operand_b)) {
            vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4, 1U);
            vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4, 1U);
            vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp 
                = ((0x80000000U & vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4) 
                   | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4 
                      >> 1U));
        }
    } else {
        vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp = vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4;
        vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp = vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4;
        vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp = vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4;
    }
    vlSelfRef.tbalu__DOT__o_alu_data = ((8U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                         ? ((4U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                  ? 0U
                                                  : vlSelfRef.tbalu__DOT__i_operand_b)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                  ? vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp
                                                  : vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp)))
                                         : ((4U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                  ? vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp
                                                  : 
                                                 (vlSelfRef.tbalu__DOT__i_operand_a 
                                                  & vlSelfRef.tbalu__DOT__i_operand_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                  ? 
                                                 (vlSelfRef.tbalu__DOT__i_operand_a 
                                                  | vlSelfRef.tbalu__DOT__i_operand_b)
                                                  : 
                                                 (vlSelfRef.tbalu__DOT__i_operand_a 
                                                  ^ vlSelfRef.tbalu__DOT__i_operand_b)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                  ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                                  : 
                                                 (1U 
                                                  & (((vlSelfRef.tbalu__DOT__i_operand_a 
                                                       >> 0x1fU) 
                                                      == 
                                                      (vlSelfRef.tbalu__DOT__i_operand_b 
                                                       >> 0x1fU))
                                                      ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                                      : 
                                                     (vlSelfRef.tbalu__DOT__i_operand_a 
                                                      >> 0x1fU))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  ((~ vlSelfRef.tbalu__DOT__i_operand_b) 
                                                   + vlSelfRef.tbalu__DOT__i_operand_a))
                                                  : 
                                                 (vlSelfRef.tbalu__DOT__i_operand_a 
                                                  + vlSelfRef.tbalu__DOT__i_operand_b)))));
}

void Vtbalu___024root___eval_nba(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbalu___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtbalu___024root___timing_resume(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtbalu___024root___eval_triggers__act(Vtbalu___024root* vlSelf);

bool Vtbalu___024root___eval_phase__act(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtbalu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtbalu___024root___timing_resume(vlSelf);
        Vtbalu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtbalu___024root___eval_phase__nba(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtbalu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__nba(Vtbalu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__act(Vtbalu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbalu___024root___eval(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval\n"); );
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
            Vtbalu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tbalu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtbalu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tbalu.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtbalu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtbalu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtbalu___024root___eval_debug_assertions(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
