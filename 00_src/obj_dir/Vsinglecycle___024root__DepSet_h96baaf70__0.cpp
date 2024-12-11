// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsinglecycle.h for the primary calling header

#include "Vsinglecycle__pch.h"
#include "Vsinglecycle___024root.h"

void Vsinglecycle___024root___ico_sequent__TOP__0(Vsinglecycle___024root* vlSelf);

void Vsinglecycle___024root___eval_ico(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsinglecycle___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsinglecycle___024root___ico_sequent__TOP__0(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsinglecycle___024root___eval_triggers__ico(Vsinglecycle___024root* vlSelf);

bool Vsinglecycle___024root___eval_phase__ico(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsinglecycle___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsinglecycle___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsinglecycle___024root___eval_act(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vsinglecycle___024root___nba_sequent__TOP__0(Vsinglecycle___024root* vlSelf);
void Vsinglecycle___024root___nba_sequent__TOP__1(Vsinglecycle___024root* vlSelf);

void Vsinglecycle___024root___eval_nba(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsinglecycle___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsinglecycle___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vsinglecycle___024root___nba_sequent__TOP__0(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___nba_sequent__TOP__0\n"); );
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
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_regfile__DOT__Reg__v0;
    __VdlyVal__singlecycle__DOT__block_regfile__DOT__Reg__v0 = 0;
    CData/*4:0*/ __VdlyDim0__singlecycle__DOT__block_regfile__DOT__Reg__v0;
    __VdlyDim0__singlecycle__DOT__block_regfile__DOT__Reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0;
    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1;
    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2;
    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3;
    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4;
    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    IData/*31:0*/ __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5;
    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_regfile__DOT__Reg__v0;
    __VdlySet__singlecycle__DOT__block_regfile__DOT__Reg__v0 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    CData/*0:0*/ __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    // Body
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0U;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0U;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0U;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0U;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0U;
    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0U;
    __VdlySet__singlecycle__DOT__block_regfile__DOT__Reg__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.i_rst)))) {
        if (vlSelfRef.singlecycle__DOT__block_lsu__DOT__en_op_buf) {
            if (vlSelfRef.singlecycle__DOT__mem_wren) {
                if ((0x700U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                          >> 4U)))) {
                    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 
                        = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 1U;
                } else if ((0x701U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                                 >> 4U)))) {
                    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 
                        = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 1U;
                } else if ((0x702U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                                 >> 4U)))) {
                    if ((4U & vlSelfRef.singlecycle__DOT__alu_data)) {
                        __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 
                            = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                        __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 1U;
                    } else {
                        __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 
                            = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                        __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 1U;
                    }
                } else if ((0x703U == (0xfffU & (vlSelfRef.singlecycle__DOT__alu_data 
                                                 >> 4U)))) {
                    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 
                        = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 1U;
                } else {
                    __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 
                        = vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                        [0U];
                    __VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 1U;
                }
            }
        }
    }
    if (__VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[0U] 
            = __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0;
    }
    if (__VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[1U] 
            = __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1;
    }
    if (__VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[3U] 
            = __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2;
    }
    if (__VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[2U] 
            = __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3;
    }
    if (__VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[4U] 
            = __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4;
    }
    if (__VdlySet__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5) {
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[0U] 
            = __VdlyVal__singlecycle__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5;
    }
    if (vlSelfRef.i_rst) {
        if (vlSelfRef.singlecycle__DOT__rd_wren) {
            __VdlyVal__singlecycle__DOT__block_regfile__DOT__Reg__v0 
                = ((0U == (IData)(vlSelfRef.singlecycle__DOT__wb_sel))
                    ? vlSelfRef.singlecycle__DOT__alu_data
                    : ((1U == (IData)(vlSelfRef.singlecycle__DOT__wb_sel))
                        ? ((0U == (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                            ? ((IData)(vlSelfRef.i_rst)
                                ? 0U : vlSelfRef.singlecycle__DOT__block_lsu__DOT__INPUT)
                            : ((1U == (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                ? vlSelfRef.singlecycle__DOT__block_lsu__DOT__data_out_2
                                : ((2U == (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                    ? vlSelfRef.singlecycle__DOT__block_lsu__DOT__data_out_1
                                    : 0U))) : ((2U 
                                                == (IData)(vlSelfRef.singlecycle__DOT__wb_sel))
                                                ? ((IData)(4U) 
                                                   + vlSelfRef.singlecycle__DOT__pc)
                                                : 0U)));
            __VdlyDim0__singlecycle__DOT__block_regfile__DOT__Reg__v0 
                = (0x1fU & (vlSelfRef.singlecycle__DOT__instr 
                            >> 7U));
            __VdlySet__singlecycle__DOT__block_regfile__DOT__Reg__v0 = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.i_rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT____Vcellinp__mem_sdram__wr_en)))) {
            if (((~ (IData)(vlSelfRef.singlecycle__DOT__mem_wren)) 
                 & (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__en_datamem))) {
                vlSelfRef.singlecycle__DOT__block_lsu__DOT__data_out_1 
                    = ((((((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe)
                            ? (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_out)
                            : 0U) & ((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe)
                                      ? 0xffffU : 0U)) 
                         & ((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe)
                             ? 0xffffU : 0U)) << 0x10U) 
                       | ((((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe)
                             ? (IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_out)
                             : 0U) & ((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe)
                                       ? 0xffffU : 0U)) 
                          & ((IData)(vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe)
                              ? 0xffffU : 0U)));
            }
        }
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
        vlSelfRef.singlecycle__DOT__instr = 0U;
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe = 0U;
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe = 0U;
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_out = 0U;
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_out = 0U;
        vlSelfRef.singlecycle__DOT__pc = 0U;
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
        vlSelfRef.singlecycle__DOT__instr = vlSelfRef.singlecycle__DOT__block_imem__DOT__imem
            [(0xfffU & (vlSelfRef.singlecycle__DOT__pc 
                        >> 2U))];
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe = 0U;
        vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe = 0U;
        if (vlSelfRef.singlecycle__DOT__block_lsu__DOT____Vcellinp__mem_sdram__wr_en) {
            vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_oe = 1U;
            vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_oe = 1U;
            vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_1_out 
                = (vlSelfRef.singlecycle__DOT__rs2_data 
                   >> 0x10U);
            vlSelfRef.singlecycle__DOT__block_lsu__DOT__mem_sdram__DOT__dq_0_out 
                = (0xffffU & vlSelfRef.singlecycle__DOT__rs2_data);
        }
        vlSelfRef.singlecycle__DOT__pc = vlSelfRef.singlecycle__DOT__nxt_pc;
    }
    if (__VdlySet__singlecycle__DOT__block_regfile__DOT__Reg__v0) {
        vlSelfRef.singlecycle__DOT__block_regfile__DOT__Reg[__VdlyDim0__singlecycle__DOT__block_regfile__DOT__Reg__v0] 
            = __VdlyVal__singlecycle__DOT__block_regfile__DOT__Reg__v0;
    }
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
    singlecycle__DOT__block_brc__DOT__carryFlag = (1U 
                                                   & (IData)(
                                                             (1ULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  ((~ (QData)((IData)(vlSelfRef.singlecycle__DOT__rs2_data))) 
                                                                   + (QData)((IData)(singlecycle__DOT__rs1_data)))) 
                                                                 >> 0x20U))));
    if (singlecycle__DOT__op_a_sel) {
        if (singlecycle__DOT__op_a_sel) {
            vlSelfRef.singlecycle__DOT__operand_a = vlSelfRef.singlecycle__DOT__pc;
        }
    } else {
        vlSelfRef.singlecycle__DOT__operand_a = singlecycle__DOT__rs1_data;
    }
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

VL_INLINE_OPT void Vsinglecycle___024root___nba_sequent__TOP__1(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.singlecycle__DOT__block_lsu__DOT__INPUT 
        = vlSelfRef.i_io_sw;
}

void Vsinglecycle___024root___eval_triggers__act(Vsinglecycle___024root* vlSelf);

bool Vsinglecycle___024root___eval_phase__act(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsinglecycle___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsinglecycle___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsinglecycle___024root___eval_phase__nba(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsinglecycle___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__ico(Vsinglecycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__nba(Vsinglecycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsinglecycle___024root___dump_triggers__act(Vsinglecycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vsinglecycle___024root___eval(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval\n"); );
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
            Vsinglecycle___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("singlecycle.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsinglecycle___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsinglecycle___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("singlecycle.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsinglecycle___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("singlecycle.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsinglecycle___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsinglecycle___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsinglecycle___024root___eval_debug_assertions(Vsinglecycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsinglecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinglecycle___024root___eval_debug_assertions\n"); );
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
