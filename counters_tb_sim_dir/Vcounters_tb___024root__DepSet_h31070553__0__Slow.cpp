// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounters_tb.h for the primary calling header

#include "Vcounters_tb__pch.h"
#include "Vcounters_tb__Syms.h"
#include "Vcounters_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__stl(Vcounters_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounters_tb___024root___eval_triggers__stl(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounters_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
