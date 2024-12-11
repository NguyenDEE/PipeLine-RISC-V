// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sim.h for the primary calling header

#include "Vtb_sim__pch.h"
#include "Vtb_sim__Syms.h"
#include "Vtb_sim___024root.h"

VL_ATTR_COLD void Vtb_sim___024root___eval_initial__TOP(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3ffU, vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[(0x3ffU 
                                                                                & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[(0x3ffU 
                                                                                & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag[(0x3ffU 
                                                                                & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 0x3fffffU;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_3[0U] = 0x64756d70U;
    __Vtemp_3[1U] = 0x6d656d2eU;
    __Vtemp_3[2U] = 0x756d702fU;
    __Vtemp_3[3U] = 0x73742f64U;
    __Vtemp_3[4U] = 0x325f7465U;
    __Vtemp_3[5U] = 0x2e2e2f30U;
    VL_READMEM_N(true, 32, 2049, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_3)
                 ,  &(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__stl(Vtb_sim___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sim___024root___eval_triggers__stl(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0)));
    vlSelfRef.__VstlTriggered.set(2U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1));
    vlSelfRef.__VstlTriggered.set(3U, ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0)));
    vlSelfRef.__VstlTriggered.set(4U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2));
    vlSelfRef.__VstlTriggered.set(5U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1));
    vlSelfRef.__VstlTriggered.set(6U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2));
    vlSelfRef.__VstlTriggered.set(7U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1));
    vlSelfRef.__VstlTriggered.set(8U, vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0.neq(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0.assign(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
        vlSelfRef.__VstlTriggered.set(6U, 1U);
        vlSelfRef.__VstlTriggered.set(7U, 1U);
        vlSelfRef.__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sim___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
