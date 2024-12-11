// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ctrl_unit.h for the primary calling header

#include "Vtb_ctrl_unit__pch.h"
#include "Vtb_ctrl_unit___024root.h"

VlCoroutine Vtb_ctrl_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_ctrl_unit___024root* vlSelf);

void Vtb_ctrl_unit___024root___eval_initial(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ctrl_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ctrl_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Testing ctrl_unit...\n",0);
    vlSelfRef.tb_ctrl_unit__DOT__i_instr = 0x8033U;
    vlSelfRef.tb_ctrl_unit__DOT__i_br_less = 0U;
    vlSelfRef.tb_ctrl_unit__DOT__i_br_equal = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_ctrl_unit.sv", 
                                         51);
    VL_WRITEF_NX("i_instr: %b\no_ins_n_vld: %b, o_slt_sl: %b, o_pc_sel: %b, o_br_unsigned: %b, o_rd_wren: %b, o_op_a_sel: %b, o_op_b_sel: %b, o_alu_op: %b, o_mem_wren: %b, o_wb_sel: %b, o_imm_sel: %b\n",0,
                 32,vlSelfRef.tb_ctrl_unit__DOT__i_instr,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld),
                 3,vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel),
                 4,vlSelfRef.tb_ctrl_unit__DOT__o_alu_op,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren),
                 2,vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel,
                 3,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel));
    vlSelfRef.tb_ctrl_unit__DOT__i_instr = 0x40008033U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_ctrl_unit.sv", 
                                         58);
    VL_WRITEF_NX("i_instr: %b\no_ins_n_vld: %b, o_slt_sl: %b, o_pc_sel: %b, o_br_unsigned: %b, o_rd_wren: %b, o_op_a_sel: %b, o_op_b_sel: %b, o_alu_op: %b, o_mem_wren: %b, o_wb_sel: %b, o_imm_sel: %b\n",0,
                 32,vlSelfRef.tb_ctrl_unit__DOT__i_instr,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld),
                 3,vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel),
                 4,vlSelfRef.tb_ctrl_unit__DOT__o_alu_op,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren),
                 2,vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel,
                 3,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel));
    vlSelfRef.tb_ctrl_unit__DOT__i_instr = 0x108113U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_ctrl_unit.sv", 
                                         65);
    VL_WRITEF_NX("i_instr: %b\no_ins_n_vld: %b, o_slt_sl: %b, o_pc_sel: %b, o_br_unsigned: %b, o_rd_wren: %b, o_op_a_sel: %b, o_op_b_sel: %b, o_alu_op: %b, o_mem_wren: %b, o_wb_sel: %b, o_imm_sel: %b\n",0,
                 32,vlSelfRef.tb_ctrl_unit__DOT__i_instr,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld),
                 3,vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel),
                 4,vlSelfRef.tb_ctrl_unit__DOT__o_alu_op,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren),
                 2,vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel,
                 3,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel));
    vlSelfRef.tb_ctrl_unit__DOT__i_instr = 0x80e3U;
    vlSelfRef.tb_ctrl_unit__DOT__i_br_less = 0U;
    vlSelfRef.tb_ctrl_unit__DOT__i_br_equal = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_ctrl_unit.sv", 
                                         74);
    VL_WRITEF_NX("i_instr: %b\no_ins_n_vld: %b, o_slt_sl: %b, o_pc_sel: %b, o_br_unsigned: %b, o_rd_wren: %b, o_op_a_sel: %b, o_op_b_sel: %b, o_alu_op: %b, o_mem_wren: %b, o_wb_sel: %b, o_imm_sel: %b\n",0,
                 32,vlSelfRef.tb_ctrl_unit__DOT__i_instr,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld),
                 3,vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel),
                 4,vlSelfRef.tb_ctrl_unit__DOT__o_alu_op,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren),
                 2,vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel,
                 3,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel));
    vlSelfRef.tb_ctrl_unit__DOT__i_instr = 0x10a123U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_ctrl_unit.sv", 
                                         81);
    VL_WRITEF_NX("i_instr: %b\no_ins_n_vld: %b, o_slt_sl: %b, o_pc_sel: %b, o_br_unsigned: %b, o_rd_wren: %b, o_op_a_sel: %b, o_op_b_sel: %b, o_alu_op: %b, o_mem_wren: %b, o_wb_sel: %b, o_imm_sel: %b\n",0,
                 32,vlSelfRef.tb_ctrl_unit__DOT__i_instr,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld),
                 3,vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren),
                 1,vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel),
                 4,vlSelfRef.tb_ctrl_unit__DOT__o_alu_op,
                 1,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren),
                 2,vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel,
                 3,(IData)(vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel));
    VL_FINISH_MT("tb_ctrl_unit.sv", 87, "");
}

void Vtb_ctrl_unit___024root___act_sequent__TOP__0(Vtb_ctrl_unit___024root* vlSelf);

void Vtb_ctrl_unit___024root___eval_act(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ctrl_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_ctrl_unit___024root___act_sequent__TOP__0(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
    vlSelfRef.tb_ctrl_unit__DOT__o_mem_wren = ((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                    >> 6U))) 
                                               && ((1U 
                                                    & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))))));
    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
    if ((0x40U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
        vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren = ((1U 
                                                   & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.tb_ctrl_unit__DOT__i_instr))))));
        vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld = 
            ((1U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                    >> 5U)) && ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                     ? ((1U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))
                                     : ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                         ? ((1U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                         : ((1U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_ctrl_unit__DOT__i_instr))))));
        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
        vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel = (
                                                   (1U 
                                                    & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))
                                                            : 
                                                           ((1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                 >> 2U))) 
                                                            && ((1U 
                                                                 & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.tb_ctrl_unit__DOT__i_instr))))));
        vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel = (
                                                   (1U 
                                                    & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))
                                                            : 
                                                           ((4U 
                                                             & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                             ? 
                                                            ((1U 
                                                              & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                                             : 
                                                            ((1U 
                                                              & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.tb_ctrl_unit__DOT__i_instr))))));
        if ((0x20U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
            if ((0x10U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            } else if ((8U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                if ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                        if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                            vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 2U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 4U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                        } else {
                            vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    }
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
            } else if ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 2U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 1U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    } else {
                        vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    }
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
            } else if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 1U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 3U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned 
                        = ((7U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                         >> 0xcU))) 
                           | (6U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                           >> 0xcU))));
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
            } else {
                vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            }
        } else {
            vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
            vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
        }
    } else {
        if ((0x20U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
            vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren 
                = ((1U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                          >> 4U)) && ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))));
            if ((0x10U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld 
                    = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                 >> 3U))) && ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                               ? ((1U 
                                                   & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                               : ((1U 
                                                   & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
                vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel 
                    = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
                vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                if ((8U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                } else if ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                        if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                            vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 5U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0xaU;
                        } else {
                            vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    }
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                        if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op 
                                = ((0x4000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                    ? ((0x2000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                        ? ((0x1000U 
                                            & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                            ? ((0x40000000U 
                                                & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                     ? ((0x1000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                  ? 1U
                                                  : 0U))));
                            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned 
                                = (3U == (IData)(vlSelfRef.tb_ctrl_unit__DOT__o_alu_op));
                        } else {
                            vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                            vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    }
                }
            } else {
                vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld 
                    = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
                if ((8U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                } else if ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                } else if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                        if ((0U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                          >> 0xcU)))) {
                            vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                        } else if ((1U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 1U;
                        } else if ((2U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 2U;
                        }
                        vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 1U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 2U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    } else {
                        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    }
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
                vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel 
                    = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
            }
        } else if ((0x10U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
            vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren 
                = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
            vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld 
                = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
            vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
            vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel 
                = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                             >> 3U))) && ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                           ? ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                           : ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
            vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
            if ((8U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            } else if ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 5U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    } else {
                        vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                        vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                    }
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
            } else if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 1U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op 
                        = ((0x4000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                            ? ((0x2000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                ? ((0x1000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                ? ((0x1000U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                   ? 7U
                                                   : 0U)));
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned 
                        = (3U == (IData)(vlSelfRef.tb_ctrl_unit__DOT__o_alu_op));
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
            } else {
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            }
        } else {
            vlSelfRef.tb_ctrl_unit__DOT__o_rd_wren 
                = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
            vlSelfRef.tb_ctrl_unit__DOT__o_ins_n_vld 
                = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
            if ((8U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            } else if ((4U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            } else if ((2U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                if ((1U & vlSelfRef.tb_ctrl_unit__DOT__i_instr)) {
                    if ((0U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 3U;
                    } else if ((1U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 4U;
                    } else if ((2U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 5U;
                    } else if ((4U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 6U;
                    } else if ((5U == (7U & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 7U;
                    }
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 1U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 1U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                } else {
                    vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                    vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
                }
            } else {
                vlSelfRef.tb_ctrl_unit__DOT__o_slt_sl = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_wb_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_imm_sel = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_br_unsigned = 0U;
                vlSelfRef.tb_ctrl_unit__DOT__o_alu_op = 0U;
            }
            vlSelfRef.tb_ctrl_unit__DOT__o_op_b_sel 
                = ((1U & (~ (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr))));
        }
        vlSelfRef.tb_ctrl_unit__DOT__o_op_a_sel = (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                        >> 5U))) 
                                                   && ((1U 
                                                        & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                           >> 4U)) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                   >> 2U)) 
                                                               && ((1U 
                                                                    & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.tb_ctrl_unit__DOT__i_instr))))));
    }
    vlSelfRef.tb_ctrl_unit__DOT__o_pc_sel = ((1U & 
                                              (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                               >> 6U)) 
                                             && ((1U 
                                                  & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                     >> 5U)) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                          >> 4U))) 
                                                     && ((8U 
                                                          & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                              >> 2U)) 
                                                          && ((1U 
                                                               & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                  >> 1U)) 
                                                              && (1U 
                                                                  & vlSelfRef.tb_ctrl_unit__DOT__i_instr)))
                                                          : 
                                                         ((4U 
                                                           & vlSelfRef.tb_ctrl_unit__DOT__i_instr)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.tb_ctrl_unit__DOT__i_instr))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelfRef.tb_ctrl_unit__DOT__i_instr) 
                                                               && (1U 
                                                                   & ((0U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                           >> 0xcU)))
                                                                       ? (IData)(vlSelfRef.tb_ctrl_unit__DOT__i_br_equal)
                                                                       : 
                                                                      ((4U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                            >> 0xcU)))
                                                                        ? (IData)(vlSelfRef.tb_ctrl_unit__DOT__i_br_less)
                                                                        : 
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                             >> 0xcU)))
                                                                         ? (IData)(vlSelfRef.tb_ctrl_unit__DOT__i_br_less)
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.tb_ctrl_unit__DOT__i_instr 
                                                                              >> 0xcU)))
                                                                          ? 
                                                                         (~ (IData)(vlSelfRef.tb_ctrl_unit__DOT__i_br_equal))
                                                                          : 
                                                                         (~ (IData)(vlSelfRef.tb_ctrl_unit__DOT__i_br_less))))))))))))));
}

void Vtb_ctrl_unit___024root___eval_nba(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ctrl_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vtb_ctrl_unit___024root___timing_resume(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ctrl_unit___024root___eval_triggers__act(Vtb_ctrl_unit___024root* vlSelf);

bool Vtb_ctrl_unit___024root___eval_phase__act(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ctrl_unit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ctrl_unit___024root___timing_resume(vlSelf);
        Vtb_ctrl_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ctrl_unit___024root___eval_phase__nba(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ctrl_unit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ctrl_unit___024root___dump_triggers__nba(Vtb_ctrl_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ctrl_unit___024root___dump_triggers__act(Vtb_ctrl_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ctrl_unit___024root___eval(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval\n"); );
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
            Vtb_ctrl_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_ctrl_unit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ctrl_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_ctrl_unit.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ctrl_unit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ctrl_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ctrl_unit___024root___eval_debug_assertions(Vtb_ctrl_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ctrl_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ctrl_unit___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
