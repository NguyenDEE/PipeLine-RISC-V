// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem_tb.h for the primary calling header

#include "Vdata_mem_tb__pch.h"
#include "Vdata_mem_tb___024root.h"

VL_ATTR_COLD void Vdata_mem_tb___024root___eval_initial__TOP(Vdata_mem_tb___024root* vlSelf);
VlCoroutine Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__0(Vdata_mem_tb___024root* vlSelf);
VlCoroutine Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__1(Vdata_mem_tb___024root* vlSelf);

void Vdata_mem_tb___024root___eval_initial(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_mem_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2__0 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2__1 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__i_clk__0 
        = vlSelfRef.data_mem_tb__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem_tb__DOT__i_rst__0 
        = vlSelfRef.data_mem_tb__DOT__i_rst;
}

VL_INLINE_OPT VlCoroutine Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__0(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_tb__DOT__i_rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "data_mem_tb.sv", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.data_mem_tb__DOT__i_rst = 0U;
    vlSelfRef.data_mem_tb__DOT__i_addr = 0x2000U;
    vlSelfRef.data_mem_tb__DOT__i_rden = 1U;
    vlSelfRef.data_mem_tb__DOT__i_wren = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "data_mem_tb.sv", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.data_mem_tb__DOT__i_addr = 0x2000U;
    vlSelfRef.data_mem_tb__DOT__i_data = 0x1111ffffU;
    vlSelfRef.data_mem_tb__DOT__i_rden = 0U;
    vlSelfRef.data_mem_tb__DOT__i_wren = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "data_mem_tb.sv", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.data_mem_tb__DOT__i_addr = 0x3000U;
    vlSelfRef.data_mem_tb__DOT__i_data = 0x2222ffffU;
    vlSelfRef.data_mem_tb__DOT__i_rden = 0U;
    vlSelfRef.data_mem_tb__DOT__i_wren = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "data_mem_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.data_mem_tb__DOT__i_addr = 0x3000U;
    vlSelfRef.data_mem_tb__DOT__i_data = 0x2222ffffU;
    vlSelfRef.data_mem_tb__DOT__i_rden = 1U;
    vlSelfRef.data_mem_tb__DOT__i_wren = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "data_mem_tb.sv", 
                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.data_mem_tb__DOT__i_addr = 0x800U;
    vlSelfRef.data_mem_tb__DOT__i_data = 0x3333ffffU;
    vlSelfRef.data_mem_tb__DOT__i_rden = 0U;
    vlSelfRef.data_mem_tb__DOT__i_wren = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "data_mem_tb.sv", 
                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.data_mem_tb__DOT__i_addr = 0x3000U;
    vlSelfRef.data_mem_tb__DOT__i_data = 0x3333ffffU;
    vlSelfRef.data_mem_tb__DOT__i_rden = 1U;
    vlSelfRef.data_mem_tb__DOT__i_wren = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc8ULL, nullptr, 
                                         "data_mem_tb.sv", 
                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("data_mem_tb.sv", 77, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__1(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.__VdlySet__data_mem_tb__DOT__i_clk__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "data_mem_tb.sv", 
                                             38);
        vlSelfRef.__VdlySet__data_mem_tb__DOT__i_clk__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "data_mem_tb.sv", 
                                             40);
    }
}

void Vdata_mem_tb___024root___act_comb__TOP__0(Vdata_mem_tb___024root* vlSelf);
void Vdata_mem_tb___024root___act_comb__TOP__1(Vdata_mem_tb___024root* vlSelf);
void Vdata_mem_tb___024root___act_sequent__TOP__0(Vdata_mem_tb___024root* vlSelf);
void Vdata_mem_tb___024root___act_comb__TOP__2(Vdata_mem_tb___024root* vlSelf);

void Vdata_mem_tb___024root___eval_act(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x450ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x4a0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem_tb___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x4ffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdata_mem_tb___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vdata_mem_tb___024root___act_comb__TOP__0(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1 
        = (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1
           [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                      >> 3U))] & ((vlSelfRef.data_mem_tb__DOT__i_addr 
                                   >> 9U) == vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1
                                  [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                             >> 3U))]));
}

VL_INLINE_OPT void Vdata_mem_tb___024root___act_comb__TOP__1(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___act_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2 
        = (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2
           [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                      >> 3U))] & ((vlSelfRef.data_mem_tb__DOT__i_addr 
                                   >> 9U) == vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2
                                  [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                             >> 3U))]));
}

VL_INLINE_OPT void Vdata_mem_tb___024root___act_sequent__TOP__0(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_d 
        = ((4U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
            ? ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q
                         : (((((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1) 
                               | (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                              | ((IData)(vlSelfRef.data_mem_tb__DOT__i_rden)
                                  ? 0xffffU : 0U)) 
                             << 0x10U) | (0xffffU & vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q))))
            : ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                ? ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                    ? ((0xffff0000U & vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q) 
                       | (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1) 
                           | (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                          | ((IData)(vlSelfRef.data_mem_tb__DOT__i_rden)
                              ? 0xffffU : 0U))) : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q)
                : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q));
}

VL_INLINE_OPT void Vdata_mem_tb___024root___act_comb__TOP__2(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___act_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 0U;
    vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data = 0U;
    vlSelfRef.data_mem_tb__DOT__o_data = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 = 0U;
    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state 
        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state;
    if (((((((((0U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state)) 
               | (1U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) 
              | (2U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) 
             | (5U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) 
            | (6U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) 
           | (7U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) 
          | (8U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) 
         | (3U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state)))) {
        if ((0U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlSelfRef.data_mem_tb__DOT__i_rden)) 
                       & (~ (IData)(vlSelfRef.data_mem_tb__DOT__i_wren))))) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 0U;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 0U;
                vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
            } else if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1) {
                vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                if (VL_UNLIKELY(vlSelfRef.data_mem_tb__DOT__i_wren)) {
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                        = vlSelfRef.data_mem_tb__DOT__i_data;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 1U;
                    VL_WRITEF_NX("Hit-wr 1\n",0);
                } else if (VL_UNLIKELY(vlSelfRef.data_mem_tb__DOT__i_rden)) {
                    VL_WRITEF_NX("Hit-rd 1 %x\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__o_data 
                        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                        [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2) {
                vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                if (VL_UNLIKELY(vlSelfRef.data_mem_tb__DOT__i_wren)) {
                    VL_WRITEF_NX("Hit-wr 2\n",0);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                        = vlSelfRef.data_mem_tb__DOT__i_data;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 2U;
                } else if (VL_UNLIKELY(vlSelfRef.data_mem_tb__DOT__i_rden)) {
                    VL_WRITEF_NX("Hit-rd 2 %x\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__o_data 
                        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                        [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.data_mem_tb__DOT__i_wren) {
                if (VL_LIKELY(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1
                              [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                         >> 3U))])) {
                    if (VL_LIKELY(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2
                                  [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                             >> 3U))])) {
                        if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1
                            [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                       >> 3U))]) {
                            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                                = vlSelfRef.data_mem_tb__DOT__i_data;
                            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                                = vlSelfRef.data_mem_tb__DOT__i_addr;
                            if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1
                                [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                           >> 3U))]) {
                                VL_WRITEF_NX("Miss-dt-wr 1 %x\n",0,
                                             32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                             [(0x3fU 
                                               & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                  >> 3U))]);
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                                    = ((vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1
                                        [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                   >> 3U))] 
                                        << 9U) | (0x1f8U 
                                                  & vlSelfRef.data_mem_tb__DOT__i_addr));
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data 
                                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                    [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                               >> 3U))];
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 1U;
                                vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 5U;
                            } else {
                                VL_WRITEF_NX("Miss-wr 1 %x\n",0,
                                             32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                             [(0x3fU 
                                               & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                  >> 3U))]);
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 0U;
                                vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 1U;
                            }
                            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                        } else if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2
                                   [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                              >> 3U))]) {
                            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                                = vlSelfRef.data_mem_tb__DOT__i_data;
                            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                                = vlSelfRef.data_mem_tb__DOT__i_addr;
                            if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2
                                [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                           >> 3U))]) {
                                VL_WRITEF_NX("Miss-dt-wr 2 %x\n",0,
                                             32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                             [(0x3fU 
                                               & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                  >> 3U))]);
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                                    = ((vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2
                                        [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                   >> 3U))] 
                                        << 9U) | (0x1f8U 
                                                  & vlSelfRef.data_mem_tb__DOT__i_addr));
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data 
                                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                    [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                               >> 3U))];
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 1U;
                                vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 6U;
                            } else {
                                VL_WRITEF_NX("Miss-wr 2 %x\n",0,
                                             32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                             [(0x3fU 
                                               & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                  >> 3U))]);
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 0U;
                                vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 2U;
                            }
                            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                        }
                    } else {
                        VL_WRITEF_NX("Miss-valid-wr 2 %x\n",0,
                                     32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                     [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                >> 3U))]);
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                            = vlSelfRef.data_mem_tb__DOT__i_data;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                            = vlSelfRef.data_mem_tb__DOT__i_addr;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                        vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 2U;
                    }
                } else {
                    VL_WRITEF_NX("Miss-valid-wr 1 %x\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                        = vlSelfRef.data_mem_tb__DOT__i_data;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 1U;
                }
            } else if (vlSelfRef.data_mem_tb__DOT__i_rden) {
                if (VL_LIKELY(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1
                              [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                         >> 3U))])) {
                    if (VL_UNLIKELY((1U & (~ vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2
                                           [(0x3fU 
                                             & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                >> 3U))])))) {
                        VL_WRITEF_NX("Miss-valid-rd 2%10#\n",0,
                                     32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                     [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                >> 3U))]);
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                            = vlSelfRef.data_mem_tb__DOT__i_addr;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                            = vlSelfRef.data_mem_tb__DOT__i_addr;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 1U;
                        vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 8U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    }
                } else {
                    VL_WRITEF_NX("Miss-valid-rd 1%10#\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 1U;
                    vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 7U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 1U;
                }
            } else if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1
                       [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                  >> 3U))]) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                    = vlSelfRef.data_mem_tb__DOT__i_data;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                    = vlSelfRef.data_mem_tb__DOT__i_addr;
                if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1
                    [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                               >> 3U))]) {
                    VL_WRITEF_NX("Miss-dt-rd 1%10#\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                        = ((vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1
                            [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                       >> 3U))] << 9U) 
                           | (0x1f8U & vlSelfRef.data_mem_tb__DOT__i_addr));
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data 
                        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                        [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 1U;
                    vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 9U;
                } else {
                    VL_WRITEF_NX("Miss-rd 1%10#\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 1U;
                    vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 7U;
                }
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                              & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
            } else if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2
                       [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                  >> 3U))]) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                    = vlSelfRef.data_mem_tb__DOT__i_data;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                    = vlSelfRef.data_mem_tb__DOT__i_addr;
                if (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2
                    [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                               >> 3U))]) {
                    VL_WRITEF_NX("Miss-dt-rd 2%10#\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                        = ((vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1
                            [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                       >> 3U))] << 9U) 
                           | (0x1f8U & vlSelfRef.data_mem_tb__DOT__i_addr));
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data 
                        = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                        [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                   >> 3U))];
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 1U;
                    vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0xaU;
                } else {
                    VL_WRITEF_NX("Miss-rd 2%10#\n",0,
                                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 3U))]);
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem = 0U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                        = vlSelfRef.data_mem_tb__DOT__i_addr;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 1U;
                    vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 8U;
                }
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                              & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                                                >> 3U))] = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1[(0x3fU 
                                                                              & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] 
                = (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                   >> 9U);
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1[(0x3fU 
                                                                          & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                             >> 3U))] = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
        } else if ((2U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2[(0x3fU 
                                                                              & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 3U))] 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                                                                           >> 3U))] 
                = (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                   >> 9U);
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2[(0x3fU 
                                                                          & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                                                                             >> 3U))] = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
        } else if ((5U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK)
                    ? 1U : 5U);
        } else if ((6U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK)
                    ? 2U : 6U);
        } else if ((7U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
            if (vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 3U;
            } else {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 7U;
            }
        } else if ((8U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2;
            if (vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 4U;
            } else {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 8U;
            }
        } else {
            vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1[(0x3fU 
                                                                              & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] 
                = (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                   >> 9U);
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1[(0x3fU 
                                                                          & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                             >> 3U))] = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                        & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                           >> 3U))] = 1U;
            vlSelfRef.data_mem_tb__DOT__o_data = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.data_mem_tb__DOT__o_stall = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2[(0x3fU 
                                                                          & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                             >> 3U))] 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2[(0x3fU 
                                                                    & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                                                                       >> 3U))] 
            = (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
               >> 9U);
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2[(0x3fU 
                                                                      & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                                                                         >> 3U))] = 1U;
        vlSelfRef.data_mem_tb__DOT__o_data = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                    & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                       >> 3U))] = 1U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                    & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                                                                       >> 3U))] = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0U;
    } else if ((9U == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
        if (vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK) {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 7U;
        } else {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 9U;
        }
    } else if ((0xaU == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.data_mem_tb__DOT__o_stall = 1U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2;
        if (vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK) {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 8U;
        } else {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state = 0xaU;
        }
    }
    if ((4U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
        if ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
            if (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) 
                 ^ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem))) {
                if (vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) {
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 1U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data;
                } else {
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 3U;
                    vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
                }
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d = 0xfU;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
                    = (0x3fffeU & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem);
            } else {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 0U;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q;
            }
        } else {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 5U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
        if ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 4U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
                = (1U | vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q);
        } else if (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) 
                    ^ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem))) {
            if (vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 1U;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data;
            } else {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 3U;
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
            }
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d = 0xfU;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
                = (0x3fffeU & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem);
        } else {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 2U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q, 0x10U);
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
            = (1U | vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q);
    } else if (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) 
                ^ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem))) {
        if (vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 1U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data;
        } else {
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 3U;
            vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
        }
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d = 0xfU;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
            = (0x3fffeU & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem);
    } else {
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q;
    }
}

void Vdata_mem_tb___024root___nba_sequent__TOP__0(Vdata_mem_tb___024root* vlSelf);
void Vdata_mem_tb___024root___nba_sequent__TOP__1(Vdata_mem_tb___024root* vlSelf);
void Vdata_mem_tb___024root___nba_sequent__TOP__2(Vdata_mem_tb___024root* vlSelf);

void Vdata_mem_tb___024root___eval_nba(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x7ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem_tb___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vdata_mem_tb___024root___nba_sequent__TOP__0(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("i_add_pc = %x i_data_pc=%x o_data_pc =%x i_rden = %x i_wren = %x i_ACK=%x\nhit_1 = %x, hit_2 = %x\nadr_q1=%x mem_q1 = %x addr_q2 = %x mem_q2 = %x\nmem_1 = %x , dirty_1 = %x ,valid_1 = %x stall %x\nmem_2 = %x , dirty_2 = %x , valid_2 = %x stall %x \nlru1 = %x lru2 = %x\no_addrmem = %x o_rden_mem = %x o_rewn_mem = %x o_datamem=%x  o_datapc=%x \n\n",0,
                 32,vlSelfRef.data_mem_tb__DOT__i_addr,
                 32,vlSelfRef.data_mem_tb__DOT__i_data,
                 32,vlSelfRef.data_mem_tb__DOT__o_data,
                 1,(IData)(vlSelfRef.data_mem_tb__DOT__i_rden),
                 1,vlSelfRef.data_mem_tb__DOT__i_wren,
                 1,(IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK),
                 1,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1
                    [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                               >> 3U))] & ((vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 9U) 
                                           == vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1
                                           [(0x3fU 
                                             & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                >> 3U))])),
                 1,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2
                    [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                               >> 3U))] & ((vlSelfRef.data_mem_tb__DOT__i_addr 
                                            >> 9U) 
                                           == vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2
                                           [(0x3fU 
                                             & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                >> 3U))])),
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1,
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1,
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2,
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2,
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__o_stall,
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__o_stall,
                 1,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                            >> 3U))],1,vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2
                 [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                            >> 3U))],32,vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem,
                 1,(IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem),
                 1,vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem,
                 32,vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data,
                 32,vlSelfRef.data_mem_tb__DOT__o_data);
    if (vlSelfRef.data_mem_tb__DOT__i_rst) {
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q = 0U;
    } else {
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_d;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d;
    }
    vlSelfRef.data_mem_tb__DOT__o_SRAM_WE_N = ((1U 
                                                & ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                   >> 2U)) 
                                               || (1U 
                                                   & ((2U 
                                                       & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                                       ? (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)
                                                       : 
                                                      (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)))));
    if ((4U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.data_mem_tb__DOT__o_SRAM_CE_N = (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                       >> 1U)) 
                                                   || (1U 
                                                       & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.data_mem_tb__DOT__o_SRAM_OE_N = (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                       >> 1U)) 
                                                   || (1U 
                                                       & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.data_mem_tb__DOT__o_SRAM_LB_N = (1U 
                                                   & ((1U 
                                                       & ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                          >> 1U)) 
                                                      || ((1U 
                                                           & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)) 
                                                          || (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q) 
                                                                  >> 2U))))));
        vlSelfRef.data_mem_tb__DOT__o_SRAM_UB_N = (1U 
                                                   & ((1U 
                                                       & ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                          >> 1U)) 
                                                      || ((1U 
                                                           & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)) 
                                                          || (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q) 
                                                                  >> 3U))))));
    } else {
        vlSelfRef.data_mem_tb__DOT__o_SRAM_CE_N = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))));
        vlSelfRef.data_mem_tb__DOT__o_SRAM_OE_N = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))));
        if ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.data_mem_tb__DOT__o_SRAM_LB_N 
                    = (1U & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q)));
                vlSelfRef.data_mem_tb__DOT__o_SRAM_UB_N 
                    = (1U & (~ ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q) 
                                >> 1U)));
            } else {
                vlSelfRef.data_mem_tb__DOT__o_SRAM_LB_N 
                    = (1U & (~ ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q) 
                                >> 2U)));
                vlSelfRef.data_mem_tb__DOT__o_SRAM_UB_N 
                    = (1U & (~ ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q) 
                                >> 3U)));
            }
        } else {
            vlSelfRef.data_mem_tb__DOT__o_SRAM_LB_N 
                = (1U & ((1U & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) 
                         || (1U & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q)))));
            vlSelfRef.data_mem_tb__DOT__o_SRAM_UB_N 
                = (1U & ((1U & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) 
                         || (1U & (~ ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q) 
                                      >> 1U)))));
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)))) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2 
                    = (0xffffU & vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1 
                    = (0xffffU & vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q);
            }
        }
    }
    vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK = ((2U 
                                                  == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)) 
                                                 | (5U 
                                                    == (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q)));
}

VL_INLINE_OPT void Vdata_mem_tb___024root___nba_sequent__TOP__1(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__data_mem_tb__DOT__i_clk__v0) {
        vlSelfRef.__VdlySet__data_mem_tb__DOT__i_clk__v0 = 0U;
        vlSelfRef.data_mem_tb__DOT__i_clk = 1U;
    }
    if (vlSelfRef.__VdlySet__data_mem_tb__DOT__i_clk__v1) {
        vlSelfRef.__VdlySet__data_mem_tb__DOT__i_clk__v1 = 0U;
        vlSelfRef.data_mem_tb__DOT__i_clk = 0U;
    }
}

VL_INLINE_OPT void Vdata_mem_tb___024root___nba_sequent__TOP__2(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.data_mem_tb__DOT__i_rst) {
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1 = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 = 0U;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2 = 0U;
    } else {
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2;
        vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2 
            = vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2;
    }
}

void Vdata_mem_tb___024root___timing_resume(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdata_mem_tb___024root___eval_triggers__act(Vdata_mem_tb___024root* vlSelf);

bool Vdata_mem_tb___024root___eval_phase__act(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdata_mem_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdata_mem_tb___024root___timing_resume(vlSelf);
        Vdata_mem_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdata_mem_tb___024root___eval_phase__nba(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdata_mem_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem_tb___024root___dump_triggers__nba(Vdata_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem_tb___024root___dump_triggers__act(Vdata_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_mem_tb___024root___eval(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdata_mem_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("data_mem_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdata_mem_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("data_mem_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdata_mem_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdata_mem_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdata_mem_tb___024root___eval_debug_assertions(Vdata_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
