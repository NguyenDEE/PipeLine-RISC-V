// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline___024root.h"

void Vpipeline___024root___ico_sequent__TOP__0(Vpipeline___024root* vlSelf);

void Vpipeline___024root___eval_ico(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpipeline___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpipeline___024root___ico_sequent__TOP__0(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ pipeline__DOT__decode_pipeline__DOT__immsel_D;
    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0;
    CData/*0:0*/ pipeline__DOT__decode_pipeline__DOT__br_less_D;
    pipeline__DOT__decode_pipeline__DOT__br_less_D = 0;
    QData/*32:0*/ pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub;
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub = 0;
    CData/*0:0*/ pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0;
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    // Body
    vlSelfRef.pipeline__DOT__rst_E = vlSelfRef.i_rst;
    vlSelfRef.pipeline__DOT__rst_D = vlSelfRef.i_rst;
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
        = ((4U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
            ? ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                         : (((IData)(vlSelfRef.o_SRAM_DQ) 
                             << 0x10U) | (0xffffU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))))
            : ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                    ? ((0xffff0000U & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.o_SRAM_DQ))
                    : vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q)
                : vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q));
    vlSelfRef.pipeline__DOT__rst_M = vlSelfRef.i_rst;
    if (((((5U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D)) 
           | (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
          | (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
         & (((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
             == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
            | ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
               == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D))))) {
        vlSelfRef.pipeline__DOT__rst_M = 1U;
    }
    vlSelfRef.pipeline__DOT__rst_F = vlSelfRef.i_rst;
    if (vlSelfRef.pipeline__DOT__rst_F) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D = 0U;
        vlSelfRef.pipeline__DOT__instr_D = 0U;
    } else {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F 
            = ((IData)(4U) + vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F);
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D 
            = (0x1fU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 0x14U));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D 
            = (0x1fU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 0xfU));
        vlSelfRef.pipeline__DOT__instr_D = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F;
    }
    if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_sel) {
        if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_sel) {
            vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q1 
                = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB
                [(0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F)];
        }
    } else {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q1 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F;
    }
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D)) 
           & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
              [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D] 
              >> 0x1fU));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_data_D 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D))
            ? 0U : vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
           [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D]);
    vlSelfRef.pipeline__DOT__enb_branch = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 6U)) 
                                           && ((1U 
                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 5U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.pipeline__DOT__instr_D 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.pipeline__DOT__instr_D 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.pipeline__DOT__instr_D)))))));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__mem_wren_D 
        = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                     >> 6U))) && ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                         >> 5U)) && 
                                  ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                             >> 4U))) 
                                   && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSelfRef.pipeline__DOT__instr_D)))))));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
    if ((0x40U & vlSelfRef.pipeline__DOT__instr_D)) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_a_sel_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        if ((0x20U & vlSelfRef.pipeline__DOT__instr_D)) {
            if ((0x10U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                        if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 2U;
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 4U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        } else {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 2U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 1U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 3U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D 
                        = ((7U == (7U & (vlSelfRef.pipeline__DOT__instr_D 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.pipeline__DOT__instr_D 
                                           >> 0xcU))));
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
            pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
        }
    } else {
        if ((0x20U & vlSelfRef.pipeline__DOT__instr_D)) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                          >> 4U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))));
            if ((0x10U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                               ? ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))
                                               : ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                        if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 5U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0xaU;
                        } else {
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                        if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D 
                                = ((0x4000U & vlSelfRef.pipeline__DOT__instr_D)
                                    ? ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                        ? ((0x1000U 
                                            & vlSelfRef.pipeline__DOT__instr_D)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.pipeline__DOT__instr_D)
                                            ? ((0x40000000U 
                                                & vlSelfRef.pipeline__DOT__instr_D)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                     ? ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D 
                                = (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D));
                        } else {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                }
            } else {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
                if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D 
                            = ((0U == (7U & (vlSelfRef.pipeline__DOT__instr_D 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 0xcU)))
                                         ? 1U : 2U));
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 2U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
            }
        } else if ((0x10U & vlSelfRef.pipeline__DOT__instr_D)) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
            if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 5U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 1U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D 
                        = ((0x4000U & vlSelfRef.pipeline__DOT__instr_D)
                            ? ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.pipeline__DOT__instr_D)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.pipeline__DOT__instr_D)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.pipeline__DOT__instr_D)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D 
                        = (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D));
                } else {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D 
                        = ((0x4000U & vlSelfRef.pipeline__DOT__instr_D)
                            ? ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? 5U : ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 7U : 6U))
                            : ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? 5U : ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 4U : 3U)));
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 1U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
        }
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_a_sel_D 
            = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                         >> 5U))) && ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                             >> 4U)) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))))));
    }
    if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel) {
        if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel) {
            vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q2 
                = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp;
        }
    } else {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q2 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q1;
    }
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_data_D)) 
                                     + (QData)((IData)(
                                                       ((0U 
                                                         == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D))
                                                         ? 0xffffffffU
                                                         : 
                                                        (~ 
                                                         vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
                                                         [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D])))))));
    if ((4U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
        if ((2U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = vlSelfRef.pipeline__DOT__instr_D;
        } else if ((1U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = (0xfffff000U & vlSelfRef.pipeline__DOT__instr_D);
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x1fU))) << 0x14U) 
                      | (0xff000U & vlSelfRef.pipeline__DOT__instr_D)));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffff000U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | ((0x800U & (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 9U)) | (0x7feU 
                                            & (vlSelfRef.pipeline__DOT__instr_D 
                                               >> 0x14U))));
        }
    } else if ((2U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
        if ((1U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0x7ffU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x1fU))) << 0xcU) 
                      | (0x800U & (vlSelfRef.pipeline__DOT__instr_D 
                                   << 4U))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffff800U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | ((0x7e0U & (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 0x14U)) | (0x1eU 
                                               & (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 7U))));
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0x1fU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x1fU))) << 0xbU) 
                      | (0x7e0U & (vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x14U))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xffffffe0U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (0x1fU & (vlSelfRef.pipeline__DOT__instr_D 
                               >> 7U)));
        }
    } else if ((1U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
            = ((0x1fU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
               | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                               >> 0x1fU))) << 0xbU) 
                  | (0x7e0U & (vlSelfRef.pipeline__DOT__instr_D 
                               >> 0x14U))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
            = ((0xffffffe0U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
               | (0x1fU & (vlSelfRef.pipeline__DOT__instr_D 
                           >> 0x14U)));
    } else {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D = 0U;
    }
    pipeline__DOT__decode_pipeline__DOT__br_less_D 
        = (1U & ((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D)
                  ? (~ (IData)((pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                >> 0x20U))) : (((IData)(pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                                == 
                                                ((0U 
                                                  != (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D)) 
                                                 & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
                                                    [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D] 
                                                    >> 0x1fU)))
                                                ? (~ (IData)(
                                                             (pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                                              >> 0x20U)))
                                                : (IData)(pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0))));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__taken_D 
        = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                  >> 6U)) && ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 4U))) 
                                                 && ((8U 
                                                      & vlSelfRef.pipeline__DOT__instr_D)
                                                      ? 
                                                     ((1U 
                                                       & (vlSelfRef.pipeline__DOT__instr_D 
                                                          >> 2U)) 
                                                      && ((1U 
                                                           & (vlSelfRef.pipeline__DOT__instr_D 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.pipeline__DOT__instr_D)))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.pipeline__DOT__instr_D)
                                                       ? 
                                                      ((1U 
                                                        & (vlSelfRef.pipeline__DOT__instr_D 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & vlSelfRef.pipeline__DOT__instr_D))
                                                       : 
                                                      ((1U 
                                                        & (vlSelfRef.pipeline__DOT__instr_D 
                                                           >> 1U)) 
                                                       && ((1U 
                                                            & vlSelfRef.pipeline__DOT__instr_D) 
                                                           && (1U 
                                                               & ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelfRef.pipeline__DOT__instr_D 
                                                                       >> 0xcU)))
                                                                   ? 
                                                                  (0ULL 
                                                                   == pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub)
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelfRef.pipeline__DOT__instr_D 
                                                                        >> 0xcU)))
                                                                    ? (IData)(pipeline__DOT__decode_pipeline__DOT__br_less_D)
                                                                    : 
                                                                   ((6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.pipeline__DOT__instr_D 
                                                                         >> 0xcU)))
                                                                     ? (IData)(pipeline__DOT__decode_pipeline__DOT__br_less_D)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelfRef.pipeline__DOT__instr_D 
                                                                          >> 0xcU)))
                                                                      ? 
                                                                     (0ULL 
                                                                      != pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub)
                                                                      : 
                                                                     (~ (IData)(pipeline__DOT__decode_pipeline__DOT__br_less_D))))))))))))));
}

void Vpipeline___024root___eval_triggers__ico(Vpipeline___024root* vlSelf);

bool Vpipeline___024root___eval_phase__ico(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpipeline___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vpipeline___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpipeline___024root___act_sequent__TOP__0(Vpipeline___024root* vlSelf);
void Vpipeline___024root___act_sequent__TOP__1(Vpipeline___024root* vlSelf);
void Vpipeline___024root___act_sequent__TOP__2(Vpipeline___024root* vlSelf);

void Vpipeline___024root___eval_act(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x50ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vpipeline___024root___act_sequent__TOP__0(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1 
        = (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
           [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                       >> 2U))] & ((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 0xbU) == vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                   [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                               >> 2U))]));
}

VL_INLINE_OPT void Vpipeline___024root___act_sequent__TOP__1(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2 
        = (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
           [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                       >> 2U))] & ((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 0xbU) == vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                   [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                               >> 2U))]));
}

VL_INLINE_OPT void Vpipeline___024root___act_sequent__TOP__2(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___act_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*0:0*/, 512> pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[__Vi0] = 0;
    }
    // Body
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
    if (((((((((0U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)) 
               | (1U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
              | (2U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
             | (5U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
            | (6U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
           | (7U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
          | (8U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
         | (3U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        if ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            if (VL_UNLIKELY((1U & ((~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal)) 
                                   & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal)))))) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                VL_WRITEF_NX("Idle\n",0);
            } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 2U))];
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 2U))];
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal) {
                if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                >> 2U))]) {
                    if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                        [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 2U))]) {
                        if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1
                            [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                        >> 2U))]) {
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                            if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                                [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                            >> 2U))]) {
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                                    = ((vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                        [(0x1ffU & 
                                          (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 2U))] 
                                        << 0xbU) | 
                                       (0x7fcU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E));
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                >> 2U))];
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 5U;
                            } else {
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                            }
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                            pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                        } else {
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                            if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                                [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                            >> 2U))]) {
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                                    = ((vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                        [(0x1ffU & 
                                          (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 2U))] 
                                        << 0xbU) | 
                                       (0x7fcU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E));
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                >> 2U))];
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 6U;
                            } else {
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                            }
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                            pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                        }
                    } else {
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                }
            } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal) {
                if (VL_LIKELY(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                              [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                          >> 2U))])) {
                    if ((1U & (~ vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                               [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 2U))]))) {
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    }
                } else {
                    VL_WRITEF_NX("Tao co xuat hien\n",0);
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
                    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 1U;
                }
            } else if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1
                       [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                   >> 2U))]) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                    = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                    = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                >> 2U))]) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = ((vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                            [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                        >> 2U))] << 0xbU) 
                           | (0x7fcU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E));
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 2U))];
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 9U;
                } else {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
                }
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
            } else {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                    = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                    = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                >> 2U))]) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = ((vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                            [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                        >> 2U))] << 0xbU) 
                           | (0x7fcU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E));
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 2U))];
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
                } else {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
                }
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 2U))] = 0U;
            }
        } else if (VL_UNLIKELY((1U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("write_end_1\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 0xbU);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] = 1U;
        } else if (VL_UNLIKELY((2U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("write_end_2\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] 
                = (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                   >> 0xbU);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] = 1U;
        } else if (VL_UNLIKELY((5U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("Watwr_to_wr_1\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)
                    ? 1U : 5U);
        } else if (VL_UNLIKELY((6U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("Watwr_to_wr_2\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)
                    ? 2U : 6U);
        } else if (VL_UNLIKELY((7U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("Watrd_to_rd_1\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
            if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 3U;
            } else {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
            }
        } else if ((8U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            VL_WRITEF_NX("Watrd_to_rd_2\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
            if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 4U;
            } else {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
            }
        } else {
            VL_WRITEF_NX("read_end_1\n",0);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 0xbU);
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] = 1U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
        }
    } else if (VL_UNLIKELY((4U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        VL_WRITEF_NX("read_end_2\n",0);
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] 
            = (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
               >> 0xbU);
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[(0x1ffU 
                                                                                & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] = 1U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
    } else if (VL_UNLIKELY((9U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        VL_WRITEF_NX("Watwr_to_rd_1\n",0);
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
        if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
        } else {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 9U;
        }
    } else if (VL_UNLIKELY((0xaU == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        VL_WRITEF_NX("Watwr_to_rd_2\n",0);
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M = 1U;
        if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
        } else {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
        }
    }
    if ((4U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if (((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                 ^ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
                if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
                } else {
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
                }
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                    = (0x3fffeU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
            } else {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
            }
        } else {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 5U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 4U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = (1U | vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q);
        } else if (((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                    ^ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
            if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
            } else {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            }
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = (0x3fffeU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
        } else {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 2U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q, 0x10U);
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = (1U | vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q);
    } else if (((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                ^ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
        if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
        } else {
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        }
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = (0x3fffeU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
    } else {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
    }
}

void Vpipeline___024root___nba_sequent__TOP__0(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__1(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__2(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__3(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__4(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__5(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__6(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__0(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__3(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__7(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_sequent__TOP__8(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__4(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__6(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__7(Vpipeline___024root* vlSelf);
void Vpipeline___024root___nba_comb__TOP__8(Vpipeline___024root* vlSelf);

void Vpipeline___024root___eval_nba(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x1100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x900ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x900ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x950ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x9a0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x1d00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0xd00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x19ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x1d00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x700ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline___024root___nba_comb__TOP__8(vlSelf);
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__0(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern;
    __Vdly__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern = 0;
    IData/*21:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 0;
    IData/*31:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 = 0;
    CData/*1:0*/ __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8;
    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8 = 0;
    SData/*9:0*/ __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8;
    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 0;
    CData/*0:0*/ __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 = 0;
    // Body
    __Vdly__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern 
        = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 = 0U;
    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 = 0U;
    VL_WRITEF_NX("i_add_pc = %x i_data_pc=%x o_data_pc =%x i_rden = %x i_wren = %x i_ACK=%x\nhit_1 = %x, hit_2 = %x\nadr_q1=%x mem_q1 = %x addr_q2 = %x mem_q2 = %x\nmem_1 = %x , dirty_1 = %x ,valid_1 = %x stall %x\nmem_2 = %x , dirty_2 = %x , valid_2 = %x stall %x \no_addrmem = %x o_rden_mem = %x o_rewn_mem = %x o_datamem=%x \n\n",0,
                 32,vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E,
                 32,vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1,
                 1,(IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal),
                 1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal,
                 1,(IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK),
                 1,(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                >> 2U))] & ((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 0xbU) 
                                            == vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                            [(0x1ffU 
                                              & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                 >> 2U))])),
                 1,(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                    [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                >> 2U))] & ((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 0xbU) 
                                            == vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                            [(0x1ffU 
                                              & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                 >> 2U))])),
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                 [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                             >> 2U))],1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                 [(0x1ffU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                             >> 2U))],1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                 [(0x1ffU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                             >> 2U))],1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                 [(0x1ffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                             >> 2U))],1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                 [(0x1ffU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                             >> 2U))],1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                 [(0x1ffU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                             >> 2U))],1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem,
                 1,(IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem),
                 1,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem,
                 32,vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data);
    __Vdly__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern 
        = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer;
    if (vlSelfRef.pipeline__DOT__enb_branch) {
        __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 
            = (0x3fffffU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D);
        __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 
            = (0x3ffU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D);
        __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 1U;
        if ((2U & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
             [(0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                         ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)))])) {
            if ((1U & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                 [(0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                             ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)))])) {
                vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp 
                    = ((IData)(4U) + vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D);
                if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D) {
                    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 
                        = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 1U;
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 
                        = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
                } else {
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 
                        = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 1U;
                    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
                }
            } else {
                vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp 
                    = ((IData)(4U) + vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D);
                if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D) {
                    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 
                        = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1 = 1U;
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 
                        = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
                    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 
                        = (0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F);
                    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2 = 1U;
                } else {
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 
                        = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 1U;
                    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
                    __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 
                        = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
                    __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 
                        = (0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F);
                    __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3 = 1U;
                }
            }
        } else if ((1U & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                    [(0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)))])) {
            vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
            if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D) {
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 
                    = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 1U;
                __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4 
                    = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4 
                    = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
            } else {
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 
                    = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 1U;
                vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
                __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 
                    = ((IData)(4U) + vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D);
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 
                    = (0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F);
                __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5 = 1U;
            }
        } else {
            vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
            if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D) {
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 
                    = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 1U;
                __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6 
                    = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6 
                    = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
            } else {
                __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 
                    = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 1U;
                vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
            }
        }
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer 
            = (((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D) 
                << 9U) | (0x1ffU & ((IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern) 
                                    >> 1U)));
    } else {
        __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB
            [(0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                        ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)))];
        __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 
            = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                         ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
        __VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7 = 1U;
        __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
            [(0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                        ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)))];
        __VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8 
            = (0x3ffU & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
                         ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp = 0U;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
    }
    if (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf) {
        if (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_mem_wren_E) {
            if ((0x700U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                      >> 4U)))) {
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 1U;
            } else if ((0x701U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 4U)))) {
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 1U;
            } else if ((0x702U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 4U)))) {
                if ((4U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) {
                    vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 
                        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                    vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 1U;
                }
            } else if ((0x703U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 4U)))) {
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 1U;
            } else {
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [0U];
                vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 1U;
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [1U];
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [2U];
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [3U];
                vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [4U];
            }
        }
    }
    if (vlSelfRef.pipeline__DOT__rst_M) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q = 0U;
    } else {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0] = 3U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v2;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v3;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v4;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v5;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v6;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1] = 2U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v1) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2] = 3U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3] = 0U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4] = 3U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5] = 0U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6] = 1U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7] = 0U;
    }
    if (__VdlySet__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v7;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8] 
            = __VdlyVal__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v8;
    }
    vlSelfRef.o_SRAM_ADDR = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
    vlSelfRef.o_SRAM_WE_N = ((1U & ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                    >> 2U)) || (1U 
                                                & ((2U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                                    ? (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)
                                                    : 
                                                   (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))));
    if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2 
                    = (0xffffU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1 
                    = (0xffffU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
    }
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK 
        = ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
           | (5U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern 
        = __Vdly__pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern;
    vlSelfRef.o_SRAM_DQ = ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                           | (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2));
    if ((4U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.o_SRAM_CE_N = ((1U & ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                        >> 1U)) || 
                                 (1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.o_SRAM_OE_N = ((1U & ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                        >> 1U)) || 
                                 (1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.o_SRAM_LB_N = (1U & ((1U & ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                              >> 1U)) 
                                       || ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 2U))))));
        vlSelfRef.o_SRAM_UB_N = (1U & ((1U & ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                              >> 1U)) 
                                       || ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 3U))))));
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
            = ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                         : (((IData)(vlSelfRef.o_SRAM_DQ) 
                             << 0x10U) | (0xffffU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))));
    } else {
        vlSelfRef.o_SRAM_CE_N = ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                           >> 1U))) 
                                 && (1U & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))));
        vlSelfRef.o_SRAM_OE_N = ((1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                           >> 1U))) 
                                 || (1U & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))));
        if ((2U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.o_SRAM_LB_N = (1U & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q)));
                vlSelfRef.o_SRAM_UB_N = (1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 1U)));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                    = ((0xffff0000U & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.o_SRAM_DQ));
            } else {
                vlSelfRef.o_SRAM_LB_N = (1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 2U)));
                vlSelfRef.o_SRAM_UB_N = (1U & (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 3U)));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
            }
        } else {
            vlSelfRef.o_SRAM_LB_N = (1U & ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q)))));
            vlSelfRef.o_SRAM_UB_N = (1U & ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 1U)))));
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
        }
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__1(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0 = 0U;
    vlSelfRef.__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 0U;
    if (vlSelfRef.pipeline__DOT__rst_D) {
        vlSelfRef.__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0 = 1U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_a_sel_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_data_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_b_sel_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_imm_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__enb_D)))) {
        if (((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M) 
             & (0U != (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M)))) {
            vlSelfRef.__VdlyVal__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 
                = vlSelfRef.pipeline__DOT__result_W;
            vlSelfRef.__VdlyDim0__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M;
            vlSelfRef.__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 1U;
        }
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_a_sel_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_a_sel_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_data_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_data_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_b_sel_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_imm_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D 
            = ((IData)(vlSelfRef.pipeline__DOT__rst_F)
                ? 0U : vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_pc_F);
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_taken_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__taken_D;
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__2(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pipeline__DOT__rst_M) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_lcd = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex7 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex6 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex5 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex4 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex3 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex2 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledr = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledg = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex0 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex1 = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ins_n_vld_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_stall_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ld_data_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_pc_4_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_alu_data_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M = 0U;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__enb_M)))) {
            if (vlSelfRef.pipeline__DOT__rst_M) {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_lcd = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex7 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex6 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex5 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex4 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex3 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex2 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledr = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledg = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex0 = 0U;
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex1 = 0U;
            } else {
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_lcd 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [4U];
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex7 
                    = (0x7fU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [3U] >> 0x18U));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex6 
                    = (0x7fU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [3U] >> 0x10U));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex5 
                    = (0x7fU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [3U] >> 8U));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex4 
                    = (0x7fU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                       [3U]);
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex3 
                    = (0x7fU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [2U] >> 0x18U));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex2 
                    = (0x7fU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [2U] >> 0x10U));
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledr 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [0U];
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledg 
                    = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [1U];
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex0 
                    = (0x7fU & vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                       [2U]);
                vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex1 
                    = (0x7fU & (vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [2U] >> 8U));
            }
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ins_n_vld_M 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_ins_n_vld_E;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_stall_M 
                = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__stall_M;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_wb_sel_E;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ld_data_M 
                = ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                    ? ((IData)(vlSelfRef.pipeline__DOT__rst_M)
                        ? 0U : vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT)
                    : ((1U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                        ? (((~ (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_mem_wren_E)) 
                            & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf))
                            ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                            : 0U) : ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                      ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1
                                      : 0U)));
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_pc_4_M 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_pc_4_E;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_alu_data_M 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E;
            vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M 
                = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E;
        }
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state 
            = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state;
    }
    vlSelfRef.o_io_lcd = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_lcd;
    vlSelfRef.o_io_hex7 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex7;
    vlSelfRef.o_io_hex6 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex6;
    vlSelfRef.o_io_hex5 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex5;
    vlSelfRef.o_io_hex4 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex4;
    vlSelfRef.o_io_hex3 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex3;
    vlSelfRef.o_io_hex2 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex2;
    vlSelfRef.o_io_ledr = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledr;
    vlSelfRef.o_io_ledg = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledg;
    vlSelfRef.o_io_hex0 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex0;
    vlSelfRef.o_io_hex1 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex1;
    vlSelfRef.o_ins_n_vld = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ins_n_vld_M;
    vlSelfRef.pipeline__DOT__result_W = ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                          ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_alu_data_M
                                          : ((1U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                              ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ld_data_M
                                              : ((2U 
                                                  == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                                  ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_pc_4_M
                                                  : 0U)));
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__3(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pipeline__DOT__rst_E) {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_ins_n_vld_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_wb_sel_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_mem_wren_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_pc_4_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E = 0U;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__enb_E)))) {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_data_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_ins_n_vld_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_ins_n_vld_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_wb_sel_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_wb_sel_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_mem_wren_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_mem_wren_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_pc_4_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_4_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_wren_D;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_addr_D;
    }
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
                     & (0x4000U > (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
               & (0x7040U > (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E))));
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel 
        = ((0x780U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                 >> 4U))) ? 0U : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x702U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x701U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((0x700U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                          >> 4U)))
                                                      ? 1U
                                                      : 2U)))));
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__4(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pipeline__DOT__rst_F) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_pc_F = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__enb_F)))) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_pc_F 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F;
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__5(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5) {
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8;
        vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4U] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9;
    }
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT 
        = vlSelfRef.i_io_sw;
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__6(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pipeline__DOT__rst_D) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_data_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_ins_n_vld_D = 1U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_wb_sel_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_mem_wren_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_4_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_wren_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_addr_D = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__enb_D)))) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_data_D 
            = ((0U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D))
                ? 0U : vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
               [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D]);
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_ins_n_vld_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_wb_sel_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_mem_wren_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__mem_wren_D;
        if (vlSelfRef.pipeline__DOT__rst_F) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_4_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_addr_D = 0U;
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_4_D 
                = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_pc_4_F;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_addr_D 
                = (0x1fU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F 
                            >> 7U));
        }
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rd_wren_D 
            = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[1U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[2U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[3U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[4U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[5U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[6U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[7U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[8U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[9U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xaU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xbU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xcU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xdU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xeU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xfU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x10U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x11U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x12U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x13U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x14U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x15U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x16U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x17U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x18U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x19U] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1aU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1bU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1cU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1dU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1eU] = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[vlSelfRef.__VdlyDim0__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32] 
            = vlSelfRef.__VdlyVal__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32;
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__0(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs;
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    // Body
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal 
        = ((~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (2U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E)));
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal 
        = ((~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (5U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E)));
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                 >> 4U))) ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                         >> 4U))) ? 
                   vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                 >> 4U)))
                            ? ((4U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                                ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 4U)))
                                         ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    if ((2U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) {
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                ? (0xff000000U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs));
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) {
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else {
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_mem_wren_E)
            ? ((2U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                ? vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E
                : ((0U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                    ? ((2U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                        ? ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                            ? ((0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x18U)) 
                               | (0xffffffU & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                            : ((0xff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x10U)) 
                               | (0xff00ffffU & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                        : ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                            ? ((0xff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E, 8U)) 
                               | (0xffff00ffU & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                            : ((0xffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E) 
                               | (0xffffff00U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                    : ((1U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? ((2U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                            ? ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                                ? (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x10U) 
                                                  | pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                : (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x10U) 
                                                  | pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                            : ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)
                                ? ((0xffff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E, 8U)) 
                                   | (0xff0000ffU & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                : ((0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E) 
                                   | (0xffff0000U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                        : vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E)))
            : ((4U & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                ? ((2U & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? ((0x2000U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs
                        : pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp))
                : ((2U & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp
                        : 0U) : 0U)));
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__3(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ pipeline__DOT__forwardA_E;
    pipeline__DOT__forwardA_E = 0;
    CData/*1:0*/ pipeline__DOT__forwardB_E;
    pipeline__DOT__forwardB_E = 0;
    QData/*32:0*/ pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub;
    pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub = 0;
    // Body
    pipeline__DOT__forwardA_E = ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D) 
                                   == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E)) 
                                  & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E))
                                  ? 1U : ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D) 
                                            == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M)) 
                                           & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M))
                                           ? 2U : 0U));
    pipeline__DOT__forwardB_E = ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D) 
                                   == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E)) 
                                  & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E))
                                  ? 1U : ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D) 
                                            == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M)) 
                                           & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M))
                                           ? 2U : 0U));
    vlSelfRef.pipeline__DOT__enb_E = ((1U & (~ ((((5U 
                                                   == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D)) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                                                & (((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                                    == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                                                   | ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                                      == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))))) 
                                      && (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_stall_M));
    vlSelfRef.pipeline__DOT__enb_M = 0U;
    if ((1U & (~ ((((5U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D)) 
                    | (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                   | (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                  & (((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                      == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                     | ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                        == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D))))))) {
        vlSelfRef.pipeline__DOT__enb_M = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_stall_M;
    }
    vlSelfRef.pipeline__DOT__enb_D = ((1U & (~ ((((5U 
                                                   == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D)) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                                                & (((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                                    == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                                                   | ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                                      == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))))) 
                                      && (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_stall_M));
    if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_a_sel_D) {
        if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_a_sel_D) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_pc_D;
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
            = ((0U == (IData)(pipeline__DOT__forwardA_E))
                ? vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_data_D
                : ((1U == (IData)(pipeline__DOT__forwardA_E))
                    ? vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E
                    : ((2U == (IData)(pipeline__DOT__forwardA_E))
                        ? vlSelfRef.pipeline__DOT__result_W
                        : 0U)));
    }
    if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_b_sel_D) {
        if (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_op_b_sel_D) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2 
                = vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_imm_D;
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2 
            = ((0U == (IData)(pipeline__DOT__forwardB_E))
                ? vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_data_D
                : ((1U == (IData)(pipeline__DOT__forwardB_E))
                    ? vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E
                    : ((2U == (IData)(pipeline__DOT__forwardB_E))
                        ? vlSelfRef.pipeline__DOT__result_W
                        : 0U)));
    }
    pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2)) 
                                     + (QData)((IData)(
                                                       (~ vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2))))));
    if ((0x10U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((0x10U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2, 0x10U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2, 0x10U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                = (((- (IData)((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                      >> 0x10U));
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2;
    }
    if ((8U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((8U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1, 8U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1, 8U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                = (((- (IData)((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                >> 0x1fU))) << 0x18U) 
                   | (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                      >> 8U));
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1;
    }
    if ((4U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((4U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2, 4U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2, 4U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                = (((- (IData)((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                >> 0x1fU))) << 0x1cU) 
                   | (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                      >> 4U));
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2;
    }
    if ((2U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((2U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3, 2U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3, 2U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                = (((- (IData)((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                >> 0x1fU))) << 0x1eU) 
                   | (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                      >> 2U));
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3;
    }
    if ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((1U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4, 1U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4, 1U);
            vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp 
                = ((0x80000000U & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4) 
                   | (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                      >> 1U));
        }
    } else {
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4;
        vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp 
            = vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4;
    }
    vlSelfRef.pipeline__DOT__execute_pipeline__DOT__alu_data_E 
        = ((8U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
            ? ((4U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                ? 0U : ((2U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                         ? ((1U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                             ? 0U : vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)
                         : ((1U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                             ? vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp
                             : vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp)))
            : ((4U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                ? ((2U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                        ? vlSelfRef.pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp
                        : (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                           & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2))
                    : ((1U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                        ? (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                           | vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)
                        : (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                           ^ vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)))
                : ((2U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                    ? ((1U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                        ? (1U & (~ (IData)((pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                            >> 0x20U))))
                        : (1U & (((vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                                   >> 0x1fU) == (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2 
                                                 >> 0x1fU))
                                  ? (~ (IData)((pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                                >> 0x20U)))
                                  : (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                                     >> 0x1fU)))) : 
                   ((1U & (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D))
                     ? (IData)(pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub)
                     : (vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_a_2 
                        + vlSelfRef.pipeline__DOT__execute_pipeline__DOT__operand_b_2)))));
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__7(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pipeline__DOT__rst_F) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_pc_4_F = 0U;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F = 0U;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.pipeline__DOT__enb_F)))) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_pc_4_F 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F 
            = ((IData)(vlSelfRef.pipeline__DOT__rst_F)
                ? 0U : ((0x800U >= (0xfffU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
                                              >> 2U)))
                         ? vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem
                        [(0xfffU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
                                    >> 2U))] : 0U));
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q2;
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_sequent__TOP__8(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__rst_D = vlSelfRef.i_rst;
    vlSelfRef.pipeline__DOT__rst_F = vlSelfRef.i_rst;
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__4(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__rst_M = vlSelfRef.i_rst;
    if (((((5U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D)) 
           | (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
          | (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
         & (((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
             == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
            | ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
               == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D))))) {
        vlSelfRef.pipeline__DOT__rst_M = 1U;
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__6(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__enb_F = ((1U & (~ ((((5U 
                                                   == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D)) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D))) 
                                                & (((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                                    == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                                                   | ((IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                                      == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))))) 
                                      && (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_stall_M));
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__7(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken = 0;
    CData/*0:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit = 0;
    SData/*9:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht = 0;
    CData/*2:0*/ pipeline__DOT__decode_pipeline__DOT__immsel_D;
    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0;
    // Body
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht 
        = (0x3ffU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken 
        = (1U & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                 [pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht] 
                 >> 1U));
    if (vlSelfRef.pipeline__DOT__rst_F) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D = 0U;
        vlSelfRef.pipeline__DOT__instr_D = 0U;
    } else {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F 
            = ((IData)(4U) + vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F);
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D 
            = (0x1fU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 0x14U));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D 
            = (0x1fU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 0xfU));
        vlSelfRef.pipeline__DOT__instr_D = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__reg_instr_F;
    }
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit 
        = ((vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
            >> 0xaU) == vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag
           [(0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F)]);
    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_sel 
        = ((IData)(pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit) 
           & (IData)(pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken));
    vlSelfRef.pipeline__DOT__enb_branch = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 6U)) 
                                           && ((1U 
                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 5U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.pipeline__DOT__instr_D 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.pipeline__DOT__instr_D 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.pipeline__DOT__instr_D)))))));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__mem_wren_D 
        = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                     >> 6U))) && ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                         >> 5U)) && 
                                  ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                             >> 4U))) 
                                   && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSelfRef.pipeline__DOT__instr_D)))))));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
    if ((0x40U & vlSelfRef.pipeline__DOT__instr_D)) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_a_sel_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
            = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                      >> 5U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.pipeline__DOT__instr_D)
                                       ? ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))
                                       : ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))))));
        if ((0x20U & vlSelfRef.pipeline__DOT__instr_D)) {
            if ((0x10U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                        if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 2U;
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 4U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        } else {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 2U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 1U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 3U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D 
                        = ((7U == (7U & (vlSelfRef.pipeline__DOT__instr_D 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.pipeline__DOT__instr_D 
                                           >> 0xcU))));
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
            pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
        }
    } else {
        if ((0x20U & vlSelfRef.pipeline__DOT__instr_D)) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                          >> 4U)) && ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)))));
            if ((0x10U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                               ? ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))
                                               : ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                        if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 5U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0xaU;
                        } else {
                            pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                        if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D 
                                = ((0x4000U & vlSelfRef.pipeline__DOT__instr_D)
                                    ? ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                        ? ((0x1000U 
                                            & vlSelfRef.pipeline__DOT__instr_D)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.pipeline__DOT__instr_D)
                                            ? ((0x40000000U 
                                                & vlSelfRef.pipeline__DOT__instr_D)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                     ? ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.pipeline__DOT__instr_D)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D 
                                = (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D));
                        } else {
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                }
            } else {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
                if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D 
                            = ((0U == (7U & (vlSelfRef.pipeline__DOT__instr_D 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 0xcU)))
                                         ? 1U : 2U));
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 2U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.pipeline__DOT__instr_D 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))));
            }
        } else if ((0x10U & vlSelfRef.pipeline__DOT__instr_D)) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((4U & vlSelfRef.pipeline__DOT__instr_D)
                                           ? ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))
                                           : ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
            if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                    if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 5U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 1U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D 
                        = ((0x4000U & vlSelfRef.pipeline__DOT__instr_D)
                            ? ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.pipeline__DOT__instr_D)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.pipeline__DOT__instr_D)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.pipeline__DOT__instr_D)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D 
                        = (3U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D));
                } else {
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
            if ((8U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.pipeline__DOT__instr_D)) {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((2U & vlSelfRef.pipeline__DOT__instr_D)) {
                if ((1U & vlSelfRef.pipeline__DOT__instr_D)) {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D 
                        = ((0x4000U & vlSelfRef.pipeline__DOT__instr_D)
                            ? ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? 5U : ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 7U : 6U))
                            : ((0x2000U & vlSelfRef.pipeline__DOT__instr_D)
                                ? 5U : ((0x1000U & vlSelfRef.pipeline__DOT__instr_D)
                                         ? 4U : 3U)));
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 1U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                pipeline__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.pipeline__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.pipeline__DOT__instr_D))));
        }
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__op_a_sel_D 
            = ((1U & (~ (vlSelfRef.pipeline__DOT__instr_D 
                         >> 5U))) && ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                             >> 4U)) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (vlSelfRef.pipeline__DOT__instr_D 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.pipeline__DOT__instr_D))))));
    }
    if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_sel) {
        if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_sel) {
            vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q1 
                = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB
                [(0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F)];
        }
    } else {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q1 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_four_F;
    }
    if ((4U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
        if ((2U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = vlSelfRef.pipeline__DOT__instr_D;
        } else if ((1U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = (0xfffff000U & vlSelfRef.pipeline__DOT__instr_D);
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x1fU))) << 0x14U) 
                      | (0xff000U & vlSelfRef.pipeline__DOT__instr_D)));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffff000U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | ((0x800U & (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 9U)) | (0x7feU 
                                            & (vlSelfRef.pipeline__DOT__instr_D 
                                               >> 0x14U))));
        }
    } else if ((2U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
        if ((1U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0x7ffU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x1fU))) << 0xcU) 
                      | (0x800U & (vlSelfRef.pipeline__DOT__instr_D 
                                   << 4U))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffff800U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | ((0x7e0U & (vlSelfRef.pipeline__DOT__instr_D 
                                 >> 0x14U)) | (0x1eU 
                                               & (vlSelfRef.pipeline__DOT__instr_D 
                                                  >> 7U))));
        } else {
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0x1fU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x1fU))) << 0xbU) 
                      | (0x7e0U & (vlSelfRef.pipeline__DOT__instr_D 
                                   >> 0x14U))));
            vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
                = ((0xffffffe0U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
                   | (0x1fU & (vlSelfRef.pipeline__DOT__instr_D 
                               >> 7U)));
        }
    } else if ((1U & (IData)(pipeline__DOT__decode_pipeline__DOT__immsel_D))) {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
            = ((0x1fU & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
               | (((- (IData)((vlSelfRef.pipeline__DOT__instr_D 
                               >> 0x1fU))) << 0xbU) 
                  | (0x7e0U & (vlSelfRef.pipeline__DOT__instr_D 
                               >> 0x14U))));
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D 
            = ((0xffffffe0U & vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D) 
               | (0x1fU & (vlSelfRef.pipeline__DOT__instr_D 
                           >> 0x14U)));
    } else {
        vlSelfRef.pipeline__DOT__decode_pipeline__DOT__imm_D = 0U;
    }
    if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel) {
        if (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel) {
            vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q2 
                = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_rp;
        }
    } else {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q2 
            = vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_Q1;
    }
}

VL_INLINE_OPT void Vpipeline___024root___nba_comb__TOP__8(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___nba_comb__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pipeline__DOT__decode_pipeline__DOT__br_less_D;
    pipeline__DOT__decode_pipeline__DOT__br_less_D = 0;
    QData/*32:0*/ pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub;
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub = 0;
    CData/*0:0*/ pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0;
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    // Body
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D)) 
           & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
              [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D] 
              >> 0x1fU));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_data_D 
        = ((0U == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D))
            ? 0U : vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
           [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_addr_D]);
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs1_data_D)) 
                                     + (QData)((IData)(
                                                       ((0U 
                                                         == (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D))
                                                         ? 0xffffffffU
                                                         : 
                                                        (~ 
                                                         vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
                                                         [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D])))))));
    pipeline__DOT__decode_pipeline__DOT__br_less_D 
        = (1U & ((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__br_un_D)
                  ? (~ (IData)((pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                >> 0x20U))) : (((IData)(pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                                == 
                                                ((0U 
                                                  != (IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D)) 
                                                 & (vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
                                                    [vlSelfRef.pipeline__DOT__decode_pipeline__DOT__rs2_addr_D] 
                                                    >> 0x1fU)))
                                                ? (~ (IData)(
                                                             (pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                                              >> 0x20U)))
                                                : (IData)(pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0))));
    vlSelfRef.pipeline__DOT__decode_pipeline__DOT__taken_D 
        = ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                  >> 6U)) && ((1U & (vlSelfRef.pipeline__DOT__instr_D 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.pipeline__DOT__instr_D 
                                                      >> 4U))) 
                                                 && ((8U 
                                                      & vlSelfRef.pipeline__DOT__instr_D)
                                                      ? 
                                                     ((1U 
                                                       & (vlSelfRef.pipeline__DOT__instr_D 
                                                          >> 2U)) 
                                                      && ((1U 
                                                           & (vlSelfRef.pipeline__DOT__instr_D 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.pipeline__DOT__instr_D)))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.pipeline__DOT__instr_D)
                                                       ? 
                                                      ((1U 
                                                        & (vlSelfRef.pipeline__DOT__instr_D 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & vlSelfRef.pipeline__DOT__instr_D))
                                                       : 
                                                      ((1U 
                                                        & (vlSelfRef.pipeline__DOT__instr_D 
                                                           >> 1U)) 
                                                       && ((1U 
                                                            & vlSelfRef.pipeline__DOT__instr_D) 
                                                           && (1U 
                                                               & ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelfRef.pipeline__DOT__instr_D 
                                                                       >> 0xcU)))
                                                                   ? 
                                                                  (0ULL 
                                                                   == pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub)
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelfRef.pipeline__DOT__instr_D 
                                                                        >> 0xcU)))
                                                                    ? (IData)(pipeline__DOT__decode_pipeline__DOT__br_less_D)
                                                                    : 
                                                                   ((6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.pipeline__DOT__instr_D 
                                                                         >> 0xcU)))
                                                                     ? (IData)(pipeline__DOT__decode_pipeline__DOT__br_less_D)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelfRef.pipeline__DOT__instr_D 
                                                                          >> 0xcU)))
                                                                      ? 
                                                                     (0ULL 
                                                                      != pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub)
                                                                      : 
                                                                     (~ (IData)(pipeline__DOT__decode_pipeline__DOT__br_less_D))))))))))))));
}

void Vpipeline___024root___eval_triggers__act(Vpipeline___024root* vlSelf);

bool Vpipeline___024root___eval_phase__act(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<13> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpipeline___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpipeline___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpipeline___024root___eval_phase__nba(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpipeline___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__ico(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__nba(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__act(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG

void Vpipeline___024root___eval(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval\n"); );
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
            Vpipeline___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("pipeline.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpipeline___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpipeline___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pipeline.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpipeline___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pipeline.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpipeline___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpipeline___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpipeline___024root___eval_debug_assertions(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_io_btn & 0xf0U))) {
        Verilated::overWidthError("i_io_btn");}
}
#endif  // VL_DEBUG
