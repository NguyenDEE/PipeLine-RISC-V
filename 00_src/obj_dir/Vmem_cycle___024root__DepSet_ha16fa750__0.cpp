// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_cycle.h for the primary calling header

#include "Vmem_cycle__pch.h"
#include "Vmem_cycle___024root.h"

void Vmem_cycle___024root___ico_comb__TOP__0(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___ico_comb__TOP__1(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___ico_sequent__TOP__0(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___ico_comb__TOP__2(Vmem_cycle___024root* vlSelf);

void Vmem_cycle___024root___eval_ico(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xa1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x141ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmem_cycle___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x1ffULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vmem_cycle___024root___ico_comb__TOP__0(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___ico_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1 
        = (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
           [(0x1ffU & (vlSelfRef.i_alu_data_M >> 2U))] 
           & ((vlSelfRef.i_alu_data_M >> 0xbU) == vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
              [(0x1ffU & (vlSelfRef.i_alu_data_M >> 2U))]));
}

VL_INLINE_OPT void Vmem_cycle___024root___ico_comb__TOP__1(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___ico_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2 
        = (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
           [(0x1ffU & (vlSelfRef.i_alu_data_M >> 2U))] 
           & ((vlSelfRef.i_alu_data_M >> 0xbU) == vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
              [(0x1ffU & (vlSelfRef.i_alu_data_M >> 2U))]));
}

VL_INLINE_OPT void Vmem_cycle___024root___ico_sequent__TOP__0(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs;
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    // Body
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.i_alu_data_M)) 
                     & (0x4000U > (0xffffU & vlSelfRef.i_alu_data_M))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.i_alu_data_M)) 
               & (0x7040U > (0xffffU & vlSelfRef.i_alu_data_M))));
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__mux31__DOT__addr_sel 
        = ((0x780U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                 >> 4U))) ? 0U : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.i_alu_data_M 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x702U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.i_alu_data_M 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x701U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.i_alu_data_M 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((0x700U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.i_alu_data_M 
                                                          >> 4U)))
                                                      ? 1U
                                                      : 2U)))));
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
        = ((4U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
            ? ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                         : (((IData)(vlSelfRef.o_SRAM_DQ) 
                             << 0x10U) | (0xffffU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))))
            : ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                    ? ((0xffff0000U & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.o_SRAM_DQ))
                    : vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q)
                : vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q));
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                 >> 4U))) ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                         >> 4U))) ? 
                   vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                                 >> 4U)))
                            ? ((4U & vlSelfRef.i_alu_data_M)
                                ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.i_alu_data_M 
                                           >> 4U)))
                                         ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal 
        = ((~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (2U == (IData)(vlSelfRef.i_slt_sl_M)));
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal 
        = ((~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (5U == (IData)(vlSelfRef.i_slt_sl_M)));
    if ((2U & vlSelfRef.i_alu_data_M)) {
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.i_alu_data_M) ? (0xff000000U 
                                                & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs));
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.i_alu_data_M)) {
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else {
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.i_mem_wren_M) ? ((2U == (IData)(vlSelfRef.i_slt_sl_M))
                                               ? vlSelfRef.i_rs2_data_M
                                               : ((0U 
                                                   == (IData)(vlSelfRef.i_slt_sl_M))
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.i_alu_data_M)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.i_alu_data_M)
                                                     ? 
                                                    ((0xff000000U 
                                                      & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x18U)) 
                                                     | (0xffffffU 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                     : 
                                                    ((0xff0000U 
                                                      & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x10U)) 
                                                     | (0xff00ffffU 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.i_alu_data_M)
                                                     ? 
                                                    ((0xff00U 
                                                      & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 8U)) 
                                                     | (0xffff00ffU 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                     : 
                                                    ((0xffU 
                                                      & vlSelfRef.i_rs2_data_M) 
                                                     | (0xffffff00U 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.i_slt_sl_M))
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.i_alu_data_M)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.i_alu_data_M)
                                                      ? 
                                                     (0xffff0000U 
                                                      & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x10U) 
                                                         | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                      : 
                                                     (0xffff0000U 
                                                      & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x10U) 
                                                         | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.i_alu_data_M)
                                                      ? 
                                                     ((0xffff00U 
                                                       & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 8U)) 
                                                      | (0xff0000ffU 
                                                         & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                      : 
                                                     ((0xffffU 
                                                       & vlSelfRef.i_rs2_data_M) 
                                                      | (0xffff0000U 
                                                         & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                                                    : vlSelfRef.i_rs2_data_M)))
            : ((4U & (IData)(vlSelfRef.i_slt_sl_M))
                ? ((2U & (IData)(vlSelfRef.i_slt_sl_M))
                    ? ((1U & (IData)(vlSelfRef.i_slt_sl_M))
                        ? ((0x2000U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.i_slt_sl_M))
                        ? mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs
                        : mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp))
                : ((2U & (IData)(vlSelfRef.i_slt_sl_M))
                    ? ((1U & (IData)(vlSelfRef.i_slt_sl_M))
                        ? mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp
                        : 0U) : 0U)));
}

VL_INLINE_OPT void Vmem_cycle___024root___ico_comb__TOP__2(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___ico_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*0:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[__Vi0] = 0;
    }
    // Body
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
    if (((((((((0U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)) 
               | (1U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
              | (2U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
             | (5U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
            | (6U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
           | (7U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
          | (8U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) 
         | (3U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        if ((0U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            if (VL_UNLIKELY((1U & ((~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal)) 
                                   & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal)))))) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 0U;
                vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                VL_WRITEF_NX("Idle\n",0);
            } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1) {
                vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                        = vlSelfRef.i_rs2_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__data_out_1 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                    >> 2U))];
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2) {
                vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                        = vlSelfRef.i_rs2_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__data_out_1 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                    >> 2U))];
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
                }
            } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal) {
                if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                >> 2U))]) {
                    if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                        [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                    >> 2U))]) {
                        if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1
                            [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                        >> 2U))]) {
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                                = vlSelfRef.i_rs2_data_M;
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                = vlSelfRef.i_alu_data_M;
                            if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                                [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                            >> 2U))]) {
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                                    = ((vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                        [(0x1ffU & 
                                          (vlSelfRef.i_alu_data_M 
                                           >> 2U))] 
                                        << 0xbU) | 
                                       (0x7fcU & vlSelfRef.i_alu_data_M));
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                                >> 2U))];
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                                vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 5U;
                            } else {
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                                vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                            }
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                            mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                        } else {
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                                = vlSelfRef.i_rs2_data_M;
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                = vlSelfRef.i_alu_data_M;
                            if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                                [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                            >> 2U))]) {
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                                    = ((vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                        [(0x1ffU & 
                                          (vlSelfRef.i_alu_data_M 
                                           >> 2U))] 
                                        << 0xbU) | 
                                       (0x7fcU & vlSelfRef.i_alu_data_M));
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                                >> 2U))];
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                                vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 6U;
                            } else {
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                                vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                            }
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                            mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                        }
                    } else {
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                            = vlSelfRef.i_rs2_data_M;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                            = vlSelfRef.i_alu_data_M;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                        mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                        vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 2U;
                    }
                } else {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                        = vlSelfRef.i_rs2_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                    vlSelfRef.mem_cycle__DOT__stall_M = 0U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 1U;
                }
            } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal) {
                if (VL_LIKELY(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                              [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                          >> 2U))])) {
                    if ((1U & (~ vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                               [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                           >> 2U))]))) {
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                            = vlSelfRef.i_alu_data_M;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                            = vlSelfRef.i_alu_data_M;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                        vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                        mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    }
                } else {
                    VL_WRITEF_NX("Tao co xuat hien\n",0);
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
                    mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 1U;
                }
            } else if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1
                       [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                   >> 2U))]) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                    = vlSelfRef.i_rs2_data_M;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                    = vlSelfRef.i_alu_data_M;
                if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                >> 2U))]) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = ((vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                            [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                        >> 2U))] << 0xbU) 
                           | (0x7fcU & vlSelfRef.i_alu_data_M));
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                        [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                    >> 2U))];
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                    vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 9U;
                } else {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
                }
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
            } else {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                    = vlSelfRef.i_rs2_data_M;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                    = vlSelfRef.i_alu_data_M;
                if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                >> 2U))]) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = ((vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                            [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                        >> 2U))] << 0xbU) 
                           | (0x7fcU & vlSelfRef.i_alu_data_M));
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                        [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                    >> 2U))];
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 1U;
                    vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
                } else {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem = 0U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                        = vlSelfRef.i_alu_data_M;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
                    vlSelfRef.mem_cycle__DOT__stall_M = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
                }
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2[(0x1ffU 
                                                                                & (vlSelfRef.i_alu_data_M 
                                                                                >> 2U))] = 0U;
            }
        } else if (VL_UNLIKELY((1U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("write_end_1\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 0xbU);
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] = 1U;
        } else if (VL_UNLIKELY((2U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("write_end_2\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] 
                = (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                   >> 0xbU);
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] = 1U;
        } else if (VL_UNLIKELY((5U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("Watwr_to_wr_1\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 1U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)
                    ? 1U : 5U);
        } else if (VL_UNLIKELY((6U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("Watwr_to_wr_2\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 1U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state 
                = ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)
                    ? 2U : 6U);
        } else if (VL_UNLIKELY((7U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
            VL_WRITEF_NX("Watrd_to_rd_1\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 1U;
            if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 3U;
            } else {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
            }
        } else if ((8U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state))) {
            VL_WRITEF_NX("Watrd_to_rd_2\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 1U;
            if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 4U;
            } else {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
            }
        } else {
            VL_WRITEF_NX("read_end_1\n",0);
            vlSelfRef.mem_cycle__DOT__stall_M = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
                = (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                   >> 0xbU);
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] = 1U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__data_out_1 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
        }
    } else if (VL_UNLIKELY((4U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        VL_WRITEF_NX("read_end_2\n",0);
        vlSelfRef.mem_cycle__DOT__stall_M = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                                                                                >> 2U))] 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] 
            = (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
               >> 0xbU);
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2[(0x1ffU 
                                                                                & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                                                                                >> 2U))] = 1U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__data_out_1 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
    } else if (VL_UNLIKELY((9U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        VL_WRITEF_NX("Watwr_to_rd_1\n",0);
        vlSelfRef.mem_cycle__DOT__stall_M = 1U;
        if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 7U;
        } else {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 9U;
        }
    } else if (VL_UNLIKELY((0xaU == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state)))) {
        VL_WRITEF_NX("Watwr_to_rd_2\n",0);
        vlSelfRef.mem_cycle__DOT__stall_M = 1U;
        if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK) {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem = 1U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 8U;
        } else {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state = 0xaU;
        }
    }
    if ((4U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if (((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                 ^ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
                if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
                } else {
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
                }
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                    = (0x3fffeU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
            } else {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
            }
        } else {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 5U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        if ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 4U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = (1U | vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q);
        } else if (((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                    ^ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
            if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
            } else {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            }
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = (0x3fffeU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
        } else {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        }
    } else if ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 2U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q, 0x10U);
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = (1U | vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q);
    } else if (((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                ^ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))) {
        if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 1U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
        } else {
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 3U;
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        }
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d = 0xfU;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = (0x3fffeU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem);
    } else {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
    }
}

void Vmem_cycle___024root___eval_triggers__ico(Vmem_cycle___024root* vlSelf);

bool Vmem_cycle___024root___eval_phase__ico(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmem_cycle___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmem_cycle___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmem_cycle___024root___eval_act(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x50ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__2(vlSelf);
    }
}

void Vmem_cycle___024root___nba_sequent__TOP__0(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___nba_sequent__TOP__1(Vmem_cycle___024root* vlSelf);
void Vmem_cycle___024root___nba_sequent__TOP__2(Vmem_cycle___024root* vlSelf);

void Vmem_cycle___024root___eval_nba(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmem_cycle___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmem_cycle___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmem_cycle___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x3ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmem_cycle___024root___ico_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vmem_cycle___024root___nba_sequent__TOP__0(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 0U;
    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 0U;
    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 0U;
    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 0U;
    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 0U;
    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 0U;
    VL_WRITEF_NX("i_add_pc = %x i_data_pc=%x o_data_pc =%x i_rden = %x i_wren = %x i_ACK=%x\nhit_1 = %x, hit_2 = %x\nadr_q1=%x mem_q1 = %x addr_q2 = %x mem_q2 = %x\nmem_1 = %x , dirty_1 = %x ,valid_1 = %x stall %x\nmem_2 = %x , dirty_2 = %x , valid_2 = %x stall %x \no_addrmem = %x o_rden_mem = %x o_rewn_mem = %x o_datamem=%x \n\n",0,
                 32,vlSelfRef.i_alu_data_M,32,vlSelfRef.i_rs2_data_M,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__data_out_1,
                 1,(IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal),
                 1,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal,
                 1,(IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK),
                 1,(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                >> 2U))] & ((vlSelfRef.i_alu_data_M 
                                             >> 0xbU) 
                                            == vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                            [(0x1ffU 
                                              & (vlSelfRef.i_alu_data_M 
                                                 >> 2U))])),
                 1,(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                    [(0x1ffU & (vlSelfRef.i_alu_data_M 
                                >> 2U))] & ((vlSelfRef.i_alu_data_M 
                                             >> 0xbU) 
                                            == vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                            [(0x1ffU 
                                              & (vlSelfRef.i_alu_data_M 
                                                 >> 2U))])),
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1
                 [(0x1ffU & (vlSelfRef.i_alu_data_M 
                             >> 2U))],1,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1
                 [(0x1ffU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1 
                             >> 2U))],1,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                 [(0x1ffU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                             >> 2U))],1,vlSelfRef.mem_cycle__DOT__stall_M,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2
                 [(0x1ffU & (vlSelfRef.i_alu_data_M 
                             >> 2U))],1,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2
                 [(0x1ffU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                             >> 2U))],1,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                 [(0x1ffU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2 
                             >> 2U))],1,vlSelfRef.mem_cycle__DOT__stall_M,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem,
                 1,(IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem),
                 1,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem,
                 32,vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data);
    if (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__en_op_buf) {
        if (vlSelfRef.i_mem_wren_M) {
            if ((0x700U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                      >> 4U)))) {
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0 = 1U;
            } else if ((0x701U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                             >> 4U)))) {
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1 = 1U;
            } else if ((0x702U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                             >> 4U)))) {
                if ((4U & vlSelfRef.i_alu_data_M)) {
                    vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 
                        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                    vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3 = 1U;
                }
            } else if ((0x703U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                             >> 4U)))) {
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
                vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4 = 1U;
            } else {
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [0U];
                vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5 = 1U;
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [1U];
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [2U];
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [3U];
                vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [4U];
            }
        }
    }
    if (vlSelfRef.i_rst) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q = 0U;
    } else {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d;
    }
    vlSelfRef.o_SRAM_ADDR = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
    vlSelfRef.o_SRAM_WE_N = ((1U & ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                    >> 2U)) || (1U 
                                                & ((2U 
                                                    & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                                    ? (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)
                                                    : 
                                                   (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))));
    if ((1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)))) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2 
                    = (0xffffU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1 
                    = (0xffffU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q);
            }
        }
    }
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK 
        = ((2U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
           | (5U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
    vlSelfRef.o_SRAM_DQ = ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                           | (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2));
    if ((4U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
        vlSelfRef.o_SRAM_CE_N = ((1U & ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                        >> 1U)) || 
                                 (1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.o_SRAM_OE_N = ((1U & ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                        >> 1U)) || 
                                 (1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)));
        vlSelfRef.o_SRAM_LB_N = (1U & ((1U & ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                              >> 1U)) 
                                       || ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 2U))))));
        vlSelfRef.o_SRAM_UB_N = (1U & ((1U & ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                              >> 1U)) 
                                       || ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q)) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 3U))))));
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
            = ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                         ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                         : (((IData)(vlSelfRef.o_SRAM_DQ) 
                             << 0x10U) | (0xffffU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))));
    } else {
        vlSelfRef.o_SRAM_CE_N = ((1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                           >> 1U))) 
                                 && (1U & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))));
        vlSelfRef.o_SRAM_OE_N = ((1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q) 
                                           >> 1U))) 
                                 || (1U & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))));
        if ((2U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) {
                vlSelfRef.o_SRAM_LB_N = (1U & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q)));
                vlSelfRef.o_SRAM_UB_N = (1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 1U)));
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                    = ((0xffff0000U & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.o_SRAM_DQ));
            } else {
                vlSelfRef.o_SRAM_LB_N = (1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 2U)));
                vlSelfRef.o_SRAM_UB_N = (1U & (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                  >> 3U)));
                vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
            }
        } else {
            vlSelfRef.o_SRAM_LB_N = (1U & ((1U & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q)))));
            vlSelfRef.o_SRAM_UB_N = (1U & ((1U & (~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))) 
                                           || (1U & 
                                               (~ ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q) 
                                                   >> 1U)))));
            vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d 
                = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
        }
    }
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__write_signal 
        = ((~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (2U == (IData)(vlSelfRef.i_slt_sl_M)));
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__read_signal 
        = ((~ (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK)) 
           & (5U == (IData)(vlSelfRef.i_slt_sl_M)));
}

VL_INLINE_OPT void Vmem_cycle___024root___nba_sequent__TOP__1(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i_rst) {
        vlSelfRef.mem_cycle__DOT__reg_wb_sel_M = 0U;
        vlSelfRef.mem_cycle__DOT__reg_rd_wren_M = 0U;
        vlSelfRef.mem_cycle__DOT__reg_pc_4_M = 0U;
        vlSelfRef.mem_cycle__DOT__reg_ins_n_vld_M = 0U;
        vlSelfRef.mem_cycle__DOT__reg_alu_data_M = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_lcd = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex7 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex6 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex5 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex4 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex3 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex2 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_ledr = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_ledg = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex0 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_io_hex1 = 0U;
        vlSelfRef.mem_cycle__DOT__reg_stall_M = 0U;
        vlSelfRef.mem_cycle__DOT__reg_ld_data_M = 0U;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.i_enb_M)))) {
            vlSelfRef.mem_cycle__DOT__reg_wb_sel_M 
                = vlSelfRef.i_wb_sel_M;
            vlSelfRef.mem_cycle__DOT__reg_rd_wren_M 
                = vlSelfRef.i_rd_wren_M;
            vlSelfRef.mem_cycle__DOT__reg_pc_4_M = vlSelfRef.i_pc_4_M;
            vlSelfRef.mem_cycle__DOT__reg_ins_n_vld_M 
                = vlSelfRef.i_ins_n_vld_M;
            vlSelfRef.mem_cycle__DOT__reg_alu_data_M 
                = vlSelfRef.i_alu_data_M;
            if (vlSelfRef.i_rst) {
                vlSelfRef.mem_cycle__DOT__reg_io_lcd = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex7 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex6 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex5 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex4 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex3 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex2 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_ledr = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_ledg = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex0 = 0U;
                vlSelfRef.mem_cycle__DOT__reg_io_hex1 = 0U;
            } else {
                vlSelfRef.mem_cycle__DOT__reg_io_lcd 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [4U];
                vlSelfRef.mem_cycle__DOT__reg_io_hex7 
                    = (0x7fU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [3U] >> 0x18U));
                vlSelfRef.mem_cycle__DOT__reg_io_hex6 
                    = (0x7fU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [3U] >> 0x10U));
                vlSelfRef.mem_cycle__DOT__reg_io_hex5 
                    = (0x7fU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [3U] >> 8U));
                vlSelfRef.mem_cycle__DOT__reg_io_hex4 
                    = (0x7fU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                       [3U]);
                vlSelfRef.mem_cycle__DOT__reg_io_hex3 
                    = (0x7fU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [2U] >> 0x18U));
                vlSelfRef.mem_cycle__DOT__reg_io_hex2 
                    = (0x7fU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [2U] >> 0x10U));
                vlSelfRef.mem_cycle__DOT__reg_io_ledr 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [0U];
                vlSelfRef.mem_cycle__DOT__reg_io_ledg 
                    = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                    [1U];
                vlSelfRef.mem_cycle__DOT__reg_io_hex0 
                    = (0x7fU & vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                       [2U]);
                vlSelfRef.mem_cycle__DOT__reg_io_hex1 
                    = (0x7fU & (vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [2U] >> 8U));
            }
            vlSelfRef.mem_cycle__DOT__reg_stall_M = vlSelfRef.mem_cycle__DOT__stall_M;
            vlSelfRef.mem_cycle__DOT__reg_ld_data_M 
                = ((0U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                    ? ((IData)(vlSelfRef.i_rst) ? 0U
                        : vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__INPUT)
                    : ((1U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                        ? (((~ (IData)(vlSelfRef.i_mem_wren_M)) 
                            & (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__en_op_buf))
                            ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                            : 0U) : ((2U == (IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                      ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__data_out_1
                                      : 0U)));
        }
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state 
            = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state;
    }
    vlSelfRef.o_wb_sel_W = vlSelfRef.mem_cycle__DOT__reg_wb_sel_M;
    vlSelfRef.o_rd_wren_W = vlSelfRef.mem_cycle__DOT__reg_rd_wren_M;
    vlSelfRef.o_pc_4_W = vlSelfRef.mem_cycle__DOT__reg_pc_4_M;
    vlSelfRef.o_ins_n_vld_W = vlSelfRef.mem_cycle__DOT__reg_ins_n_vld_M;
    vlSelfRef.o_alu_data_W = vlSelfRef.mem_cycle__DOT__reg_alu_data_M;
    vlSelfRef.o_io_lcd = vlSelfRef.mem_cycle__DOT__reg_io_lcd;
    vlSelfRef.o_io_hex7 = vlSelfRef.mem_cycle__DOT__reg_io_hex7;
    vlSelfRef.o_io_hex6 = vlSelfRef.mem_cycle__DOT__reg_io_hex6;
    vlSelfRef.o_io_hex5 = vlSelfRef.mem_cycle__DOT__reg_io_hex5;
    vlSelfRef.o_io_hex4 = vlSelfRef.mem_cycle__DOT__reg_io_hex4;
    vlSelfRef.o_io_hex3 = vlSelfRef.mem_cycle__DOT__reg_io_hex3;
    vlSelfRef.o_io_hex2 = vlSelfRef.mem_cycle__DOT__reg_io_hex2;
    vlSelfRef.o_io_ledr = vlSelfRef.mem_cycle__DOT__reg_io_ledr;
    vlSelfRef.o_io_ledg = vlSelfRef.mem_cycle__DOT__reg_io_ledg;
    vlSelfRef.o_io_hex0 = vlSelfRef.mem_cycle__DOT__reg_io_hex0;
    vlSelfRef.o_io_hex1 = vlSelfRef.mem_cycle__DOT__reg_io_hex1;
    vlSelfRef.o_stall_M = vlSelfRef.mem_cycle__DOT__reg_stall_M;
    vlSelfRef.o_ld_data_W = vlSelfRef.mem_cycle__DOT__reg_ld_data_M;
}

VL_INLINE_OPT void Vmem_cycle___024root___nba_sequent__TOP__2(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs;
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs = 0;
    IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = 0;
    IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = 0;
    // Body
    if (vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
    }
    if (vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
    }
    if (vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
    }
    if (vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
    }
    if (vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
    }
    if (vlSelfRef.__VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5) {
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8;
        vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4U] 
            = vlSelfRef.__VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9;
    }
    mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                 >> 4U))) ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                         >> 4U))) ? 
                   vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.i_alu_data_M 
                                                 >> 4U)))
                            ? ((4U & vlSelfRef.i_alu_data_M)
                                ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.i_alu_data_M 
                                           >> 4U)))
                                         ? vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__INPUT = vlSelfRef.i_io_sw;
    if ((2U & vlSelfRef.i_alu_data_M)) {
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.i_alu_data_M) ? (0xff000000U 
                                                & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs));
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.i_alu_data_M)) {
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    } else {
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
        mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.i_mem_wren_M) ? ((2U == (IData)(vlSelfRef.i_slt_sl_M))
                                               ? vlSelfRef.i_rs2_data_M
                                               : ((0U 
                                                   == (IData)(vlSelfRef.i_slt_sl_M))
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.i_alu_data_M)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.i_alu_data_M)
                                                     ? 
                                                    ((0xff000000U 
                                                      & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x18U)) 
                                                     | (0xffffffU 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                     : 
                                                    ((0xff0000U 
                                                      & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x10U)) 
                                                     | (0xff00ffffU 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.i_alu_data_M)
                                                     ? 
                                                    ((0xff00U 
                                                      & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 8U)) 
                                                     | (0xffff00ffU 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                     : 
                                                    ((0xffU 
                                                      & vlSelfRef.i_rs2_data_M) 
                                                     | (0xffffff00U 
                                                        & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.i_slt_sl_M))
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.i_alu_data_M)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.i_alu_data_M)
                                                      ? 
                                                     (0xffff0000U 
                                                      & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x10U) 
                                                         | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                      : 
                                                     (0xffff0000U 
                                                      & (VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 0x10U) 
                                                         | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs)))
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.i_alu_data_M)
                                                      ? 
                                                     ((0xffff00U 
                                                       & VL_SHIFTL_III(32,32,32, vlSelfRef.i_rs2_data_M, 8U)) 
                                                      | (0xff0000ffU 
                                                         & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))
                                                      : 
                                                     ((0xffffU 
                                                       & vlSelfRef.i_rs2_data_M) 
                                                      | (0xffff0000U 
                                                         & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs))))
                                                    : vlSelfRef.i_rs2_data_M)))
            : ((4U & (IData)(vlSelfRef.i_slt_sl_M))
                ? ((2U & (IData)(vlSelfRef.i_slt_sl_M))
                    ? ((1U & (IData)(vlSelfRef.i_slt_sl_M))
                        ? ((0x2000U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.i_slt_sl_M))
                        ? mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs
                        : mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp))
                : ((2U & (IData)(vlSelfRef.i_slt_sl_M))
                    ? ((1U & (IData)(vlSelfRef.i_slt_sl_M))
                        ? mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp
                        : 0U) : 0U)));
}

void Vmem_cycle___024root___eval_triggers__act(Vmem_cycle___024root* vlSelf);

bool Vmem_cycle___024root___eval_phase__act(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmem_cycle___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmem_cycle___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmem_cycle___024root___eval_phase__nba(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmem_cycle___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_cycle___024root___dump_triggers__ico(Vmem_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_cycle___024root___dump_triggers__nba(Vmem_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_cycle___024root___dump_triggers__act(Vmem_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem_cycle___024root___eval(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval\n"); );
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
            Vmem_cycle___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("mem_cycle.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmem_cycle___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmem_cycle___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mem_cycle.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmem_cycle___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mem_cycle.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmem_cycle___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmem_cycle___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmem_cycle___024root___eval_debug_assertions(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelfRef.i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelfRef.i_enb_M & 0xfeU))) {
        Verilated::overWidthError("i_enb_M");}
    if (VL_UNLIKELY((vlSelfRef.i_ins_n_vld_M & 0xfeU))) {
        Verilated::overWidthError("i_ins_n_vld_M");}
    if (VL_UNLIKELY((vlSelfRef.i_slt_sl_M & 0xf8U))) {
        Verilated::overWidthError("i_slt_sl_M");}
    if (VL_UNLIKELY((vlSelfRef.i_rd_wren_M & 0xfeU))) {
        Verilated::overWidthError("i_rd_wren_M");}
    if (VL_UNLIKELY((vlSelfRef.i_mem_wren_M & 0xfeU))) {
        Verilated::overWidthError("i_mem_wren_M");}
    if (VL_UNLIKELY((vlSelfRef.i_wb_sel_M & 0xfcU))) {
        Verilated::overWidthError("i_wb_sel_M");}
    if (VL_UNLIKELY((vlSelfRef.i_io_btn & 0xf0U))) {
        Verilated::overWidthError("i_io_btn");}
}
#endif  // VL_DEBUG
