// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_all__Syms.h"


void Vtb_all___024root__trace_chg_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_all___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_chg_0\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_all___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_all___024root__trace_chg_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_all__DOT__ins_valid));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_all__DOT__dut__DOT__pc_four),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_all__DOT__dut__DOT__instr),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_all__DOT__dut__DOT__imm),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel),2);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_all__DOT__dut__DOT__alu_op),4);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel),3);
        bufp->chgBit(oldp+7,(vlSelfRef.tb_all__DOT__dut__DOT__rd_wren));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren));
        bufp->chgBit(oldp+11,(vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned));
        bufp->chgCData(oldp+12,(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl),3);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr),5);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr),5);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgIData(oldp+16,(vlSelfRef.tb_all__DOT__dut__DOT__alu_data),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_all__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_all__DOT__dut__DOT__rs2_data),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_all__DOT__dut__DOT__operand_a),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_all__DOT__dut__DOT__operand_b),32);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_all__DOT__dut__DOT__br_sel));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_all__DOT__dut__DOT__br_less));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag));
        bufp->chgBit(oldp+25,((1U & (((vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                       >> 0x1fU) == 
                                      (vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
                                       >> 0x1fU)) ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag)
                                      : (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                         >> 0x1fU)))));
        bufp->chgIData(oldp+26,(((IData)(1U) + ((~ vlSelfRef.tb_all__DOT__dut__DOT__operand_b) 
                                                + vlSelfRef.tb_all__DOT__dut__DOT__operand_a))),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp),32);
        bufp->chgCData(oldp+30,((0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b)),5);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag));
        bufp->chgBit(oldp+38,(((0x2000U <= (0xffffU 
                                            & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
                               & (0x4000U > (0xffffU 
                                             & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)))));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf));
        bufp->chgSData(oldp+40,((0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)),16);
        bufp->chgBit(oldp+41,((1U & (~ ((0x2000U <= 
                                         (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
                                        & (0x4000U 
                                           > (0xffffU 
                                              & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)))))));
        bufp->chgCData(oldp+42,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel),2);
        bufp->chgSData(oldp+43,((0x1fffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)),13);
        bufp->chgBit(oldp+44,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS));
        bufp->chgSData(oldp+45,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row),13);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel),2);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp),32);
        bufp->chgCData(oldp+49,((3U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)),2);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+52,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[0]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[1]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[2]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[3]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[4]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+57,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[1]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[2]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[3]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[4]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[5]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[6]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[7]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[8]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[9]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[10]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[11]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[12]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[13]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[14]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[15]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[16]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[17]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[18]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[19]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[20]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[21]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[22]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[23]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[24]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[25]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[26]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[27]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[28]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[29]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[30]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[31]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+90,((1U & vlSelfRef.tb_all__DOT__dut__DOT__pc)));
        bufp->chgIData(oldp+91,(vlSelfRef.tb_all__DOT__dut__DOT__pc),32);
        bufp->chgSData(oldp+92,((0x1fffU & vlSelfRef.tb_all__DOT__dut__DOT__pc)),13);
    }
    bufp->chgBit(oldp+93,(vlSelfRef.CLOCK_50));
    bufp->chgIData(oldp+94,(vlSelfRef.SW),18);
    bufp->chgCData(oldp+95,(vlSelfRef.KEY),4);
    bufp->chgIData(oldp+96,(vlSelfRef.LEDR),18);
    bufp->chgSData(oldp+97,(vlSelfRef.LEDG),9);
    bufp->chgCData(oldp+98,(vlSelfRef.HEX0),7);
    bufp->chgCData(oldp+99,(vlSelfRef.HEX1),7);
    bufp->chgCData(oldp+100,(vlSelfRef.HEX2),7);
    bufp->chgCData(oldp+101,(vlSelfRef.HEX3),7);
    bufp->chgCData(oldp+102,(vlSelfRef.HEX4),7);
    bufp->chgCData(oldp+103,(vlSelfRef.HEX5),7);
    bufp->chgCData(oldp+104,(vlSelfRef.HEX6),7);
    bufp->chgCData(oldp+105,(vlSelfRef.HEX7),7);
    bufp->chgCData(oldp+106,(vlSelfRef.LCD_DATA),8);
    bufp->chgBit(oldp+107,(vlSelfRef.LCD_RW));
    bufp->chgBit(oldp+108,(vlSelfRef.LCD_EN));
    bufp->chgBit(oldp+109,(vlSelfRef.LCD_RS));
    bufp->chgBit(oldp+110,(vlSelfRef.LCD_ON));
    bufp->chgIData(oldp+111,((0x1ffffU & vlSelfRef.SW)),32);
    bufp->chgIData(oldp+112,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                               ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                              [1U])),32);
    bufp->chgIData(oldp+113,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                               ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                              [0U])),32);
    bufp->chgIData(oldp+114,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                               ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                              [4U])),32);
    bufp->chgBit(oldp+115,(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst));
    bufp->chgIData(oldp+116,(((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                               ? vlSelfRef.tb_all__DOT__dut__DOT__alu_data
                               : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                                   ? ((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                       ? ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                           ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)
                                       : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                           ? (((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                                               & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                                               ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                                               : 0U)
                                           : ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                               ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1
                                               : 0U)))
                                   : ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                                       ? vlSelfRef.tb_all__DOT__dut__DOT__pc_four
                                       : 0U)))),32);
    bufp->chgIData(oldp+117,(((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                               ? ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                   ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)
                               : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                   ? (((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                                       & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                                       ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                                       : 0U) : ((2U 
                                                 == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                                 ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1
                                                 : 0U)))),32);
    bufp->chgBit(oldp+118,((0U == ((IData)(1U) + ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                    ? 0xffffffffU
                                                    : 
                                                   (~ 
                                                    vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                    [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                                  + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))));
    bufp->chgBit(oldp+119,(vlSelfRef.tb_all__DOT__dut__DOT__stall));
    bufp->chgBit(oldp+120,((((IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                             == ((0U != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr)) 
                                 & (vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                    [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr] 
                                    >> 0x1fU))) ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag)
                             : (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0))));
    bufp->chgIData(oldp+121,(((IData)(1U) + (((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                               ? 0xffffffffU
                                               : (~ 
                                                  vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                  [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                             + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data))),32);
    bufp->chgIData(oldp+122,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1),32);
    bufp->chgIData(oldp+123,((((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                               & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                               ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                               : 0U)),32);
    bufp->chgIData(oldp+124,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                               ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)),32);
    bufp->chgIData(oldp+125,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT),32);
    bufp->chgBit(oldp+126,(((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                            & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0))));
    bufp->chgBit(oldp+127,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall));
}

void Vtb_all___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_cleanup\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
