// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstop_it_tb.h for the primary calling header

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb__Syms.h"
#include "Vstop_it_tb___024root.h"

void Vstop_it_tb___024root___ctor_var_reset(Vstop_it_tb___024root* vlSelf);

Vstop_it_tb___024root::Vstop_it_tb___024root(Vstop_it_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstop_it_tb___024root___ctor_var_reset(this);
}

void Vstop_it_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstop_it_tb___024root::~Vstop_it_tb___024root() {
}
