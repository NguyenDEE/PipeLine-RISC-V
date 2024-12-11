// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_cycle.h for the primary calling header

#include "Vdecode_cycle__pch.h"
#include "Vdecode_cycle___024root.h"

void Vdecode_cycle___024root___ico_sequent__TOP__0(Vdecode_cycle___024root* vlSelf);

void Vdecode_cycle___024root___eval_ico(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdecode_cycle___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdecode_cycle___024root___ico_sequent__TOP__0(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___ico_sequent__TOP__0\n"); );
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

void Vdecode_cycle___024root___eval_triggers__ico(Vdecode_cycle___024root* vlSelf);

bool Vdecode_cycle___024root___eval_phase__ico(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdecode_cycle___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdecode_cycle___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdecode_cycle___024root___eval_act(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdecode_cycle___024root___nba_sequent__TOP__0(Vdecode_cycle___024root* vlSelf);

void Vdecode_cycle___024root___eval_nba(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdecode_cycle___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdecode_cycle___024root___nba_sequent__TOP__0(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ decode_cycle__DOT__br_less_D;
    decode_cycle__DOT__br_less_D = 0;
    QData/*32:0*/ decode_cycle__DOT__brc_decode__DOT__sub;
    decode_cycle__DOT__brc_decode__DOT__sub = 0;
    CData/*0:0*/ decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0;
    decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    IData/*31:0*/ __VdlyVal__decode_cycle__DOT__reg_decode__DOT__Reg__v32;
    __VdlyVal__decode_cycle__DOT__reg_decode__DOT__Reg__v32 = 0;
    CData/*4:0*/ __VdlyDim0__decode_cycle__DOT__reg_decode__DOT__Reg__v32;
    __VdlyDim0__decode_cycle__DOT__reg_decode__DOT__Reg__v32 = 0;
    CData/*0:0*/ __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v0;
    __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v0 = 0;
    CData/*0:0*/ __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v32;
    __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v32 = 0;
    // Body
    __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v0 = 0U;
    __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v32 = 0U;
    if (vlSelfRef.i_rst) {
        __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v0 = 1U;
        vlSelfRef.decode_cycle__DOT__reg_pc_4_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_pc_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_ins_n_vld_D = 1U;
        vlSelfRef.decode_cycle__DOT__reg_slt_sl_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_rd_wren_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_op_a_sel_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_op_b_sel_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_mem_wren_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_wb_sel_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_imm_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_taken_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_rs1_addr_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_rs2_addr_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_rd_addr_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_alu_op_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_rs1_data_D = 0U;
        vlSelfRef.decode_cycle__DOT__reg_rs2_data_D = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.i_enb_D)))) {
        if (((IData)(vlSelfRef.i_rd_wren_W) & (0U != 
                                               (0x1fU 
                                                & (vlSelfRef.i_instr_D 
                                                   >> 7U))))) {
            __VdlyVal__decode_cycle__DOT__reg_decode__DOT__Reg__v32 
                = vlSelfRef.i_result_W;
            __VdlyDim0__decode_cycle__DOT__reg_decode__DOT__Reg__v32 
                = (0x1fU & (vlSelfRef.i_instr_D >> 7U));
            __VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v32 = 1U;
        }
        vlSelfRef.decode_cycle__DOT__reg_pc_4_D = vlSelfRef.i_pc_4_D;
        vlSelfRef.decode_cycle__DOT__reg_pc_D = vlSelfRef.i_pc_D;
        vlSelfRef.decode_cycle__DOT__reg_ins_n_vld_D 
            = vlSelfRef.decode_cycle__DOT__ins_n_vld_D;
        vlSelfRef.decode_cycle__DOT__reg_slt_sl_D = vlSelfRef.decode_cycle__DOT__slt_sl_D;
        vlSelfRef.decode_cycle__DOT__reg_rd_wren_D 
            = vlSelfRef.decode_cycle__DOT__rd_wren_D;
        vlSelfRef.decode_cycle__DOT__reg_op_a_sel_D 
            = vlSelfRef.decode_cycle__DOT__op_a_sel_D;
        vlSelfRef.decode_cycle__DOT__reg_op_b_sel_D 
            = vlSelfRef.decode_cycle__DOT__op_b_sel_D;
        vlSelfRef.decode_cycle__DOT__reg_mem_wren_D 
            = vlSelfRef.decode_cycle__DOT__mem_wren_D;
        vlSelfRef.decode_cycle__DOT__reg_wb_sel_D = vlSelfRef.decode_cycle__DOT__wb_sel_D;
        vlSelfRef.decode_cycle__DOT__reg_imm_D = vlSelfRef.decode_cycle__DOT__imm_D;
        vlSelfRef.decode_cycle__DOT__reg_taken_D = vlSelfRef.decode_cycle__DOT__taken_D;
        vlSelfRef.decode_cycle__DOT__reg_rs1_addr_D 
            = (0x1fU & (vlSelfRef.i_instr_D >> 0xfU));
        vlSelfRef.decode_cycle__DOT__reg_rs2_addr_D 
            = (0x1fU & (vlSelfRef.i_instr_D >> 0x14U));
        vlSelfRef.decode_cycle__DOT__reg_rd_addr_D 
            = (0x1fU & (vlSelfRef.i_instr_D >> 7U));
        vlSelfRef.decode_cycle__DOT__reg_alu_op_D = vlSelfRef.decode_cycle__DOT__alu_op_D;
        vlSelfRef.decode_cycle__DOT__reg_rs1_data_D 
            = vlSelfRef.decode_cycle__DOT__rs1_data_D;
        vlSelfRef.decode_cycle__DOT__reg_rs2_data_D 
            = ((0U == (0x1fU & (vlSelfRef.i_instr_D 
                                >> 0x14U))) ? 0U : 
               vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg
               [(0x1fU & (vlSelfRef.i_instr_D >> 0x14U))]);
    }
    if (__VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v0) {
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[1U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[2U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[3U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[4U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[5U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[6U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[7U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[8U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[9U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0xaU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0xbU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0xcU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0xdU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0xeU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0xfU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x10U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x11U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x12U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x13U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x14U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x15U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x16U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x17U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x18U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x19U] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x1aU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x1bU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x1cU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x1dU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x1eU] = 0U;
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[0x1fU] = 0U;
    }
    if (__VdlySet__decode_cycle__DOT__reg_decode__DOT__Reg__v32) {
        vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg[__VdlyDim0__decode_cycle__DOT__reg_decode__DOT__Reg__v32] 
            = __VdlyVal__decode_cycle__DOT__reg_decode__DOT__Reg__v32;
    }
    vlSelfRef.o_pc_4_E = vlSelfRef.decode_cycle__DOT__reg_pc_4_D;
    vlSelfRef.o_pc_E = vlSelfRef.decode_cycle__DOT__reg_pc_D;
    vlSelfRef.o_ins_n_vld_E = vlSelfRef.decode_cycle__DOT__reg_ins_n_vld_D;
    vlSelfRef.o_slt_sl_E = vlSelfRef.decode_cycle__DOT__reg_slt_sl_D;
    vlSelfRef.o_rd_wren_E = vlSelfRef.decode_cycle__DOT__reg_rd_wren_D;
    vlSelfRef.o_op_a_sel_E = vlSelfRef.decode_cycle__DOT__reg_op_a_sel_D;
    vlSelfRef.o_op_b_sel_E = vlSelfRef.decode_cycle__DOT__reg_op_b_sel_D;
    vlSelfRef.o_mem_wren_E = vlSelfRef.decode_cycle__DOT__reg_mem_wren_D;
    vlSelfRef.o_wb_sel_E = vlSelfRef.decode_cycle__DOT__reg_wb_sel_D;
    vlSelfRef.o_imm_E = vlSelfRef.decode_cycle__DOT__reg_imm_D;
    vlSelfRef.o_taken_E = vlSelfRef.decode_cycle__DOT__reg_taken_D;
    vlSelfRef.o_rs1_addr_E = vlSelfRef.decode_cycle__DOT__reg_rs1_addr_D;
    vlSelfRef.o_rs2_addr_E = vlSelfRef.decode_cycle__DOT__reg_rs2_addr_D;
    vlSelfRef.o_rd_addr_E = vlSelfRef.decode_cycle__DOT__reg_rd_addr_D;
    vlSelfRef.o_alu_op_E = vlSelfRef.decode_cycle__DOT__reg_alu_op_D;
    vlSelfRef.o_rs1_data_E = vlSelfRef.decode_cycle__DOT__reg_rs1_data_D;
    vlSelfRef.o_rs2_data_E = vlSelfRef.decode_cycle__DOT__reg_rs2_data_D;
    decode_cycle__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (0x1fU & (vlSelfRef.i_instr_D >> 0xfU))) 
           & (vlSelfRef.decode_cycle__DOT__reg_decode__DOT__Reg
              [(0x1fU & (vlSelfRef.i_instr_D >> 0xfU))] 
              >> 0x1fU));
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

void Vdecode_cycle___024root___eval_triggers__act(Vdecode_cycle___024root* vlSelf);

bool Vdecode_cycle___024root___eval_phase__act(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecode_cycle___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdecode_cycle___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecode_cycle___024root___eval_phase__nba(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecode_cycle___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__ico(Vdecode_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__nba(Vdecode_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_cycle___024root___dump_triggers__act(Vdecode_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecode_cycle___024root___eval(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval\n"); );
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
            Vdecode_cycle___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("decode_cycle.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdecode_cycle___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdecode_cycle___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("decode_cycle.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdecode_cycle___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("decode_cycle.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdecode_cycle___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdecode_cycle___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecode_cycle___024root___eval_debug_assertions(Vdecode_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_cycle___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_enb_D & 0xfeU))) {
        Verilated::overWidthError("i_enb_D");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_rd_wren_W & 0xfeU))) {
        Verilated::overWidthError("i_rd_wren_W");}
}
#endif  // VL_DEBUG
