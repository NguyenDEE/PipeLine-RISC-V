// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_cycle.h for the primary calling header

#include "Vdecode_cycle__pch.h"
#include "Vdecode_cycle___024root.h"

VL_ATTR_COLD void Vdecode_cycle___024root___eval_static(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecode_cycle___024root___eval_initial(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
}

VL_ATTR_COLD void Vdecode_cycle___024root___eval_final(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__stl(Vdecode_cycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdecode_cycle___024root___eval_phase__stl(Vdecode_cycle___024root* vlSelf);

VL_ATTR_COLD void Vdecode_cycle___024root___eval_settle(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_settle\n"); );
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
            Vdecode_cycle___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("decode_cycle.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdecode_cycle___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__stl(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vdecode_cycle___024root___stl_sequent__TOP__0(Vdecode_cycle___024root* vlSelf);

VL_ATTR_COLD void Vdecode_cycle___024root___eval_stl(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdecode_cycle___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdecode_cycle___024root___stl_sequent__TOP__0(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ decode_cycle__DOT__immsel_D;
    decode_cycle__DOT__immsel_D = 0;
    CData/*0:0*/ decode_cycle__DOT__br_less_D;
    decode_cycle__DOT__br_less_D = 0;
    QData/*32:0*/ decode_cycle__DOT__brc_decode__DOT__sub;
    decode_cycle__DOT__brc_decode__DOT__sub = 0;
    CData/*0:0*/ decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0;
    decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    // Body
    vlSelfRef.decode_cycle__DOT__mem_wren_D = ((1U 
                                                & (~ 
                                                   (vlSelfRef.i_instr_D 
                                                    >> 6U))) 
                                               && ((1U 
                                                    & (vlSelfRef.i_instr_D 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.i_instr_D 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.i_instr_D 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.i_instr_D 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.i_instr_D 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.i_instr_D)))))));
    vlSelfRef.o_ins_n_vld_E = vlSelfRef.decode_cycle__DOT__reg_ins_n_vld_D;
    vlSelfRef.o_slt_sl_E = vlSelfRef.decode_cycle__DOT__reg_slt_sl_D;
    vlSelfRef.o_rd_wren_E = vlSelfRef.decode_cycle__DOT__reg_rd_wren_D;
    vlSelfRef.o_op_a_sel_E = vlSelfRef.decode_cycle__DOT__reg_op_a_sel_D;
    vlSelfRef.o_op_b_sel_E = vlSelfRef.decode_cycle__DOT__reg_op_b_sel_D;
    vlSelfRef.o_alu_op_E = vlSelfRef.decode_cycle__DOT__reg_alu_op_D;
    vlSelfRef.o_mem_wren_E = vlSelfRef.decode_cycle__DOT__reg_mem_wren_D;
    vlSelfRef.o_wb_sel_E = vlSelfRef.decode_cycle__DOT__reg_wb_sel_D;
    vlSelfRef.o_imm_E = vlSelfRef.decode_cycle__DOT__reg_imm_D;
    vlSelfRef.o_taken_E = vlSelfRef.decode_cycle__DOT__reg_taken_D;
    vlSelfRef.o_rs1_addr_E = vlSelfRef.decode_cycle__DOT__reg_rs1_addr_D;
    vlSelfRef.o_rs2_addr_E = vlSelfRef.decode_cycle__DOT__reg_rs2_addr_D;
    vlSelfRef.o_rd_addr_E = vlSelfRef.decode_cycle__DOT__reg_rd_addr_D;
    vlSelfRef.o_rs1_data_E = vlSelfRef.decode_cycle__DOT__reg_rs1_data_D;
    vlSelfRef.o_rs2_data_E = vlSelfRef.decode_cycle__DOT__reg_rs2_data_D;
    vlSelfRef.o_pc_E = vlSelfRef.decode_cycle__DOT__reg_pc_D;
    vlSelfRef.o_pc_4_E = vlSelfRef.decode_cycle__DOT__reg_pc_4_D;
    decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (0x1fU & (vlSelfRef.i_instr_D >> 0xfU))) 
           & (vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg
              [(0x1fU & (vlSelfRef.i_instr_D >> 0xfU))] 
              >> 0x1fU));
    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
    if ((0x40U & vlSelfRef.i_instr_D)) {
        vlSelfRef.decode_cycle__DOT__rd_wren_D = ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.i_instr_D 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.i_instr_D)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.i_instr_D 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.i_instr_D 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.i_instr_D)))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.i_instr_D 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.i_instr_D 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.i_instr_D))))));
        vlSelfRef.decode_cycle__DOT__ins_n_vld_D = 
            ((1U & (vlSelfRef.i_instr_D >> 5U)) && 
             ((1U & (~ (vlSelfRef.i_instr_D >> 4U))) 
              && ((8U & vlSelfRef.i_instr_D) ? ((1U 
                                                 & (vlSelfRef.i_instr_D 
                                                    >> 2U)) 
                                                && ((1U 
                                                     & (vlSelfRef.i_instr_D 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.i_instr_D)))
                   : ((4U & vlSelfRef.i_instr_D) ? 
                      ((1U & (vlSelfRef.i_instr_D >> 1U)) 
                       && (1U & vlSelfRef.i_instr_D))
                       : ((1U & (vlSelfRef.i_instr_D 
                                 >> 1U)) && (1U & vlSelfRef.i_instr_D))))));
        vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
        vlSelfRef.decode_cycle__DOT__op_a_sel_D = (
                                                   (1U 
                                                    & (vlSelfRef.i_instr_D 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.i_instr_D 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.i_instr_D)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.i_instr_D 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.i_instr_D 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.i_instr_D)))
                                                            : 
                                                           ((1U 
                                                             & (~ 
                                                                (vlSelfRef.i_instr_D 
                                                                 >> 2U))) 
                                                            && ((1U 
                                                                 & (vlSelfRef.i_instr_D 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.i_instr_D))))));
        vlSelfRef.decode_cycle__DOT__op_b_sel_D = (
                                                   (1U 
                                                    & (vlSelfRef.i_instr_D 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.i_instr_D 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.i_instr_D)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.i_instr_D 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.i_instr_D 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.i_instr_D)))
                                                            : 
                                                           ((4U 
                                                             & vlSelfRef.i_instr_D)
                                                             ? 
                                                            ((1U 
                                                              & (vlSelfRef.i_instr_D 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.i_instr_D))
                                                             : 
                                                            ((1U 
                                                              & (vlSelfRef.i_instr_D 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.i_instr_D))))));
        if ((0x20U & vlSelfRef.i_instr_D)) {
            if ((0x10U & vlSelfRef.i_instr_D)) {
                vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            } else if ((8U & vlSelfRef.i_instr_D)) {
                if ((4U & vlSelfRef.i_instr_D)) {
                    if ((2U & vlSelfRef.i_instr_D)) {
                        if ((1U & vlSelfRef.i_instr_D)) {
                            vlSelfRef.decode_cycle__DOT__wb_sel_D = 2U;
                            decode_cycle__DOT__immsel_D = 4U;
                            vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                            vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                        } else {
                            vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                            decode_cycle__DOT__immsel_D = 0U;
                            vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                            vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                        decode_cycle__DOT__immsel_D = 0U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
            } else if ((4U & vlSelfRef.i_instr_D)) {
                if ((2U & vlSelfRef.i_instr_D)) {
                    if ((1U & vlSelfRef.i_instr_D)) {
                        vlSelfRef.decode_cycle__DOT__wb_sel_D = 2U;
                        decode_cycle__DOT__immsel_D = 1U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                        decode_cycle__DOT__immsel_D = 0U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.i_instr_D)) {
                if ((1U & vlSelfRef.i_instr_D)) {
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 1U;
                    decode_cycle__DOT__immsel_D = 3U;
                    vlSelfRef.decode_cycle__DOT__br_un_D 
                        = ((7U == (7U & (vlSelfRef.i_instr_D 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.i_instr_D 
                                           >> 0xcU))));
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
            decode_cycle__DOT__immsel_D = 0U;
            vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
            vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
        }
    } else {
        if ((0x20U & vlSelfRef.i_instr_D)) {
            vlSelfRef.decode_cycle__DOT__rd_wren_D 
                = ((1U & (vlSelfRef.i_instr_D >> 4U)) 
                   && ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 3U))) && ((4U & vlSelfRef.i_instr_D)
                                               ? ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D))
                                               : ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D)))));
            if ((0x10U & vlSelfRef.i_instr_D)) {
                vlSelfRef.decode_cycle__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 3U))) && ((4U & vlSelfRef.i_instr_D)
                                               ? ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D))
                                               : ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D))));
                vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                vlSelfRef.decode_cycle__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.i_instr_D 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D))));
                vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                if ((8U & vlSelfRef.i_instr_D)) {
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.i_instr_D)) {
                    if ((2U & vlSelfRef.i_instr_D)) {
                        if ((1U & vlSelfRef.i_instr_D)) {
                            decode_cycle__DOT__immsel_D = 5U;
                            vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                            vlSelfRef.decode_cycle__DOT__alu_op_D = 0xaU;
                        } else {
                            decode_cycle__DOT__immsel_D = 0U;
                            vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                            vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                        }
                    } else {
                        decode_cycle__DOT__immsel_D = 0U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    }
                } else {
                    decode_cycle__DOT__immsel_D = 0U;
                    if ((2U & vlSelfRef.i_instr_D)) {
                        if ((1U & vlSelfRef.i_instr_D)) {
                            vlSelfRef.decode_cycle__DOT__alu_op_D 
                                = ((0x4000U & vlSelfRef.i_instr_D)
                                    ? ((0x2000U & vlSelfRef.i_instr_D)
                                        ? ((0x1000U 
                                            & vlSelfRef.i_instr_D)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.i_instr_D)
                                            ? ((0x40000000U 
                                                & vlSelfRef.i_instr_D)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.i_instr_D)
                                     ? ((0x1000U & vlSelfRef.i_instr_D)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.i_instr_D)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.i_instr_D)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.decode_cycle__DOT__br_un_D 
                                = (3U == (IData)(vlSelfRef.decode_cycle__DOT__alu_op_D));
                        } else {
                            vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                            vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    }
                }
            } else {
                vlSelfRef.decode_cycle__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.i_instr_D 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D))));
                if ((8U & vlSelfRef.i_instr_D)) {
                    vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.i_instr_D)) {
                    vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                } else if ((2U & vlSelfRef.i_instr_D)) {
                    if ((1U & vlSelfRef.i_instr_D)) {
                        vlSelfRef.decode_cycle__DOT__slt_sl_D 
                            = ((0U == (7U & (vlSelfRef.i_instr_D 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlSelfRef.i_instr_D 
                                                   >> 0xcU)))
                                         ? 1U : 2U));
                        vlSelfRef.decode_cycle__DOT__wb_sel_D = 1U;
                        decode_cycle__DOT__immsel_D = 2U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                        vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                        decode_cycle__DOT__immsel_D = 0U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
                vlSelfRef.decode_cycle__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.i_instr_D 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.i_instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.i_instr_D))));
            }
        } else if ((0x10U & vlSelfRef.i_instr_D)) {
            vlSelfRef.decode_cycle__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.i_instr_D >> 3U))) 
                   && ((4U & vlSelfRef.i_instr_D) ? 
                       ((1U & (vlSelfRef.i_instr_D 
                               >> 1U)) && (1U & vlSelfRef.i_instr_D))
                        : ((1U & (vlSelfRef.i_instr_D 
                                  >> 1U)) && (1U & vlSelfRef.i_instr_D))));
            vlSelfRef.decode_cycle__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.i_instr_D >> 3U))) 
                   && ((4U & vlSelfRef.i_instr_D) ? 
                       ((1U & (vlSelfRef.i_instr_D 
                               >> 1U)) && (1U & vlSelfRef.i_instr_D))
                        : ((1U & (vlSelfRef.i_instr_D 
                                  >> 1U)) && (1U & vlSelfRef.i_instr_D))));
            vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
            vlSelfRef.decode_cycle__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.i_instr_D >> 3U))) 
                   && ((4U & vlSelfRef.i_instr_D) ? 
                       ((1U & (vlSelfRef.i_instr_D 
                               >> 1U)) && (1U & vlSelfRef.i_instr_D))
                        : ((1U & (vlSelfRef.i_instr_D 
                                  >> 1U)) && (1U & vlSelfRef.i_instr_D))));
            vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
            if ((8U & vlSelfRef.i_instr_D)) {
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.i_instr_D)) {
                if ((2U & vlSelfRef.i_instr_D)) {
                    if ((1U & vlSelfRef.i_instr_D)) {
                        decode_cycle__DOT__immsel_D = 5U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    } else {
                        decode_cycle__DOT__immsel_D = 0U;
                        vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                        vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                    }
                } else {
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.i_instr_D)) {
                if ((1U & vlSelfRef.i_instr_D)) {
                    decode_cycle__DOT__immsel_D = 1U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D 
                        = ((0x4000U & vlSelfRef.i_instr_D)
                            ? ((0x2000U & vlSelfRef.i_instr_D)
                                ? ((0x1000U & vlSelfRef.i_instr_D)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.i_instr_D)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.i_instr_D)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.i_instr_D)
                                ? ((0x1000U & vlSelfRef.i_instr_D)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.i_instr_D)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.decode_cycle__DOT__br_un_D 
                        = (3U == (IData)(vlSelfRef.decode_cycle__DOT__alu_op_D));
                } else {
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
            } else {
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.decode_cycle__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.i_instr_D >> 3U))) 
                   && ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 2U))) && ((1U & 
                                               (vlSelfRef.i_instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.i_instr_D))));
            vlSelfRef.decode_cycle__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.i_instr_D >> 3U))) 
                   && ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 2U))) && ((1U & 
                                               (vlSelfRef.i_instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.i_instr_D))));
            if ((8U & vlSelfRef.i_instr_D)) {
                vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.i_instr_D)) {
                vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            } else if ((2U & vlSelfRef.i_instr_D)) {
                if ((1U & vlSelfRef.i_instr_D)) {
                    vlSelfRef.decode_cycle__DOT__slt_sl_D 
                        = ((0x4000U & vlSelfRef.i_instr_D)
                            ? ((0x2000U & vlSelfRef.i_instr_D)
                                ? 5U : ((0x1000U & vlSelfRef.i_instr_D)
                                         ? 7U : 6U))
                            : ((0x2000U & vlSelfRef.i_instr_D)
                                ? 5U : ((0x1000U & vlSelfRef.i_instr_D)
                                         ? 4U : 3U)));
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 1U;
                    decode_cycle__DOT__immsel_D = 1U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                    vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                    decode_cycle__DOT__immsel_D = 0U;
                    vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                    vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.decode_cycle__DOT__slt_sl_D = 0U;
                vlSelfRef.decode_cycle__DOT__wb_sel_D = 0U;
                decode_cycle__DOT__immsel_D = 0U;
                vlSelfRef.decode_cycle__DOT__br_un_D = 0U;
                vlSelfRef.decode_cycle__DOT__alu_op_D = 0U;
            }
            vlSelfRef.decode_cycle__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.i_instr_D >> 3U))) 
                   && ((1U & (~ (vlSelfRef.i_instr_D 
                                 >> 2U))) && ((1U & 
                                               (vlSelfRef.i_instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.i_instr_D))));
        }
        vlSelfRef.decode_cycle__DOT__op_a_sel_D = (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.i_instr_D 
                                                        >> 5U))) 
                                                   && ((1U 
                                                        & (vlSelfRef.i_instr_D 
                                                           >> 4U)) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.i_instr_D 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.i_instr_D 
                                                                   >> 2U)) 
                                                               && ((1U 
                                                                    & (vlSelfRef.i_instr_D 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.i_instr_D))))));
    }
    vlSelfRef.decode_cycle__DOT__rs1_data_D = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.i_instr_D 
                                                    >> 0xfU)))
                                                ? 0U
                                                : vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg
                                               [(0x1fU 
                                                 & (vlSelfRef.i_instr_D 
                                                    >> 0xfU))]);
    if ((4U & (IData)(decode_cycle__DOT__immsel_D))) {
        if ((2U & (IData)(decode_cycle__DOT__immsel_D))) {
            vlSelfRef.decode_cycle__DOT__imm_D = vlSelfRef.i_instr_D;
        } else if ((1U & (IData)(decode_cycle__DOT__immsel_D))) {
            vlSelfRef.decode_cycle__DOT__imm_D = (0xfffff000U 
                                                  & vlSelfRef.i_instr_D);
        } else {
            vlSelfRef.decode_cycle__DOT__imm_D = ((0xfffU 
                                                   & vlSelfRef.decode_cycle__DOT__imm_D) 
                                                  | (((- (IData)(
                                                                 (vlSelfRef.i_instr_D 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | (0xff000U 
                                                        & vlSelfRef.i_instr_D)));
            vlSelfRef.decode_cycle__DOT__imm_D = ((0xfffff000U 
                                                   & vlSelfRef.decode_cycle__DOT__imm_D) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.i_instr_D 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.i_instr_D 
                                                           >> 0x14U))));
        }
    } else if ((2U & (IData)(decode_cycle__DOT__immsel_D))) {
        if ((1U & (IData)(decode_cycle__DOT__immsel_D))) {
            vlSelfRef.decode_cycle__DOT__imm_D = ((0x7ffU 
                                                   & vlSelfRef.decode_cycle__DOT__imm_D) 
                                                  | (((- (IData)(
                                                                 (vlSelfRef.i_instr_D 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (0x800U 
                                                        & (vlSelfRef.i_instr_D 
                                                           << 4U))));
            vlSelfRef.decode_cycle__DOT__imm_D = ((0xfffff800U 
                                                   & vlSelfRef.decode_cycle__DOT__imm_D) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.i_instr_D 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.i_instr_D 
                                                           >> 7U))));
        } else {
            vlSelfRef.decode_cycle__DOT__imm_D = ((0x1fU 
                                                   & vlSelfRef.decode_cycle__DOT__imm_D) 
                                                  | (((- (IData)(
                                                                 (vlSelfRef.i_instr_D 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & (vlSelfRef.i_instr_D 
                                                           >> 0x14U))));
            vlSelfRef.decode_cycle__DOT__imm_D = ((0xffffffe0U 
                                                   & vlSelfRef.decode_cycle__DOT__imm_D) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.i_instr_D 
                                                        >> 7U)));
        }
    } else if ((1U & (IData)(decode_cycle__DOT__immsel_D))) {
        vlSelfRef.decode_cycle__DOT__imm_D = ((0x1fU 
                                               & vlSelfRef.decode_cycle__DOT__imm_D) 
                                              | (((- (IData)(
                                                             (vlSelfRef.i_instr_D 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | (0x7e0U 
                                                    & (vlSelfRef.i_instr_D 
                                                       >> 0x14U))));
        vlSelfRef.decode_cycle__DOT__imm_D = ((0xffffffe0U 
                                               & vlSelfRef.decode_cycle__DOT__imm_D) 
                                              | (0x1fU 
                                                 & (vlSelfRef.i_instr_D 
                                                    >> 0x14U)));
    } else {
        vlSelfRef.decode_cycle__DOT__imm_D = 0U;
    }
    decode_cycle__DOT__brc_decode__DOT__sub = (0x1ffffffffULL 
                                               & (1ULL 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.decode_cycle__DOT__rs1_data_D)) 
                                                   + (QData)((IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.i_instr_D 
                                                                           >> 0x14U)))
                                                                       ? 0xffffffffU
                                                                       : 
                                                                      (~ 
                                                                       vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSelfRef.i_instr_D 
                                                                           >> 0x14U))])))))));
    decode_cycle__DOT__br_less_D = (1U & ((IData)(vlSelfRef.decode_cycle__DOT__br_un_D)
                                           ? (~ (IData)(
                                                        (decode_cycle__DOT__brc_decode__DOT__sub 
                                                         >> 0x20U)))
                                           : (((IData)(decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                               == (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.i_instr_D 
                                                        >> 0x14U))) 
                                                   & (vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg
                                                      [
                                                      (0x1fU 
                                                       & (vlSelfRef.i_instr_D 
                                                          >> 0x14U))] 
                                                      >> 0x1fU)))
                                               ? (~ (IData)(
                                                            (decode_cycle__DOT__brc_decode__DOT__sub 
                                                             >> 0x20U)))
                                               : (IData)(decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0))));
    vlSelfRef.decode_cycle__DOT__taken_D = ((1U & (vlSelfRef.i_instr_D 
                                                   >> 6U)) 
                                            && ((1U 
                                                 & (vlSelfRef.i_instr_D 
                                                    >> 5U)) 
                                                && ((1U 
                                                     & (~ 
                                                        (vlSelfRef.i_instr_D 
                                                         >> 4U))) 
                                                    && ((8U 
                                                         & vlSelfRef.i_instr_D)
                                                         ? 
                                                        ((1U 
                                                          & (vlSelfRef.i_instr_D 
                                                             >> 2U)) 
                                                         && ((1U 
                                                              & (vlSelfRef.i_instr_D 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.i_instr_D)))
                                                         : 
                                                        ((4U 
                                                          & vlSelfRef.i_instr_D)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.i_instr_D 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.i_instr_D))
                                                          : 
                                                         ((1U 
                                                           & (vlSelfRef.i_instr_D 
                                                              >> 1U)) 
                                                          && ((1U 
                                                               & vlSelfRef.i_instr_D) 
                                                              && (1U 
                                                                  & ((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelfRef.i_instr_D 
                                                                          >> 0xcU)))
                                                                      ? 
                                                                     (0ULL 
                                                                      == decode_cycle__DOT__brc_decode__DOT__sub)
                                                                      : 
                                                                     ((4U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelfRef.i_instr_D 
                                                                           >> 0xcU)))
                                                                       ? (IData)(decode_cycle__DOT__br_less_D)
                                                                       : 
                                                                      ((6U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelfRef.i_instr_D 
                                                                            >> 0xcU)))
                                                                        ? (IData)(decode_cycle__DOT__br_less_D)
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelfRef.i_instr_D 
                                                                             >> 0xcU)))
                                                                         ? 
                                                                        (0ULL 
                                                                         != decode_cycle__DOT__brc_decode__DOT__sub)
                                                                         : 
                                                                        (~ (IData)(decode_cycle__DOT__br_less_D))))))))))))));
}

VL_ATTR_COLD void Vdecode_cycle___024root___eval_triggers__stl(Vdecode_cycle___024root* vlSelf);

VL_ATTR_COLD bool Vdecode_cycle___024root___eval_phase__stl(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdecode_cycle___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdecode_cycle___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__ico(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__act(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__nba(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vdecode_cycle___024root___ctor_var_reset(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_enb_D = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_pc_D = VL_RAND_RESET_I(32);
    vlSelf->i_pc_4_D = VL_RAND_RESET_I(32);
    vlSelf->i_instr_D = VL_RAND_RESET_I(32);
    vlSelf->i_result_W = VL_RAND_RESET_I(32);
    vlSelf->i_rd_wren_W = VL_RAND_RESET_I(1);
    vlSelf->o_ins_n_vld_E = VL_RAND_RESET_I(1);
    vlSelf->o_slt_sl_E = VL_RAND_RESET_I(3);
    vlSelf->o_rd_wren_E = VL_RAND_RESET_I(1);
    vlSelf->o_op_a_sel_E = VL_RAND_RESET_I(1);
    vlSelf->o_op_b_sel_E = VL_RAND_RESET_I(1);
    vlSelf->o_alu_op_E = VL_RAND_RESET_I(4);
    vlSelf->o_mem_wren_E = VL_RAND_RESET_I(1);
    vlSelf->o_wb_sel_E = VL_RAND_RESET_I(2);
    vlSelf->o_imm_E = VL_RAND_RESET_I(32);
    vlSelf->o_taken_E = VL_RAND_RESET_I(1);
    vlSelf->o_rs1_addr_E = VL_RAND_RESET_I(5);
    vlSelf->o_rs2_addr_E = VL_RAND_RESET_I(5);
    vlSelf->o_rd_addr_E = VL_RAND_RESET_I(5);
    vlSelf->o_rs1_data_E = VL_RAND_RESET_I(32);
    vlSelf->o_rs2_data_E = VL_RAND_RESET_I(32);
    vlSelf->o_pc_E = VL_RAND_RESET_I(32);
    vlSelf->o_pc_4_E = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__rs1_data_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__br_un_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__ins_n_vld_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__slt_sl_D = VL_RAND_RESET_I(3);
    vlSelf->decode_cycle__DOT__rd_wren_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__op_a_sel_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__op_b_sel_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__alu_op_D = VL_RAND_RESET_I(4);
    vlSelf->decode_cycle__DOT__mem_wren_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__wb_sel_D = VL_RAND_RESET_I(2);
    vlSelf->decode_cycle__DOT__taken_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__reg_ins_n_vld_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__reg_slt_sl_D = VL_RAND_RESET_I(3);
    vlSelf->decode_cycle__DOT__reg_rd_wren_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__reg_op_a_sel_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__reg_op_b_sel_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__reg_alu_op_D = VL_RAND_RESET_I(4);
    vlSelf->decode_cycle__DOT__reg_mem_wren_D = VL_RAND_RESET_I(1);
    vlSelf->decode_cycle__DOT__reg_wb_sel_D = VL_RAND_RESET_I(2);
    vlSelf->decode_cycle__DOT__reg_rs1_addr_D = VL_RAND_RESET_I(5);
    vlSelf->decode_cycle__DOT__reg_rs2_addr_D = VL_RAND_RESET_I(5);
    vlSelf->decode_cycle__DOT__reg_rd_addr_D = VL_RAND_RESET_I(5);
    vlSelf->decode_cycle__DOT__reg_pc_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__reg_pc_4_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__reg_rs1_data_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__reg_rs2_data_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__reg_imm_D = VL_RAND_RESET_I(32);
    vlSelf->decode_cycle__DOT__reg_taken_D = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->decode_cycle__DOT__reg_decode__DOT__Reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst__0 = VL_RAND_RESET_I(1);
}
