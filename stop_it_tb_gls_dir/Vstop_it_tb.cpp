// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstop_it_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vstop_it_tb::Vstop_it_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstop_it_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vstop_it_tb::Vstop_it_tb(const char* _vcname__)
    : Vstop_it_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstop_it_tb::~Vstop_it_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstop_it_tb___024root___eval_debug_assertions(Vstop_it_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vstop_it_tb___024root___eval_static(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___eval_initial(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___eval_settle(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___eval(Vstop_it_tb___024root* vlSelf);

void Vstop_it_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstop_it_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstop_it_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstop_it_tb___024root___eval_static(&(vlSymsp->TOP));
        Vstop_it_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vstop_it_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstop_it_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vstop_it_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vstop_it_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vstop_it_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstop_it_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstop_it_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstop_it_tb___024root___eval_final(Vstop_it_tb___024root* vlSelf);

VL_ATTR_COLD void Vstop_it_tb::final() {
    Vstop_it_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstop_it_tb::hierName() const { return vlSymsp->name(); }
const char* Vstop_it_tb::modelName() const { return "Vstop_it_tb"; }
unsigned Vstop_it_tb::threads() const { return 1; }
void Vstop_it_tb::prepareClone() const { contextp()->prepareClone(); }
void Vstop_it_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstop_it_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstop_it_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vstop_it_tb___024root__trace_init_top(Vstop_it_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstop_it_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstop_it_tb___024root*>(voidSelf);
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstop_it_tb___024root__trace_decl_types(tracep);
    Vstop_it_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_register(Vstop_it_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vstop_it_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstop_it_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstop_it_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
