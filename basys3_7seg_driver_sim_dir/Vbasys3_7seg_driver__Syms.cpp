// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbasys3_7seg_driver__pch.h"
#include "Vbasys3_7seg_driver.h"
#include "Vbasys3_7seg_driver___024root.h"

// FUNCTIONS
Vbasys3_7seg_driver__Syms::~Vbasys3_7seg_driver__Syms()
{
}

Vbasys3_7seg_driver__Syms::Vbasys3_7seg_driver__Syms(VerilatedContext* contextp, const char* namep, Vbasys3_7seg_driver* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(31);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-3);
    _vm_contextp__->timeprecision(-3);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
