// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_tb.h for the primary calling header

#include "Vlfsr_tb__pch.h"
#include "Vlfsr_tb__Syms.h"
#include "Vlfsr_tb___024root.h"

void Vlfsr_tb___024root___ctor_var_reset(Vlfsr_tb___024root* vlSelf);

Vlfsr_tb___024root::Vlfsr_tb___024root(Vlfsr_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr_tb___024root___ctor_var_reset(this);
}

void Vlfsr_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlfsr_tb___024root::~Vlfsr_tb___024root() {
}
