// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sim.h for the primary calling header

#include "Vtb_sim__pch.h"
#include "Vtb_sim__Syms.h"
#include "Vtb_sim___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__act(Vtb_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sim___024root___eval_triggers__act(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1)));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2));
    vlSelfRef.__VactTriggered.set(6U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.tb_sim__DOT__i_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__i_clk__0))));
    vlSelfRef.__VactTriggered.set(9U, ((~ (IData)(vlSelfRef.tb_sim__DOT__i_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__i_clk__0)));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) 
                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst__0))));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__rst_M) 
                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__rst_M__0))));
    vlSelfRef.__VactTriggered.set(0xcU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__i_clk__0 
        = vlSelfRef.tb_sim__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__rst_M__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__rst_M;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sim___024root___dump_triggers__act(vlSelf);
    }
#endif
}
