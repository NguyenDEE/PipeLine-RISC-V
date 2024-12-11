// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu___024root.h"

void Vlsu___024root___ico_sequent__TOP__0(Vlsu___024root* vlSelf);

void Vlsu___024root___eval_ico(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vlsu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vlsu___024root___ico_sequent__TOP__0(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__data_bs;
    lsu__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.o_io_ledr = 0U;
        vlSelfRef.o_io_ledg = 0U;
        vlSelfRef.o_io_hex0 = 0U;
        vlSelfRef.o_io_hex1 = 0U;
        vlSelfRef.o_io_hex2 = 0U;
        vlSelfRef.o_io_hex3 = 0U;
        vlSelfRef.o_io_hex4 = 0U;
        vlSelfRef.o_io_hex5 = 0U;
        vlSelfRef.o_io_hex6 = 0U;
        vlSelfRef.o_io_hex7 = 0U;
        vlSelfRef.o_io_lcd = 0U;
    } else {
        vlSelfRef.o_io_ledr = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
            [0U];
        vlSelfRef.o_io_ledg = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
            [1U];
        vlSelfRef.o_io_hex0 = (0x7fU & vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                               [2U]);
        vlSelfRef.o_io_hex1 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 8U));
        vlSelfRef.o_io_hex2 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 0x10U));
        vlSelfRef.o_io_hex3 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 0x18U));
        vlSelfRef.o_io_hex4 = (0x7fU & vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                               [3U]);
        vlSelfRef.o_io_hex5 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 8U));
        vlSelfRef.o_io_hex6 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 0x10U));
        vlSelfRef.o_io_hex7 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 0x18U));
        vlSelfRef.o_io_lcd = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
            [4U];
    }
    vlSelfRef.lsu__DOT__en_datamem = ((0x2000U <= (0xffffU 
                                                   & vlSelfRef.i_lsu_addr)) 
                                      & (0x3fffU >= 
                                         (0xffffU & vlSelfRef.i_lsu_addr)));
    vlSelfRef.lsu__DOT__mux31__DOT__addr_sel = ((0x780U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelfRef.i_lsu_addr 
                                                     >> 4U)))
                                                 ? 0U
                                                 : 
                                                ((0x703U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelfRef.i_lsu_addr 
                                                      >> 4U)))
                                                  ? 1U
                                                  : 
                                                 ((0x702U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.i_lsu_addr 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x701U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.i_lsu_addr 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x700U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.i_lsu_addr 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 2U)))));
    vlSelfRef.lsu__DOT__en_op_buf = ((1U & (~ ((0x2000U 
                                                <= 
                                                (0xffffU 
                                                 & vlSelfRef.i_lsu_addr)) 
                                               & (0x3fffU 
                                                  >= 
                                                  (0xffffU 
                                                   & vlSelfRef.i_lsu_addr))))) 
                                     && ((0x7000U <= 
                                          (0xffffU 
                                           & vlSelfRef.i_lsu_addr)) 
                                         & (0x703fU 
                                            >= (0xffffU 
                                                & vlSelfRef.i_lsu_addr))));
    lsu__DOT__outputperiph__DOT__data_bs = ((0x700U 
                                             == (0xfffU 
                                                 & (vlSelfRef.i_lsu_addr 
                                                    >> 4U)))
                                             ? vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                            [0U] : 
                                            ((0x701U 
                                              == (0xfffU 
                                                  & (vlSelfRef.i_lsu_addr 
                                                     >> 4U)))
                                              ? vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                             [1U] : 
                                             ((0x702U 
                                               == (0xfffU 
                                                   & (vlSelfRef.i_lsu_addr 
                                                      >> 4U)))
                                               ? ((4U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                                  [3U]
                                                   : 
                                                  vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                                  [2U])
                                               : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.i_lsu_addr 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                                  [4U]
                                                   : 0U))));
    vlSelfRef.lsu__DOT____Vcellinp__mem_sdram__wr_en 
        = ((IData)(vlSelfRef.i_lsu_wren) & (IData)(vlSelfRef.lsu__DOT__en_datamem));
    if ((2U & vlSelfRef.i_lsu_addr)) {
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.i_lsu_addr) ? (0xff000000U 
                                              & lsu__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & lsu__DOT__outputperiph__DOT__data_bs));
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & lsu__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.i_lsu_addr)) {
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & lsu__DOT__outputperiph__DOT__data_bs);
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & lsu__DOT__outputperiph__DOT__data_bs);
    } else {
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & lsu__DOT__outputperiph__DOT__data_bs);
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & lsu__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.i_lsu_wren) ? ((0U == (IData)(vlSelfRef.slt_sl))
                                             ? vlSelfRef.i_st_data
                                             : ((1U 
                                                 == (IData)(vlSelfRef.slt_sl))
                                                 ? 
                                                ((2U 
                                                  & vlSelfRef.i_lsu_addr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  ((0xff000000U 
                                                    & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x18U)) 
                                                   | (0xffffffU 
                                                      & lsu__DOT__outputperiph__DOT__data_bs))
                                                   : 
                                                  ((0xff0000U 
                                                    & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x10U)) 
                                                   | (0xff00ffffU 
                                                      & lsu__DOT__outputperiph__DOT__data_bs)))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  ((0xff00U 
                                                    & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 8U)) 
                                                   | (0xffff00ffU 
                                                      & lsu__DOT__outputperiph__DOT__data_bs))
                                                   : 
                                                  ((0xffU 
                                                    & vlSelfRef.i_st_data) 
                                                   | (0xffffff00U 
                                                      & lsu__DOT__outputperiph__DOT__data_bs))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.slt_sl))
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.i_lsu_addr)
                                                    ? 
                                                   (0xffff0000U 
                                                    & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x10U) 
                                                       | lsu__DOT__outputperiph__DOT__data_bs))
                                                    : 
                                                   (0xffff0000U 
                                                    & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x10U) 
                                                       | lsu__DOT__outputperiph__DOT__data_bs)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.i_lsu_addr)
                                                    ? 
                                                   ((0xffff00U 
                                                     & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 8U)) 
                                                    | (0xff0000ffU 
                                                       & lsu__DOT__outputperiph__DOT__data_bs))
                                                    : 
                                                   ((0xffffU 
                                                     & vlSelfRef.i_st_data) 
                                                    | (0xffff0000U 
                                                       & lsu__DOT__outputperiph__DOT__data_bs))))
                                                  : vlSelfRef.i_st_data)))
            : ((4U & (IData)(vlSelfRef.slt_sl)) ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.slt_sl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.slt_sl))
                                                     ? 
                                                    ((0x2000U 
                                                      & lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                                                      ? 
                                                     (0xffff0000U 
                                                      | lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                                                      : lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                                                     : 
                                                    ((0x80U 
                                                      & lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                                                      ? 
                                                     (0xffffff00U 
                                                      | lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                                                      : lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.slt_sl))
                                                     ? lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp
                                                     : lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                : ((2U & (IData)(vlSelfRef.slt_sl))
                    ? ((1U & (IData)(vlSelfRef.slt_sl))
                        ? lsu__DOT__outputperiph__DOT__data_bs
                        : 0U) : 0U)));
    if (((~ (IData)(vlSelfRef.i_lsu_wren)) & (IData)(vlSelfRef.lsu__DOT__en_op_buf))) {
        vlSelfRef.lsu__DOT__data_out_2 = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
    }
    vlSelfRef.o_ld_data = ((0U == (IData)(vlSelfRef.lsu__DOT__mux31__DOT__addr_sel))
                            ? ((IData)(vlSelfRef.i_rst)
                                ? 0U : vlSelfRef.lsu__DOT__INPUT)
                            : ((1U == (IData)(vlSelfRef.lsu__DOT__mux31__DOT__addr_sel))
                                ? vlSelfRef.lsu__DOT__data_out_2
                                : ((2U == (IData)(vlSelfRef.lsu__DOT__mux31__DOT__addr_sel))
                                    ? vlSelfRef.lsu__DOT__data_out_1
                                    : 0U)));
}

void Vlsu___024root___eval_triggers__ico(Vlsu___024root* vlSelf);

bool Vlsu___024root___eval_phase__ico(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vlsu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vlsu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vlsu___024root___eval_act(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vlsu___024root___nba_sequent__TOP__0(Vlsu___024root* vlSelf);
void Vlsu___024root___nba_sequent__TOP__1(Vlsu___024root* vlSelf);
void Vlsu___024root___nba_comb__TOP__0(Vlsu___024root* vlSelf);

void Vlsu___024root___eval_nba(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlsu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlsu___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlsu___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vlsu___024root___nba_sequent__TOP__0(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__data_bs;
    lsu__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    IData/*31:0*/ __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v0;
    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    IData/*31:0*/ __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v1;
    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    IData/*31:0*/ __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v2;
    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    IData/*31:0*/ __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v3;
    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    IData/*31:0*/ __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v4;
    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    IData/*31:0*/ __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v5;
    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v0;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v1;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v2;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v3;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v4;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v5;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    // Body
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0U;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0U;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0U;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0U;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0U;
    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.i_rst)))) {
        if (vlSelfRef.lsu__DOT__en_op_buf) {
            if (vlSelfRef.i_lsu_wren) {
                if ((0x700U == (0xfffU & (vlSelfRef.i_lsu_addr 
                                          >> 4U)))) {
                    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v0 
                        = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v0 = 1U;
                } else if ((0x701U == (0xfffU & (vlSelfRef.i_lsu_addr 
                                                 >> 4U)))) {
                    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v1 
                        = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v1 = 1U;
                } else if ((0x702U == (0xfffU & (vlSelfRef.i_lsu_addr 
                                                 >> 4U)))) {
                    if ((4U & vlSelfRef.i_lsu_addr)) {
                        __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v2 
                            = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
                        __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v2 = 1U;
                    } else {
                        __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v3 
                            = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
                        __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v3 = 1U;
                    }
                } else if ((0x703U == (0xfffU & (vlSelfRef.i_lsu_addr 
                                                 >> 4U)))) {
                    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v4 
                        = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v4 = 1U;
                } else {
                    __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v5 
                        = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                        [0U];
                    __VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v5 = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.lsu__DOT____Vcellinp__mem_sdram__wr_en)))) {
            if (((~ (IData)(vlSelfRef.i_lsu_wren)) 
                 & (IData)(vlSelfRef.lsu__DOT__en_datamem))) {
                vlSelfRef.lsu__DOT__data_out_1 = ((
                                                   ((((IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_oe)
                                                       ? (IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_out)
                                                       : 0U) 
                                                     & ((IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_oe)
                                                         ? 0xffffU
                                                         : 0U)) 
                                                    & ((IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_oe)
                                                        ? 0xffffU
                                                        : 0U)) 
                                                   << 0x10U) 
                                                  | ((((IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_oe)
                                                        ? (IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_out)
                                                        : 0U) 
                                                      & ((IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_oe)
                                                          ? 0xffffU
                                                          : 0U)) 
                                                     & ((IData)(vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_oe)
                                                         ? 0xffffU
                                                         : 0U)));
            }
        }
    }
    if (__VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v0) {
        vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF[0U] 
            = __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v0;
    }
    if (__VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v1) {
        vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF[1U] 
            = __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v1;
    }
    if (__VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v2) {
        vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF[3U] 
            = __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v2;
    }
    if (__VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v3) {
        vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF[2U] 
            = __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v3;
    }
    if (__VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v4) {
        vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF[4U] 
            = __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v4;
    }
    if (__VdlySet__lsu__DOT__outputperiph__DOT__MEMBF__v5) {
        vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF[0U] 
            = __VdlyVal__lsu__DOT__outputperiph__DOT__MEMBF__v5;
    }
    if (vlSelfRef.i_rst) {
        vlSelfRef.o_io_ledr = 0U;
        vlSelfRef.o_io_ledg = 0U;
        vlSelfRef.o_io_hex0 = 0U;
        vlSelfRef.o_io_hex1 = 0U;
        vlSelfRef.o_io_hex2 = 0U;
        vlSelfRef.o_io_hex3 = 0U;
        vlSelfRef.o_io_hex4 = 0U;
        vlSelfRef.o_io_hex5 = 0U;
        vlSelfRef.o_io_hex6 = 0U;
        vlSelfRef.o_io_hex7 = 0U;
        vlSelfRef.o_io_lcd = 0U;
        vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_oe = 0U;
        vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_oe = 0U;
        vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_out = 0U;
        vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_out = 0U;
    } else {
        vlSelfRef.o_io_ledr = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
            [0U];
        vlSelfRef.o_io_ledg = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
            [1U];
        vlSelfRef.o_io_hex0 = (0x7fU & vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                               [2U]);
        vlSelfRef.o_io_hex1 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 8U));
        vlSelfRef.o_io_hex2 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 0x10U));
        vlSelfRef.o_io_hex3 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [2U] >> 0x18U));
        vlSelfRef.o_io_hex4 = (0x7fU & vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                               [3U]);
        vlSelfRef.o_io_hex5 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 8U));
        vlSelfRef.o_io_hex6 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 0x10U));
        vlSelfRef.o_io_hex7 = (0x7fU & (vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                        [3U] >> 0x18U));
        vlSelfRef.o_io_lcd = vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
            [4U];
        vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_oe = 0U;
        vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_oe = 0U;
        if (vlSelfRef.lsu__DOT____Vcellinp__mem_sdram__wr_en) {
            vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_oe = 1U;
            vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_oe = 1U;
            vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_1_out 
                = (vlSelfRef.i_st_data >> 0x10U);
            vlSelfRef.lsu__DOT__mem_sdram__DOT__dq_0_out 
                = (0xffffU & vlSelfRef.i_st_data);
        }
    }
    lsu__DOT__outputperiph__DOT__data_bs = ((0x700U 
                                             == (0xfffU 
                                                 & (vlSelfRef.i_lsu_addr 
                                                    >> 4U)))
                                             ? vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                            [0U] : 
                                            ((0x701U 
                                              == (0xfffU 
                                                  & (vlSelfRef.i_lsu_addr 
                                                     >> 4U)))
                                              ? vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                             [1U] : 
                                             ((0x702U 
                                               == (0xfffU 
                                                   & (vlSelfRef.i_lsu_addr 
                                                      >> 4U)))
                                               ? ((4U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                                  [3U]
                                                   : 
                                                  vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                                  [2U])
                                               : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.i_lsu_addr 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelfRef.lsu__DOT__outputperiph__DOT__MEMBF
                                                  [4U]
                                                   : 0U))));
    if ((2U & vlSelfRef.i_lsu_addr)) {
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.i_lsu_addr) ? (0xff000000U 
                                              & lsu__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & lsu__DOT__outputperiph__DOT__data_bs));
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & lsu__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.i_lsu_addr)) {
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & lsu__DOT__outputperiph__DOT__data_bs);
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & lsu__DOT__outputperiph__DOT__data_bs);
    } else {
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & lsu__DOT__outputperiph__DOT__data_bs);
        lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & lsu__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.i_lsu_wren) ? ((0U == (IData)(vlSelfRef.slt_sl))
                                             ? vlSelfRef.i_st_data
                                             : ((1U 
                                                 == (IData)(vlSelfRef.slt_sl))
                                                 ? 
                                                ((2U 
                                                  & vlSelfRef.i_lsu_addr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  ((0xff000000U 
                                                    & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x18U)) 
                                                   | (0xffffffU 
                                                      & lsu__DOT__outputperiph__DOT__data_bs))
                                                   : 
                                                  ((0xff0000U 
                                                    & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x10U)) 
                                                   | (0xff00ffffU 
                                                      & lsu__DOT__outputperiph__DOT__data_bs)))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  ((0xff00U 
                                                    & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 8U)) 
                                                   | (0xffff00ffU 
                                                      & lsu__DOT__outputperiph__DOT__data_bs))
                                                   : 
                                                  ((0xffU 
                                                    & vlSelfRef.i_st_data) 
                                                   | (0xffffff00U 
                                                      & lsu__DOT__outputperiph__DOT__data_bs))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.slt_sl))
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.i_lsu_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.i_lsu_addr)
                                                    ? 
                                                   (0xffff0000U 
                                                    & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x10U) 
                                                       | lsu__DOT__outputperiph__DOT__data_bs))
                                                    : 
                                                   (0xffff0000U 
                                                    & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 0x10U) 
                                                       | lsu__DOT__outputperiph__DOT__data_bs)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.i_lsu_addr)
                                                    ? 
                                                   ((0xffff00U 
                                                     & VL_SHIFTL_III(32,32,32, vlSelfRef.i_st_data, 8U)) 
                                                    | (0xff0000ffU 
                                                       & lsu__DOT__outputperiph__DOT__data_bs))
                                                    : 
                                                   ((0xffffU 
                                                     & vlSelfRef.i_st_data) 
                                                    | (0xffff0000U 
                                                       & lsu__DOT__outputperiph__DOT__data_bs))))
                                                  : vlSelfRef.i_st_data)))
            : ((4U & (IData)(vlSelfRef.slt_sl)) ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.slt_sl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.slt_sl))
                                                     ? 
                                                    ((0x2000U 
                                                      & lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                                                      ? 
                                                     (0xffff0000U 
                                                      | lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                                                      : lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                                                     : 
                                                    ((0x80U 
                                                      & lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                                                      ? 
                                                     (0xffffff00U 
                                                      | lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                                                      : lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.slt_sl))
                                                     ? lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp
                                                     : lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                : ((2U & (IData)(vlSelfRef.slt_sl))
                    ? ((1U & (IData)(vlSelfRef.slt_sl))
                        ? lsu__DOT__outputperiph__DOT__data_bs
                        : 0U) : 0U)));
    if (((~ (IData)(vlSelfRef.i_lsu_wren)) & (IData)(vlSelfRef.lsu__DOT__en_op_buf))) {
        vlSelfRef.lsu__DOT__data_out_2 = vlSelfRef.lsu__DOT__outputperiph__DOT__data_tmp;
    }
}

VL_INLINE_OPT void Vlsu___024root___nba_sequent__TOP__1(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsu__DOT__INPUT = vlSelfRef.i_io_sw;
}

VL_INLINE_OPT void Vlsu___024root___nba_comb__TOP__0(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_ld_data = ((0U == (IData)(vlSelfRef.lsu__DOT__mux31__DOT__addr_sel))
                            ? ((IData)(vlSelfRef.i_rst)
                                ? 0U : vlSelfRef.lsu__DOT__INPUT)
                            : ((1U == (IData)(vlSelfRef.lsu__DOT__mux31__DOT__addr_sel))
                                ? vlSelfRef.lsu__DOT__data_out_2
                                : ((2U == (IData)(vlSelfRef.lsu__DOT__mux31__DOT__addr_sel))
                                    ? vlSelfRef.lsu__DOT__data_out_1
                                    : 0U)));
}

void Vlsu___024root___eval_triggers__act(Vlsu___024root* vlSelf);

bool Vlsu___024root___eval_phase__act(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlsu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlsu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlsu___024root___eval_phase__nba(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlsu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__ico(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__nba(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__act(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG

void Vlsu___024root___eval(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval\n"); );
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
            Vlsu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lsu.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vlsu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vlsu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lsu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vlsu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lsu.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlsu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlsu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlsu___024root___eval_debug_assertions(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_lsu_wren & 0xfeU))) {
        Verilated::overWidthError("i_lsu_wren");}
    if (VL_UNLIKELY((vlSelfRef.i_io_btn & 0xf0U))) {
        Verilated::overWidthError("i_io_btn");}
    if (VL_UNLIKELY((vlSelfRef.slt_sl & 0xf8U))) {
        Verilated::overWidthError("slt_sl");}
}
#endif  // VL_DEBUG
