// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounters_tb.h for the primary calling header

#include "Vcounters_tb__pch.h"
#include "Vcounters_tb__Syms.h"
#include "Vcounters_tb___024root.h"

void Vcounters_tb___024root___ctor_var_reset(Vcounters_tb___024root* vlSelf);

Vcounters_tb___024root::Vcounters_tb___024root(Vcounters_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcounters_tb___024root___ctor_var_reset(this);
}

void Vcounters_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcounters_tb___024root::~Vcounters_tb___024root() {
}
