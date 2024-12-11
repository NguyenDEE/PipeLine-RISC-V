// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgshare_v2.h for the primary calling header

#include "Vgshare_v2__pch.h"
#include "Vgshare_v2___024root.h"

void Vgshare_v2___024root___ico_sequent__TOP__0(Vgshare_v2___024root* vlSelf);

void Vgshare_v2___024root___eval_ico(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vgshare_v2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgshare_v2___024root___ico_sequent__TOP__0(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gshare_v2__DOT__predict_taken;
    gshare_v2__DOT__predict_taken = 0;
    CData/*0:0*/ gshare_v2__DOT__hit;
    gshare_v2__DOT__hit = 0;
    SData/*9:0*/ gshare_v2__DOT__addr_pht;
    gshare_v2__DOT__addr_pht = 0;
    // Body
    vlSelfRef.o_pc_target_F = vlSelfRef.gshare_v2__DOT__BTB
        [(0x3ffU & vlSelfRef.i_pc)];
    gshare_v2__DOT__addr_pht = (0x3ffU & (vlSelfRef.i_pc 
                                          ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
    gshare_v2__DOT__predict_taken = (1U & (vlSelfRef.gshare_v2__DOT__PHT
                                           [gshare_v2__DOT__addr_pht] 
                                           >> 1U));
    gshare_v2__DOT__hit = ((vlSelfRef.i_pc >> 0xaU) 
                           == vlSelfRef.gshare_v2__DOT__tag
                           [(0x3ffU & vlSelfRef.i_pc)]);
    vlSelfRef.o_pc_sel = ((IData)(gshare_v2__DOT__hit) 
                          & (IData)(gshare_v2__DOT__predict_taken));
}

void Vgshare_v2___024root___eval_triggers__ico(Vgshare_v2___024root* vlSelf);

bool Vgshare_v2___024root___eval_phase__ico(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vgshare_v2___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vgshare_v2___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vgshare_v2___024root___eval_act(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vgshare_v2___024root___nba_sequent__TOP__0(Vgshare_v2___024root* vlSelf);

void Vgshare_v2___024root___eval_nba(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgshare_v2___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgshare_v2___024root___nba_sequent__TOP__0(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gshare_v2__DOT__predict_taken;
    gshare_v2__DOT__predict_taken = 0;
    CData/*0:0*/ gshare_v2__DOT__hit;
    gshare_v2__DOT__hit = 0;
    SData/*9:0*/ gshare_v2__DOT__addr_pht;
    gshare_v2__DOT__addr_pht = 0;
    SData/*9:0*/ __Vdly__gshare_v2__DOT__Pattern;
    __Vdly__gshare_v2__DOT__Pattern = 0;
    IData/*21:0*/ __VdlyVal__gshare_v2__DOT__tag__v0;
    __VdlyVal__gshare_v2__DOT__tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__tag__v0;
    __VdlyDim0__gshare_v2__DOT__tag__v0 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v0;
    __VdlyVal__gshare_v2__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v0;
    __VdlyDim0__gshare_v2__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v0;
    __VdlyDim0__gshare_v2__DOT__PHT__v0 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v1;
    __VdlyDim0__gshare_v2__DOT__PHT__v1 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v1;
    __VdlyVal__gshare_v2__DOT__BTB__v1 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v1;
    __VdlyDim0__gshare_v2__DOT__BTB__v1 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v2;
    __VdlyDim0__gshare_v2__DOT__PHT__v2 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v2;
    __VdlyVal__gshare_v2__DOT__BTB__v2 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v2;
    __VdlyDim0__gshare_v2__DOT__BTB__v2 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v3;
    __VdlyDim0__gshare_v2__DOT__PHT__v3 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v3;
    __VdlyVal__gshare_v2__DOT__BTB__v3 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v3;
    __VdlyDim0__gshare_v2__DOT__BTB__v3 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v4;
    __VdlyDim0__gshare_v2__DOT__PHT__v4 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v4;
    __VdlyVal__gshare_v2__DOT__BTB__v4 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v4;
    __VdlyDim0__gshare_v2__DOT__BTB__v4 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v5;
    __VdlyDim0__gshare_v2__DOT__PHT__v5 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v5;
    __VdlyVal__gshare_v2__DOT__BTB__v5 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v5;
    __VdlyDim0__gshare_v2__DOT__BTB__v5 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v6;
    __VdlyDim0__gshare_v2__DOT__PHT__v6 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v6;
    __VdlyVal__gshare_v2__DOT__BTB__v6 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v6;
    __VdlyDim0__gshare_v2__DOT__BTB__v6 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v7;
    __VdlyDim0__gshare_v2__DOT__PHT__v7 = 0;
    IData/*31:0*/ __VdlyVal__gshare_v2__DOT__BTB__v7;
    __VdlyVal__gshare_v2__DOT__BTB__v7 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__BTB__v7;
    __VdlyDim0__gshare_v2__DOT__BTB__v7 = 0;
    CData/*1:0*/ __VdlyVal__gshare_v2__DOT__PHT__v8;
    __VdlyVal__gshare_v2__DOT__PHT__v8 = 0;
    SData/*9:0*/ __VdlyDim0__gshare_v2__DOT__PHT__v8;
    __VdlyDim0__gshare_v2__DOT__PHT__v8 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__tag__v0;
    __VdlySet__gshare_v2__DOT__tag__v0 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__BTB__v0;
    __VdlySet__gshare_v2__DOT__BTB__v0 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__PHT__v1;
    __VdlySet__gshare_v2__DOT__PHT__v1 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__BTB__v1;
    __VdlySet__gshare_v2__DOT__BTB__v1 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__BTB__v2;
    __VdlySet__gshare_v2__DOT__BTB__v2 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__PHT__v3;
    __VdlySet__gshare_v2__DOT__PHT__v3 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__BTB__v3;
    __VdlySet__gshare_v2__DOT__BTB__v3 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__PHT__v4;
    __VdlySet__gshare_v2__DOT__PHT__v4 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__PHT__v5;
    __VdlySet__gshare_v2__DOT__PHT__v5 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__BTB__v5;
    __VdlySet__gshare_v2__DOT__BTB__v5 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__PHT__v6;
    __VdlySet__gshare_v2__DOT__PHT__v6 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__PHT__v7;
    __VdlySet__gshare_v2__DOT__PHT__v7 = 0;
    CData/*0:0*/ __VdlySet__gshare_v2__DOT__BTB__v7;
    __VdlySet__gshare_v2__DOT__BTB__v7 = 0;
    // Body
    __VdlySet__gshare_v2__DOT__tag__v0 = 0U;
    __Vdly__gshare_v2__DOT__Pattern = vlSelfRef.gshare_v2__DOT__Pattern;
    __VdlySet__gshare_v2__DOT__BTB__v2 = 0U;
    __VdlySet__gshare_v2__DOT__BTB__v3 = 0U;
    __VdlySet__gshare_v2__DOT__BTB__v5 = 0U;
    __VdlySet__gshare_v2__DOT__PHT__v1 = 0U;
    __VdlySet__gshare_v2__DOT__PHT__v3 = 0U;
    __VdlySet__gshare_v2__DOT__PHT__v5 = 0U;
    __VdlySet__gshare_v2__DOT__PHT__v7 = 0U;
    __VdlySet__gshare_v2__DOT__PHT__v4 = 0U;
    __VdlySet__gshare_v2__DOT__PHT__v6 = 0U;
    __VdlySet__gshare_v2__DOT__BTB__v0 = 0U;
    __VdlySet__gshare_v2__DOT__BTB__v1 = 0U;
    __VdlySet__gshare_v2__DOT__BTB__v7 = 0U;
    __Vdly__gshare_v2__DOT__Pattern = vlSelfRef.gshare_v2__DOT__Pattern_buffer;
    if (vlSelfRef.i_branche_en) {
        __VdlyVal__gshare_v2__DOT__tag__v0 = (0x3fffffU 
                                              & vlSelfRef.i_pc_E);
        __VdlyDim0__gshare_v2__DOT__tag__v0 = (0x3ffU 
                                               & vlSelfRef.i_pc_E);
        __VdlySet__gshare_v2__DOT__tag__v0 = 1U;
        if ((2U & vlSelfRef.gshare_v2__DOT__PHT[(0x3ffU 
                                                 & (vlSelfRef.i_pc_E 
                                                    ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)))])) {
            if ((1U & vlSelfRef.gshare_v2__DOT__PHT
                 [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)))])) {
                vlSelfRef.o_pc_rp = ((IData)(4U) + vlSelfRef.i_pc_E);
                if (vlSelfRef.i_taken) {
                    __VdlyVal__gshare_v2__DOT__BTB__v0 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__gshare_v2__DOT__BTB__v0 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                    __VdlySet__gshare_v2__DOT__BTB__v0 = 1U;
                    __VdlyDim0__gshare_v2__DOT__PHT__v0 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                    vlSelfRef.o_rst_br_F = 0U;
                    vlSelfRef.o_pc_rp_sel = 0U;
                } else {
                    __VdlyDim0__gshare_v2__DOT__PHT__v1 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                    __VdlySet__gshare_v2__DOT__PHT__v1 = 1U;
                    vlSelfRef.o_rst_br_F = 1U;
                    vlSelfRef.o_pc_rp_sel = 1U;
                }
            } else {
                vlSelfRef.o_pc_rp = ((IData)(4U) + vlSelfRef.i_pc_E);
                if (vlSelfRef.i_taken) {
                    __VdlyVal__gshare_v2__DOT__BTB__v1 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__gshare_v2__DOT__BTB__v1 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                    __VdlySet__gshare_v2__DOT__BTB__v1 = 1U;
                    __VdlyDim0__gshare_v2__DOT__PHT__v2 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                    vlSelfRef.o_rst_br_F = 0U;
                    vlSelfRef.o_pc_rp_sel = 0U;
                    __VdlyVal__gshare_v2__DOT__BTB__v2 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__gshare_v2__DOT__BTB__v2 
                        = (0x3ffU & vlSelfRef.i_pc);
                    __VdlySet__gshare_v2__DOT__BTB__v2 = 1U;
                } else {
                    __VdlyDim0__gshare_v2__DOT__PHT__v3 
                        = (0x3ffU & (vlSelfRef.i_pc_E 
                                     ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                    __VdlySet__gshare_v2__DOT__PHT__v3 = 1U;
                    vlSelfRef.o_rst_br_F = 1U;
                    vlSelfRef.o_pc_rp_sel = 1U;
                    __VdlyVal__gshare_v2__DOT__BTB__v3 
                        = vlSelfRef.i_alu_data_E;
                    __VdlyDim0__gshare_v2__DOT__BTB__v3 
                        = (0x3ffU & vlSelfRef.i_pc);
                    __VdlySet__gshare_v2__DOT__BTB__v3 = 1U;
                }
            }
        } else if ((1U & vlSelfRef.gshare_v2__DOT__PHT
                    [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)))])) {
            vlSelfRef.o_pc_rp = vlSelfRef.i_alu_data_E;
            if (vlSelfRef.i_taken) {
                __VdlyDim0__gshare_v2__DOT__PHT__v4 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                __VdlySet__gshare_v2__DOT__PHT__v4 = 1U;
                __VdlyVal__gshare_v2__DOT__BTB__v4 
                    = vlSelfRef.i_alu_data_E;
                __VdlyDim0__gshare_v2__DOT__BTB__v4 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                vlSelfRef.o_rst_br_F = 1U;
                vlSelfRef.o_pc_rp_sel = 1U;
            } else {
                __VdlyDim0__gshare_v2__DOT__PHT__v5 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                __VdlySet__gshare_v2__DOT__PHT__v5 = 1U;
                vlSelfRef.o_rst_br_F = 0U;
                vlSelfRef.o_pc_rp_sel = 0U;
                __VdlyVal__gshare_v2__DOT__BTB__v5 
                    = ((IData)(4U) + vlSelfRef.i_pc_E);
                __VdlyDim0__gshare_v2__DOT__BTB__v5 
                    = (0x3ffU & vlSelfRef.i_pc);
                __VdlySet__gshare_v2__DOT__BTB__v5 = 1U;
            }
        } else {
            vlSelfRef.o_pc_rp = vlSelfRef.i_alu_data_E;
            if (vlSelfRef.i_taken) {
                __VdlyDim0__gshare_v2__DOT__PHT__v6 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                __VdlySet__gshare_v2__DOT__PHT__v6 = 1U;
                __VdlyVal__gshare_v2__DOT__BTB__v6 
                    = vlSelfRef.i_alu_data_E;
                __VdlyDim0__gshare_v2__DOT__BTB__v6 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                vlSelfRef.o_rst_br_F = 1U;
                vlSelfRef.o_pc_rp_sel = 1U;
            } else {
                __VdlyDim0__gshare_v2__DOT__PHT__v7 
                    = (0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
                __VdlySet__gshare_v2__DOT__PHT__v7 = 1U;
                vlSelfRef.o_rst_br_F = 0U;
                vlSelfRef.o_pc_rp_sel = 0U;
            }
        }
        vlSelfRef.gshare_v2__DOT__Pattern_buffer = 
            (((IData)(vlSelfRef.i_taken) << 9U) | (0x1ffU 
                                                   & ((IData)(vlSelfRef.gshare_v2__DOT__Pattern) 
                                                      >> 1U)));
    } else {
        __VdlyVal__gshare_v2__DOT__BTB__v7 = vlSelfRef.gshare_v2__DOT__BTB
            [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)))];
        __VdlyDim0__gshare_v2__DOT__BTB__v7 = (0x3ffU 
                                               & (vlSelfRef.i_pc_E 
                                                  ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
        __VdlySet__gshare_v2__DOT__BTB__v7 = 1U;
        __VdlyVal__gshare_v2__DOT__PHT__v8 = vlSelfRef.gshare_v2__DOT__PHT
            [(0x3ffU & (vlSelfRef.i_pc_E ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)))];
        __VdlyDim0__gshare_v2__DOT__PHT__v8 = (0x3ffU 
                                               & (vlSelfRef.i_pc_E 
                                                  ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
        vlSelfRef.o_pc_rp = 0U;
        vlSelfRef.o_rst_br_F = 0U;
        vlSelfRef.o_pc_rp_sel = 0U;
    }
    if (__VdlySet__gshare_v2__DOT__tag__v0) {
        vlSelfRef.gshare_v2__DOT__tag[__VdlyDim0__gshare_v2__DOT__tag__v0] 
            = __VdlyVal__gshare_v2__DOT__tag__v0;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v0) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v0] 
            = __VdlyVal__gshare_v2__DOT__BTB__v0;
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v0] = 3U;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v1) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v1] 
            = __VdlyVal__gshare_v2__DOT__BTB__v1;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v2) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v2] 
            = __VdlyVal__gshare_v2__DOT__BTB__v2;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v3) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v3] 
            = __VdlyVal__gshare_v2__DOT__BTB__v3;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v4) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v4] 
            = __VdlyVal__gshare_v2__DOT__BTB__v4;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v5) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v5] 
            = __VdlyVal__gshare_v2__DOT__BTB__v5;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v6) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v6] 
            = __VdlyVal__gshare_v2__DOT__BTB__v6;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v1) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v1] = 2U;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v1) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v2] = 3U;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v3) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v3] = 0U;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v4) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v4] = 3U;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v5) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v5] = 0U;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v6) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v6] = 1U;
    }
    if (__VdlySet__gshare_v2__DOT__PHT__v7) {
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v7] = 0U;
    }
    if (__VdlySet__gshare_v2__DOT__BTB__v7) {
        vlSelfRef.gshare_v2__DOT__BTB[__VdlyDim0__gshare_v2__DOT__BTB__v7] 
            = __VdlyVal__gshare_v2__DOT__BTB__v7;
        vlSelfRef.gshare_v2__DOT__PHT[__VdlyDim0__gshare_v2__DOT__PHT__v8] 
            = __VdlyVal__gshare_v2__DOT__PHT__v8;
    }
    vlSelfRef.o_pc_target_F = vlSelfRef.gshare_v2__DOT__BTB
        [(0x3ffU & vlSelfRef.i_pc)];
    vlSelfRef.gshare_v2__DOT__Pattern = __Vdly__gshare_v2__DOT__Pattern;
    gshare_v2__DOT__addr_pht = (0x3ffU & (vlSelfRef.i_pc 
                                          ^ (IData)(vlSelfRef.gshare_v2__DOT__Pattern)));
    gshare_v2__DOT__predict_taken = (1U & (vlSelfRef.gshare_v2__DOT__PHT
                                           [gshare_v2__DOT__addr_pht] 
                                           >> 1U));
    gshare_v2__DOT__hit = ((vlSelfRef.i_pc >> 0xaU) 
                           == vlSelfRef.gshare_v2__DOT__tag
                           [(0x3ffU & vlSelfRef.i_pc)]);
    vlSelfRef.o_pc_sel = ((IData)(gshare_v2__DOT__hit) 
                          & (IData)(gshare_v2__DOT__predict_taken));
}

void Vgshare_v2___024root___eval_triggers__act(Vgshare_v2___024root* vlSelf);

bool Vgshare_v2___024root___eval_phase__act(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgshare_v2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgshare_v2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgshare_v2___024root___eval_phase__nba(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgshare_v2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__ico(Vgshare_v2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__nba(Vgshare_v2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgshare_v2___024root___dump_triggers__act(Vgshare_v2___024root* vlSelf);
#endif  // VL_DEBUG

void Vgshare_v2___024root___eval(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval\n"); );
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
            Vgshare_v2___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("gshare_v2.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vgshare_v2___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vgshare_v2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("gshare_v2.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vgshare_v2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("gshare_v2.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgshare_v2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgshare_v2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgshare_v2___024root___eval_debug_assertions(Vgshare_v2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgshare_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgshare_v2___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_taken & 0xfeU))) {
        Verilated::overWidthError("i_taken");}
    if (VL_UNLIKELY((vlSelfRef.i_branche_en & 0xfeU))) {
        Verilated::overWidthError("i_branche_en");}
}
#endif  // VL_DEBUG
