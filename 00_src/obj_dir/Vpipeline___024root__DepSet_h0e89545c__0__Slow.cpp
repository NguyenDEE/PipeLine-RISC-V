// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline___024root.h"

VL_ATTR_COLD void Vpipeline___024root___eval_static(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpipeline___024root___eval_initial__TOP(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_initial(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1 
        = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2;
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__rst_F__0 
        = vlSelfRef.pipeline__DOT__rst_F;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__rst_D__0 
        = vlSelfRef.pipeline__DOT__rst_D;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__rst_E__0 
        = vlSelfRef.pipeline__DOT__rst_E;
    vlSelfRef.__Vtrigprevexpr___TOP__pipeline__DOT__rst_M__0 
        = vlSelfRef.pipeline__DOT__rst_M;
}

extern const VlWide<15>/*479:0*/ Vpipeline__ConstPool__CONST_h37a9fbca_0;

VL_ATTR_COLD void Vpipeline___024root___eval_initial__TOP(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern = 0U;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3ffU, pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[(0x3ffU 
                                                                              & pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 1U;
        vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[(0x3ffU 
                                                                              & pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i)] = 0U;
        pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2049, 0, VL_CVT_PACK_STR_NW(15, Vpipeline__ConstPool__CONST_h37a9fbca_0)
                 ,  &(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vpipeline___024root___eval_final(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__stl(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpipeline___024root___eval_phase__stl(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_settle(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_settle\n"); );
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
            Vpipeline___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("pipeline.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpipeline___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__stl(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_1)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_1)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_2)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_1)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_2)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_1)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipeline___024root___stl_sequent__TOP__0(Vpipeline___024root* vlSelf);
void Vpipeline___024root___act_sequent__TOP__0(Vpipeline___024root* vlSelf);
void Vpipeline___024root___act_sequent__TOP__1(Vpipeline___024root* vlSelf);
void Vpipeline___024root___act_sequent__TOP__2(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_stl(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((0xa1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x141ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x1ffULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_ATTR_COLD void Vpipeline___024root___stl_sequent__TOP__0(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ pipeline__DOT__forwardA_E;
    pipeline__DOT__forwardA_E = 0;
    CData/*1:0*/ pipeline__DOT__forwardB_E;
    pipeline__DOT__forwardB_E = 0;
    CData/*0:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken = 0;
    CData/*0:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit = 0;
    SData/*9:0*/ pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht;
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht = 0;
    CData/*2:0*/ pipeline__DOT__decode_pipeline__DOT__immsel_D;
    pipeline__DOT__decode_pipeline__DOT__immsel_D = 0;
    CData/*0:0*/ pipeline__DOT__decode_pipeline__DOT__br_less_D;
    pipeline__DOT__decode_pipeline__DOT__br_less_D = 0;
    QData/*32:0*/ pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub;
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT__sub = 0;
    CData/*0:0*/ pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0;
    pipeline__DOT__decode_pipeline__DOT__brc_decode__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    QData/*32:0*/ pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub;
    pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sub = 0;
    IData/*31:0*/ pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs;
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    // Body
    vlSelfRef.pipeline__DOT__rst_E = vlSelfRef.i_rst;
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
                     & (0x4000U > (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
               & (0x7040U > (0xffffU & vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E))));
    vlSelfRef.o_SRAM_WE_N = ((1U & ((IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                    >> 2U)) || (1U 
                                                & ((2U 
                                                    & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                                    ? (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)
                                                    : 
                                                   (~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))));
    vlSelfRef.o_SRAM_ADDR = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
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
    vlSelfRef.o_io_ledr = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledr;
    vlSelfRef.o_io_ledg = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_ledg;
    vlSelfRef.o_io_hex0 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex0;
    vlSelfRef.o_io_hex1 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex1;
    vlSelfRef.o_io_hex2 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex2;
    vlSelfRef.o_io_hex3 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex3;
    vlSelfRef.o_io_hex4 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex4;
    vlSelfRef.o_io_hex5 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex5;
    vlSelfRef.o_io_hex6 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex6;
    vlSelfRef.o_io_hex7 = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_hex7;
    vlSelfRef.o_io_lcd = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_io_lcd;
    vlSelfRef.o_ins_n_vld = vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ins_n_vld_M;
    vlSelfRef.pipeline__DOT__rst_D = vlSelfRef.i_rst;
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
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht 
        = (0x3ffU & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
                     ^ (IData)(vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken 
        = (1U & (vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                 [pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht] 
                 >> 1U));
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
    pipeline__DOT__forwardA_E = ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D) 
                                   == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E)) 
                                  & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E))
                                  ? 1U : ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D) 
                                            == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M)) 
                                           & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M))
                                           ? 2U : 0U));
    vlSelfRef.pipeline__DOT__rst_F = vlSelfRef.i_rst;
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK 
        = ((2U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
           | (5U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
    pipeline__DOT__forwardB_E = ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D) 
                                   == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E)) 
                                  & (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E))
                                  ? 1U : ((((IData)(vlSelfRef.pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D) 
                                            == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M)) 
                                           & (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M))
                                           ? 2U : 0U));
    vlSelfRef.pipeline__DOT__result_W = ((0U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                          ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_alu_data_M
                                          : ((1U == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                              ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_ld_data_M
                                              : ((2U 
                                                  == (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                                  ? vlSelfRef.pipeline__DOT__mem_pipeline__DOT__reg_pc_4_M
                                                  : 0U)));
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
    pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit 
        = ((vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F 
            >> 0xaU) == vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag
           [(0x3ffU & vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_F)]);
    vlSelfRef.pipeline__DOT__fetch_pipeline__DOT__pc_sel 
        = ((IData)(pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit) 
           & (IData)(pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken));
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
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal 
        = ((~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (2U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E)));
    vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal 
        = ((~ (IData)(vlSelfRef.pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (5U == (IData)(vlSelfRef.pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E)));
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

VL_ATTR_COLD void Vpipeline___024root___eval_triggers__stl(Vpipeline___024root* vlSelf);

VL_ATTR_COLD bool Vpipeline___024root___eval_phase__stl(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpipeline___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpipeline___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__ico(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__act(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_1)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_1)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_2)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_2)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_1)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_2)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge i_clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge pipeline.rst_F)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge pipeline.rst_D)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge pipeline.rst_E)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge pipeline.rst_M)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__nba(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_1)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_1)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_2)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_2)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_1)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] pipeline.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_2)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge i_clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge pipeline.rst_F)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge pipeline.rst_D)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge pipeline.rst_E)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge pipeline.rst_M)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipeline___024root___ctor_var_reset(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_io_sw = VL_RAND_RESET_I(32);
    vlSelf->i_io_btn = VL_RAND_RESET_I(4);
    vlSelf->o_SRAM_ADDR = VL_RAND_RESET_I(18);
    vlSelf->o_SRAM_DQ = VL_RAND_RESET_I(16);
    vlSelf->o_SRAM_CE_N = VL_RAND_RESET_I(1);
    vlSelf->o_SRAM_WE_N = VL_RAND_RESET_I(1);
    vlSelf->o_SRAM_LB_N = VL_RAND_RESET_I(1);
    vlSelf->o_SRAM_UB_N = VL_RAND_RESET_I(1);
    vlSelf->o_SRAM_OE_N = VL_RAND_RESET_I(1);
    vlSelf->o_io_ledr = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledg = VL_RAND_RESET_I(32);
    vlSelf->o_io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex4 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex5 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex6 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex7 = VL_RAND_RESET_I(7);
    vlSelf->o_io_lcd = VL_RAND_RESET_I(32);
    vlSelf->o_ins_n_vld = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__enb_F = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__enb_branch = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__enb_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__rst_F = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__rst_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__rst_M = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__enb_E = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__enb_M = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__rst_E = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__instr_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__result_W = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_four_F = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_Q1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_Q2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_rp = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__pc_rp_sel = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__reg_instr_F = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__reg_pc_4_F = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__reg_pc_F = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->pipeline__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 2049; ++__Vi0) {
        vlSelf->pipeline__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__decode_pipeline__DOT__rs1_data_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__br_un_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__ins_n_vld_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__slt_sl_D = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__rd_wren_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__op_a_sel_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__op_b_sel_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__alu_op_D = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__mem_wren_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__wb_sel_D = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__rs1_addr_D = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__rs2_addr_D = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__taken_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_ins_n_vld_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_slt_sl_D = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_rd_wren_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_op_a_sel_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_op_b_sel_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_alu_op_D = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_mem_wren_D = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_wb_sel_D = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_rs1_addr_D = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_rs2_addr_D = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_rd_addr_D = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_pc_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_pc_4_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_rs1_data_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_rs2_data_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_imm_D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_taken_D = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__execute_pipeline__DOT__operand_a_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__operand_b_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_ins_n_vld_E = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_slt_sl_E = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_rd_wren_E = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_mem_wren_E = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_wb_sel_E = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_rs2_data_E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_pc_4_E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__reg_rd_addr_E = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_ld_data_M = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_stall_M = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_ins_n_vld_M = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_pc_4_M = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_alu_data_M = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_rd_wren_M = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_wb_sel_M = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_ledr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_ledg = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex4 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex5 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex6 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_hex7 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_io_lcd = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__reg_rd_addr_M = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1 = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2 = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d = VL_RAND_RESET_I(18);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q = VL_RAND_RESET_I(18);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1 = VL_RAND_RESET_I(16);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2 = VL_RAND_RESET_I(16);
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    vlSelf->__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    vlSelf->__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    vlSelf->__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    vlSelf->__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    vlSelf->__VdlySet__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    vlSelf->__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0 = 0;
    vlSelf->__VdlySet__pipeline__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__rst_F__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__rst_D__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__rst_E__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pipeline__DOT__rst_M__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
