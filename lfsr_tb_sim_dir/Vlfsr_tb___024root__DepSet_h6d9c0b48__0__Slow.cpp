// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_tb.h for the primary calling header

#include "Vlfsr_tb__pch.h"
#include "Vlfsr_tb___024root.h"

VL_ATTR_COLD void Vlfsr_tb___024root___eval_static__TOP(Vlfsr_tb___024root* vlSelf);

VL_ATTR_COLD void Vlfsr_tb___024root___eval_static(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_static\n"); );
    // Body
    Vlfsr_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vlfsr_tb___024root___eval_static__TOP(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->lfsr_tb__DOT__counters[0U] = 0U;
    vlSelf->lfsr_tb__DOT__counters[1U] = 0U;
    vlSelf->lfsr_tb__DOT__counters[2U] = 0U;
    vlSelf->lfsr_tb__DOT__counters[3U] = 0U;
    vlSelf->lfsr_tb__DOT__counters[4U] = 0U;
    vlSelf->lfsr_tb__DOT__counters[5U] = 0U;
}

VL_ATTR_COLD void Vlfsr_tb___024root___eval_final(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vlfsr_tb___024root___eval_settle(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_tb___024root___dump_triggers__act(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge lfsr_tb.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_tb___024root___dump_triggers__nba(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge lfsr_tb.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlfsr_tb___024root___ctor_var_reset(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->lfsr_tb__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->lfsr_tb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->lfsr_tb__DOT__next_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->lfsr_tb__DOT__counters);
    vlSelf->lfsr_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0 = VL_RAND_RESET_I(32);
    vlSelf->lfsr_tb__DOT__lfsr__DOT__state = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__lfsr_tb__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
