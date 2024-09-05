// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb.h"
#include "Vstop_it_tb___024root.h"
#include "Vstop_it_tb___024unit.h"

// FUNCTIONS
Vstop_it_tb__Syms::~Vstop_it_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vstop_it_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vstop_it_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vstop_it_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vstop_it_tb__Syms::Vstop_it_tb__Syms(VerilatedContext* contextp, const char* namep, Vstop_it_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(174);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-3);
    _vm_contextp__->timeprecision(-3);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_stop_it_tb.configure(this, name(), "stop_it_tb", "stop_it_tb", -3, VerilatedScope::SCOPE_OTHER);
    __Vscope_stop_it_tb__sim.configure(this, name(), "stop_it_tb.sim", "sim", -3, VerilatedScope::SCOPE_OTHER);
    __Vscope_stop_it_tb__sim__unnamedblk4.configure(this, name(), "stop_it_tb.sim.unnamedblk4", "unnamedblk4", -3, VerilatedScope::SCOPE_OTHER);
    __Vscope_stop_it_tb__unnamedblk2.configure(this, name(), "stop_it_tb.unnamedblk2", "unnamedblk2", -3, VerilatedScope::SCOPE_OTHER);
    __Vscope_stop_it_tb__unnamedblk3.configure(this, name(), "stop_it_tb.unnamedblk3", "unnamedblk3", -3, VerilatedScope::SCOPE_OTHER);
}
