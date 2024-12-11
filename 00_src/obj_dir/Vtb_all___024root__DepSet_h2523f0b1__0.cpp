// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all___024root.h"

void Vtb_all___024root___ico_sequent__TOP__0(Vtb_all___024root* vlSelf);

void Vtb_all___024root___eval_ico(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtb_all___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_all___024root___ico_sequent__TOP__0(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst = 
        (1U & (vlSelfRef.SW >> 0x11U));
    if (vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst) {
        vlSelfRef.LEDG = 0U;
        vlSelfRef.HEX0 = 0U;
        vlSelfRef.HEX1 = 0U;
        vlSelfRef.HEX2 = 0U;
        vlSelfRef.HEX3 = 0U;
        vlSelfRef.HEX4 = 0U;
        vlSelfRef.HEX5 = 0U;
        vlSelfRef.HEX6 = 0U;
        vlSelfRef.HEX7 = 0U;
        vlSelfRef.LCD_DATA = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__pc_four = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__instr = 0U;
    } else {
        vlSelfRef.LEDG = (0xffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                          [1U]);
        vlSelfRef.HEX0 = (0x7fU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                          [2U]);
        vlSelfRef.HEX1 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [2U] >> 8U));
        vlSelfRef.HEX2 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [2U] >> 0x10U));
        vlSelfRef.HEX3 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [2U] >> 0x18U));
        vlSelfRef.HEX4 = (0x7fU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                          [3U]);
        vlSelfRef.HEX5 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [3U] >> 8U));
        vlSelfRef.HEX6 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [3U] >> 0x10U));
        vlSelfRef.HEX7 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [3U] >> 0x18U));
        vlSelfRef.LCD_DATA = (0xffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                              [4U]);
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr 
            = (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
                        [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                                    >> 2U))] >> 7U));
        vlSelfRef.tb_all__DOT__dut__DOT__pc_four = 
            ((IData)(4U) + vlSelfRef.tb_all__DOT__dut__DOT__pc);
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr 
            = (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
                        [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                                    >> 2U))] >> 0xfU));
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr 
            = (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
                        [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                                    >> 2U))] >> 0x14U));
        vlSelfRef.tb_all__DOT__dut__DOT__instr = vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
            [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                        >> 2U))];
    }
    vlSelfRef.LCD_RW = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 8U)));
    vlSelfRef.LCD_EN = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 0xaU)));
    vlSelfRef.LCD_RS = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 9U)));
    vlSelfRef.LCD_ON = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 0x1fU)));
    vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr)) 
           & (vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
              [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr] 
              >> 0x1fU));
    vlSelfRef.tb_all__DOT__dut__DOT__rs1_data = ((0U 
                                                  == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr))
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                 [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr]);
    vlSelfRef.tb_all__DOT__dut__DOT__rs2_data = ((0U 
                                                  == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                 [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr]);
    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
    vlSelfRef.tb_all__DOT__dut__DOT__mem_wren = ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 6U))) 
                                                 && ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 5U)) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                              >> 4U))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                  >> 3U))) 
                                                             && ((1U 
                                                                  & (~ 
                                                                     (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                      >> 2U))) 
                                                                 && ((1U 
                                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                         >> 1U)) 
                                                                     && (1U 
                                                                         & vlSelfRef.tb_all__DOT__dut__DOT__instr)))))));
    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
    if ((0x40U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
        vlSelfRef.tb_all__DOT__dut__DOT__rd_wren = 
            ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                     : ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
        if ((0x20U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
            if ((0x10U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 2U;
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 4U;
                        } else {
                            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                        }
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 2U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 1U;
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 1U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned 
                        = ((7U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                           >> 0xcU))));
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 3U;
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            }
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
        }
        vlSelfRef.tb_all__DOT__ins_valid = ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 5U)) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                     >> 4U))) 
                                                && ((8U 
                                                     & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 2U)) 
                                                     && ((1U 
                                                          & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                                      : 
                                                     ((1U 
                                                       & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel = 
            ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                     : ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 2U))) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
        vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel = 
            ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                     : ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                         ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                         : ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
    } else {
        if ((0x20U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
            vlSelfRef.tb_all__DOT__dut__DOT__rd_wren 
                = ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                          >> 4U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr)))));
            if ((0x10U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__ins_valid = 
                    ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 3U))) && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                             ? ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                             : ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0xaU;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 5U;
                        } else {
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                        }
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op 
                                = ((0x4000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                    ? ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                            ? ((0x40000000U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned 
                                = (3U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op));
                        } else {
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    }
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
                vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                    = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            } else {
                if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 1U;
                        if ((0U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                        } else if ((1U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 1U;
                        } else if ((2U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 2U;
                        }
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 2U;
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
                vlSelfRef.tb_all__DOT__ins_valid = 
                    ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 3U))) && ((1U & (~ 
                                                   (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
                vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                    = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            }
        } else if ((0x10U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
            vlSelfRef.tb_all__DOT__dut__DOT__rd_wren 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
            vlSelfRef.tb_all__DOT__ins_valid = ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                     >> 3U))) 
                                                && ((4U 
                                                     & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                                     : 
                                                    ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
            if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 5U;
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op 
                        = ((0x4000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                            ? ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned 
                        = (3U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op));
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 1U;
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            }
            vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__rd_wren 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 1U;
                    if ((0U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 3U;
                    } else if ((1U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 4U;
                    } else if ((2U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 5U;
                    } else if ((4U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 6U;
                    } else if ((5U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 7U;
                    }
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 1U;
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            }
            vlSelfRef.tb_all__DOT__ins_valid = ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                     >> 3U))) 
                                                && ((1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 2U))) 
                                                    && ((1U 
                                                         & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
        }
        vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel = 
            ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                       >> 5U))) && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                           >> 4U)) 
                                    && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 3U))) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag 
        = (1U & (IData)((1ULL & ((1ULL + ((~ (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__rs2_data))) 
                                          + (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))) 
                                 >> 0x20U))));
    vlSelfRef.LEDR = (((IData)(vlSelfRef.tb_all__DOT__ins_valid) 
                       << 0x11U) | ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                     ? 0U : (0x1ffffU 
                                             & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                             [0U])));
    if (vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel) {
            vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                = vlSelfRef.tb_all__DOT__dut__DOT__pc;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
            = vlSelfRef.tb_all__DOT__dut__DOT__rs1_data;
    }
    if ((4U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
        if ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = vlSelfRef.tb_all__DOT__dut__DOT__instr;
        } else if ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                (0xfffff000U & vlSelfRef.tb_all__DOT__dut__DOT__instr);
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xfffU & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (((- (IData)((vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x1fU))) << 0x14U) 
                    | (0xff000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)));
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xfffff000U & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | ((0x800U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 9U)) | (0x7feU & 
                                          (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                           >> 0x14U))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
        if ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0x7ffU & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (((- (IData)((vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x1fU))) << 0xcU) 
                    | (0x800U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 << 4U))));
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xfffff800U & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | ((0x7e0U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 0x14U)) | (0x1eU 
                                             & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 7U))));
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (((- (IData)((vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x1fU))) << 0xbU) 
                    | (0x7e0U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x14U))));
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xffffffe0U & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
        vlSelfRef.tb_all__DOT__dut__DOT__imm = ((0x1fU 
                                                 & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                                                | (((- (IData)(
                                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7e0U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 0x14U))));
        vlSelfRef.tb_all__DOT__dut__DOT__imm = ((0xffffffe0U 
                                                 & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                                                | (0x1fU 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 0x14U)));
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__imm = 0U;
    }
    vlSelfRef.tb_all__DOT__dut__DOT__br_less = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned)
                                                 ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag)
                                                 : 
                                                (((IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                                  == 
                                                  ((0U 
                                                    != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr)) 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                      [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr] 
                                                      >> 0x1fU)))
                                                  ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag)
                                                  : (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0)));
    if (vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel) {
            vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
                = vlSelfRef.tb_all__DOT__dut__DOT__imm;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
            = vlSelfRef.tb_all__DOT__dut__DOT__rs2_data;
    }
    vlSelfRef.tb_all__DOT__dut__DOT__br_sel = ((1U 
                                                & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 6U)) 
                                               && ((1U 
                                                    & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                                            : 
                                                           ((4U 
                                                             & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                             ? 
                                                            ((1U 
                                                              & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                                             : 
                                                            ((1U 
                                                              & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                 >> 1U)) 
                                                             && ((1U 
                                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr) 
                                                                 && (1U 
                                                                     & ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                             >> 0xcU)))
                                                                         ? 
                                                                        (0U 
                                                                         == 
                                                                         ((IData)(1U) 
                                                                          + 
                                                                          (((0U 
                                                                             == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                                             ? 0xffffffffU
                                                                             : 
                                                                            (~ 
                                                                             vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                                             [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                                                           + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))
                                                                         : 
                                                                        ((4U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                              >> 0xcU)))
                                                                          ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_less)
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                               >> 0xcU)))
                                                                           ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_less)
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                                >> 0xcU)))
                                                                            ? 
                                                                           (0U 
                                                                            != 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             (((0U 
                                                                                == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                                                ? 0xffffffffU
                                                                                : 
                                                                               (~ 
                                                                                vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                                                [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                                                              + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))
                                                                            : 
                                                                           (~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_less))))))))))))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag 
        = (1U & (IData)((1ULL & ((1ULL + ((~ (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) 
                                          + (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__operand_a)))) 
                                 >> 0x20U))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__operand_a;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
            = (vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
               << 1U);
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__operand_a;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
            = (vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
               >> 1U);
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__operand_a;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
            = ((0x80000000U & vlSelfRef.tb_all__DOT__dut__DOT__operand_a) 
               | (vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
                  >> 1U));
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp;
    vlSelfRef.tb_all__DOT__dut__DOT__alu_data = ((8U 
                                                  & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? 0U
                                                     : vlSelfRef.tb_all__DOT__dut__DOT__operand_b)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp
                                                     : vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp
                                                     : 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     | vlSelfRef.tb_all__DOT__dut__DOT__operand_b)
                                                     : 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     ^ vlSelfRef.tb_all__DOT__dut__DOT__operand_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag)
                                                     : 
                                                    (1U 
                                                     & (((vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                          >> 0x1fU) 
                                                         == 
                                                         (vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
                                                          >> 0x1fU))
                                                         ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag)
                                                         : 
                                                        (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                         >> 0x1fU))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     ((~ vlSelfRef.tb_all__DOT__dut__DOT__operand_b) 
                                                      + vlSelfRef.tb_all__DOT__dut__DOT__operand_a))
                                                     : 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     + vlSelfRef.tb_all__DOT__dut__DOT__operand_b)))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
                     & (0x4000U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
               & (0x7040U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel 
        = ((0x780U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                 >> 4U))) ? 0U : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x702U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x701U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((0x700U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                          >> 4U)))
                                                      ? 1U
                                                      : 2U)))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row 
        = (0x1fffU & VL_SHIFTR_III(13,13,32, (0x1fffU 
                                              & vlSelfRef.tb_all__DOT__dut__DOT__alu_data), 2U));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel 
        = (3U & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                 >> 0xcU));
    if (vlSelfRef.tb_all__DOT__dut__DOT__br_sel) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__br_sel) {
            vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc 
                = vlSelfRef.tb_all__DOT__dut__DOT__alu_data;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc = vlSelfRef.tb_all__DOT__dut__DOT__pc_four;
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0 
        = ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
           & ((0x2000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
              & (0x4000U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                 >> 4U))) ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                         >> 4U))) ? 
                   vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                 >> 4U)))
                            ? ((8U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                                ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                           >> 4U)))
                                         ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS 
        = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0) 
           & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren));
    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                ? (0xff000000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs));
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)
            ? ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                ? vlSelfRef.tb_all__DOT__dut__DOT__rs2_data
                : ((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                    ? ((2U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                        ? ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                            ? ((0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x18U)) 
                               | (0xffffffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                            : ((0xff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x10U)) 
                               | (0xff00ffffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)))
                        : ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                            ? ((0xff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 8U)) 
                               | (0xffff00ffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                            : ((0xffU & vlSelfRef.tb_all__DOT__dut__DOT__rs2_data) 
                               | (0xffffff00U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))))
                    : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? ((2U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                            ? ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                                ? (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x10U) 
                                                  | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                                : (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x10U) 
                                                  | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)))
                            : ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                                ? ((0xffff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 8U)) 
                                   | (0xff0000ffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                                : ((0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__rs2_data) 
                                   | (0xffff0000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))))
                        : vlSelfRef.tb_all__DOT__dut__DOT__rs2_data)))
            : ((4U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                ? ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                    ? ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs
                        : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp))
                : ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                    ? ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp
                        : 0U) : 0U)));
}

void Vtb_all___024root___eval_triggers__ico(Vtb_all___024root* vlSelf);

bool Vtb_all___024root___eval_phase__ico(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_all___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_all___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_all___024root___act_sequent__TOP__0(Vtb_all___024root* vlSelf);

void Vtb_all___024root___eval_act(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_all___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_all___024root___act_sequent__TOP__0(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
         & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0))) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall) {
            vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__stall = 0U;
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__stall = 1U;
            vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall = 1U;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__stall = 0U;
    }
}

void Vtb_all___024root___nba_sequent__TOP__0(Vtb_all___024root* vlSelf);
void Vtb_all___024root___nba_sequent__TOP__1(Vtb_all___024root* vlSelf);
void Vtb_all___024root___nba_sequent__TOP__2(Vtb_all___024root* vlSelf);
void Vtb_all___024root___nba_sequent__TOP__3(Vtb_all___024root* vlSelf);
void Vtb_all___024root___nba_comb__TOP__0(Vtb_all___024root* vlSelf);

void Vtb_all___024root___eval_nba(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_all___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_all___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_all___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_all___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_all___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_all___024root___nba_sequent__TOP__0(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0;
    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1;
    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2;
    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3;
    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4;
    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5;
    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0;
    // Body
    vlSelfRef.__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 = 0U;
    vlSelfRef.__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)))) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS) {
            if ((2U != (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel))) {
                if ((3U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel))) {
                    vlSelfRef.__VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 
                        = vlSelfRef.tb_all__DOT__dut__DOT__rs2_data;
                    vlSelfRef.__VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 
                        = (0xffU & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row));
                    vlSelfRef.__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel))) {
                vlSelfRef.__VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 
                    = vlSelfRef.tb_all__DOT__dut__DOT__rs2_data;
                vlSelfRef.__VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 
                    = (0xffU & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row));
                vlSelfRef.__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 = 1U;
            }
        }
    }
    if (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__mem_wren) {
            if ((0x700U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                      >> 4U)))) {
                __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 
                    = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0 = 1U;
            } else if ((0x701U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                             >> 4U)))) {
                __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 
                    = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1 = 1U;
            } else if ((0x702U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                             >> 4U)))) {
                if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) {
                    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 
                        = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2 = 1U;
                } else {
                    __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 
                        = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                    __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3 = 1U;
                }
            } else if ((0x703U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                             >> 4U)))) {
                __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 
                    = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
                __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4 = 1U;
            } else {
                __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 
                    = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                    [0U];
                __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5 = 1U;
            }
        }
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[0U] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v0;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[1U] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v1;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[3U] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v2;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[2U] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v3;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[4U] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v4;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[0U] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF__v5;
    }
    if (vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst) {
        vlSelfRef.LEDG = 0U;
        vlSelfRef.HEX0 = 0U;
        vlSelfRef.HEX1 = 0U;
        vlSelfRef.HEX2 = 0U;
        vlSelfRef.HEX3 = 0U;
        vlSelfRef.HEX4 = 0U;
        vlSelfRef.HEX5 = 0U;
        vlSelfRef.HEX6 = 0U;
        vlSelfRef.HEX7 = 0U;
        vlSelfRef.LCD_DATA = 0U;
    } else {
        vlSelfRef.LEDG = (0xffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                          [1U]);
        vlSelfRef.HEX0 = (0x7fU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                          [2U]);
        vlSelfRef.HEX1 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [2U] >> 8U));
        vlSelfRef.HEX2 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [2U] >> 0x10U));
        vlSelfRef.HEX3 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [2U] >> 0x18U));
        vlSelfRef.HEX4 = (0x7fU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                          [3U]);
        vlSelfRef.HEX5 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [3U] >> 8U));
        vlSelfRef.HEX6 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [3U] >> 0x10U));
        vlSelfRef.HEX7 = (0x7fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                   [3U] >> 0x18U));
        vlSelfRef.LCD_DATA = (0xffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                              [4U]);
    }
    vlSelfRef.LCD_RW = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 8U)));
    vlSelfRef.LCD_EN = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 0xaU)));
    vlSelfRef.LCD_RS = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 9U)));
    vlSelfRef.LCD_ON = (1U & ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
                              & (vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                 [4U] >> 0x1fU)));
}

VL_INLINE_OPT void Vtb_all___024root___nba_sequent__TOP__1(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32;
    __VdlyVal__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 = 0;
    CData/*4:0*/ __VdlyDim0__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32;
    __VdlyDim0__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v0;
    __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32;
    __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 = 0;
    // Body
    __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v0 = 0U;
    __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 = 0U;
    if (vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v0 = 1U;
    } else if (((IData)(vlSelfRef.tb_all__DOT__dut__DOT__rd_wren) 
                & (0U != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr)))) {
        __VdlyVal__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 
            = ((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                ? vlSelfRef.tb_all__DOT__dut__DOT__alu_data
                : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                    ? ((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                        ? ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                            ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)
                        : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                            ? (((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                                & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                                ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                                : 0U) : ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                          ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1
                                          : 0U))) : 
                   ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                     ? vlSelfRef.tb_all__DOT__dut__DOT__pc_four
                     : 0U)));
        __VdlyDim0__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 
            = vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr;
        __VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32 = 1U;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v0) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[1U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[2U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[3U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[4U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[5U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[6U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[7U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[8U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[9U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0xaU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0xbU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0xcU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0xdU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0xeU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0xfU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x10U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x11U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x12U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x13U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x14U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x15U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x16U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x17U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x18U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x19U] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x1aU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x1bU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x1cU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x1dU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x1eU] = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0x1fU] = 0U;
    }
    if (__VdlySet__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[__VdlyDim0__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32] 
            = __VdlyVal__tb_all__DOT__dut__DOT__block_regfile__DOT__Reg__v32;
    }
}

VL_INLINE_OPT void Vtb_all___024root___nba_sequent__TOP__2(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst) {
        vlSelfRef.tb_all__DOT__dut__DOT__pc = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__pc_four = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__instr = 0U;
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__pc = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__stall)
                                                ? vlSelfRef.tb_all__DOT__dut__DOT__pc
                                                : vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc);
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr 
            = (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
                        [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                                    >> 2U))] >> 7U));
        vlSelfRef.tb_all__DOT__dut__DOT__pc_four = 
            ((IData)(4U) + vlSelfRef.tb_all__DOT__dut__DOT__pc);
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr 
            = (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
                        [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                                    >> 2U))] >> 0xfU));
        vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr 
            = (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
                        [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                                    >> 2U))] >> 0x14U));
        vlSelfRef.tb_all__DOT__dut__DOT__instr = vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem
            [(0x7ffU & (vlSelfRef.tb_all__DOT__dut__DOT__pc 
                        >> 2U))];
    }
    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
    vlSelfRef.tb_all__DOT__dut__DOT__mem_wren = ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 6U))) 
                                                 && ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 5U)) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                              >> 4U))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                  >> 3U))) 
                                                             && ((1U 
                                                                  & (~ 
                                                                     (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                      >> 2U))) 
                                                                 && ((1U 
                                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                         >> 1U)) 
                                                                     && (1U 
                                                                         & vlSelfRef.tb_all__DOT__dut__DOT__instr)))))));
    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
    if ((0x40U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
        vlSelfRef.tb_all__DOT__dut__DOT__rd_wren = 
            ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                     : ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
        if ((0x20U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
            if ((0x10U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 2U;
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 4U;
                        } else {
                            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                        }
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 2U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 1U;
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 1U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned 
                        = ((7U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                           >> 0xcU))));
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 3U;
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            }
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
        }
        vlSelfRef.tb_all__DOT__ins_valid = ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 5U)) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                     >> 4U))) 
                                                && ((8U 
                                                     & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 2U)) 
                                                     && ((1U 
                                                          & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                                      : 
                                                     ((1U 
                                                       & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
        vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel = 
            ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                     : ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 2U))) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
        vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel = 
            ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                     : ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                         ? ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                         : ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
    } else {
        if ((0x20U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
            vlSelfRef.tb_all__DOT__dut__DOT__rd_wren 
                = ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                          >> 4U)) && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr)))));
            if ((0x10U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__ins_valid = 
                    ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 3U))) && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                             ? ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                             : ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0xaU;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 5U;
                        } else {
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                        }
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op 
                                = ((0x4000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                    ? ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                            ? ((0x40000000U 
                                                & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                     ? ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned 
                                = (3U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op));
                        } else {
                            vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                            vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    }
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
                vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                    = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            } else {
                if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 1U;
                        if ((0U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                        } else if ((1U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 1U;
                        } else if ((2U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 2U;
                        }
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 2U;
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
                vlSelfRef.tb_all__DOT__ins_valid = 
                    ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 3U))) && ((1U & (~ 
                                                   (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
                vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                    = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            }
        } else if ((0x10U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
            vlSelfRef.tb_all__DOT__dut__DOT__rd_wren 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
            vlSelfRef.tb_all__DOT__ins_valid = ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                     >> 3U))) 
                                                && ((4U 
                                                     & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                                     : 
                                                    ((1U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
            if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 5U;
                    } else {
                        vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                    }
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op 
                        = ((0x4000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                            ? ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned 
                        = (3U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op));
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 1U;
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            }
            vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__rd_wren 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            if ((8U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((4U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            } else if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__instr)) {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 1U;
                    if ((0U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 3U;
                    } else if ((1U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 4U;
                    } else if ((2U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 5U;
                    } else if ((4U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 6U;
                    } else if ((5U == (7U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 7U;
                    }
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 1U;
                } else {
                    vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                    vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
                }
            } else {
                vlSelfRef.tb_all__DOT__dut__DOT__wb_sel = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__slt_sl = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__alu_op = 0U;
                vlSelfRef.tb_all__DOT__dut__DOT__imm_sel = 0U;
            }
            vlSelfRef.tb_all__DOT__ins_valid = ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                     >> 3U))) 
                                                && ((1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 2U))) 
                                                    && ((1U 
                                                         & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
            vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel 
                = ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr))));
        }
        vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel = 
            ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                       >> 5U))) && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                           >> 4U)) 
                                    && ((1U & (~ (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                  >> 3U))) 
                                        && ((1U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr))))));
    }
    if ((4U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
        if ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = vlSelfRef.tb_all__DOT__dut__DOT__instr;
        } else if ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                (0xfffff000U & vlSelfRef.tb_all__DOT__dut__DOT__instr);
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xfffU & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (((- (IData)((vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x1fU))) << 0x14U) 
                    | (0xff000U & vlSelfRef.tb_all__DOT__dut__DOT__instr)));
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xfffff000U & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | ((0x800U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 9U)) | (0x7feU & 
                                          (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                           >> 0x14U))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
        if ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0x7ffU & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (((- (IData)((vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x1fU))) << 0xcU) 
                    | (0x800U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 << 4U))));
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xfffff800U & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | ((0x7e0U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                               >> 0x14U)) | (0x1eU 
                                             & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                >> 7U))));
        } else {
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (((- (IData)((vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x1fU))) << 0xbU) 
                    | (0x7e0U & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                 >> 0x14U))));
            vlSelfRef.tb_all__DOT__dut__DOT__imm = 
                ((0xffffffe0U & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                 | (0x1fU & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                             >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel))) {
        vlSelfRef.tb_all__DOT__dut__DOT__imm = ((0x1fU 
                                                 & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                                                | (((- (IData)(
                                                               (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7e0U 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                         >> 0x14U))));
        vlSelfRef.tb_all__DOT__dut__DOT__imm = ((0xffffffe0U 
                                                 & vlSelfRef.tb_all__DOT__dut__DOT__imm) 
                                                | (0x1fU 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                      >> 0x14U)));
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__imm = 0U;
    }
}

VL_INLINE_OPT void Vtb_all___024root___nba_sequent__TOP__3(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT 
        = (0x1ffffU & vlSelfRef.SW);
    if ((1U & (~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS)))) {
            if ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel))) {
                vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1 
                    = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0
                    [(0xffU & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row))];
            } else if ((3U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel))) {
                vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1 
                    = vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1
                    [(0xffU & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row))];
            }
        }
    }
    if (vlSelfRef.__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0[vlSelfRef.__VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0] 
            = vlSelfRef.__VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0;
    }
    if (vlSelfRef.__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1[vlSelfRef.__VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0] 
            = vlSelfRef.__VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0;
    }
}

VL_INLINE_OPT void Vtb_all___024root___nba_comb__TOP__0(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = ((0U != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr)) 
           & (vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
              [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr] 
              >> 0x1fU));
    vlSelfRef.tb_all__DOT__dut__DOT__rs1_data = ((0U 
                                                  == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr))
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                 [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr]);
    vlSelfRef.tb_all__DOT__dut__DOT__rs2_data = ((0U 
                                                  == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                 [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr]);
    vlSelfRef.LEDR = (((IData)(vlSelfRef.tb_all__DOT__ins_valid) 
                       << 0x11U) | ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                     ? 0U : (0x1ffffU 
                                             & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                             [0U])));
    if (vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel) {
            vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                = vlSelfRef.tb_all__DOT__dut__DOT__pc;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
            = vlSelfRef.tb_all__DOT__dut__DOT__rs1_data;
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag 
        = (1U & (IData)((1ULL & ((1ULL + ((~ (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__rs2_data))) 
                                          + (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))) 
                                 >> 0x20U))));
    if (vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel) {
            vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
                = vlSelfRef.tb_all__DOT__dut__DOT__imm;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
            = vlSelfRef.tb_all__DOT__dut__DOT__rs2_data;
    }
    vlSelfRef.tb_all__DOT__dut__DOT__br_less = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned)
                                                 ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag)
                                                 : 
                                                (((IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                                  == 
                                                  ((0U 
                                                    != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr)) 
                                                   & (vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                      [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr] 
                                                      >> 0x1fU)))
                                                  ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag)
                                                  : (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0)));
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag 
        = (1U & (IData)((1ULL & ((1ULL + ((~ (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) 
                                          + (QData)((IData)(vlSelfRef.tb_all__DOT__dut__DOT__operand_a)))) 
                                 >> 0x20U))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__operand_a;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
            = (vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp 
               << 1U);
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__operand_a;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
            = (vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp 
               >> 1U);
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__operand_a;
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            < (0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
            = ((0x80000000U & vlSelfRef.tb_all__DOT__dut__DOT__operand_a) 
               | (vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp 
                  >> 1U));
        vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp 
        = vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp;
    vlSelfRef.tb_all__DOT__dut__DOT__br_sel = ((1U 
                                                & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                   >> 6U)) 
                                               && ((1U 
                                                    & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.tb_all__DOT__dut__DOT__instr)))
                                                            : 
                                                           ((4U 
                                                             & vlSelfRef.tb_all__DOT__dut__DOT__instr)
                                                             ? 
                                                            ((1U 
                                                              & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.tb_all__DOT__dut__DOT__instr))
                                                             : 
                                                            ((1U 
                                                              & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                 >> 1U)) 
                                                             && ((1U 
                                                                  & vlSelfRef.tb_all__DOT__dut__DOT__instr) 
                                                                 && (1U 
                                                                     & ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                             >> 0xcU)))
                                                                         ? 
                                                                        (0U 
                                                                         == 
                                                                         ((IData)(1U) 
                                                                          + 
                                                                          (((0U 
                                                                             == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                                             ? 0xffffffffU
                                                                             : 
                                                                            (~ 
                                                                             vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                                             [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                                                           + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))
                                                                         : 
                                                                        ((4U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                              >> 0xcU)))
                                                                          ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_less)
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                               >> 0xcU)))
                                                                           ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_less)
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelfRef.tb_all__DOT__dut__DOT__instr 
                                                                                >> 0xcU)))
                                                                            ? 
                                                                           (0U 
                                                                            != 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             (((0U 
                                                                                == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                                                ? 0xffffffffU
                                                                                : 
                                                                               (~ 
                                                                                vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                                                [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                                                              + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))
                                                                            : 
                                                                           (~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__br_less))))))))))))));
    vlSelfRef.tb_all__DOT__dut__DOT__alu_data = ((8U 
                                                  & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? 0U
                                                     : vlSelfRef.tb_all__DOT__dut__DOT__operand_b)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp
                                                     : vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp
                                                     : 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     & vlSelfRef.tb_all__DOT__dut__DOT__operand_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     | vlSelfRef.tb_all__DOT__dut__DOT__operand_b)
                                                     : 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     ^ vlSelfRef.tb_all__DOT__dut__DOT__operand_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag)
                                                     : 
                                                    (1U 
                                                     & (((vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                          >> 0x1fU) 
                                                         == 
                                                         (vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
                                                          >> 0x1fU))
                                                         ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag)
                                                         : 
                                                        (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                         >> 0x1fU))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__alu_op))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     ((~ vlSelfRef.tb_all__DOT__dut__DOT__operand_b) 
                                                      + vlSelfRef.tb_all__DOT__dut__DOT__operand_a))
                                                     : 
                                                    (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                                     + vlSelfRef.tb_all__DOT__dut__DOT__operand_b)))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf 
        = ((1U & (~ ((0x2000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
                     & (0x4000U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data))))) 
           && ((0x7000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
               & (0x7040U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel 
        = ((0x780U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                 >> 4U))) ? 0U : ((0x703U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((0x702U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((0x701U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((0x700U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                          >> 4U)))
                                                      ? 1U
                                                      : 2U)))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row 
        = (0x1fffU & VL_SHIFTR_III(13,13,32, (0x1fffU 
                                              & vlSelfRef.tb_all__DOT__dut__DOT__alu_data), 2U));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel 
        = (3U & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                 >> 0xcU));
    if (vlSelfRef.tb_all__DOT__dut__DOT__br_sel) {
        if (vlSelfRef.tb_all__DOT__dut__DOT__br_sel) {
            vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc 
                = vlSelfRef.tb_all__DOT__dut__DOT__alu_data;
        }
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc = vlSelfRef.tb_all__DOT__dut__DOT__pc_four;
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0 
        = ((~ (IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)) 
           & ((0x2000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
              & (0x4000U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs 
        = ((0x700U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                 >> 4U))) ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
           [0U] : ((0x701U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                         >> 4U))) ? 
                   vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                   [1U] : ((0x702U == (0xfffU & (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                                 >> 4U)))
                            ? ((8U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                                ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [3U] : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [2U]) : ((0x703U == 
                                         (0xfffU & 
                                          (vlSelfRef.tb_all__DOT__dut__DOT__alu_data 
                                           >> 4U)))
                                         ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                                        [4U] : 0U))));
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS 
        = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0) 
           & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren));
    if ((2U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                ? (0xff000000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)
                : (0xff0000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs));
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff0000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    } else if ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xff00U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffff00U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    } else {
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp 
            = (0xffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
        vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp 
            = (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs);
    }
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp 
        = ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)
            ? ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                ? vlSelfRef.tb_all__DOT__dut__DOT__rs2_data
                : ((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                    ? ((2U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                        ? ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                            ? ((0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x18U)) 
                               | (0xffffffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                            : ((0xff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x10U)) 
                               | (0xff00ffffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)))
                        : ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                            ? ((0xff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 8U)) 
                               | (0xffff00ffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                            : ((0xffU & vlSelfRef.tb_all__DOT__dut__DOT__rs2_data) 
                               | (0xffffff00U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))))
                    : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? ((2U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                            ? ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                                ? (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x10U) 
                                                  | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                                : (0xffff0000U & (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 0x10U) 
                                                  | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs)))
                            : ((1U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)
                                ? ((0xffff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__dut__DOT__rs2_data, 8U)) 
                                   | (0xff0000ffU & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))
                                : ((0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__rs2_data) 
                                   | (0xffff0000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs))))
                        : vlSelfRef.tb_all__DOT__dut__DOT__rs2_data)))
            : ((4U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                ? ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                    ? ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? ((0x2000U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            ? (0xffff0000U | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                            : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp)
                        : ((0x80U & vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            ? (0xffffff00U | vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp)
                            : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp))
                    : ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs
                        : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp))
                : ((2U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                    ? ((1U & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl))
                        ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp
                        : 0U) : 0U)));
}

void Vtb_all___024root___eval_triggers__act(Vtb_all___024root* vlSelf);

bool Vtb_all___024root___eval_phase__act(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_all___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_all___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_all___024root___eval_phase__nba(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_all___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__ico(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__nba(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__act(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_all___024root___eval(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval\n"); );
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
            Vtb_all___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_all.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_all___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_all___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_all.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_all___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_all.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_all___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_all___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_all___024root___eval_debug_assertions(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.CLOCK_50 & 0xfeU))) {
        Verilated::overWidthError("CLOCK_50");}
    if (VL_UNLIKELY((vlSelfRef.SW & 0xfffc0000U))) {
        Verilated::overWidthError("SW");}
    if (VL_UNLIKELY((vlSelfRef.KEY & 0xf0U))) {
        Verilated::overWidthError("KEY");}
}
#endif  // VL_DEBUG
