// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sim.h for the primary calling header

#include "Vtb_sim__pch.h"
#include "Vtb_sim___024root.h"

VL_ATTR_COLD void Vtb_sim___024root___eval_initial__TOP(Vtb_sim___024root* vlSelf);
VlCoroutine Vtb_sim___024root___eval_initial__TOP__Vtiming__0(Vtb_sim___024root* vlSelf);
VlCoroutine Vtb_sim___024root___eval_initial__TOP__Vtiming__1(Vtb_sim___024root* vlSelf);

void Vtb_sim___024root___eval_initial(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sim___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_sim___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sim___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1 
        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__i_clk__0 
        = vlSelfRef.tb_sim__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sim__DOT__dut__DOT__rst_M__0 
        = vlSelfRef.tb_sim__DOT__dut__DOT__rst_M;
}

VL_INLINE_OPT VlCoroutine Vtb_sim___024root___eval_initial__TOP__Vtiming__0(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__i_rst = 0U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 1U;
    vlSelfRef.tb_sim__DOT__i_io_btn = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x19ULL, nullptr, 
                                         "tb_sim.sv", 
                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb_sim.sv", 
                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_sim.sv", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_sim.sv", 
                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_sim.sv", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_sim.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 0xffU;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_sim.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sim__DOT__i_io_sw = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_sim.sv", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4c4b40ULL, 
                                         nullptr, "tb_sim.sv", 
                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_sim.sv", 64, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_sim___024root___eval_initial__TOP__Vtiming__1(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.__VdlySet__tb_sim__DOT__i_clk__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "tb_sim.sv", 
                                             31);
        vlSelfRef.__VdlySet__tb_sim__DOT__i_clk__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "tb_sim.sv", 
                                             33);
    }
}

void Vtb_sim___024root___act_sequent__TOP__0(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___act_sequent__TOP__1(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___act_sequent__TOP__2(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___act_sequent__TOP__3(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___act_comb__TOP__0(Vtb_sim___024root* vlSelf);

void Vtb_sim___024root___eval_act(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x50ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x10ffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sim___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___act_sequent__TOP__0(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1 
        = (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
           [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                      >> 3U))] & ((~ (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                      >> 2U)) & ((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                  >> 9U) 
                                                 == 
                                                 vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                                 [(0x3fU 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                      >> 3U))])));
}

VL_INLINE_OPT void Vtb_sim___024root___act_sequent__TOP__1(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2 
        = (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
           [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                      >> 3U))] & (((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                    >> 9U) == vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                   [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                              >> 3U))]) 
                                  & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                     >> 2U)));
}

VL_INLINE_OPT void Vtb_sim___024root___act_sequent__TOP__2(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___act_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F 
        = ((IData)(vlSelfRef.tb_sim__DOT__i_rst) ? 
           ((IData)(4U) + vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)
            : 0U);
    vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst 
        = (1U & (~ (IData)(vlSelfRef.tb_sim__DOT__i_rst)));
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
    if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel) {
            vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___act_sequent__TOP__3(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___act_sequent__TOP__3\n"); );
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
}

VL_INLINE_OPT void Vtb_sim___024root___act_comb__TOP__0(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtb_sim___024root___nba_sequent__TOP__0(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__1(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__2(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__3(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__4(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__5(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__6(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__2(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__3(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_sequent__TOP__7(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__5(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__6(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__7(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__8(Vtb_sim___024root* vlSelf);
void Vtb_sim___024root___nba_comb__TOP__9(Vtb_sim___024root* vlSelf);

void Vtb_sim___024root___eval_nba(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x600ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x900ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x150ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x1a0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x900ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x5ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___act_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x700ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x7ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x1500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0xf00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x1700ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sim___024root___nba_comb__TOP__9(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__0(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*21:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0;
    // Body
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 0U;
    if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer 
            = (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D) 
                << 9U) | (0x1ffU & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern) 
                                    >> 1U)));
        __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 
            = (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
               >> 0xaU);
        __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 
            = (0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D);
        __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0 = 1U;
        __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
        __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 
            = (0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D);
        __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0 = 1U;
        if ((2U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
             [(0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                         ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)))])) {
            if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                 [(0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                             ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)))])) {
                vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp 
                    = ((IData)(4U) + vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D);
                if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D) {
                    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 
                        = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0 = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
                } else {
                    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 
                        = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1 = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
                }
            } else {
                vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp 
                    = ((IData)(4U) + vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D);
                if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D) {
                    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 
                        = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2 = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 0U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
                } else {
                    __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 
                        = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                     ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                    __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3 = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 1U;
                    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
                }
            }
        } else if ((1U & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                    [(0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)))])) {
            vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp 
                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
            if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D) {
                __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 
                    = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4 = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
            } else {
                __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 
                    = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5 = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
            }
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp 
                = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
            if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D) {
                __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 
                    = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6 = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
            } else {
                __VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 
                    = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
                                 ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D)));
                __VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7 = 1U;
                vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 0U;
                vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
            }
        }
    } else if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 1U;
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F = 0U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0] 
            = __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag__v0;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0] 
            = __VdlyVal__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB__v0;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v0] = 3U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v1] = 2U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v2] = 3U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v3] = 0U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v4] = 3U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v5] = 0U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v6] = 1U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT[__VdlyDim0__tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT__v7] = 0U;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_D = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_F = 0U;
    if (vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_D = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_F = 1U;
    } else if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F) {
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_D = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_F = 1U;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__1(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 0U;
    if (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E) {
            if ((0x700U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                      >> 4U)))) {
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 1U;
            } else if ((0x701U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 4U)))) {
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 1U;
            } else if ((0x702U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 4U)))) {
                if ((4U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) {
                    vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 
                        = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                    vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 1U;
                }
            } else if ((0x703U == (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                             >> 4U)))) {
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 1U;
            } else {
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [0U];
                vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 1U;
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [1U];
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [2U];
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [3U];
                vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9 
                    = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [4U];
            }
        }
    }
    if (vlSelfRef.tb_sim__DOT__i_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d;
        vlSelfRef.tb_sim__DOT__pc_debug = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d;
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q = 0U;
        vlSelfRef.tb_sim__DOT__pc_debug = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q = 0U;
    }
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_E) {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_E)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D;
    }
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_D) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_D)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D 
            = (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 0xfU));
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D 
            = (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 0x14U));
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_jump;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_branch;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__taken_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D;
    }
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_E) {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_E)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1;
    }
    vlSelfRef.tb_sim__DOT__o_SRAM_WE_N = ((1U & ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                                 >> 2U)) 
                                          || (1U & 
                                              ((2U 
                                                & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                                ? (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)
                                                : (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))));
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
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK 
        = ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
           | (5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_F) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_F)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern 
        = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer;
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__2(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32;
    __VdlyVal__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 0;
    CData/*4:0*/ __VdlyDim0__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32;
    __VdlyDim0__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0;
    __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32;
    __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 0;
    // Body
    __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0 = 0U;
    __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 0U;
    if (vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0 = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_D)))) {
        if (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M) 
             & (0U != (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M)))) {
            __VdlyVal__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 
                = vlSelfRef.tb_sim__DOT__dut__DOT__result_W;
            __VdlyDim0__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M;
            __VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32 = 1U;
        }
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v0) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[1U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[2U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[3U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[4U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[5U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[6U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[7U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[8U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[9U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xaU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xbU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xcU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xdU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xeU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0xfU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x10U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x11U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x12U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x13U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x14U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x15U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x16U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x17U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x18U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x19U] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1aU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1bU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1cU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1dU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1eU] = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0x1fU] = 0U;
    }
    if (__VdlySet__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[__VdlyDim0__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32] 
            = __VdlyVal__tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg__v32;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__3(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_sim__DOT__i_clk__v0) {
        vlSelfRef.__VdlySet__tb_sim__DOT__i_clk__v0 = 0U;
        vlSelfRef.tb_sim__DOT__i_clk = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sim__DOT__i_clk__v1) {
        vlSelfRef.__VdlySet__tb_sim__DOT__i_clk__v1 = 0U;
        vlSelfRef.tb_sim__DOT__i_clk = 1U;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__4(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_M) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_ADDR = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_DQ = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_CE_N = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_WE_N = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_LB_N = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_UB_N = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ins_n_vld_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_M)))) {
        if (vlSelfRef.tb_sim__DOT__i_rst) {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                [4U];
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7 
                = (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                            [3U] >> 0x18U));
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6 
                = (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                            [3U] >> 0x10U));
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5 
                = (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                            [3U] >> 8U));
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4 
                = (0x7fU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                   [3U]);
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3 
                = (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                            [2U] >> 0x18U));
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                [1U];
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr 
                = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                [0U];
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0 
                = (0x7fU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                   [2U]);
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1 
                = (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                            [2U] >> 8U));
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2 
                = (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                            [2U] >> 0x10U));
        } else {
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1 = 0U;
            vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2 = 0U;
        }
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ins_n_vld_M 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M 
            = ((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                ? ((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                    ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT
                    : 0U) : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                              ? (((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E)) 
                                  & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf))
                                  ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                                  : 0U) : ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                            ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1
                                            : 0U)));
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E;
    }
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
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__5(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state = 0U;
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state 
            = vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__6(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
    }
    if (vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
    }
    if (vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
    }
    if (vlSelfRef.__VdlySet__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5) {
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8;
        vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4U] 
            = vlSelfRef.__VdlyVal__tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9;
    }
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_E) {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_E)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D;
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT 
        = vlSelfRef.tb_sim__DOT__i_io_sw;
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_D) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D = 1U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_D)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__mem_wren_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D 
            = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D;
        vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D 
            = (0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                        >> 7U));
    }
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
                     & (0x4000U > (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
               & (0x7040U > (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E))));
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
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem 
        = ((0x2000U <= (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)) 
           & (0x4000U > (0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)));
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
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem) 
           & ((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
              & (2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))));
    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem) 
           & ((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
              & (5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))));
    if (vlSelfRef.tb_sim__DOT__dut__DOT__rst_F) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F = 0U;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_F)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F;
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
            = ((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                ? ((0x800U >= (0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                                         >> 2U))) ? 
                   vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem
                   [(0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                               >> 2U))] : 0U) : 0U);
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
}

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__2(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__rst_E = 0U;
    if (vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__rst_E = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F)))) {
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

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__3(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D) {
            vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1;
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
}

VL_INLINE_OPT void Vtb_sim___024root___nba_sequent__TOP__7(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__enb_F)))) {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2;
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__5(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht 
        = (0x3ffU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                     ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern)));
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken 
        = (1U & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__PHT
                 [vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht] 
                 >> 1U));
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit 
        = ((vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
            >> 0xaU) == vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__tag
           [(0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)]);
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel 
        = ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit) 
           & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken));
}

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__6(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_D = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_E = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_M = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_W = 0U;
    vlSelfRef.tb_sim__DOT__dut__DOT__enb_F = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F)))) {
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
            vlSelfRef.tb_sim__DOT__dut__DOT__enb_F 
                = (((((5U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E)) 
                      | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                     | (3U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E))) 
                    & (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                        == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D)) 
                       | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E) 
                          == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D)))) 
                   || (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M));
        }
    }
}

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__7(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F 
        = ((IData)(vlSelfRef.tb_sim__DOT__i_rst) ? 
           ((IData)(4U) + vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)
            : 0U);
}

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__8(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vtb_sim___024root___nba_comb__TOP__9(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___nba_comb__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel) {
        if (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel) {
            vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 
                = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp;
        }
    } else {
        vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2 
            = vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1;
    }
}

void Vtb_sim___024root___timing_resume(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sim___024root___eval_triggers__act(Vtb_sim___024root* vlSelf);

bool Vtb_sim___024root___eval_phase__act(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<13> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sim___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_sim___024root___timing_resume(vlSelf);
        Vtb_sim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sim___024root___eval_phase__nba(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_sim___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__nba(Vtb_sim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sim___024root___dump_triggers__act(Vtb_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sim___024root___eval(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval\n"); );
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
            Vtb_sim___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_sim.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_sim___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_sim.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_sim___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_sim___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_sim___024root___eval_debug_assertions(Vtb_sim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
