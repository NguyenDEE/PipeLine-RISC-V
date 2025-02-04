// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbrc_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbrc_tb::Vbrc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbrc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbrc_tb::Vbrc_tb(const char* _vcname__)
    : Vbrc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbrc_tb::~Vbrc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbrc_tb___024root___eval_debug_assertions(Vbrc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbrc_tb___024root___eval_static(Vbrc_tb___024root* vlSelf);
void Vbrc_tb___024root___eval_initial(Vbrc_tb___024root* vlSelf);
void Vbrc_tb___024root___eval_settle(Vbrc_tb___024root* vlSelf);
void Vbrc_tb___024root___eval(Vbrc_tb___024root* vlSelf);

void Vbrc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbrc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbrc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbrc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vbrc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vbrc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbrc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbrc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vbrc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbrc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbrc_tb___024root___eval_final(Vbrc_tb___024root* vlSelf);

VL_ATTR_COLD void Vbrc_tb::final() {
    Vbrc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbrc_tb::hierName() const { return vlSymsp->name(); }
const char* Vbrc_tb::modelName() const { return "Vbrc_tb"; }
unsigned Vbrc_tb::threads() const { return 1; }
void Vbrc_tb::prepareClone() const { contextp()->prepareClone(); }
void Vbrc_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbrc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbrc_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbrc_tb___024root__trace_init_top(Vbrc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbrc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc_tb___024root*>(voidSelf);
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbrc_tb___024root__trace_decl_types(tracep);
    Vbrc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbrc_tb___024root__trace_register(Vbrc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbrc_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbrc_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbrc_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
