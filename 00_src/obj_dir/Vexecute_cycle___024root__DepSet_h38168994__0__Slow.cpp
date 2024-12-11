// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute_cycle.h for the primary calling header

#include "Vexecute_cycle__pch.h"
#include "Vexecute_cycle___024root.h"

VL_ATTR_COLD void Vexecute_cycle___024root___eval_static(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vexecute_cycle___024root___eval_initial(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
}

VL_ATTR_COLD void Vexecute_cycle___024root___eval_final(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__stl(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vexecute_cycle___024root___eval_phase__stl(Vexecute_cycle___024root* vlSelf);

VL_ATTR_COLD void Vexecute_cycle___024root___eval_settle(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_settle\n"); );
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
            Vexecute_cycle___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("execute_cycle.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vexecute_cycle___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__stl(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vexecute_cycle___024root___stl_sequent__TOP__0(Vexecute_cycle___024root* vlSelf);

VL_ATTR_COLD void Vexecute_cycle___024root___eval_stl(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vexecute_cycle___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vexecute_cycle___024root___stl_sequent__TOP__0(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_ins_n_vld_M = vlSelfRef.execute_cycle__DOT__reg_ins_n_vld_E;
    vlSelfRef.o_pc_4_M = vlSelfRef.execute_cycle__DOT__reg_pc_4_E;
    vlSelfRef.o_alu_data_M = vlSelfRef.execute_cycle__DOT__reg_alu_data_E;
    vlSelfRef.o_slt_sl_M = vlSelfRef.execute_cycle__DOT__reg_slt_sl_E;
    vlSelfRef.o_rd_wren_M = vlSelfRef.execute_cycle__DOT__reg_rd_wren_E;
    vlSelfRef.o_mem_wren_M = vlSelfRef.execute_cycle__DOT__reg_mem_wren_E;
    vlSelfRef.o_wb_sel_M = vlSelfRef.execute_cycle__DOT__reg_wb_sel_E;
    vlSelfRef.o_rs2_data_M = vlSelfRef.execute_cycle__DOT__reg_rs2_data_E;
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

VL_ATTR_COLD void Vexecute_cycle___024root___eval_triggers__stl(Vexecute_cycle___024root* vlSelf);

VL_ATTR_COLD bool Vexecute_cycle___024root___eval_phase__stl(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vexecute_cycle___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vexecute_cycle___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__ico(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__act(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__nba(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vexecute_cycle___024root___ctor_var_reset(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_enb_E = VL_RAND_RESET_I(1);
    vlSelf->i_ins_n_vld_E = VL_RAND_RESET_I(1);
    vlSelf->i_slt_sl_E = VL_RAND_RESET_I(3);
    vlSelf->i_rd_wren_E = VL_RAND_RESET_I(1);
    vlSelf->i_op_a_sel_E = VL_RAND_RESET_I(1);
    vlSelf->i_op_b_sel_E = VL_RAND_RESET_I(1);
    vlSelf->i_alu_op_E = VL_RAND_RESET_I(4);
    vlSelf->i_mem_wren_E = VL_RAND_RESET_I(1);
    vlSelf->i_wb_sel_E = VL_RAND_RESET_I(2);
    vlSelf->i_pc_E = VL_RAND_RESET_I(32);
    vlSelf->i_pc_4_E = VL_RAND_RESET_I(32);
    vlSelf->i_imm_E = VL_RAND_RESET_I(32);
    vlSelf->i_rs1_data_E = VL_RAND_RESET_I(32);
    vlSelf->i_rs2_data_E = VL_RAND_RESET_I(32);
    vlSelf->i_forwardA_E = VL_RAND_RESET_I(2);
    vlSelf->i_forwardB_E = VL_RAND_RESET_I(2);
    vlSelf->i_alu_data_M = VL_RAND_RESET_I(32);
    vlSelf->i_rs_W = VL_RAND_RESET_I(32);
    vlSelf->o_ins_n_vld_M = VL_RAND_RESET_I(1);
    vlSelf->o_pc_4_M = VL_RAND_RESET_I(32);
    vlSelf->o_alu_data_M = VL_RAND_RESET_I(32);
    vlSelf->o_slt_sl_M = VL_RAND_RESET_I(3);
    vlSelf->o_rd_wren_M = VL_RAND_RESET_I(1);
    vlSelf->o_mem_wren_M = VL_RAND_RESET_I(1);
    vlSelf->o_wb_sel_M = VL_RAND_RESET_I(2);
    vlSelf->o_rs2_data_M = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__operand_a_2 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__operand_b_2 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__reg_ins_n_vld_E = VL_RAND_RESET_I(1);
    vlSelf->execute_cycle__DOT__reg_slt_sl_E = VL_RAND_RESET_I(3);
    vlSelf->execute_cycle__DOT__reg_rd_wren_E = VL_RAND_RESET_I(1);
    vlSelf->execute_cycle__DOT__reg_mem_wren_E = VL_RAND_RESET_I(1);
    vlSelf->execute_cycle__DOT__reg_wb_sel_E = VL_RAND_RESET_I(2);
    vlSelf->execute_cycle__DOT__reg_rs2_data_E = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__reg_pc_4_E = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__reg_alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__sub = VL_RAND_RESET_Q(33);
    vlSelf->execute_cycle__DOT__block_alu__DOT__srl_tmp = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__srr_tmp = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__sra_tmp = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftl_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftr_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->execute_cycle__DOT__block_alu__DOT__shiftra_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst__0 = VL_RAND_RESET_I(1);
}
