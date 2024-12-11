// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_mem__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdata_mem::Vdata_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_mem__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_rden{vlSymsp->TOP.i_rden}
    , i_wren{vlSymsp->TOP.i_wren}
    , o_stall{vlSymsp->TOP.o_stall}
    , o_ACK{vlSymsp->TOP.o_ACK}
    , o_SRAM_CE_N{vlSymsp->TOP.o_SRAM_CE_N}
    , o_SRAM_WE_N{vlSymsp->TOP.o_SRAM_WE_N}
    , o_SRAM_LB_N{vlSymsp->TOP.o_SRAM_LB_N}
    , o_SRAM_UB_N{vlSymsp->TOP.o_SRAM_UB_N}
    , o_SRAM_OE_N{vlSymsp->TOP.o_SRAM_OE_N}
    , o_SRAM_DQ{vlSymsp->TOP.o_SRAM_DQ}
    , i_addr{vlSymsp->TOP.i_addr}
    , i_data{vlSymsp->TOP.i_data}
    , o_data{vlSymsp->TOP.o_data}
    , o_SRAM_ADDR{vlSymsp->TOP.o_SRAM_ADDR}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdata_mem::Vdata_mem(const char* _vcname__)
    : Vdata_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_mem::~Vdata_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_mem___024root___eval_static(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval_initial(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval_settle(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf);

void Vdata_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_mem___024root___eval_static(&(vlSymsp->TOP));
        Vdata_mem___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_mem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_mem::eventsPending() { return false; }

uint64_t Vdata_mem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdata_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_mem___024root___eval_final(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem::final() {
    Vdata_mem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_mem::hierName() const { return vlSymsp->name(); }
const char* Vdata_mem::modelName() const { return "Vdata_mem"; }
unsigned Vdata_mem::threads() const { return 1; }
void Vdata_mem::prepareClone() const { contextp()->prepareClone(); }
void Vdata_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdata_mem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdata_mem___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdata_mem___024root__trace_init_top(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdata_mem___024root__trace_decl_types(tracep);
    Vdata_mem___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdata_mem___024root__trace_register(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdata_mem::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdata_mem::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdata_mem___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
