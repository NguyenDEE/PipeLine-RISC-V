// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_all.h for the primary calling header

#ifndef VERILATED_VTB_ALL___024ROOT_H_
#define VERILATED_VTB_ALL___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_all__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_all___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLOCK_50,0,0);
        CData/*0:0*/ tb_all__DOT____Vcellinp__dut__i_rst;
        CData/*0:0*/ tb_all__DOT__dut__DOT__stall;
        VL_IN8(KEY,3,0);
        VL_OUT8(HEX0,6,0);
        VL_OUT8(HEX1,6,0);
        VL_OUT8(HEX2,6,0);
        VL_OUT8(HEX3,6,0);
        VL_OUT8(HEX4,6,0);
        VL_OUT8(HEX5,6,0);
        VL_OUT8(HEX6,6,0);
        VL_OUT8(HEX7,6,0);
        VL_OUT8(LCD_DATA,7,0);
        VL_OUT8(LCD_RW,0,0);
        VL_OUT8(LCD_EN,0,0);
        VL_OUT8(LCD_RS,0,0);
        VL_OUT8(LCD_ON,0,0);
        CData/*0:0*/ tb_all__DOT__ins_valid;
        CData/*1:0*/ tb_all__DOT__dut__DOT__wb_sel;
        CData/*3:0*/ tb_all__DOT__dut__DOT__alu_op;
        CData/*2:0*/ tb_all__DOT__dut__DOT__imm_sel;
        CData/*0:0*/ tb_all__DOT__dut__DOT__br_sel;
        CData/*0:0*/ tb_all__DOT__dut__DOT__rd_wren;
        CData/*0:0*/ tb_all__DOT__dut__DOT__op_a_sel;
        CData/*0:0*/ tb_all__DOT__dut__DOT__op_b_sel;
        CData/*0:0*/ tb_all__DOT__dut__DOT__mem_wren;
        CData/*0:0*/ tb_all__DOT__dut__DOT__br_unsigned;
        CData/*0:0*/ tb_all__DOT__dut__DOT__br_less;
        CData/*2:0*/ tb_all__DOT__dut__DOT__slt_sl;
        CData/*4:0*/ tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr;
        CData/*4:0*/ tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr;
        CData/*4:0*/ tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS;
        CData/*1:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall;
        CData/*0:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0;
        CData/*1:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel;
        CData/*7:0*/ __VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0;
        CData/*7:0*/ __VdlyDim0__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0;
        CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0;
        CData/*0:0*/ __VdlySet__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLOCK_50__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT____Vcellinp__dut__i_rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__dut__DOT__stall__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(LEDG,8,0);
        SData/*12:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row;
        VL_IN(SW,17,0);
        VL_OUT(LEDR,17,0);
        IData/*31:0*/ tb_all__DOT__dut__DOT__alu_data;
        IData/*31:0*/ tb_all__DOT__dut__DOT__pc_four;
        IData/*31:0*/ tb_all__DOT__dut__DOT__nxt_pc;
        IData/*31:0*/ tb_all__DOT__dut__DOT__pc;
        IData/*31:0*/ tb_all__DOT__dut__DOT__instr;
        IData/*31:0*/ tb_all__DOT__dut__DOT__rs1_data;
        IData/*31:0*/ tb_all__DOT__dut__DOT__rs2_data;
        IData/*31:0*/ tb_all__DOT__dut__DOT__operand_a;
        IData/*31:0*/ tb_all__DOT__dut__DOT__operand_b;
    };
    struct {
        IData/*31:0*/ tb_all__DOT__dut__DOT__imm;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp;
        IData/*31:0*/ tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp;
        IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0__v0;
        IData/*31:0*/ __VdlyVal__tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 2049> tb_all__DOT__dut__DOT__block_imem__DOT__imem;
        VlUnpacked<IData/*31:0*/, 32> tb_all__DOT__dut__DOT__block_regfile__DOT__Reg;
        VlUnpacked<IData/*31:0*/, 256> tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank0;
        VlUnpacked<IData/*31:0*/, 256> tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__bank1;
        VlUnpacked<IData/*31:0*/, 5> tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_all__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_all___024root(Vtb_all__Syms* symsp, const char* v__name);
    ~Vtb_all___024root();
    VL_UNCOPYABLE(Vtb_all___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
