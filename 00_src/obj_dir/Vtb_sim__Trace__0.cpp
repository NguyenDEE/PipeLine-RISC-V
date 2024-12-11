// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_sim__Syms.h"


void Vtb_sim___024root__trace_chg_0_sub_0(Vtb_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_sim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_chg_0\n"); );
    // Init
    Vtb_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sim___024root*>(voidSelf);
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_sim___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_sim___024root__trace_chg_0_sub_0(Vtb_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [0xaU]))) {
        bufp->chgIData(oldp+0,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [0U] : 0U)),32);
        bufp->chgIData(oldp+1,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                [1U] : 0U)),32);
        bufp->chgCData(oldp+2,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                    [2U]) : 0U)),7);
        bufp->chgCData(oldp+3,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                             [2U] >> 8U))
                                 : 0U)),7);
        bufp->chgCData(oldp+4,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                             [2U] >> 0x10U))
                                 : 0U)),7);
        bufp->chgCData(oldp+5,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                             [2U] >> 0x18U))
                                 : 0U)),7);
        bufp->chgCData(oldp+6,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                    [3U]) : 0U)),7);
        bufp->chgCData(oldp+7,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                             [3U] >> 8U))
                                 : 0U)),7);
        bufp->chgCData(oldp+8,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                             [3U] >> 0x10U))
                                 : 0U)),7);
        bufp->chgCData(oldp+9,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                 ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                             [3U] >> 0x18U))
                                 : 0U)),7);
        bufp->chgIData(oldp+10,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                  ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                 [4U] : 0U)),32);
        bufp->chgIData(oldp+11,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                  ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT
                                  : 0U)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgBit(oldp+12,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M));
        bufp->chgIData(oldp+13,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem),32);
        bufp->chgBit(oldp+15,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem));
        bufp->chgIData(oldp+17,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2),32);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state),4);
        bufp->chgIData(oldp+23,((0x3ffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)),18);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d),3);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d),32);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0xeU]))) {
        bufp->chgBit(oldp+27,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_F));
        bufp->chgBit(oldp+28,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_D));
        bufp->chgBit(oldp+29,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_E));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_M));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_W));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+32,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F));
        bufp->chgIData(oldp+33,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp),32);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel));
        bufp->chgSData(oldp+35,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer),10);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+36,(vlSelfRef.tb_sim__DOT__pc_debug),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q),18);
        bufp->chgSData(oldp+38,(((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                 | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2))),16);
        bufp->chgBit(oldp+39,(vlSelfRef.tb_sim__DOT__o_SRAM_CE_N));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_sim__DOT__o_SRAM_WE_N));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_sim__DOT__o_SRAM_LB_N));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_sim__DOT__o_SRAM_UB_N));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_sim__DOT__o_SRAM_OE_N));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D));
        bufp->chgIData(oldp+47,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F),32);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D),3);
        bufp->chgBit(oldp+50,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D));
        bufp->chgCData(oldp+52,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D),4);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D),32);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D),5);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D),5);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D),32);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E),3);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E),32);
        bufp->chgSData(oldp+60,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D),10);
        bufp->chgSData(oldp+61,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F),10);
        bufp->chgBit(oldp+62,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK));
        bufp->chgIData(oldp+63,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q),32);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q),3);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q),32);
        bufp->chgIData(oldp+66,(((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                  ? ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                      ? 0U : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                               ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                                               : ((
                                                   ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                                    | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))))
                                  : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                      ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                          ? ((0xffff0000U 
                                              & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                                             | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                                | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2)))
                                          : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q)
                                      : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))),32);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+68,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[1]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[2]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[3]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[4]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[5]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[6]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[7]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[8]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[9]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[10]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[11]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[12]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[13]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[14]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[15]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[16]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[17]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[18]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[19]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[20]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[21]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[22]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[23]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[24]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[25]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[26]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[27]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[28]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[29]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[30]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[31]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+101,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ins_n_vld_M));
        bufp->chgIData(oldp+102,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr),32);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0),7);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1),7);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2),7);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3),7);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4),7);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5),7);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6),7);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7),7);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_sim__DOT__dut__DOT__result_W),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M),32);
        bufp->chgCData(oldp+115,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M),5);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M),32);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M));
        bufp->chgCData(oldp+119,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M),2);
        bufp->chgIData(oldp+120,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_ADDR),18);
        bufp->chgSData(oldp+121,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_DQ),16);
        bufp->chgBit(oldp+122,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_CE_N));
        bufp->chgBit(oldp+123,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_WE_N));
        bufp->chgBit(oldp+124,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_LB_N));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_UB_N));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+126,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1),32);
        bufp->chgIData(oldp+127,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2),32);
        bufp->chgIData(oldp+128,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1),32);
        bufp->chgIData(oldp+129,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2),32);
        bufp->chgCData(oldp+130,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+131,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F),32);
        bufp->chgIData(oldp+132,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F),32);
        bufp->chgBit(oldp+133,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D));
        bufp->chgBit(oldp+134,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D));
        bufp->chgBit(oldp+135,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D));
        bufp->chgCData(oldp+136,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D),2);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D),5);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E),5);
        bufp->chgIData(oldp+139,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D),32);
        bufp->chgBit(oldp+140,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E));
        bufp->chgIData(oldp+141,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E),32);
        bufp->chgIData(oldp+142,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E),32);
        bufp->chgBit(oldp+143,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E));
        bufp->chgCData(oldp+145,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E),2);
        bufp->chgIData(oldp+146,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D),32);
        bufp->chgCData(oldp+147,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D),3);
        bufp->chgBit(oldp+148,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D));
        bufp->chgBit(oldp+149,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D));
        bufp->chgCData(oldp+150,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D),3);
        bufp->chgBit(oldp+151,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D));
        bufp->chgBit(oldp+152,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D));
        bufp->chgBit(oldp+153,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D));
        bufp->chgCData(oldp+154,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D),4);
        bufp->chgBit(oldp+155,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__mem_wren_D));
        bufp->chgCData(oldp+156,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D),2);
        bufp->chgCData(oldp+157,((0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+158,((0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+159,((0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                           >> 7U))),5);
        bufp->chgBit(oldp+160,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_branch));
        bufp->chgBit(oldp+161,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_jump));
        bufp->chgBit(oldp+162,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1));
        bufp->chgBit(oldp+163,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2));
        bufp->chgBit(oldp+164,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem));
        bufp->chgBit(oldp+165,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf));
        bufp->chgIData(oldp+166,((((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E)) 
                                   & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf))
                                   ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                                   : 0U)),32);
        bufp->chgIData(oldp+167,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT),32);
        bufp->chgBit(oldp+168,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal));
        bufp->chgBit(oldp+169,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal));
        bufp->chgSData(oldp+170,((0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)),16);
        bufp->chgIData(oldp+171,((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                  >> 9U)),23);
        bufp->chgCData(oldp+172,((0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                           >> 3U))),6);
        bufp->chgCData(oldp+173,((7U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)),3);
        bufp->chgCData(oldp+174,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel),2);
        bufp->chgIData(oldp+175,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs),32);
        bufp->chgIData(oldp+176,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp),32);
        bufp->chgIData(oldp+177,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4]),32);
        bufp->chgCData(oldp+182,((3U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)),2);
        bufp->chgIData(oldp+183,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp),32);
        bufp->chgIData(oldp+184,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+185,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E),32);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E),2);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_sim__DOT__dut__DOT__forwardB_E),2);
        bufp->chgIData(oldp+188,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1),32);
        bufp->chgIData(oldp+189,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2),32);
        bufp->chgIData(oldp+190,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2),32);
        bufp->chgBit(oldp+191,((1U & (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+192,((1U & (((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                        >> 0x1fU) == 
                                       (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                        >> 0x1fU)) ? 
                                      (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                                  >> 0x20U)))
                                       : (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                          >> 0x1fU)))));
        bufp->chgQData(oldp+193,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub),33);
        bufp->chgIData(oldp+195,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp),32);
        bufp->chgIData(oldp+196,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp),32);
        bufp->chgIData(oldp+197,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp),32);
        bufp->chgCData(oldp+198,((0x1fU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)),5);
        bufp->chgIData(oldp+199,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1),32);
        bufp->chgIData(oldp+200,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2),32);
        bufp->chgIData(oldp+201,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3),32);
        bufp->chgIData(oldp+202,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4),32);
        bufp->chgIData(oldp+203,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2, 0x10U)),32);
        bufp->chgBit(oldp+204,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                      >> 4U))));
        bufp->chgIData(oldp+205,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4, 1U)),32);
        bufp->chgBit(oldp+206,((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)));
        bufp->chgIData(oldp+207,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3, 2U)),32);
        bufp->chgBit(oldp+208,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                      >> 1U))));
        bufp->chgIData(oldp+209,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2, 4U)),32);
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                      >> 2U))));
        bufp->chgIData(oldp+211,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1, 8U)),32);
        bufp->chgBit(oldp+212,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                      >> 3U))));
        bufp->chgIData(oldp+213,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1),32);
        bufp->chgIData(oldp+214,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2),32);
        bufp->chgIData(oldp+215,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3),32);
        bufp->chgIData(oldp+216,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4),32);
        bufp->chgIData(oldp+217,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2, 0x10U)),32);
        bufp->chgIData(oldp+218,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4, 1U)),32);
        bufp->chgIData(oldp+219,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3, 2U)),32);
        bufp->chgIData(oldp+220,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2, 4U)),32);
        bufp->chgIData(oldp+221,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1, 8U)),32);
        bufp->chgIData(oldp+222,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1),32);
        bufp->chgIData(oldp+223,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2),32);
        bufp->chgIData(oldp+224,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3),32);
        bufp->chgIData(oldp+225,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4),32);
        bufp->chgIData(oldp+226,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                               >> 0x1fU))) 
                                   << 0x10U) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                                >> 0x10U))),32);
        bufp->chgIData(oldp+227,(((0x80000000U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4) 
                                  | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                                     >> 1U))),32);
        bufp->chgIData(oldp+228,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                               >> 0x1fU))) 
                                   << 0x1eU) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                                >> 2U))),32);
        bufp->chgIData(oldp+229,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                               >> 0x1fU))) 
                                   << 0x1cU) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                                >> 4U))),32);
        bufp->chgIData(oldp+230,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                               >> 0x1fU))) 
                                   << 0x18U) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                                >> 8U))),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xdU])) {
        bufp->chgIData(oldp+231,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D),32);
        bufp->chgIData(oldp+232,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D),32);
        bufp->chgBit(oldp+233,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel));
        bufp->chgBit(oldp+234,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken));
        bufp->chgBit(oldp+235,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit));
        bufp->chgSData(oldp+236,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht),10);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+237,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D));
        bufp->chgBit(oldp+238,((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub))));
        bufp->chgBit(oldp+239,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__taken_D));
        bufp->chgIData(oldp+240,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1),32);
        bufp->chgIData(oldp+241,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2),32);
        bufp->chgBit(oldp+242,((1U & (((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                                        >> 0x1fU) == 
                                       (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2 
                                        >> 0x1fU)) ? 
                                      (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                                  >> 0x20U)))
                                       : (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                              >> 0x20U)))));
        bufp->chgQData(oldp+244,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub),33);
    }
    bufp->chgBit(oldp+246,(vlSelfRef.tb_sim__DOT__i_clk));
    bufp->chgBit(oldp+247,(vlSelfRef.tb_sim__DOT__i_rst));
    bufp->chgIData(oldp+248,(vlSelfRef.tb_sim__DOT__i_io_sw),32);
    bufp->chgCData(oldp+249,(vlSelfRef.tb_sim__DOT__i_io_btn),4);
    bufp->chgBit(oldp+250,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_F));
    bufp->chgBit(oldp+251,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_D));
    bufp->chgBit(oldp+252,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_M));
    bufp->chgBit(oldp+253,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_E));
    bufp->chgBit(oldp+254,(vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst));
    bufp->chgIData(oldp+255,(((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                               ? vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D
                               : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                                   ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E
                                   : ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                                       ? vlSelfRef.tb_sim__DOT__dut__DOT__result_W
                                       : 0U)))),32);
    bufp->chgIData(oldp+256,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB
                             [(0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)]),32);
    bufp->chgIData(oldp+257,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F),32);
    bufp->chgIData(oldp+258,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F),32);
    bufp->chgIData(oldp+259,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1),32);
    bufp->chgIData(oldp+260,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2),32);
    bufp->chgIData(oldp+261,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                               ? ((0x800U >= (0xfffU 
                                              & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                                                 >> 2U)))
                                   ? vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem
                                  [(0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                                              >> 2U))]
                                   : 0U) : 0U)),32);
    bufp->chgSData(oldp+262,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern),10);
    bufp->chgIData(oldp+263,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i),32);
    bufp->chgSData(oldp+264,((0x3fffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)),14);
    bufp->chgIData(oldp+265,(((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                               ? ((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                   ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT
                                   : 0U) : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                             ? (((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E)) 
                                                 & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf))
                                                 ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                                                 : 0U)
                                             : ((2U 
                                                 == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                                 ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1
                                                 : 0U)))),32);
    bufp->chgBit(oldp+266,((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                            [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                       >> 3U))] & (
                                                   (~ 
                                                    (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                     >> 2U)) 
                                                   & ((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                       >> 9U) 
                                                      == 
                                                      vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                                      [
                                                      (0x3fU 
                                                       & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                          >> 3U))])))));
    bufp->chgBit(oldp+267,((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                            [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                       >> 3U))] & (
                                                   ((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                     >> 9U) 
                                                    == 
                                                    vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                                                    [
                                                    (0x3fU 
                                                     & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                        >> 3U))]) 
                                                   & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                      >> 2U)))));
    bufp->chgIData(oldp+268,(((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                               ? ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                   ? 0U : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                            ? (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                                                ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))
                                                ? (0x3fffeU 
                                                   & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)
                                                : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q)
                                            : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q))
                               : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                   ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                       ? (1U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q)
                                       : (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                                           ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))
                                           ? (0x3fffeU 
                                              & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)
                                           : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q))
                                   : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                       ? (1U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q)
                                       : (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                                           ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))
                                           ? (0x3fffeU 
                                              & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)
                                           : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q))))),18);
}

void Vtb_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_cleanup\n"); );
    // Init
    Vtb_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sim___024root*>(voidSelf);
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
}
