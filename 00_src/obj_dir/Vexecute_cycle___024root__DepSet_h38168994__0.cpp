// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute_cycle.h for the primary calling header

#include "Vexecute_cycle__pch.h"
#include "Vexecute_cycle___024root.h"

void Vexecute_cycle___024root___ico_sequent__TOP__0(Vexecute_cycle___024root* vlSelf);

void Vexecute_cycle___024root___eval_ico(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vexecute_cycle___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexecute_cycle___024root___ico_sequent__TOP__0(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_op_a_sel_E) {
        if (vlSelfRef.i_op_a_sel_E) {
            vlSelfRef.execute_cycle__DOT__operand_a_2 
                = vlSelfRef.i_pc_E;
        }
    } else {
        vlSelfRef.execute_cycle__DOT__operand_a_2 = 
            ((0U == (IData)(vlSelfRef.i_forwardA_E))
              ? vlSelfRef.i_rs1_data_E : ((1U == (IData)(vlSelfRef.i_forwardA_E))
                                           ? vlSelfRef.i_alu_data_M
                                           : ((2U == (IData)(vlSelfRef.i_forwardA_E))
                                               ? vlSelfRef.i_rs_W
                                               : 0U)));
    }
    if (vlSelfRef.i_op_b_sel_E) {
        if (vlSelfRef.i_op_b_sel_E) {
            vlSelfRef.execute_cycle__DOT__operand_b_2 
                = vlSelfRef.i_imm_E;
        }
    } else {
        vlSelfRef.execute_cycle__DOT__operand_b_2 = 
            ((0U == (IData)(vlSelfRef.i_forwardB_E))
              ? vlSelfRef.i_rs2_data_E : ((1U == (IData)(vlSelfRef.i_forwardB_E))
                                           ? vlSelfRef.i_alu_data_M
                                           : ((2U == (IData)(vlSelfRef.i_forwardB_E))
                                               ? vlSelfRef.i_rs_W
                                               : 0U)));
    }
    vlSelfRef.execute_cycle__DOT__block_alu__DOT__sub 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.execute_cycle__DOT__operand_a_2)) 
                                     + (QData)((IData)(
                                                       (~ vlSelfRef.execute_cycle__DOT__operand_b_2))))));
    if ((0x10U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
        if ((0x10U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_1 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.execute_cycle__DOT__operand_a_2, 0x10U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_1 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.execute_cycle__DOT__operand_a_2, 0x10U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                = (((- (IData)((vlSelfRef.execute_cycle__DOT__operand_a_2 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSelfRef.execute_cycle__DOT__operand_a_2 
                      >> 0x10U));
        }
    } else {
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_1 
            = vlSelfRef.execute_cycle__DOT__operand_a_2;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_1 
            = vlSelfRef.execute_cycle__DOT__operand_a_2;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
            = vlSelfRef.execute_cycle__DOT__operand_a_2;
    }
    if ((8U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
        if ((8U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_2 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_1, 8U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_2 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_1, 8U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                = (((- (IData)((vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                >> 0x1fU))) << 0x18U) 
                   | (vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                      >> 8U));
        }
    } else {
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_2 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_1;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_2 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_1;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1;
    }
    if ((4U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
        if ((4U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_3 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_2, 4U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_3 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_2, 4U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                = (((- (IData)((vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                >> 0x1fU))) << 0x1cU) 
                   | (vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                      >> 4U));
        }
    } else {
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_3 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_2;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_3 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_2;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2;
    }
    if ((2U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
        if ((2U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_4 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_3, 2U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_4 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_3, 2U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                = (((- (IData)((vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                >> 0x1fU))) << 0x1eU) 
                   | (vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                      >> 2U));
        }
    } else {
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_4 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_3;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_4 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_3;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3;
    }
    if ((1U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
        if ((1U & vlSelfRef.execute_cycle__DOT__operand_b_2)) {
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__srl_tmp 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_4, 1U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__srr_tmp 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_4, 1U);
            vlSelfRef.execute_cycle__DOT__block_alu__DOT__sra_tmp 
                = ((0x80000000U & vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4) 
                   | (vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                      >> 1U));
        }
    } else {
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__srl_tmp 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_4;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__srr_tmp 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_4;
        vlSelfRef.execute_cycle__DOT__block_alu__DOT__sra_tmp 
            = vlSelfRef.execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4;
    }
}

void Vexecute_cycle___024root___eval_triggers__ico(Vexecute_cycle___024root* vlSelf);

bool Vexecute_cycle___024root___eval_phase__ico(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vexecute_cycle___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vexecute_cycle___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vexecute_cycle___024root___eval_act(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vexecute_cycle___024root___nba_sequent__TOP__0(Vexecute_cycle___024root* vlSelf);

void Vexecute_cycle___024root___eval_nba(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vexecute_cycle___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexecute_cycle___024root___nba_sequent__TOP__0(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.execute_cycle__DOT__reg_pc_4_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_ins_n_vld_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_rs2_data_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_wb_sel_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_mem_wren_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_rd_wren_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_slt_sl_E = 0U;
        vlSelfRef.execute_cycle__DOT__reg_alu_data_E = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.i_enb_E)))) {
        vlSelfRef.execute_cycle__DOT__reg_pc_4_E = vlSelfRef.i_pc_4_E;
        vlSelfRef.execute_cycle__DOT__reg_ins_n_vld_E 
            = vlSelfRef.i_ins_n_vld_E;
        vlSelfRef.execute_cycle__DOT__reg_rs2_data_E 
            = vlSelfRef.i_rs2_data_E;
        vlSelfRef.execute_cycle__DOT__reg_wb_sel_E 
            = vlSelfRef.i_wb_sel_E;
        vlSelfRef.execute_cycle__DOT__reg_mem_wren_E 
            = vlSelfRef.i_mem_wren_E;
        vlSelfRef.execute_cycle__DOT__reg_rd_wren_E 
            = vlSelfRef.i_rd_wren_E;
        vlSelfRef.execute_cycle__DOT__reg_slt_sl_E 
            = vlSelfRef.i_slt_sl_E;
        vlSelfRef.execute_cycle__DOT__reg_alu_data_E 
            = ((8U & (IData)(vlSelfRef.i_alu_op_E))
                ? ((4U & (IData)(vlSelfRef.i_alu_op_E))
                    ? 0U : ((2U & (IData)(vlSelfRef.i_alu_op_E))
                             ? ((1U & (IData)(vlSelfRef.i_alu_op_E))
                                 ? 0U : vlSelfRef.execute_cycle__DOT__operand_b_2)
                             : ((1U & (IData)(vlSelfRef.i_alu_op_E))
                                 ? vlSelfRef.execute_cycle__DOT__block_alu__DOT__sra_tmp
                                 : vlSelfRef.execute_cycle__DOT__block_alu__DOT__srr_tmp)))
                : ((4U & (IData)(vlSelfRef.i_alu_op_E))
                    ? ((2U & (IData)(vlSelfRef.i_alu_op_E))
                        ? ((1U & (IData)(vlSelfRef.i_alu_op_E))
                            ? vlSelfRef.execute_cycle__DOT__block_alu__DOT__srl_tmp
                            : (vlSelfRef.execute_cycle__DOT__operand_a_2 
                               & vlSelfRef.execute_cycle__DOT__operand_b_2))
                        : ((1U & (IData)(vlSelfRef.i_alu_op_E))
                            ? (vlSelfRef.execute_cycle__DOT__operand_a_2 
                               | vlSelfRef.execute_cycle__DOT__operand_b_2)
                            : (vlSelfRef.execute_cycle__DOT__operand_a_2 
                               ^ vlSelfRef.execute_cycle__DOT__operand_b_2)))
                    : ((2U & (IData)(vlSelfRef.i_alu_op_E))
                        ? ((1U & (IData)(vlSelfRef.i_alu_op_E))
                            ? (1U & (~ (IData)((vlSelfRef.execute_cycle__DOT__block_alu__DOT__sub 
                                                >> 0x20U))))
                            : (1U & (((vlSelfRef.execute_cycle__DOT__operand_a_2 
                                       >> 0x1fU) == 
                                      (vlSelfRef.execute_cycle__DOT__operand_b_2 
                                       >> 0x1fU)) ? 
                                     (~ (IData)((vlSelfRef.execute_cycle__DOT__block_alu__DOT__sub 
                                                 >> 0x20U)))
                                      : (vlSelfRef.execute_cycle__DOT__operand_a_2 
                                         >> 0x1fU))))
                        : ((1U & (IData)(vlSelfRef.i_alu_op_E))
                            ? (IData)(vlSelfRef.execute_cycle__DOT__block_alu__DOT__sub)
                            : (vlSelfRef.execute_cycle__DOT__operand_a_2 
                               + vlSelfRef.execute_cycle__DOT__operand_b_2)))));
    }
    vlSelfRef.o_pc_4_M = vlSelfRef.execute_cycle__DOT__reg_pc_4_E;
    vlSelfRef.o_ins_n_vld_M = vlSelfRef.execute_cycle__DOT__reg_ins_n_vld_E;
    vlSelfRef.o_rs2_data_M = vlSelfRef.execute_cycle__DOT__reg_rs2_data_E;
    vlSelfRef.o_wb_sel_M = vlSelfRef.execute_cycle__DOT__reg_wb_sel_E;
    vlSelfRef.o_mem_wren_M = vlSelfRef.execute_cycle__DOT__reg_mem_wren_E;
    vlSelfRef.o_rd_wren_M = vlSelfRef.execute_cycle__DOT__reg_rd_wren_E;
    vlSelfRef.o_slt_sl_M = vlSelfRef.execute_cycle__DOT__reg_slt_sl_E;
    vlSelfRef.o_alu_data_M = vlSelfRef.execute_cycle__DOT__reg_alu_data_E;
}

void Vexecute_cycle___024root___eval_triggers__act(Vexecute_cycle___024root* vlSelf);

bool Vexecute_cycle___024root___eval_phase__act(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexecute_cycle___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vexecute_cycle___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexecute_cycle___024root___eval_phase__nba(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexecute_cycle___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__ico(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__nba(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__act(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vexecute_cycle___024root___eval(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval\n"); );
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
            Vexecute_cycle___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("execute_cycle.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vexecute_cycle___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexecute_cycle___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("execute_cycle.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vexecute_cycle___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("execute_cycle.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vexecute_cycle___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vexecute_cycle___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexecute_cycle___024root___eval_debug_assertions(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_enb_E & 0xfeU))) {
        Verilated::overWidthError("i_enb_E");}
    if (VL_UNLIKELY((vlSelfRef.i_ins_n_vld_E & 0xfeU))) {
        Verilated::overWidthError("i_ins_n_vld_E");}
    if (VL_UNLIKELY((vlSelfRef.i_slt_sl_E & 0xf8U))) {
        Verilated::overWidthError("i_slt_sl_E");}
    if (VL_UNLIKELY((vlSelfRef.i_rd_wren_E & 0xfeU))) {
        Verilated::overWidthError("i_rd_wren_E");}
    if (VL_UNLIKELY((vlSelfRef.i_op_a_sel_E & 0xfeU))) {
        Verilated::overWidthError("i_op_a_sel_E");}
    if (VL_UNLIKELY((vlSelfRef.i_op_b_sel_E & 0xfeU))) {
        Verilated::overWidthError("i_op_b_sel_E");}
    if (VL_UNLIKELY((vlSelfRef.i_alu_op_E & 0xf0U))) {
        Verilated::overWidthError("i_alu_op_E");}
    if (VL_UNLIKELY((vlSelfRef.i_mem_wren_E & 0xfeU))) {
        Verilated::overWidthError("i_mem_wren_E");}
    if (VL_UNLIKELY((vlSelfRef.i_wb_sel_E & 0xfcU))) {
        Verilated::overWidthError("i_wb_sel_E");}
    if (VL_UNLIKELY((vlSelfRef.i_forwardA_E & 0xfcU))) {
        Verilated::overWidthError("i_forwardA_E");}
    if (VL_UNLIKELY((vlSelfRef.i_forwardB_E & 0xfcU))) {
        Verilated::overWidthError("i_forwardB_E");}
}
#endif  // VL_DEBUG
