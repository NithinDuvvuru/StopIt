// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vlfsr_tb__pch.h"
#include "Vlfsr_tb.h"
#include "Vlfsr_tb___024root.h"

// FUNCTIONS
Vlfsr_tb__Syms::~Vlfsr_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vlfsr_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vlfsr_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vlfsr_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vlfsr_tb__Syms::Vlfsr_tb__Syms(VerilatedContext* contextp, const char* namep, Vlfsr_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(69);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-3);
    _vm_contextp__->timeprecision(-3);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_lfsr_tb.configure(this, name(), "lfsr_tb", "lfsr_tb", -3, VerilatedScope::SCOPE_OTHER);
    __Vscope_lfsr_tb__sim.configure(this, name(), "lfsr_tb.sim", "sim", -3, VerilatedScope::SCOPE_OTHER);
    __Vscope_lfsr_tb__sim__unnamedblk2.configure(this, name(), "lfsr_tb.sim.unnamedblk2", "unnamedblk2", -3, VerilatedScope::SCOPE_OTHER);
}
