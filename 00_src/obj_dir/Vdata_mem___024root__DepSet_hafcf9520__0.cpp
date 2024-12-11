// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"
#include "Vdata_mem___024root.h"

void Vdata_mem___024root___ico_comb__TOP__0(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___ico_comb__TOP__1(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___ico_sequent__TOP__0(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___ico_comb__TOP__2(Vdata_mem___024root* vlSelf);

void Vdata_mem___024root___eval_ico(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xa1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x141ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdata_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x1ffULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vdata_mem___024root___ico_comb__TOP__0(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ico_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_1 
        = (vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1
           [(0x3fU & (vlSelfRef.i_addr >> 3U))] & (
                                                   (vlSelfRef.i_addr 
                                                    >> 9U) 
                                                   == 
                                                   vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.i_addr 
                                                       >> 3U))]));
}

VL_INLINE_OPT void Vdata_mem___024root___ico_comb__TOP__1(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ico_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_2 
        = (vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2
           [(0x3fU & (vlSelfRef.i_addr >> 3U))] & (
                                                   (vlSelfRef.i_addr 
                                                    >> 9U) 
                                                   == 
                                                   vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.i_addr 
                                                       >> 3U))]));
}

VL_INLINE_OPT void Vdata_mem___024root___ico_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_d 
        = ((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
            ? ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q
                         : (((IData)(vlSelfRef.o_SRAM_DQ) 
                             << 0x10U) | (0xffffU & vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q))))
            : ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                ? ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                    ? ((0xffff0000U & vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.o_SRAM_DQ))
                    : vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q)
                : vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q));
}

VL_INLINE_OPT void Vdata_mem___024root___ico_comb__TOP__2(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ico_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*0:0*/, 64> data_mem__DOT__cachemem__DOT__lru_2;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        data_mem__DOT__cachemem__DOT__lru_2[__Vi0] = 0;
    }
    // Body
    vlSelfRef.data_mem__DOT__wr_mem = 0U;
    vlSelfRef.data_mem__DOT__rd_mem = 0U;
    vlSelfRef.o_stall = 0U;
    vlSelfRef.data_mem__DOT__addr_mem = 0U;
    vlSelfRef.data_mem__DOT__wr_mem_data = 0U;
    vlSelfRef.o_data = 0U;
    vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 = 0U;
    vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 = 0U;
    vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 = 0U;
    vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 = 0U;
    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state 
        = vlSelfRef.data_mem__DOT__cachemem__DOT__current_state;
    if (((((((((0U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state)) 
               | (1U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) 
              | (2U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) 
             | (5U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) 
            | (6U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) 
           | (7U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) 
          | (8U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) 
         | (3U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state)))) {
        if ((0U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlSelfRef.i_rden)) 
                       & (~ (IData)(vlSelfRef.i_wren))))) {
                vlSelfRef.data_mem__DOT__wr_mem = 0U;
                vlSelfRef.data_mem__DOT__rd_mem = 0U;
                vlSelfRef.o_stall = 0U;
                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
            } else if (vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_1) {
                vlSelfRef.o_stall = 0U;
                if (vlSelfRef.i_wren) {
                    vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                        = vlSelfRef.i_data;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                     & (vlSelfRef.i_addr 
                                                                        >> 3U))] = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                   & (vlSelfRef.i_addr 
                                                                      >> 3U))] = 0U;
                    data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                         & (vlSelfRef.i_addr 
                                                            >> 3U))] = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 1U;
                } else if (vlSelfRef.i_rden) {
                    vlSelfRef.o_data = vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x3fU & (vlSelfRef.i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                   & (vlSelfRef.i_addr 
                                                                      >> 3U))] = 0U;
                    data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                         & (vlSelfRef.i_addr 
                                                            >> 3U))] = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_2) {
                vlSelfRef.o_stall = 0U;
                if (vlSelfRef.i_wren) {
                    vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                        = vlSelfRef.i_data;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                     & (vlSelfRef.i_addr 
                                                                        >> 3U))] = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                   & (vlSelfRef.i_addr 
                                                                      >> 3U))] = 1U;
                    data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                         & (vlSelfRef.i_addr 
                                                            >> 3U))] = 0U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 2U;
                } else if (vlSelfRef.i_rden) {
                    vlSelfRef.o_data = vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x3fU & (vlSelfRef.i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                   & (vlSelfRef.i_addr 
                                                                      >> 3U))] = 1U;
                    data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                         & (vlSelfRef.i_addr 
                                                            >> 3U))] = 0U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.i_wren) {
                if (vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1
                    [(0x3fU & (vlSelfRef.i_addr >> 3U))]) {
                    if (vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2
                        [(0x3fU & (vlSelfRef.i_addr 
                                   >> 3U))]) {
                        if (vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1
                            [(0x3fU & (vlSelfRef.i_addr 
                                       >> 3U))]) {
                            vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                                = vlSelfRef.i_data;
                            vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                                = vlSelfRef.i_addr;
                            if (vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1
                                [(0x3fU & (vlSelfRef.i_addr 
                                           >> 3U))]) {
                                vlSelfRef.data_mem__DOT__addr_mem 
                                    = ((vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1
                                        [(0x3fU & (vlSelfRef.i_addr 
                                                   >> 3U))] 
                                        << 9U) | (0x1f8U 
                                                  & vlSelfRef.i_addr));
                                vlSelfRef.data_mem__DOT__wr_mem_data 
                                    = vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1
                                    [(0x3fU & (vlSelfRef.i_addr 
                                               >> 3U))];
                                vlSelfRef.data_mem__DOT__wr_mem = 1U;
                                vlSelfRef.o_stall = 1U;
                                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 5U;
                            } else {
                                vlSelfRef.data_mem__DOT__wr_mem = 0U;
                                vlSelfRef.o_stall = 0U;
                                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 1U;
                            }
                            vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                           & (vlSelfRef.i_addr 
                                                                              >> 3U))] = 0U;
                            data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                 & (vlSelfRef.i_addr 
                                                                    >> 3U))] = 1U;
                            vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                             & (vlSelfRef.i_addr 
                                                                                >> 3U))] = 1U;
                        } else {
                            vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                                = vlSelfRef.i_data;
                            vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                                = vlSelfRef.i_addr;
                            if (vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2
                                [(0x3fU & (vlSelfRef.i_addr 
                                           >> 3U))]) {
                                vlSelfRef.data_mem__DOT__addr_mem 
                                    = ((vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2
                                        [(0x3fU & (vlSelfRef.i_addr 
                                                   >> 3U))] 
                                        << 9U) | (0x1f8U 
                                                  & vlSelfRef.i_addr));
                                vlSelfRef.data_mem__DOT__wr_mem_data 
                                    = vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2
                                    [(0x3fU & (vlSelfRef.i_addr 
                                               >> 3U))];
                                vlSelfRef.data_mem__DOT__wr_mem = 1U;
                                vlSelfRef.o_stall = 1U;
                                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 6U;
                            } else {
                                vlSelfRef.data_mem__DOT__wr_mem = 0U;
                                vlSelfRef.o_stall = 0U;
                                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 2U;
                            }
                            vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                           & (vlSelfRef.i_addr 
                                                                              >> 3U))] = 1U;
                            data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                 & (vlSelfRef.i_addr 
                                                                    >> 3U))] = 0U;
                            vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                             & (vlSelfRef.i_addr 
                                                                                >> 3U))] = 1U;
                        }
                    } else {
                        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                            = vlSelfRef.i_data;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                            = vlSelfRef.i_addr;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                         & (vlSelfRef.i_addr 
                                                                            >> 3U))] = 1U;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                       & (vlSelfRef.i_addr 
                                                                          >> 3U))] = 1U;
                        data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                             & (vlSelfRef.i_addr 
                                                                >> 3U))] = 0U;
                        vlSelfRef.o_stall = 0U;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 2U;
                    }
                } else {
                    vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                        = vlSelfRef.i_data;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                     & (vlSelfRef.i_addr 
                                                                        >> 3U))] = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                   & (vlSelfRef.i_addr 
                                                                      >> 3U))] = 0U;
                    data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                         & (vlSelfRef.i_addr 
                                                            >> 3U))] = 1U;
                    vlSelfRef.o_stall = 0U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 1U;
                }
            } else if (vlSelfRef.i_rden) {
                if (vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1
                    [(0x3fU & (vlSelfRef.i_addr >> 3U))]) {
                    if ((1U & (~ vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2
                               [(0x3fU & (vlSelfRef.i_addr 
                                          >> 3U))]))) {
                        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                            = vlSelfRef.i_addr;
                        vlSelfRef.data_mem__DOT__addr_mem 
                            = vlSelfRef.i_addr;
                        vlSelfRef.data_mem__DOT__rd_mem = 1U;
                        vlSelfRef.o_stall = 1U;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 8U;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                         & (vlSelfRef.i_addr 
                                                                            >> 3U))] = 0U;
                        vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                       & (vlSelfRef.i_addr 
                                                                          >> 3U))] = 1U;
                        data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                             & (vlSelfRef.i_addr 
                                                                >> 3U))] = 0U;
                    }
                } else {
                    vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__addr_mem 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__rd_mem = 1U;
                    vlSelfRef.o_stall = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 7U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                     & (vlSelfRef.i_addr 
                                                                        >> 3U))] = 0U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                   & (vlSelfRef.i_addr 
                                                                      >> 3U))] = 0U;
                    data_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                         & (vlSelfRef.i_addr 
                                                            >> 3U))] = 1U;
                }
            } else if (vlSelfRef.data_mem__DOT__cachemem__DOT__lru_1
                       [(0x3fU & (vlSelfRef.i_addr 
                                  >> 3U))]) {
                vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                    = vlSelfRef.i_data;
                vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                    = vlSelfRef.i_addr;
                if (vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1
                    [(0x3fU & (vlSelfRef.i_addr >> 3U))]) {
                    vlSelfRef.data_mem__DOT__addr_mem 
                        = ((vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1
                            [(0x3fU & (vlSelfRef.i_addr 
                                       >> 3U))] << 9U) 
                           | (0x1f8U & vlSelfRef.i_addr));
                    vlSelfRef.data_mem__DOT__wr_mem_data 
                        = vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x3fU & (vlSelfRef.i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem__DOT__wr_mem = 1U;
                    vlSelfRef.o_stall = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 9U;
                } else {
                    vlSelfRef.data_mem__DOT__wr_mem = 0U;
                    vlSelfRef.data_mem__DOT__addr_mem 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__rd_mem = 1U;
                    vlSelfRef.o_stall = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 7U;
                }
                vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                 & (vlSelfRef.i_addr 
                                                                    >> 3U))] = 0U;
            } else {
                vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                    = vlSelfRef.i_data;
                vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                    = vlSelfRef.i_addr;
                if (vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2
                    [(0x3fU & (vlSelfRef.i_addr >> 3U))]) {
                    vlSelfRef.data_mem__DOT__addr_mem 
                        = ((vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1
                            [(0x3fU & (vlSelfRef.i_addr 
                                       >> 3U))] << 9U) 
                           | (0x1f8U & vlSelfRef.i_addr));
                    vlSelfRef.data_mem__DOT__wr_mem_data 
                        = vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x3fU & (vlSelfRef.i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem__DOT__wr_mem = 1U;
                    vlSelfRef.o_stall = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
                } else {
                    vlSelfRef.data_mem__DOT__wr_mem = 0U;
                    vlSelfRef.data_mem__DOT__addr_mem 
                        = vlSelfRef.i_addr;
                    vlSelfRef.data_mem__DOT__rd_mem = 1U;
                    vlSelfRef.o_stall = 1U;
                    vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 8U;
                }
                vlSelfRef.data_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                 & (vlSelfRef.i_addr 
                                                                    >> 3U))] = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.o_stall = 0U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1[(0x3fU 
                                                                 & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                                    >> 3U))] 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1[(0x3fU 
                                                           & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                              >> 3U))] 
                = (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 9U);
            vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1[(0x3fU 
                                                             & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                                >> 3U))] = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
        } else if ((2U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.o_stall = 0U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2[(0x3fU 
                                                                 & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
                                                                    >> 3U))] 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2;
            vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2[(0x3fU 
                                                           & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
                                                              >> 3U))] 
                = (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
                   >> 9U);
            vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2[(0x3fU 
                                                             & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
                                                                >> 3U))] = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
        } else if ((5U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.o_stall = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.data_mem__DOT__ACK)
                    ? 1U : 5U);
        } else if ((6U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.o_stall = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.data_mem__DOT__ACK)
                    ? 2U : 6U);
        } else if ((7U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.o_stall = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1;
            if (vlSelfRef.data_mem__DOT__ACK) {
                vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 3U;
            } else {
                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 7U;
            }
        } else if ((8U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.o_stall = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2;
            if (vlSelfRef.data_mem__DOT__ACK) {
                vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 4U;
            } else {
                vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 8U;
            }
        } else {
            vlSelfRef.o_stall = 0U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1[(0x3fU 
                                                                 & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                                    >> 3U))] 
                = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1[(0x3fU 
                                                           & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                              >> 3U))] 
                = (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 9U);
            vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1[(0x3fU 
                                                             & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                                >> 3U))] = 1U;
            vlSelfRef.o_data = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.o_stall = 0U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2[(0x3fU 
                                                             & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
                                                                >> 3U))] 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2[(0x3fU 
                                                       & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
                                                          >> 3U))] 
            = (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
               >> 9U);
        vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2[(0x3fU 
                                                         & (vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
                                                            >> 3U))] = 1U;
        vlSelfRef.o_data = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0U;
    } else if ((9U == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.o_stall = 1U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1;
        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1;
        if (vlSelfRef.data_mem__DOT__ACK) {
            vlSelfRef.data_mem__DOT__addr_mem = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.data_mem__DOT__rd_mem = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 7U;
        } else {
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 9U;
        }
    } else if ((0xaU == (IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.o_stall = 1U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2;
        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2;
        if (vlSelfRef.data_mem__DOT__ACK) {
            vlSelfRef.data_mem__DOT__addr_mem = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem__DOT__rd_mem = 1U;
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 8U;
        } else {
            vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
        }
    }
    if ((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d = 0U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d = 0U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if (((IData)(vlSelfRef.data_mem__DOT__wr_mem) 
                 ^ (IData)(vlSelfRef.data_mem__DOT__rd_mem))) {
                if (vlSelfRef.data_mem__DOT__wr_mem) {
                    vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                    vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.data_mem__DOT__wr_mem_data;
                } else {
                    vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                    vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
                }
                vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
                vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
                    = (0x3fffeU & vlSelfRef.data_mem__DOT__addr_mem);
            } else {
                vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
                vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q;
                vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
                vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q;
            }
        } else {
            vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 5U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 4U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
                = (1U | vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q);
        } else if (((IData)(vlSelfRef.data_mem__DOT__wr_mem) 
                    ^ (IData)(vlSelfRef.data_mem__DOT__rd_mem))) {
            if (vlSelfRef.data_mem__DOT__wr_mem) {
                vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.data_mem__DOT__wr_mem_data;
            } else {
                vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
            }
            vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
                = (0x3fffeU & vlSelfRef.data_mem__DOT__addr_mem);
        } else {
            vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 2U;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q, 0x10U);
        vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
            = (1U | vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q);
    } else if (((IData)(vlSelfRef.data_mem__DOT__wr_mem) 
                ^ (IData)(vlSelfRef.data_mem__DOT__rd_mem))) {
        if (vlSelfRef.data_mem__DOT__wr_mem) {
            vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem__DOT__wr_mem_data;
        } else {
            vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
            vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
        }
        vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
            = (0x3fffeU & vlSelfRef.data_mem__DOT__addr_mem);
    } else {
        vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q;
    }
}

void Vdata_mem___024root___eval_triggers__ico(Vdata_mem___024root* vlSelf);

bool Vdata_mem___024root___eval_phase__ico(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdata_mem___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdata_mem___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdata_mem___024root___eval_act(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x50ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vdata_mem___024root___nba_sequent__TOP__0(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___nba_sequent__TOP__1(Vdata_mem___024root* vlSelf);

void Vdata_mem___024root___eval_nba(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x3ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem___024root___ico_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vdata_mem___024root___nba_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q = 0U;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q = 0U;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q = 0U;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q = 0U;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q = 0U;
    } else {
        vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_d;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_d;
        vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q 
            = vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d;
    }
    vlSelfRef.o_SRAM_ADDR = vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q;
    vlSelfRef.o_SRAM_WE_N = ((1U & ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                    >> 2U)) || (1U 
                                                & ((2U 
                                                    & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                                    ? (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)
                                                    : 
                                                   (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)))));
    if ((1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)))) {
                vlSelfRef.data_mem__DOT__sram_mem__DOT__DOUT__strong__out2 
                    = (0xffffU & vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.data_mem__DOT__sram_mem__DOT__DOUT__strong__out1 
                    = (0xffffU & vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
    }
    vlSelfRef.data_mem__DOT__ACK = ((2U == (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                    | (5U == (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)));
    vlSelfRef.o_SRAM_DQ = ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                           | (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__DOUT__strong__out2));
    if ((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.o_SRAM_CE_N = ((1U & ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                        >> 1U)) || 
                                 (1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.o_SRAM_OE_N = ((1U & ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                        >> 1U)) || 
                                 (1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.o_SRAM_LB_N = (1U & ((1U & ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                              >> 1U)) 
                                       || ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 2U))))));
        vlSelfRef.o_SRAM_UB_N = (1U & ((1U & ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                              >> 1U)) 
                                       || ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 3U))))));
        vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_d 
            = ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q
                         : (((IData)(vlSelfRef.o_SRAM_DQ) 
                             << 0x10U) | (0xffffU & vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q))));
    } else {
        vlSelfRef.o_SRAM_CE_N = ((1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                           >> 1U))) 
                                 && (1U & (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))));
        vlSelfRef.o_SRAM_OE_N = ((1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q) 
                                           >> 1U))) 
                                 || (1U & (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))));
        if ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.o_SRAM_LB_N = (1U & (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q)));
                vlSelfRef.o_SRAM_UB_N = (1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 1U)));
                vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_d 
                    = ((0xffff0000U & vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.o_SRAM_DQ));
            } else {
                vlSelfRef.o_SRAM_LB_N = (1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 2U)));
                vlSelfRef.o_SRAM_UB_N = (1U & (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 3U)));
                vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_d 
                    = vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q;
            }
        } else {
            vlSelfRef.o_SRAM_LB_N = (1U & ((1U & (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q)))));
            vlSelfRef.o_SRAM_UB_N = (1U & ((1U & (~ (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 1U)))));
            vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_d 
                = vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q;
        }
    }
    vlSelfRef.o_ACK = vlSelfRef.data_mem__DOT__ACK;
}

VL_INLINE_OPT void Vdata_mem___024root___nba_sequent__TOP__1(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2 = 0U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1 = 0U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 = 0U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 = 0U;
        vlSelfRef.data_mem__DOT__cachemem__DOT__current_state = 0U;
    } else {
        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2;
        vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1;
        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2;
        vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1;
        vlSelfRef.data_mem__DOT__cachemem__DOT__current_state 
            = vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state;
    }
}

void Vdata_mem___024root___eval_triggers__act(Vdata_mem___024root* vlSelf);

bool Vdata_mem___024root___eval_phase__act(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdata_mem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdata_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdata_mem___024root___eval_phase__nba(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdata_mem___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__ico(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__nba(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__act(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval\n"); );
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
            Vdata_mem___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("data_mem.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdata_mem___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdata_mem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("data_mem.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdata_mem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("data_mem.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdata_mem___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdata_mem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_rden & 0xfeU))) {
        Verilated::overWidthError("i_rden");}
    if (VL_UNLIKELY((vlSelfRef.i_wren & 0xfeU))) {
        Verilated::overWidthError("i_wren");}
}
#endif  // VL_DEBUG
