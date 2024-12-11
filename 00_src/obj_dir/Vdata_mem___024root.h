// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_mem.h for the primary calling header

#ifndef VERILATED_VDATA_MEM___024ROOT_H_
#define VERILATED_VDATA_MEM___024ROOT_H_  // guard

#include "verilated.h"


class Vdata_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rst,0,0);
        VL_IN8(i_rden,0,0);
        VL_IN8(i_wren,0,0);
        VL_OUT8(o_stall,0,0);
        VL_OUT8(o_ACK,0,0);
        VL_OUT8(o_SRAM_CE_N,0,0);
        VL_OUT8(o_SRAM_WE_N,0,0);
        VL_OUT8(o_SRAM_LB_N,0,0);
        VL_OUT8(o_SRAM_UB_N,0,0);
        VL_OUT8(o_SRAM_OE_N,0,0);
        CData/*0:0*/ data_mem__DOT__ACK;
        CData/*0:0*/ data_mem__DOT__rd_mem;
        CData/*0:0*/ data_mem__DOT__wr_mem;
        CData/*0:0*/ data_mem__DOT__cachemem__DOT__hit_miss_1;
        CData/*0:0*/ data_mem__DOT__cachemem__DOT__hit_miss_2;
        CData/*3:0*/ data_mem__DOT__cachemem__DOT__current_state;
        CData/*3:0*/ data_mem__DOT__cachemem__DOT__nxt_state;
        CData/*2:0*/ data_mem__DOT__sram_mem__DOT__sram_state_d;
        CData/*2:0*/ data_mem__DOT__sram_mem__DOT__sram_state_q;
        CData/*3:0*/ data_mem__DOT__sram_mem__DOT__bmask_d;
        CData/*3:0*/ data_mem__DOT__sram_mem__DOT__bmask_q;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_INOUT16(o_SRAM_DQ,15,0);
        SData/*15:0*/ data_mem__DOT__sram_mem__DOT__DOUT__strong__out1;
        SData/*15:0*/ data_mem__DOT__sram_mem__DOT__DOUT__strong__out2;
        VL_IN(i_addr,31,0);
        VL_IN(i_data,31,0);
        VL_OUT(o_data,31,0);
        VL_OUT(o_SRAM_ADDR,17,0);
        IData/*31:0*/ data_mem__DOT__addr_mem;
        IData/*31:0*/ data_mem__DOT__wr_mem_data;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__mem_q_1;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__mem_q_2;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__mem_d_1;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__mem_d_2;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__addr_d_1;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__addr_d_2;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__addr_q_1;
        IData/*31:0*/ data_mem__DOT__cachemem__DOT__addr_q_2;
        IData/*17:0*/ data_mem__DOT__sram_mem__DOT__addr_d;
        IData/*17:0*/ data_mem__DOT__sram_mem__DOT__addr_q;
        IData/*31:0*/ data_mem__DOT__sram_mem__DOT__wdata_d;
        IData/*31:0*/ data_mem__DOT__sram_mem__DOT__wdata_q;
        IData/*31:0*/ data_mem__DOT__sram_mem__DOT__rdata_d;
        IData/*31:0*/ data_mem__DOT__sram_mem__DOT__rdata_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 64> data_mem__DOT__cachemem__DOT__cache_mem_1;
        VlUnpacked<IData/*31:0*/, 64> data_mem__DOT__cachemem__DOT__cache_mem_2;
        VlUnpacked<IData/*22:0*/, 64> data_mem__DOT__cachemem__DOT__tag_1;
        VlUnpacked<IData/*22:0*/, 64> data_mem__DOT__cachemem__DOT__tag_2;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 64> data_mem__DOT__cachemem__DOT__valid_1;
        VlUnpacked<CData/*0:0*/, 64> data_mem__DOT__cachemem__DOT__valid_2;
        VlUnpacked<CData/*0:0*/, 64> data_mem__DOT__cachemem__DOT__dirty_1;
        VlUnpacked<CData/*0:0*/, 64> data_mem__DOT__cachemem__DOT__dirty_2;
        VlUnpacked<CData/*0:0*/, 64> data_mem__DOT__cachemem__DOT__lru_1;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__0;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__0;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__0;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__0;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__0;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__0;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__1;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__1;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__1;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__1;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__1;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__1;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__2;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__2;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__2;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__2;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__2;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__2;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<9> __VicoTriggered;
    VlTriggerVec<10> __VactTriggered;
    VlTriggerVec<10> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_mem___024root(Vdata_mem__Syms* symsp, const char* v__name);
    ~Vdata_mem___024root();
    VL_UNCOPYABLE(Vdata_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
