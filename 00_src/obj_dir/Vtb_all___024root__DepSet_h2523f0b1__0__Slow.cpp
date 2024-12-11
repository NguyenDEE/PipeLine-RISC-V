// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all___024root.h"

VL_ATTR_COLD void Vtb_all___024root___eval_static__TOP(Vtb_all___024root* vlSelf);
VL_ATTR_COLD void Vtb_all___024root____Vm_traceActivitySetAll(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all___024root___eval_static(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_all___024root___eval_static__TOP(vlSelf);
    Vtb_all___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_all___024root___eval_static__TOP(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row = 0U;
    vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel = 0U;
}

VL_ATTR_COLD void Vtb_all___024root___eval_initial__TOP(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all___024root___eval_initial(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_all___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelfRef.CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT____Vcellinp__dut__i_rst__0 
        = vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__dut__DOT__stall__0 
        = vlSelfRef.tb_all__DOT__dut__DOT__stall;
}

extern const VlWide<15>/*479:0*/ Vtb_all__ConstPool__CONST_h37a9fbca_0;

VL_ATTR_COLD void Vtb_all___024root___eval_initial__TOP(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 2049, 0, VL_CVT_PACK_STR_NW(15, Vtb_all__ConstPool__CONST_h37a9fbca_0)
                 ,  &(vlSelfRef.tb_all__DOT__dut__DOT__block_imem__DOT__imem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_all___024root___eval_final(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__stl(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_all___024root___eval_phase__stl(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all___024root___eval_settle(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_settle\n"); );
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
            Vtb_all___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_all.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_all___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__stl(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_all___024root___ico_sequent__TOP__0(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all___024root___eval_stl(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_all___024root___ico_sequent__TOP__0(vlSelf);
        Vtb_all___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_all___024root___eval_triggers__stl(Vtb_all___024root* vlSelf);

VL_ATTR_COLD bool Vtb_all___024root___eval_phase__stl(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_all___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_all___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__ico(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__act(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_all.__Vcellinp__dut__i_rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_all.dut.stall)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__nba(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_all.__Vcellinp__dut__i_rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_all.dut.stall)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_all___024root____Vm_traceActivitySetAll(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_all___024root___ctor_var_reset(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLOCK_50 = VL_RAND_RESET_I(1);
    vlSelf->SW = VL_RAND_RESET_I(18);
    vlSelf->KEY = VL_RAND_RESET_I(4);
    vlSelf->LEDR = VL_RAND_RESET_I(18);
    vlSelf->LEDG = VL_RAND_RESET_I(9);
    vlSelf->HEX0 = VL_RAND_RESET_I(7);
    vlSelf->HEX1 = VL_RAND_RESET_I(7);
    vlSelf->HEX2 = VL_RAND_RESET_I(7);
    vlSelf->HEX3 = VL_RAND_RESET_I(7);
    vlSelf->HEX4 = VL_RAND_RESET_I(7);
    vlSelf->HEX5 = VL_RAND_RESET_I(7);
    vlSelf->HEX6 = VL_RAND_RESET_I(7);
    vlSelf->HEX7 = VL_RAND_RESET_I(7);
    vlSelf->LCD_DATA = VL_RAND_RESET_I(8);
    vlSelf->LCD_RW = VL_RAND_RESET_I(1);
    vlSelf->LCD_EN = VL_RAND_RESET_I(1);
    vlSelf->LCD_RS = VL_RAND_RESET_I(1);
    vlSelf->LCD_ON = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__ins_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT____Vcellinp__dut__i_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__pc_four = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_all__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_all__DOT__dut__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_all__DOT__dut__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__slt_sl = VL_RAND_RESET_I(3);
    vlSelf->tb_all__DOT__dut__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2049; ++__Vi0) {
        vlSelf->tb_all__DOT__dut__DOT__block_imem__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__dut__DOT__block_regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row = VL_RAND_RESET_I(13);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0 = 0;
    vlSelf->__VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_all__DOT____Vcellinp__dut__i_rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_all__DOT__dut__DOT__stall__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
