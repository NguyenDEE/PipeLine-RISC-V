// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_cycle.h for the primary calling header

#include "Vfetch_cycle__pch.h"
#include "Vfetch_cycle___024root.h"

void Vfetch_cycle___024root___ico_sequent__TOP__0(Vfetch_cycle___024root* vlSelf);

void Vfetch_cycle___024root___eval_ico(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vfetch_cycle___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfetch_cycle___024root___ico_sequent__TOP__0(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.o_instr_D = 0U;
        vlSelfRef.o_pc_4_D = 0U;
        vlSelfRef.o_pc_D = 0U;
        vlSelfRef.fetch_cycle__DOT__pc_four_F = 0U;
    } else {
        vlSelfRef.o_instr_D = vlSelfRef.fetch_cycle__DOT__reg_instr_F;
        vlSelfRef.o_pc_4_D = vlSelfRef.fetch_cycle__DOT__reg_pc_4_F;
        vlSelfRef.o_pc_D = vlSelfRef.fetch_cycle__DOT__reg_pc_F;
        vlSelfRef.fetch_cycle__DOT__pc_four_F = ((IData)(4U) 
                                                 + vlSelfRef.fetch_cycle__DOT__pc_F);
    }
    if (vlSelfRef.fetch_cycle__DOT__pc_sel) {
        if (vlSelfRef.fetch_cycle__DOT__pc_sel) {
            vlSelfRef.fetch_cycle__DOT__pc_Q1 = vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB
                [(0x3ffU & vlSelfRef.fetch_cycle__DOT__pc_F)];
        }
    } else {
        vlSelfRef.fetch_cycle__DOT__pc_Q1 = vlSelfRef.fetch_cycle__DOT__pc_four_F;
    }
    if (vlSelfRef.fetch_cycle__DOT__pc_rp_sel) {
        if (vlSelfRef.fetch_cycle__DOT__pc_rp_sel) {
            vlSelfRef.fetch_cycle__DOT__pc_Q2 = vlSelfRef.fetch_cycle__DOT__pc_rp;
        }
    } else {
        vlSelfRef.fetch_cycle__DOT__pc_Q2 = vlSelfRef.fetch_cycle__DOT__pc_Q1;
    }
}

void Vfetch_cycle___024root___eval_triggers__ico(Vfetch_cycle___024root* vlSelf);

bool Vfetch_cycle___024root___eval_phase__ico(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vfetch_cycle___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vfetch_cycle___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vfetch_cycle___024root___eval_act(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vfetch_cycle___024root___nba_sequent__TOP__0(Vfetch_cycle___024root* vlSelf);
void Vfetch_cycle___024root___nba_sequent__TOP__1(Vfetch_cycle___024root* vlSelf);
void Vfetch_cycle___024root___nba_comb__TOP__0(Vfetch_cycle___024root* vlSelf);

void Vfetch_cycle___024root___eval_nba(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfetch_cycle___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfetch_cycle___024root___nba_sequent__TOP__1(vlSelf);
        Vfetch_cycle___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfetch_cycle___024root___nba_sequent__TOP__0(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*21:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 = 0;
    SData/*9:0*/ __Vdly__fetch_cycle__DOT__gshare_fetch__DOT__Pattern;
    __Vdly__fetch_cycle__DOT__gshare_fetch__DOT__Pattern = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7 = 0;
    IData/*31:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 = 0;
    CData/*1:0*/ __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8;
    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8 = 0;
    SData/*9:0*/ __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8;
    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7 = 0;
    CData/*0:0*/ __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 = 0;
    // Body
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 = 0U;
    __Vdly__fetch_cycle__DOT__gshare_fetch__DOT__Pattern 
        = vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2 = 0U;
    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 = 0U;
    if (vlSelfRef.i_branche_en_D) {
        __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 
            = (0x3fffffU & vlSelfRef.i_pc_E);
        __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 
            = (0x3ffU & vlSelfRef.i_pc_E);
        __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0 = 1U;
        __Vdly__fetch_cycle__DOT__gshare_fetch__DOT__Pattern 
            = (((IData)(vlSelfRef.i_taken_E) << 9U) 
               | (0x1ffU & ((IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern) 
                            >> 1U)));
        if ((2U & vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT
             [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)))])) {
            if ((1U & vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT
                 [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)))])) {
                vlSelfRef.fetch_cycle__DOT__pc_rp = 
                    ((IData)(4U) + vlSelfRef.i_pc_E);
                if (vlSelfRef.i_taken_E) {
                    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0 = 1U;
                    vlSelfRef.o_rst_br_F = 0U;
                    vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 0U;
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0 = 1U;
                } else {
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1 = 1U;
                    vlSelfRef.o_rst_br_F = 1U;
                    vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 1U;
                }
            } else {
                vlSelfRef.fetch_cycle__DOT__pc_rp = 
                    ((IData)(4U) + vlSelfRef.i_pc_E);
                if (vlSelfRef.i_taken_E) {
                    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1 = 1U;
                    vlSelfRef.o_rst_br_F = 0U;
                    vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 0U;
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2 = 1U;
                    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2 
                        = (0x3ffU & vlSelfRef.fetch_cycle__DOT__pc_F);
                } else {
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3 = 1U;
                    vlSelfRef.o_rst_br_F = 1U;
                    vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 1U;
                    __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 
                        = (0x3ffU & vlSelfRef.fetch_cycle__DOT__pc_F);
                    __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3 = 1U;
                }
            }
        } else if ((1U & vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT
                    [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)))])) {
            vlSelfRef.fetch_cycle__DOT__pc_rp = vlSelfRef.i_alu_data_E;
            if (vlSelfRef.i_taken_E) {
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4 = 1U;
                vlSelfRef.o_rst_br_F = 1U;
                vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 1U;
                __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 
                    = vlSelfRef.i_alu_data_E;
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4 = 1U;
            } else {
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5 = 1U;
                vlSelfRef.o_rst_br_F = 0U;
                vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 0U;
                __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 
                    = ((IData)(4U) + vlSelfRef.i_pc_E);
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 
                    = (0x3ffU & vlSelfRef.fetch_cycle__DOT__pc_F);
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5 = 1U;
            }
        } else {
            vlSelfRef.fetch_cycle__DOT__pc_rp = vlSelfRef.i_alu_data_E;
            if (vlSelfRef.i_taken_E) {
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6 = 1U;
                vlSelfRef.o_rst_br_F = 1U;
                vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 1U;
                __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 
                    = vlSelfRef.i_alu_data_E;
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6 = 1U;
            } else {
                __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
                __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7 = 1U;
                vlSelfRef.o_rst_br_F = 0U;
                vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 0U;
            }
        }
    } else {
        __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 
            = vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB
            [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)))];
        __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 
            = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
        __VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7 = 1U;
        __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8 
            = vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT
            [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)))];
        __VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8 
            = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
        vlSelfRef.fetch_cycle__DOT__pc_rp = 0U;
        vlSelfRef.o_rst_br_F = 0U;
        vlSelfRef.fetch_cycle__DOT__pc_rp_sel = 0U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__tag[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__tag__v0;
    }
    vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern 
        = __Vdly__fetch_cycle__DOT__gshare_fetch__DOT__Pattern;
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v0;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v1;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v2;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v3;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v4;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v5;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v6;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v0] = 3U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v1] = 2U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v2] = 3U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v3] = 0U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v4] = 3U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v5] = 0U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v6] = 1U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v7] = 0U;
    }
    if (__VdlySet__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7) {
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__BTB__v7;
        vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8] 
            = __VdlyVal__fetch_cycle__DOT__gshare_fetch__DOT__PHT__v8;
    }
}

VL_INLINE_OPT void Vfetch_cycle___024root___nba_sequent__TOP__1(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.fetch_cycle__DOT__reg_pc_4_F = 0U;
        vlSelfRef.fetch_cycle__DOT__reg_pc_F = 0U;
        vlSelfRef.fetch_cycle__DOT__reg_instr_F = 0U;
        vlSelfRef.o_pc_4_D = 0U;
        vlSelfRef.o_pc_D = 0U;
        vlSelfRef.o_instr_D = 0U;
        vlSelfRef.fetch_cycle__DOT__pc_F = 0U;
        vlSelfRef.fetch_cycle__DOT__pc_four_F = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.i_en_F)))) {
            vlSelfRef.fetch_cycle__DOT__reg_pc_4_F 
                = vlSelfRef.fetch_cycle__DOT__pc_four_F;
            vlSelfRef.fetch_cycle__DOT__reg_pc_F = vlSelfRef.fetch_cycle__DOT__pc_F;
            vlSelfRef.fetch_cycle__DOT__reg_instr_F 
                = ((IData)(vlSelfRef.i_rst) ? 0U : 
                   ((0x800U >= (0xfffU & (vlSelfRef.fetch_cycle__DOT__pc_F 
                                          >> 2U))) ? 
                    vlSelfRef.fetch_cycle__DOT__inst_mem__DOT__imem
                    [(0xfffU & (vlSelfRef.fetch_cycle__DOT__pc_F 
                                >> 2U))] : 0U));
            vlSelfRef.fetch_cycle__DOT__pc_F = vlSelfRef.fetch_cycle__DOT__pc_Q2;
        }
        vlSelfRef.o_pc_4_D = vlSelfRef.fetch_cycle__DOT__reg_pc_4_F;
        vlSelfRef.o_pc_D = vlSelfRef.fetch_cycle__DOT__reg_pc_F;
        vlSelfRef.o_instr_D = vlSelfRef.fetch_cycle__DOT__reg_instr_F;
        vlSelfRef.fetch_cycle__DOT__pc_four_F = ((IData)(4U) 
                                                 + vlSelfRef.fetch_cycle__DOT__pc_F);
    }
}

VL_INLINE_OPT void Vfetch_cycle___024root___nba_comb__TOP__0(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ fetch_cycle__DOT__gshare_fetch__DOT__predict_taken;
    fetch_cycle__DOT__gshare_fetch__DOT__predict_taken = 0;
    CData/*0:0*/ fetch_cycle__DOT__gshare_fetch__DOT__hit;
    fetch_cycle__DOT__gshare_fetch__DOT__hit = 0;
    SData/*9:0*/ fetch_cycle__DOT__gshare_fetch__DOT__addr_pht;
    fetch_cycle__DOT__gshare_fetch__DOT__addr_pht = 0;
    // Body
    fetch_cycle__DOT__gshare_fetch__DOT__addr_pht = 
        (0x3ffU & (vlSelfRef.fetch_cycle__DOT__pc_F 
                   ^ (IData)(vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__Pattern)));
    fetch_cycle__DOT__gshare_fetch__DOT__predict_taken 
        = (1U & (vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__PHT
                 [fetch_cycle__DOT__gshare_fetch__DOT__addr_pht] 
                 >> 1U));
    fetch_cycle__DOT__gshare_fetch__DOT__hit = ((vlSelfRef.fetch_cycle__DOT__pc_F 
                                                 >> 0xaU) 
                                                == 
                                                vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__tag
                                                [(0x3ffU 
                                                  & vlSelfRef.fetch_cycle__DOT__pc_F)]);
    vlSelfRef.fetch_cycle__DOT__pc_sel = ((IData)(fetch_cycle__DOT__gshare_fetch__DOT__hit) 
                                          & (IData)(fetch_cycle__DOT__gshare_fetch__DOT__predict_taken));
    if (vlSelfRef.fetch_cycle__DOT__pc_sel) {
        if (vlSelfRef.fetch_cycle__DOT__pc_sel) {
            vlSelfRef.fetch_cycle__DOT__pc_Q1 = vlSelfRef.fetch_cycle__DOT__gshare_fetch__DOT__BTB
                [(0x3ffU & vlSelfRef.fetch_cycle__DOT__pc_F)];
        }
    } else {
        vlSelfRef.fetch_cycle__DOT__pc_Q1 = vlSelfRef.fetch_cycle__DOT__pc_four_F;
    }
    if (vlSelfRef.fetch_cycle__DOT__pc_rp_sel) {
        if (vlSelfRef.fetch_cycle__DOT__pc_rp_sel) {
            vlSelfRef.fetch_cycle__DOT__pc_Q2 = vlSelfRef.fetch_cycle__DOT__pc_rp;
        }
    } else {
        vlSelfRef.fetch_cycle__DOT__pc_Q2 = vlSelfRef.fetch_cycle__DOT__pc_Q1;
    }
}

void Vfetch_cycle___024root___eval_triggers__act(Vfetch_cycle___024root* vlSelf);

bool Vfetch_cycle___024root___eval_phase__act(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfetch_cycle___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfetch_cycle___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfetch_cycle___024root___eval_phase__nba(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfetch_cycle___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__ico(Vfetch_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__nba(Vfetch_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_cycle___024root___dump_triggers__act(Vfetch_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vfetch_cycle___024root___eval(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval\n"); );
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
            Vfetch_cycle___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("fetch_cycle.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vfetch_cycle___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfetch_cycle___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fetch_cycle.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vfetch_cycle___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fetch_cycle.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfetch_cycle___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfetch_cycle___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfetch_cycle___024root___eval_debug_assertions(Vfetch_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfetch_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_cycle___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_en_F & 0xfeU))) {
        Verilated::overWidthError("i_en_F");}
    if (VL_UNLIKELY((vlSelfRef.i_branche_en_D & 0xfeU))) {
        Verilated::overWidthError("i_branche_en_D");}
    if (VL_UNLIKELY((vlSelfRef.i_taken_E & 0xfeU))) {
        Verilated::overWidthError("i_taken_E");}
}
#endif  // VL_DEBUG
