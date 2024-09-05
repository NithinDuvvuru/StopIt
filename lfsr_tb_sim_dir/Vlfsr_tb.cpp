// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlfsr_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vlfsr_tb::Vlfsr_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlfsr_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vlfsr_tb::Vlfsr_tb(const char* _vcname__)
    : Vlfsr_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlfsr_tb::~Vlfsr_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlfsr_tb___024root___eval_debug_assertions(Vlfsr_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vlfsr_tb___024root___eval_static(Vlfsr_tb___024root* vlSelf);
void Vlfsr_tb___024root___eval_initial(Vlfsr_tb___024root* vlSelf);
void Vlfsr_tb___024root___eval_settle(Vlfsr_tb___024root* vlSelf);
void Vlfsr_tb___024root___eval(Vlfsr_tb___024root* vlSelf);

void Vlfsr_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlfsr_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlfsr_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlfsr_tb___024root___eval_static(&(vlSymsp->TOP));
        Vlfsr_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vlfsr_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlfsr_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vlfsr_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vlfsr_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vlfsr_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vlfsr_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vlfsr_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlfsr_tb___024root___eval_final(Vlfsr_tb___024root* vlSelf);

VL_ATTR_COLD void Vlfsr_tb::final() {
    Vlfsr_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlfsr_tb::hierName() const { return vlSymsp->name(); }
const char* Vlfsr_tb::modelName() const { return "Vlfsr_tb"; }
unsigned Vlfsr_tb::threads() const { return 1; }
void Vlfsr_tb::prepareClone() const { contextp()->prepareClone(); }
void Vlfsr_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlfsr_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlfsr_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vlfsr_tb___024root__trace_init_top(Vlfsr_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlfsr_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr_tb___024root*>(voidSelf);
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vlfsr_tb___024root__trace_decl_types(tracep);
    Vlfsr_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlfsr_tb___024root__trace_register(Vlfsr_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vlfsr_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlfsr_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlfsr_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
