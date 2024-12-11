// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsinglecycle.h for the primary calling header

#include "Vsinglecycle__pch.h"
#include "Vsinglecycle___024root.h"

VL_ATTR_COLD void Vsinglecycle___024root___eval_static(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsinglecycle___024root___eval_initial__TOP(Vsinglecycle___024root* vlSelf);

VL_ATTR_COLD void Vsinglecycle___024root___eval_initial(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsinglecycle___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
}

VL_ATTR_COLD void Vsinglecycle___024root___eval_initial__TOP(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x64756d70U;
    __Vtemp_1[1U] = 0x6d656d2eU;
    __Vtemp_1[2U] = 0x6573742fU;
    __Vtemp_1[3U] = 0x30325f74U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.singlecycle__DOT__block_imem__DOT__imem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsinglecycle___024root___eval_final(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__stl(Vsinglecycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsinglecycle___024root___eval_phase__stl(Vsinglecycle___024root* vlSelf);

VL_ATTR_COLD void Vsinglecycle___024root___eval_settle(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_settle\n"); );
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
            Vsinglecycle___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("singlecycle.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsinglecycle___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__stl(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vsinglecycle___024root___stl_sequent__TOP__0(Vsinglecycle___024root* vlSelf);

VL_ATTR_COLD void Vsinglecycle___024root___eval_stl(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsinglecycle___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsinglecycle___024root___stl_sequent__TOP__0(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ singlecycle__DOT__rs1_data;
    singlecycle__DOT__rs1_data = 0;
    CData/*2:0*/ singlecycle__DOT__imm_sel;
    singlecycle__DOT__imm_sel = 0;
    CData/*0:0*/ singlecycle__DOT__br_sel;
    singlecycle__DOT__br_sel = 0;
    CData/*0:0*/ singlecycle__DOT__op_a_sel;
    singlecycle__DOT__op_a_sel = 0;
    CData/*0:0*/ singlecycle__DOT__op_b_sel;
    singlecycle__DOT__op_b_sel = 0;
    CData/*0:0*/ singlecycle__DOT__br_less;
    singlecycle__DOT__br_less = 0;
    CData/*0:0*/ singlecycle__DOT__block_alu__DOT__carryFlag;
    singlecycle__DOT__block_alu__DOT__carryFlag = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__srl_tmp;
    singlecycle__DOT__block_alu__DOT__srl_tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__srr_tmp;
    singlecycle__DOT__block_alu__DOT__srr_tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__sra_tmp;
    singlecycle__DOT__block_alu__DOT__sra_tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__tmp;
    singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i;
    singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__tmp;
    singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i;
    singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__tmp;
    singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i;
    singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ singlecycle__DOT__block_brc__DOT__carryFlag;
    singlecycle__DOT__block_brc__DOT__carryFlag = 0;
    CData/*0:0*/ singlecycle__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0;
    singlecycle__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs;
    singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    // Body
    if ((0x40U & vlSelfRef.singlecycle__DOT__instr)) {
        vlSelfRef.o_ins_n_vld = ((1U & (vlSelfRef.singlecycle__DOT__instr 
                                        >> 5U)) && 
                                 ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.singlecycle__DOT__instr)
                                       ? ((1U & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.singlecycle__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.singlecycle__DOT__instr)))
                                       : ((4U & vlSelfRef.singlecycle__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.singlecycle__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.singlecycle__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.singlecycle__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.singlecycle__DOT__instr))))));
        vlSelfRef.singlecycle__DOT__rd_wren = ((1U 
                                                & (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 5U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.singlecycle__DOT__instr 
                                                        >> 4U))) 
                                                   && ((8U 
                                                        & vlSelfRef.singlecycle__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.singlecycle__DOT__instr 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.singlecycle__DOT__instr)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.singlecycle__DOT__instr 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.singlecycle__DOT__instr))))));
        if ((0x20U & vlSelfRef.singlecycle__DOT__instr)) {
            if ((0x10U & vlSelfRef.singlecycle__DOT__instr)) {
                vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            } else if ((8U & vlSelfRef.singlecycle__DOT__instr)) {
                if ((4U & vlSelfRef.singlecycle__DOT__instr)) {
                    if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                        if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                            vlSelfRef.singlecycle__DOT__wb_sel = 2U;
                            vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                            vlSelfRef.singlecycle__DOT__alu_op = 0U;
                            singlecycle__DOT__imm_sel = 4U;
                        } else {
                            vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                            vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                            vlSelfRef.singlecycle__DOT__alu_op = 0U;
                            singlecycle__DOT__imm_sel = 0U;
                        }
                    } else {
                        vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
            } else if ((4U & vlSelfRef.singlecycle__DOT__instr)) {
                if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                    if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                        vlSelfRef.singlecycle__DOT__wb_sel = 2U;
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 1U;
                    } else {
                        vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
            } else if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                    vlSelfRef.singlecycle__DOT__wb_sel = 1U;
                    vlSelfRef.singlecycle__DOT__br_unsigned 
                        = ((7U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                           >> 0xcU))));
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 3U;
                } else {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            }
        } else {
            vlSelfRef.singlecycle__DOT__wb_sel = 0U;
            vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
            vlSelfRef.singlecycle__DOT__alu_op = 0U;
            singlecycle__DOT__imm_sel = 0U;
        }
        vlSelfRef.singlecycle__DOT__slt_sl = 0U;
        singlecycle__DOT__op_b_sel = ((1U & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 5U)) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.singlecycle__DOT__instr 
                                                  >> 4U))) 
                                          && ((8U & vlSelfRef.singlecycle__DOT__instr)
                                               ? ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.singlecycle__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.singlecycle__DOT__instr)))
                                               : ((4U 
                                                   & vlSelfRef.singlecycle__DOT__instr)
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.singlecycle__DOT__instr 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & vlSelfRef.singlecycle__DOT__instr))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.singlecycle__DOT__instr 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & vlSelfRef.singlecycle__DOT__instr))))));
        singlecycle__DOT__op_a_sel = ((1U & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 5U)) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.singlecycle__DOT__instr 
                                                  >> 4U))) 
                                          && ((8U & vlSelfRef.singlecycle__DOT__instr)
                                               ? ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.singlecycle__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.singlecycle__DOT__instr)))
                                               : ((1U 
                                                   & (~ 
                                                      (vlSelfRef.singlecycle__DOT__instr 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (vlSelfRef.singlecycle__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.singlecycle__DOT__instr))))));
    } else {
        if ((0x20U & vlSelfRef.singlecycle__DOT__instr)) {
            if ((0x10U & vlSelfRef.singlecycle__DOT__instr)) {
                vlSelfRef.o_ins_n_vld = ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 3U))) 
                                         && ((4U & vlSelfRef.singlecycle__DOT__instr)
                                              ? ((1U 
                                                  & (vlSelfRef.singlecycle__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.singlecycle__DOT__instr))
                                              : ((1U 
                                                  & (vlSelfRef.singlecycle__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.singlecycle__DOT__instr))));
                vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                if ((8U & vlSelfRef.singlecycle__DOT__instr)) {
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                } else if ((4U & vlSelfRef.singlecycle__DOT__instr)) {
                    if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                        if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                            vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                            vlSelfRef.singlecycle__DOT__alu_op = 0xaU;
                            singlecycle__DOT__imm_sel = 5U;
                        } else {
                            vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                            vlSelfRef.singlecycle__DOT__alu_op = 0U;
                            singlecycle__DOT__imm_sel = 0U;
                        }
                    } else {
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 0U;
                    }
                } else {
                    if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                        if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                            vlSelfRef.singlecycle__DOT__alu_op 
                                = ((0x4000U & vlSelfRef.singlecycle__DOT__instr)
                                    ? ((0x2000U & vlSelfRef.singlecycle__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelfRef.singlecycle__DOT__instr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.singlecycle__DOT__instr)
                                            ? ((0x40000000U 
                                                & vlSelfRef.singlecycle__DOT__instr)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.singlecycle__DOT__instr)
                                     ? ((0x1000U & vlSelfRef.singlecycle__DOT__instr)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.singlecycle__DOT__instr)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.singlecycle__DOT__instr)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.singlecycle__DOT__br_unsigned 
                                = (3U == (IData)(vlSelfRef.singlecycle__DOT__alu_op));
                        } else {
                            vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                            vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    }
                    singlecycle__DOT__imm_sel = 0U;
                }
                singlecycle__DOT__op_b_sel = ((1U & 
                                               (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 3U))) 
                                              && ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.singlecycle__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.singlecycle__DOT__instr))));
            } else {
                vlSelfRef.o_ins_n_vld = ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 3U))) 
                                         && ((1U & 
                                              (~ (vlSelfRef.singlecycle__DOT__instr 
                                                  >> 2U))) 
                                             && ((1U 
                                                  & (vlSelfRef.singlecycle__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.singlecycle__DOT__instr))));
                if ((8U & vlSelfRef.singlecycle__DOT__instr)) {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                } else if ((4U & vlSelfRef.singlecycle__DOT__instr)) {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                } else if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                    if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                        vlSelfRef.singlecycle__DOT__wb_sel = 1U;
                        if ((0U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                        } else if ((1U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.singlecycle__DOT__slt_sl = 1U;
                        } else if ((3U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.singlecycle__DOT__slt_sl = 2U;
                        }
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 2U;
                    } else {
                        vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                        vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
                singlecycle__DOT__op_b_sel = ((1U & 
                                               (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 3U))) 
                                              && ((1U 
                                                   & (~ 
                                                      (vlSelfRef.singlecycle__DOT__instr 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (vlSelfRef.singlecycle__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.singlecycle__DOT__instr))));
            }
            vlSelfRef.singlecycle__DOT__rd_wren = (
                                                   (1U 
                                                    & (vlSelfRef.singlecycle__DOT__instr 
                                                       >> 4U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 3U))) 
                                                       && ((4U 
                                                            & vlSelfRef.singlecycle__DOT__instr)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.singlecycle__DOT__instr 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.singlecycle__DOT__instr))
                                                            : 
                                                           ((1U 
                                                             & (vlSelfRef.singlecycle__DOT__instr 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.singlecycle__DOT__instr)))));
        } else if ((0x10U & vlSelfRef.singlecycle__DOT__instr)) {
            vlSelfRef.o_ins_n_vld = ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                               >> 3U))) 
                                     && ((4U & vlSelfRef.singlecycle__DOT__instr)
                                          ? ((1U & 
                                              (vlSelfRef.singlecycle__DOT__instr 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSelfRef.singlecycle__DOT__instr))
                                          : ((1U & 
                                              (vlSelfRef.singlecycle__DOT__instr 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSelfRef.singlecycle__DOT__instr))));
            vlSelfRef.singlecycle__DOT__rd_wren = (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.singlecycle__DOT__instr 
                                                        >> 3U))) 
                                                   && ((4U 
                                                        & vlSelfRef.singlecycle__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & vlSelfRef.singlecycle__DOT__instr))
                                                        : 
                                                       ((1U 
                                                         & (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & vlSelfRef.singlecycle__DOT__instr))));
            vlSelfRef.singlecycle__DOT__wb_sel = 0U;
            vlSelfRef.singlecycle__DOT__slt_sl = 0U;
            if ((8U & vlSelfRef.singlecycle__DOT__instr)) {
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            } else if ((4U & vlSelfRef.singlecycle__DOT__instr)) {
                if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                    if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 5U;
                    } else {
                        vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                        vlSelfRef.singlecycle__DOT__alu_op = 0U;
                        singlecycle__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
            } else if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                    vlSelfRef.singlecycle__DOT__alu_op 
                        = ((0x4000U & vlSelfRef.singlecycle__DOT__instr)
                            ? ((0x2000U & vlSelfRef.singlecycle__DOT__instr)
                                ? ((0x1000U & vlSelfRef.singlecycle__DOT__instr)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.singlecycle__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.singlecycle__DOT__instr)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.singlecycle__DOT__instr)
                                ? ((0x1000U & vlSelfRef.singlecycle__DOT__instr)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.singlecycle__DOT__instr)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.singlecycle__DOT__br_unsigned 
                        = (3U == (IData)(vlSelfRef.singlecycle__DOT__alu_op));
                    singlecycle__DOT__imm_sel = 1U;
                } else {
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            }
            singlecycle__DOT__op_b_sel = ((1U & (~ 
                                                 (vlSelfRef.singlecycle__DOT__instr 
                                                  >> 3U))) 
                                          && ((4U & vlSelfRef.singlecycle__DOT__instr)
                                               ? ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.singlecycle__DOT__instr))
                                               : ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.singlecycle__DOT__instr))));
        } else {
            vlSelfRef.o_ins_n_vld = ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                               >> 3U))) 
                                     && ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 2U))) 
                                         && ((1U & 
                                              (vlSelfRef.singlecycle__DOT__instr 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSelfRef.singlecycle__DOT__instr))));
            vlSelfRef.singlecycle__DOT__rd_wren = (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.singlecycle__DOT__instr 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelfRef.singlecycle__DOT__instr 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.singlecycle__DOT__instr))));
            if ((8U & vlSelfRef.singlecycle__DOT__instr)) {
                vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            } else if ((4U & vlSelfRef.singlecycle__DOT__instr)) {
                vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            } else if ((2U & vlSelfRef.singlecycle__DOT__instr)) {
                if ((1U & vlSelfRef.singlecycle__DOT__instr)) {
                    vlSelfRef.singlecycle__DOT__wb_sel = 1U;
                    if ((0U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelfRef.singlecycle__DOT__slt_sl = 3U;
                    } else if ((1U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.singlecycle__DOT__slt_sl = 4U;
                    } else if ((2U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.singlecycle__DOT__slt_sl = 5U;
                    } else if ((4U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.singlecycle__DOT__slt_sl = 6U;
                    } else if ((5U == (7U & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.singlecycle__DOT__slt_sl = 7U;
                    }
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 1U;
                } else {
                    vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                    vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                    vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                    vlSelfRef.singlecycle__DOT__alu_op = 0U;
                    singlecycle__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.singlecycle__DOT__wb_sel = 0U;
                vlSelfRef.singlecycle__DOT__slt_sl = 0U;
                vlSelfRef.singlecycle__DOT__br_unsigned = 0U;
                vlSelfRef.singlecycle__DOT__alu_op = 0U;
                singlecycle__DOT__imm_sel = 0U;
            }
            singlecycle__DOT__op_b_sel = ((1U & (~ 
                                                 (vlSelfRef.singlecycle__DOT__instr 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.singlecycle__DOT__instr))));
        }
        singlecycle__DOT__op_a_sel = ((1U & (~ (vlSelfRef.singlecycle__DOT__instr 
                                                >> 5U))) 
                                      && ((1U & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 4U)) 
                                          && ((1U & 
                                               (~ (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 3U))) 
                                              && ((1U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.singlecycle__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.singlecycle__DOT__instr))))));
    }
    if (vlSelfRef.i_rst) {
        vlSelfRef.o_io_lcd = 0U;
        vlSelfRef.o_io_ledg = 0U;
        vlSelfRef.o_io_ledr = 0U;
        vlSelfRef.o_io_hex0 = 0U;
        vlSelfRef.o_io_hex1 = 0U;
        vlSelfRef.o_io_hex2 = 0U;
        vlSelfRef.o_io_hex3 = 0U;
        vlSelfRef.o_io_hex4 = 0U;
        vlSelfRef.o_io_hex5 = 0U;
        vlSelfRef.o_io_hex6 = 0U;
        vlSelfRef.o_io_hex7 = 0U;
    } else {
        vlSelfRef.o_io_lcd = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
            [4U];
        vlSelfRef.o_io_ledg = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
            [1U];
        vlSelfRef.o_io_ledr = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
            [0U];
        vlSelfRef.o_io_hex0 = (0x7fU & vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [2U]);
        vlSelfRef.o_io_hex1 = (0x7fU & (vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 8U));
        vlSelfRef.o_io_hex2 = (0x7fU & (vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 0x10U));
        vlSelfRef.o_io_hex3 = (0x7fU & (vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 0x18U));
        vlSelfRef.o_io_hex4 = (0x7fU & vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [3U]);
        vlSelfRef.o_io_hex5 = (0x7fU & (vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 8U));
        vlSelfRef.o_io_hex6 = (0x7fU & (vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 0x10U));
        vlSelfRef.o_io_hex7 = (0x7fU & (vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 0x18U));
    }
    singlecycle__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (0x1fU & (vlSelfRef.singlecycle__DOT__instr 
                            >> 0xfU))) & (vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg
                                          [(0x1fU & 
                                            (vlSelfRef.singlecycle__DOT__instr 
                                             >> 0xfU))] 
                                          >> 0x1fU));
    vlSelfRef.singlecycle__DOT__mem_wren = ((1U & (~ 
                                                   (vlSelfRef.singlecycle__DOT__instr 
                                                    >> 6U))) 
                                            && ((1U 
                                                 & (vlSelfRef.singlecycle__DOT__instr 
                                                    >> 5U)) 
                                                && ((1U 
                                                     & (~ 
                                                        (vlSelfRef.singlecycle__DOT__instr 
                                                         >> 4U))) 
                                                    && ((1U 
                                                         & (~ 
                                                            (vlSelfRef.singlecycle__DOT__instr 
                                                             >> 3U))) 
                                                        && ((1U 
                                                             & (~ 
                                                                (vlSelfRef.singlecycle__DOT__instr 
                                                                 >> 2U))) 
                                                            && ((1U 
                                                                 & (vlSelfRef.singlecycle__DOT__instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.singlecycle__DOT__instr)))))));
    singlecycle__DOT__rs1_data = ((0U == (0x1fU & (vlSelfRef.singlecycle__DOT__instr 
                                                   >> 0xfU)))
                                   ? 0U : vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg
                                  [(0x1fU & (vlSelfRef.singlecycle__DOT__instr 
                                             >> 0xfU))]);
    vlSelfRef.singlecycle__DOT__rs2_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 0x14U)))
                                             ? 0U : 
                                            vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg
                                            [(0x1fU 
                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 0x14U))]);
    if ((4U & (IData)(singlecycle__DOT__imm_sel))) {
        if ((2U & (IData)(singlecycle__DOT__imm_sel))) {
            vlSelfRef.singlecycle__DOT__imm = vlSelfRef.singlecycle__DOT__instr;
        } else if ((1U & (IData)(singlecycle__DOT__imm_sel))) {
            vlSelfRef.singlecycle__DOT__imm = (0xfffff000U 
                                               & vlSelfRef.singlecycle__DOT__instr);
        } else {
            vlSelfRef.singlecycle__DOT__imm = ((0xfffU 
                                                & vlSelfRef.singlecycle__DOT__imm) 
                                               | (((- (IData)(
                                                              (vlSelfRef.singlecycle__DOT__instr 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (0xff000U 
                                                     & vlSelfRef.singlecycle__DOT__instr)));
            vlSelfRef.singlecycle__DOT__imm = ((0xfffff000U 
                                                & vlSelfRef.singlecycle__DOT__imm) 
                                               | ((0x800U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.singlecycle__DOT__instr 
                                                        >> 0x14U))));
        }
    } else if ((2U & (IData)(singlecycle__DOT__imm_sel))) {
        if ((1U & (IData)(singlecycle__DOT__imm_sel))) {
            vlSelfRef.singlecycle__DOT__imm = ((0x7ffU 
                                                & vlSelfRef.singlecycle__DOT__imm) 
                                               | (((- (IData)(
                                                              (vlSelfRef.singlecycle__DOT__instr 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (0x800U 
                                                     & (vlSelfRef.singlecycle__DOT__instr 
                                                        << 4U))));
            vlSelfRef.singlecycle__DOT__imm = ((0xfffff800U 
                                                & vlSelfRef.singlecycle__DOT__imm) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.singlecycle__DOT__instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.singlecycle__DOT__instr 
                                                        >> 7U))));
        } else {
            vlSelfRef.singlecycle__DOT__imm = ((0x1fU 
                                                & vlSelfRef.singlecycle__DOT__imm) 
                                               | (((- (IData)(
                                                              (vlSelfRef.singlecycle__DOT__instr 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | (0x7e0U 
                                                     & (vlSelfRef.singlecycle__DOT__instr 
                                                        >> 0x14U))));
            vlSelfRef.singlecycle__DOT__imm = ((0xffffffe0U 
                                                & vlSelfRef.singlecycle__DOT__imm) 
                                               | (0x1fU 
                                                  & (vlSelfRef.singlecycle__DOT__instr 
                                                     >> 7U)));
        }
    } else if ((1U & (IData)(singlecycle__DOT__imm_sel))) {
        vlSelfRef.singlecycle__DOT__imm = ((0x1fU & vlSelfRef.singlecycle__DOT__imm) 
                                           | (((- (IData)(
                                                          (vlSelfRef.singlecycle__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xbU) 
                                              | (0x7e0U 
                                                 & (vlSelfRef.singlecycle__DOT__instr 
                                                    >> 0x14U))));
        vlSelfRef.singlecycle__DOT__imm = ((0xffffffe0U 
                                            & vlSelfRef.singlecycle__DOT__imm) 
                                           | (0x1fU 
                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                 >> 0x14U)));
    } else {
        vlSelfRef.singlecycle__DOT__imm = 0U;
    }
    if (singlecycle__DOT__op_a_sel) {
        if (singlecycle__DOT__op_a_sel) {
            vlSelfRef.singlecycle__DOT__operand_a = vlSelfRef.singlecycle__DOT__pc;
        }
    } else {
        vlSelfRef.singlecycle__DOT__operand_a = singlecycle__DOT__rs1_data;
    }
    singlecycle__DOT__block_brc__DOT__carryFlag = (1U 
                                                   & (IData)(
                                                             (1ULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  ((~ (QData)((IData)(vlSelfRef.singlecycle__DOT__rs2_data))) 
                                                                   + (QData)((IData)(singlecycle__DOT__rs1_data)))) 
                                                                 >> 0x20U))));
    if (singlecycle__DOT__op_b_sel) {
        if (singlecycle__DOT__op_b_sel) {
            vlSelfRef.singlecycle__DOT__operand_b = vlSelfRef.singlecycle__DOT__imm;
        }
    } else {
        vlSelfRef.singlecycle__DOT__operand_b = vlSelfRef.singlecycle__DOT__rs2_data;
    }
    singlecycle__DOT__br_less = ((IData)(vlSelfRef.singlecycle__DOT__br_unsigned)
                                  ? (IData)(singlecycle__DOT__block_brc__DOT__carryFlag)
                                  : (((IData)(singlecycle__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                      == ((0U != (0x1fU 
                                                  & (vlSelfRef.singlecycle__DOT__instr 
                                                     >> 0x14U))) 
                                          & (vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg
                                             [(0x1fU 
                                               & (vlSelfRef.singlecycle__DOT__instr 
                                                  >> 0x14U))] 
                                             >> 0x1fU)))
                                      ? (IData)(singlecycle__DOT__block_brc__DOT__carryFlag)
                                      : (IData)(singlecycle__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0)));
    singlecycle__DOT__block_alu__DOT__carryFlag = (1U 
                                                   & (IData)(
                                                             (1ULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  ((~ (QData)((IData)(vlSelfRef.singlecycle__DOT__operand_b))) 
                                                                   + (QData)((IData)(vlSelfRef.singlecycle__DOT__operand_a)))) 
                                                                 >> 0x20U))));
    singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
        = vlSelfRef.singlecycle__DOT__operand_a;
    singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.singlecycle__DOT__operand_b))) {
        singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
            = (singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
               << 1U);
        singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i);
    }
    singlecycle__DOT__block_alu__DOT__srl_tmp = singlecycle__DOT__block_alu__DOT__shiftl_1__DOT__tmp;
    singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
        = vlSelfRef.singlecycle__DOT__operand_a;
    singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.singlecycle__DOT__operand_b))) {
        singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
            = (singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
               >> 1U);
        singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i);
    }
    singlecycle__DOT__block_alu__DOT__srr_tmp = singlecycle__DOT__block_alu__DOT__shiftr_1__DOT__tmp;
    singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
        = vlSelfRef.singlecycle__DOT__operand_a;
    singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.singlecycle__DOT__operand_b))) {
        singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
            = ((0x80000000U & vlSelfRef.singlecycle__DOT__operand_a) 
               | (singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
                  >> 1U));
        singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i);
    }
    singlecycle__DOT__block_alu__DOT__sra_tmp = singlecycle__DOT__block_alu__DOT__shiftra_1__DOT__tmp;
    singlecycle__DOT__br_sel = ((1U & (vlSelfRef.singlecycle__DOT__instr 
                                       >> 6U)) && (
                                                   (1U 
                                                    & (vlSelfRef.singlecycle__DOT__instr 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.singlecycle__DOT__instr 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.singlecycle__DOT__instr)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.singlecycle__DOT__instr 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.singlecycle__DOT__instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.singlecycle__DOT__instr)))
                                                            : 
                                                           ((4U 
                                                             & vlSelfRef.singlecycle__DOT__instr)
                                                             ? 
                                                            ((1U 
                                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.singlecycle__DOT__instr))
                                                             : 
                                                            ((1U 
                                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                                 >> 1U)) 
                                                             && ((1U 
                                                                  & vlSelfRef.singlecycle__DOT__instr) 
                                                                 && (1U 
                                                                     & ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelfRef.singlecycle__DOT__instr 
                                                                             >> 0xcU)))
                                                                         ? 
                                                                        (0U 
                                                                         == 
                                                                         ((IData)(1U) 
                                                                          + 
                                                                          (((0U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                                                >> 0x14U)))
                                                                             ? 0xffffffffU
                                                                             : 
                                                                            (~ 
                                                                             vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSelfRef.singlecycle__DOT__instr 
                                                                                >> 0x14U))])) 
                                                                           + singlecycle__DOT__rs1_data)))
                                                                         : 
                                                                        ((4U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.singlecycle__DOT__instr 
                                                                              >> 0xcU)))
                                                                          ? (IData)(singlecycle__DOT__br_less)
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelfRef.singlecycle__DOT__instr 
                                                                               >> 0xcU)))
                                                                           ? (IData)(singlecycle__DOT__br_less)
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelfRef.singlecycle__DOT__instr 
                                                                                >> 0xcU)))
                                                                            ? 
                                                                           (0U 
                                                                            != 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.singlecycle__DOT__instr 
                                                                                >> 0x14U)))
                                                                                ? 0xffffffffU
                                                                                : 
                                                                               (~ 
                                                                                vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.singlecycle__DOT__instr 
                                                                                >> 0x14U))])) 
                                                                              + singlecycle__DOT__rs1_data)))
                                                                            : 
                                                                           (~ (IData)(singlecycle__DOT__br_less))))))))))))));
    vlSelfRef.singlecycle__DOT__alu_data = ((8U & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                   ? 0U
                                                   : vlSelfRef.singlecycle__DOT__operand_b)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                   ? singlecycle__DOT__block_alu__DOT__sra_tmp
                                                   : singlecycle__DOT__block_alu__DOT__srr_tmp)))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                   ? singlecycle__DOT__block_alu__DOT__srl_tmp
                                                   : 
                                                  (vlSelfRef.singlecycle__DOT__operand_a 
                                                   & vlSelfRef.singlecycle__DOT__operand_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.singlecycle__DOT__operand_a 
                                                   | vlSelfRef.singlecycle__DOT__operand_b)
                                                   : 
                                                  (vlSelfRef.singlecycle__DOT__operand_a 
                                                   ^ vlSelfRef.singlecycle__DOT__operand_b)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                   ? (IData)(singlecycle__DOT__block_alu__DOT__carryFlag)
                                                   : 
                                                  (1U 
                                                   & (((vlSelfRef.singlecycle__DOT__operand_a 
                                                        >> 0x1fU) 
                                                       == 
                                                       (vlSelfRef.singlecycle__DOT__operand_b 
                                                        >> 0x1fU))
                                                       ? (IData)(singlecycle__DOT__block_alu__DOT__carryFlag)
                                                       : 
                                                      (vlSelfRef.singlecycle__DOT__operand_a 
                                                       >> 0x1fU))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.singlecycle__DOT__alu_op))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((~ vlSelfRef.singlecycle__DOT__operand_b) 
                                                    + vlSelfRef.singlecycle__DOT__operand_a))
                                                   : 
                                                  (vlSelfRef.singlecycle__DOT__operand_a 
                                                   + vlSelfRef.singlecycle__DOT__operand_b)))));
    vlSelfRef.singlecycle__DOT__block_lsu__DOT__mux31__DOT__addr_sel 
        = ((0x780U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                 >> 4U))) ? 0U : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.singlecycle__DOT__alu_data 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x702U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.singlecycle__DOT__alu_data 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x701U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.singlecycle__DOT__alu_data 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((0x700U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.singlecycle__DOT__alu_data 
                                                          >> 4U)))
                                                      ? 1U
                                                      : 2U)))));
    if (singlecycle__DOT__br_sel) {
        if (singlecycle__DOT__br_sel) {
            vlSelfRef.singlecycle__DOT__nxt_pc = vlSelfRef.singlecycle__DOT__alu_data;
        }
    } else {
        vlSelfRef.singlecycle__DOT__nxt_pc = ((IData)(4U) 
                                              + vlSelfRef.singlecycle__DOT__pc);
    }
    vlSelfRef.singlecycle__DOT__block_lsu__DOT__en_datamem 
        = ((0x2000U <= (0xffffU & vlSelfRef.singlecycle__DOT__alu_data)) 
           & (0x3fffU >= (0xffffU & vlSelfRef.singlecycle__DOT__alu_data)));
    vlSelfRef.singlecycle__DOT__block_lsu__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.singlecycle__DOT__alu_data)) 
                     & (0x3fffU >= (0xffffU & vlSelfRef.singlecycle__DOT__alu_data))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.singlecycle__DOT__alu_data)) 
               & (0x703fU >= (0xffffU & vlSelfRef.singlecycle__DOT__alu_data))));
    singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                 >> 4U))) ? vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                         >> 4U))) ? 
                   vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                                 >> 4U)))
                            ? ((4U & vlSelfRef.singlecycle__DOT__alu_data)
                                ? vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.singlecycle__DOT__alu_data 
                                           >> 4U)))
                                         ? vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    vlSelfRef.singlecycle__DOT__block_lsu__DOT____Vcellinp__mem_sdram__wr_en 
        = ((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__en_datamem) 
           & (IData)(vlSelfRef.singlecycle__DOT__mem_wren));
    if ((2U & vlSelfRef.singlecycle__DOT__alu_data)) {
        singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.singlecycle__DOT__alu_data)
                ? (0xff000000U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs));
        singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.singlecycle__DOT__alu_data)) {
        singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
        singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    } else {
        singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
        singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.singlecycle__DOT__mem_wren)
            ? ((0U == (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                ? vlSelfRef.singlecycle__DOT__rs2_data
                : ((1U == (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                    ? ((2U & vlSelfRef.singlecycle__DOT__alu_data)
                        ? ((1U & vlSelfRef.singlecycle__DOT__alu_data)
                            ? ((0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.singlecycle__DOT__rs2_data, 0x18U)) 
                               | (0xffffffU & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                            : ((0xff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.singlecycle__DOT__rs2_data, 0x10U)) 
                               | (0xff00ffffU & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)))
                        : ((1U & vlSelfRef.singlecycle__DOT__alu_data)
                            ? ((0xff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.singlecycle__DOT__rs2_data, 8U)) 
                               | (0xffff00ffU & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                            : ((0xffU & vlSelfRef.singlecycle__DOT__rs2_data) 
                               | (0xffffff00U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))))
                    : ((2U == (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                        ? ((2U & vlSelfRef.singlecycle__DOT__alu_data)
                            ? ((1U & vlSelfRef.singlecycle__DOT__alu_data)
                                ? (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.singlecycle__DOT__rs2_data, 0x10U) 
                                                  | singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                                : (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.singlecycle__DOT__rs2_data, 0x10U) 
                                                  | singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)))
                            : ((1U & vlSelfRef.singlecycle__DOT__alu_data)
                                ? ((0xffff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.singlecycle__DOT__rs2_data, 8U)) 
                                   | (0xff0000ffU & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                                : ((0xffffU & vlSelfRef.singlecycle__DOT__rs2_data) 
                                   | (0xffff0000U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))))
                        : vlSelfRef.singlecycle__DOT__rs2_data)))
            : ((4U & (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                ? ((2U & (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                    ? ((1U & (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                        ? ((0x2000U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                        ? singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp
                        : singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                : ((2U & (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                    ? ((1U & (IData)(vlSelfRef.singlecycle__DOT__slt_sl))
                        ? singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_bs
                        : 0U) : 0U)));
    if (((~ (IData)(vlSelfRef.singlecycle__DOT__mem_wren)) 
         & (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__en_op_buf))) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__data_out_2 
            = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
    }
}

VL_ATTR_COLD void Vsinglecycle___024root___eval_triggers__stl(Vsinglecycle___024root* vlSelf);

VL_ATTR_COLD bool Vsinglecycle___024root___eval_phase__stl(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsinglecycle___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsinglecycle___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__ico(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__act(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__nba(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vsinglecycle___024root___ctor_var_reset(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_io_sw = VL_RAND_RESET_I(32);
    vlSelf->i_io_btn = VL_RAND_RESET_I(4);
    vlSelf->o_ins_n_vld = VL_RAND_RESET_I(1);
    vlSelf->o_io_lcd = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledg = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledr = VL_RAND_RESET_I(32);
    vlSelf->o_io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex4 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex5 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex6 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex7 = VL_RAND_RESET_I(7);
    vlSelf->singlecycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->singlecycle__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->singlecycle__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__slt_sl = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->singlecycle__DOT__block_imem__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->singlecycle__DOT__block_regfile__DOT__Reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->singlecycle__DOT__block_lsu__DOT__en_datamem = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__block_lsu__DOT__en_op_buf = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__block_lsu__DOT__data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__block_lsu__DOT__data_out_2 = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__block_lsu__DOT__INPUT = VL_RAND_RESET_I(32);
    vlSelf->singlecycle__DOT__block_lsu__DOT____Vcellinp__mem_sdram__wr_en = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_out = VL_RAND_RESET_I(16);
    vlSelf->singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_out = VL_RAND_RESET_I(16);
    vlSelf->singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe = VL_RAND_RESET_I(1);
    vlSelf->singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->singlecycle__DOT__block_lsu__DOT__mux31__DOT__addr_sel = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst__0 = VL_RAND_RESET_I(1);
}
