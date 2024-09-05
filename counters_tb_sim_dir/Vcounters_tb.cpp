// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounters_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vcounters_tb::Vcounters_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounters_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcounters_tb::Vcounters_tb(const char* _vcname__)
    : Vcounters_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounters_tb::~Vcounters_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounters_tb___024root___eval_debug_assertions(Vcounters_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounters_tb___024root___eval_static(Vcounters_tb___024root* vlSelf);
void Vcounters_tb___024root___eval_initial(Vcounters_tb___024root* vlSelf);
void Vcounters_tb___024root___eval_settle(Vcounters_tb___024root* vlSelf);
void Vcounters_tb___024root___eval(Vcounters_tb___024root* vlSelf);

void Vcounters_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounters_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounters_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcounters_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcounters_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcounters_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcounters_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcounters_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vcounters_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vcounters_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcounters_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcounters_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcounters_tb___024root___eval_final(Vcounters_tb___024root* vlSelf);

VL_ATTR_COLD void Vcounters_tb::final() {
    Vcounters_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounters_tb::hierName() const { return vlSymsp->name(); }
const char* Vcounters_tb::modelName() const { return "Vcounters_tb"; }
unsigned Vcounters_tb::threads() const { return 1; }
void Vcounters_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcounters_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcounters_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcounters_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vcounters_tb___024root__trace_init_top(Vcounters_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcounters_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounters_tb___024root*>(voidSelf);
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcounters_tb___024root__trace_decl_types(tracep);
    Vcounters_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounters_tb___024root__trace_register(Vcounters_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcounters_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcounters_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcounters_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
