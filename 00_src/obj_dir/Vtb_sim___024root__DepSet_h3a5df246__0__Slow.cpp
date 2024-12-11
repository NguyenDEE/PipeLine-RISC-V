// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sim.h for the primary calling header

#include "Vtb_sim__pch.h"
#include "Vtb_sim___024root.h"

VL_ATTR_COLD void Vtb_sim___024root___eval_static(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sim___024root___eval_final(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__stl(Vtb_sim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sim___024root___eval_phase__stl(Vtb_sim___024root* vlSelf);

VL_ATTR_COLD void Vtb_sim___024root___eval_settle(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_settle\n"); );
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
            Vtb_sim___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_sim.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_sim___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__stl(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_1)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_1)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_2)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_1)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_2)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_1)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sim___024root___stl_sequent__TOP__0(Vtb_sim___024root* vlSelf);
VL_ATTR_COLD void Vtb_sim___024root____Vm_traceActivitySetAll(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___act_sequent__TOP__0(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___act_sequent__TOP__1(Vtb_sim___024root* vlSelf);
VL_ATTR_COLD void Vtb_sim___024root___stl_comb__TOP__2(Vtb_sim___024root* vlSelf);

VL_ATTR_COLD void Vtb_sim___024root___eval_stl(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sim___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_sim___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0xa1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x141ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x1ffULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sim___024root___stl_comb__TOP__2(vlSelf);
        Vtb_sim___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_sim___024root___stl_sequent__TOP__0(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_branch 
        = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                  >> 6U)) && ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 4U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                          >> 3U))) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                              >> 2U))) 
                                                         && ((1U 
                                                              & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))))));
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_jump 
        = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                  >> 6U)) && ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 4U))) 
                                                 && ((8U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                      ? 
                                                     ((1U 
                                                       & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                          >> 2U)) 
                                                      && ((1U 
                                                           & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))
                                                      : 
                                                     ((1U 
                                                       & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                          >> 2U)) 
                                                      && ((1U 
                                                           & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))))));
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__mem_wren_D 
        = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                     >> 6U))) && ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                         >> 5U)) && 
                                  ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                             >> 4U))) 
                                   && ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))))));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
                     & (0x4000U > (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
               & (0x7040U > (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E))));
    vlSelfRef.tb_sim__DOT__o_SRAM_WE_N = ((1U & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                 >> 2U)) 
                                          || (1U & 
                                              ((2U 
                                                & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                                ? (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)
                                                : (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel 
        = ((0x780U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                 >> 4U))) ? 0U : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x702U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x701U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((0x700U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                          >> 4U)))
                                                      ? 1U
                                                      : 2U)))));
    if ((1U & (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2 
                    = (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1 
                    = (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.tb_sim__DOT__o_SRAM_CE_N = ((1U & 
                                               ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                >> 1U)) 
                                              || (1U 
                                                  & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.tb_sim__DOT__o_SRAM_OE_N = ((1U & 
                                               ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                >> 1U)) 
                                              || (1U 
                                                  & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.tb_sim__DOT__o_SRAM_LB_N = (1U & 
                                              ((1U 
                                                & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                                   || (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                           >> 2U))))));
        vlSelfRef.tb_sim__DOT__o_SRAM_UB_N = (1U & 
                                              ((1U 
                                                & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                   >> 1U)) 
                                               || ((1U 
                                                    & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                                   || (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                           >> 3U))))));
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
            = ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                         : ((((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                              | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                             << 0x10U) | (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))));
    } else {
        vlSelfRef.tb_sim__DOT__o_SRAM_CE_N = ((1U & 
                                               (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))));
        vlSelfRef.tb_sim__DOT__o_SRAM_OE_N = ((1U & 
                                               (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                   >> 1U))) 
                                              || (1U 
                                                  & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))));
        if ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.tb_sim__DOT__o_SRAM_LB_N 
                    = (1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q)));
                vlSelfRef.tb_sim__DOT__o_SRAM_UB_N 
                    = (1U & (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                >> 1U)));
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                    = ((0xffff0000U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                       | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                          | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2)));
            } else {
                vlSelfRef.tb_sim__DOT__o_SRAM_LB_N 
                    = (1U & (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                >> 2U)));
                vlSelfRef.tb_sim__DOT__o_SRAM_UB_N 
                    = (1U & (~ ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                >> 3U)));
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
            }
        } else {
            vlSelfRef.tb_sim__DOT__o_SRAM_LB_N = (1U 
                                                  & ((1U 
                                                      & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                                     || (1U 
                                                         & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q)))));
            vlSelfRef.tb_sim__DOT__o_SRAM_UB_N = (1U 
                                                  & ((1U 
                                                      & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                                     || (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                             >> 1U)))));
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
        }
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F 
        = ((IData)(vlSelfRef.tb_sim__DOT__i_rst) ? 
           ((IData)(4U) + vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)
            : 0U);
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
    if ((0x40U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D 
            = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                      >> 5U)) && ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                       ? ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))
                                       : ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                           ? ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                           : ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))))));
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D 
            = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                      >> 5U)) && ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                       ? ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))
                                       : ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))))));
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D 
            = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                      >> 5U)) && ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                       ? ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))
                                       : ((1U & (~ 
                                                 (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))))));
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D 
            = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                      >> 5U)) && ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                       ? ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))
                                       : ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                           ? ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                           : ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))))));
        if ((0x20U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
            if ((0x10U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                        if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 2U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 4U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        } else {
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 2U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 3U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D 
                        = ((7U == (7U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                           >> 0xcU))));
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
        }
    } else {
        if ((0x20U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
            if ((0x10U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                 >> 3U))) && ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                               ? ((1U 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                               : ((1U 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                        if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 5U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0xaU;
                        } else {
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                        if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D 
                                = ((0x4000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                    ? ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                        ? ((0x1000U 
                                            & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                            ? ((0x40000000U 
                                                & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                     ? ((0x1000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D 
                                = (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D));
                        } else {
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                        }
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                }
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D 
                    = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
                if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D 
                            = ((0U == (7U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                   >> 0xcU)))
                                         ? 1U : 2U));
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 2U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D 
                    = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
            }
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                          >> 4U)) && ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                           ? ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                           : ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))));
        } else if ((0x10U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 3U))) && ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                           ? ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                           : ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 3U))) && ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                           ? ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                           : ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 3U))) && ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                           ? ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                           : ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
            if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 5U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D 
                        = ((0x4000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                            ? ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                ? ((0x1000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                ? ((0x1000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D 
                        = (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D));
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D 
                = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
            if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            } else if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D 
                        = ((0x4000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                            ? ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                ? 5U : ((0x1000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                         ? 7U : 6U))
                            : ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                ? 5U : ((0x1000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                         ? 4U : 3U)));
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
                }
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = 0U;
            }
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D 
                = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D 
                = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))));
        }
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D 
            = ((1U & (~ (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                         >> 5U))) && ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                             >> 4U)) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))))));
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht 
        = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                     ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken 
        = (1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                 [vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht] 
                 >> 1U));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                 >> 4U))) ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                         >> 4U))) ? 
                   vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                 >> 4U)))
                            ? ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                                ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 4U)))
                                         ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D 
        = ((0U == (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                            >> 0xfU))) ? 0U : vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
           [(0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                      >> 0xfU))]);
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D 
        = ((0U == (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                            >> 0x14U))) ? 0U : vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg
           [(0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                      >> 0x14U))]);
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1 
        = (((0U != (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 0xfU))) & ((0x1fU & 
                                            (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                             >> 0xfU)) 
                                           == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D))) 
           & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D));
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2 
        = (((0U != (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                             >> 0x14U))) & ((0x1fU 
                                             & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                >> 0x14U)) 
                                            == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D))) 
           & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D));
    vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst 
        = (1U & (~ (IData)(vlSelfRef.tb_sim__DOT__i_rst)));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem 
        = ((0x2000U <= (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
           & (0x4000U > (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)));
    vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E = (
                                                   (((0U 
                                                      != (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                                                     & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D) 
                                                        == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E))) 
                                                    & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E))
                                                    ? 1U
                                                    : 
                                                   ((((0U 
                                                       != (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                                                      & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D) 
                                                         == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M))) 
                                                     & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M))
                                                     ? 2U
                                                     : 0U));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK 
        = ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
           | (5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
    vlSelfRef.tb_sim__DOT__dut__DOT__forwardB_E = (
                                                   (((0U 
                                                      != (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D)) 
                                                     & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D) 
                                                        == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E))) 
                                                    & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E))
                                                    ? 1U
                                                    : 
                                                   ((((0U 
                                                       != (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D)) 
                                                      & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D) 
                                                         == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M))) 
                                                     & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M))
                                                     ? 2U
                                                     : 0U));
    vlSelfRef.tb_sim__DOT__dut__DOT__result_W = ((0U 
                                                  == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                                  ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                                   ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M))
                                                    ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M
                                                    : 0U)));
    if ((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D))) {
        if ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F;
        } else if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = (0xfffff000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F);
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffU & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                   >> 0x1fU))) << 0x14U) 
                      | (0xff000U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffff000U & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
                   | ((0x800U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                 >> 9U)) | (0x7feU 
                                            & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                               >> 0x14U))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D))) {
        if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = ((0x7ffU & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                   >> 0x1fU))) << 0xcU) 
                      | (0x800U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                   << 4U))));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = ((0xfffff800U & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
                   | ((0x7e0U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                 >> 0x14U)) | (0x1eU 
                                               & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                  >> 7U))));
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = ((0x1fU & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
                   | (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                   >> 0x1fU))) << 0xbU) 
                      | (0x7e0U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                   >> 0x14U))));
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
                = ((0xffffffe0U & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
                   | (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                               >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
            = ((0x1fU & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
               | (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                               >> 0x1fU))) << 0xbU) 
                  | (0x7e0U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                               >> 0x14U))));
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D 
            = ((0xffffffe0U & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D) 
               | (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                           >> 0x14U)));
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D = 0U;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit 
        = ((vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
            >> 0xaU) == vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag
           [(0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)]);
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit) 
           & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken));
    if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                ? (0xff000000U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs));
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_M = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_F = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_D = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_E = 0U;
    if (vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_M = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_F = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_D = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_E = 1U;
    } else {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F) {
            vlSelfRef.tb_sim__DOT__dut__DOT__rst_F = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__rst_D = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F)))) {
            if (((((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E)) 
                   | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                  | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                 & (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                     == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                    | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                       == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D))))) {
                vlSelfRef.tb_sim__DOT__dut__DOT__rst_E = 1U;
            }
        }
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem) 
           & ((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
              & (2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem) 
           & ((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
              & (5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))));
    if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
            = ((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                ? vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D
                : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                    ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E
                    : ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                        ? vlSelfRef.tb_sim__DOT__dut__DOT__result_W
                        : 0U)));
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1 
        = ((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardB_E))
            ? vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D
            : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardB_E))
                ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E
                : ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardB_E))
                    ? vlSelfRef.tb_sim__DOT__dut__DOT__result_W
                    : 0U)));
    if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel) {
            vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB
                [(0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)];
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E)
            ? ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E
                : ((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                    ? ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                        ? ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                            ? ((0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x18U)) 
                               | (0xffffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                            : ((0xff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x10U)) 
                               | (0xff00ffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                        : ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                            ? ((0xff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E, 8U)) 
                               | (0xffff00ffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                            : ((0xffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E) 
                               | (0xffffff00U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                    : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                            ? ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                                ? (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x10U) 
                                                  | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                : (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E, 0x10U) 
                                                  | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                            : ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)
                                ? ((0xffff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E, 8U)) 
                                   | (0xff0000ffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                : ((0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E) 
                                   | (0xffff0000U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                        : vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E)))
            : ((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                ? ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                    ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? ((0x2000U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs
                        : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp))
                : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                    ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))
                        ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp
                        : 0U) : 0U)));
    if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1;
    }
    if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel) {
            vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2)) 
                                     + (QData)((IData)(
                                                       (~ vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2))))));
    if ((0x10U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((0x10U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2, 0x10U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2, 0x10U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                = (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                      >> 0x10U));
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2;
    }
    if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((8U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1, 8U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1, 8U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                = (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                >> 0x1fU))) << 0x18U) 
                   | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                      >> 8U));
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1;
    }
    if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2, 4U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2, 4U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                = (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                >> 0x1fU))) << 0x1cU) 
                   | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                      >> 4U));
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2;
    }
    if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3, 2U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3, 2U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                = (((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                >> 0x1fU))) << 0x1eU) 
                   | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                      >> 2U));
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3;
    }
    if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
        if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4, 1U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4, 1U);
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp 
                = ((0x80000000U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4) 
                   | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                      >> 1U));
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E 
        = ((8U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
            ? ((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                ? 0U : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                         ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                             ? 0U : vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)
                         : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                             ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp
                             : vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp)))
            : ((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                ? ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                    ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                        ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp
                        : (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                           & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2))
                    : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                        ? (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                           | vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)
                        : (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                           ^ vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)))
                : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                    ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                        ? (1U & (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                            >> 0x20U))))
                        : (1U & (((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                   >> 0x1fU) == (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                                 >> 0x1fU))
                                  ? (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                                >> 0x20U)))
                                  : (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                     >> 0x1fU)))) : 
                   ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D))
                     ? (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub)
                     : (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                        + vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)))));
    if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1) {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D;
    }
    if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2) {
            vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1)) 
                                     + (QData)((IData)(
                                                       (~ vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2))))));
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D 
        = (1U & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D)
                  ? (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                >> 0x20U))) : (((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                                                 >> 0x1fU) 
                                                == 
                                                (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2 
                                                 >> 0x1fU))
                                                ? (~ (IData)(
                                                             (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                                              >> 0x20U)))
                                                : (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                                                   >> 0x1fU))));
    vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__taken_D 
        = ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                  >> 6U)) && ((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                      >> 4U))) 
                                                 && ((8U 
                                                      & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                      ? 
                                                     ((1U 
                                                       & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                          >> 2U)) 
                                                      && ((1U 
                                                           & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F)
                                                       ? 
                                                      ((1U 
                                                        & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F))
                                                       : 
                                                      ((1U 
                                                        & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                           >> 1U)) 
                                                       && ((1U 
                                                            & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F) 
                                                           && (1U 
                                                               & ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                                       >> 0xcU)))
                                                                   ? 
                                                                  (0U 
                                                                   == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub))
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                                        >> 0xcU)))
                                                                    ? (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D)
                                                                    : 
                                                                   ((6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                                         >> 0xcU)))
                                                                     ? (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                                                          >> 0xcU)))
                                                                      ? 
                                                                     (0U 
                                                                      != (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub))
                                                                      : 
                                                                     (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D))))))))))))));
}

VL_ATTR_COLD void Vtb_sim___024root___stl_comb__TOP__2(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___stl_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state;
    if (((((((((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)) 
               | (1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
              | (2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
             | (5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
            | (6U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
           | (7U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
          | (8U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
         | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        if ((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal)) 
                       & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal))))) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                   >> 3U))];
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                   >> 3U))];
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal) {
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                    [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                               >> 3U))]) {
                    if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                   >> 3U))]) {
                        if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1
                            [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                       >> 3U))]) {
                            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                            if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                                [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 3U))]) {
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                                    = ((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                   >> 3U))] 
                                        << 9U) | (0x1f8U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E));
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                                    [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                               >> 3U))];
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 5U;
                            } else {
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                            }
                            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                        } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2
                                   [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                              >> 3U))]) {
                            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                            if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                                [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 3U))]) {
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                                    = ((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                   >> 3U))] 
                                        << 9U) | (0x1f8U 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E));
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                                    [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                               >> 3U))];
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 6U;
                            } else {
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                            }
                            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                        }
                    } else {
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                }
            } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal) {
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                    [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                               >> 3U))]) {
                    if ((1U & (~ vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                               [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                          >> 3U))]))) {
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    }
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 1U;
                }
            } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1
                       [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                  >> 3U))]) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                    [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                               >> 3U))]) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = ((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                            [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                       >> 3U))] << 9U) 
                           | (0x1f8U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E));
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                   >> 3U))];
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 9U;
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
                }
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
            } else if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2
                       [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                  >> 3U))]) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                    [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                               >> 3U))]) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = ((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                            [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                       >> 3U))] << 9U) 
                           | (0x1f8U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E));
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                   >> 3U))];
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
                }
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                                                >> 3U))] = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
                = (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 9U);
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
        } else if ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 3U))] 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 3U))] 
                = (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                   >> 9U);
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 3U))] = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)
                    ? 1U : 5U);
        } else if ((6U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)
                    ? 2U : 6U);
        } else if ((7U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 3U;
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
            }
        } else if ((8U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
            if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 4U;
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
            }
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
                = (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 9U);
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 3U))] 
            = (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
               >> 9U);
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 3U))] = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x3fU 
                                                                                & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 3U))] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
    } else if ((9U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
        if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 9U;
        }
    } else if ((0xaU == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                 ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
                if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
                } else {
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
                }
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                    = (0x3fffeU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
            }
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 5U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 4U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = (1U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q);
        } else if (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                    ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
            if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            }
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = (0x3fffeU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 2U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q, 0x10U);
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = (1U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q);
    } else if (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        }
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = (0x3fffeU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_F = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_D = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_E = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_M = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_W = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F)))) {
            vlSelfRef.tb_sim__DOT__dut__DOT__enb_F 
                = (((((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E)) 
                      | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                     | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                    & (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                        == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                       | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                          == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))) 
                   || (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M));
            vlSelfRef.tb_sim__DOT__dut__DOT__enb_D 
                = (((((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E)) 
                      | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                     | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                    & (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                        == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                       | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                          == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))) 
                   || (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M));
            vlSelfRef.tb_sim__DOT__dut__DOT__enb_E 
                = (((((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E)) 
                      | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                     | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                    & (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                        == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                       | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                          == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))) 
                   || (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M));
            if ((1U & (~ ((((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E)) 
                            | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                           | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                          & (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                              == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                             | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                                == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D))))))) {
                vlSelfRef.tb_sim__DOT__dut__DOT__enb_M 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M;
                vlSelfRef.tb_sim__DOT__dut__DOT__enb_W 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M;
            }
        }
    }
}

VL_ATTR_COLD void Vtb_sim___024root___eval_triggers__stl(Vtb_sim___024root* vlSelf);

VL_ATTR_COLD bool Vtb_sim___024root___eval_phase__stl(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_sim___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_sim___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__act(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_1)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_1)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_2)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_2)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_1)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_2)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_sim.i_clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge tb_sim.i_clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge tb_sim.dut.__Vcellinp__detect_pipline__i_all_rst)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge tb_sim.dut.rst_M)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__nba(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_1)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_1)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.hit_miss_2)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.cache_mem_2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.valid_2)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_1)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_sim.dut.mem_pipeline.lsu_mem.lsu_mem.cachemem.tag_2)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_sim.i_clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge tb_sim.i_clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge tb_sim.dut.__Vcellinp__detect_pipline__i_all_rst)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge tb_sim.dut.rst_M)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sim___024root____Vm_traceActivitySetAll(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
}

VL_ATTR_COLD void Vtb_sim___024root___ctor_var_reset(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_sim__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__i_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__i_io_sw = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__i_io_btn = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__pc_debug = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__o_SRAM_CE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__o_SRAM_WE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__o_SRAM_LB_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__o_SRAM_UB_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__o_SRAM_OE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__enb_F = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__rst_br_F = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__enb_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__rst_F = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__rst_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__rst_M = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__enb_E = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__enb_M = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__enb_W = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__rst_E = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__result_W = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__o_ins_n_vld_W = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__forwardA_E = VL_RAND_RESET_I(2);
    vlSelf->tb_sim__DOT__dut__DOT__forwardB_E = VL_RAND_RESET_I(2);
    vlSelf->tb_sim__DOT__dut__DOT__rst_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F = VL_RAND_RESET_I(10);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern = VL_RAND_RESET_I(10);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht = VL_RAND_RESET_I(10);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer = VL_RAND_RESET_I(10);
    vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2049; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D = VL_RAND_RESET_I(3);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D = VL_RAND_RESET_I(3);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__mem_wren_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D = VL_RAND_RESET_I(2);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__taken_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D = VL_RAND_RESET_I(3);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D = VL_RAND_RESET_I(2);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D = VL_RAND_RESET_I(5);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D = VL_RAND_RESET_I(5);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D = VL_RAND_RESET_I(5);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D = VL_RAND_RESET_I(10);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub = VL_RAND_RESET_Q(33);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E = VL_RAND_RESET_I(3);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E = VL_RAND_RESET_I(2);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E = VL_RAND_RESET_I(5);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub = VL_RAND_RESET_Q(33);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_ADDR = VL_RAND_RESET_I(18);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_DQ = VL_RAND_RESET_I(16);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_CE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_WE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_LB_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_UB_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_ADDR = VL_RAND_RESET_I(18);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_DQ = VL_RAND_RESET_I(16);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_CE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_WE_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_LB_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_UB_N = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ins_n_vld_M = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M = VL_RAND_RESET_I(2);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7 = VL_RAND_RESET_I(7);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M = VL_RAND_RESET_I(5);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = VL_RAND_RESET_I(3);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d = VL_RAND_RESET_I(18);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q = VL_RAND_RESET_I(18);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q = VL_RAND_RESET_I(4);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1 = VL_RAND_RESET_I(16);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2 = VL_RAND_RESET_I(16);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__tb_sim__DOT__i_clk__v0 = 0;
    vlSelf->__VdlySet__tb_sim__DOT__i_clk__v1 = 0;
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    vlSelf->__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    vlSelf->__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    vlSelf->__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    vlSelf->__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    vlSelf->__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__rst_M__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
