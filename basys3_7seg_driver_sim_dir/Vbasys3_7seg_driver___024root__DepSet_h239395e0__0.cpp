// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbasys3_7seg_driver.h for the primary calling header

#include "Vbasys3_7seg_driver__pch.h"
#include "Vbasys3_7seg_driver__Syms.h"
#include "Vbasys3_7seg_driver___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__ico(Vbasys3_7seg_driver___024root* vlSelf);
#endif  // VL_DEBUG

void Vbasys3_7seg_driver___024root___eval_triggers__ico(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbasys3_7seg_driver___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__act(Vbasys3_7seg_driver___024root* vlSelf);
#endif  // VL_DEBUG

void Vbasys3_7seg_driver___024root___eval_triggers__act(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk_1k_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_1k_i__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_1k_i__0 = vlSelf->clk_1k_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbasys3_7seg_driver___024root___dump_triggers__act(vlSelf);
    }
#endif
}
