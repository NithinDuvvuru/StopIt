// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbasys3_7seg_driver_tb.h for the primary calling header

#include "Vbasys3_7seg_driver_tb__pch.h"
#include "Vbasys3_7seg_driver_tb___024root.h"

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___eval_static(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___eval_initial__TOP(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->basys3_7seg_driver_tb__DOT____Vxrand_h8df6f9e8__0 
        = (0xfU & VL_RAND_RESET_I(4));
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___eval_final(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___eval_settle(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___dump_triggers__act(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge basys3_7seg_driver_tb.clk_1k_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge basys3_7seg_driver_tb.clk_1k_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___dump_triggers__nba(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge basys3_7seg_driver_tb.clk_1k_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge basys3_7seg_driver_tb.clk_1k_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___ctor_var_reset(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->basys3_7seg_driver_tb__DOT____Vxrand_h8df6f9e8__0 = VL_RAND_RESET_I(4);
    vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver_tb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver_tb__DOT__digit0_en_i = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver_tb__DOT__digit0_i = VL_RAND_RESET_I(4);
    vlSelf->basys3_7seg_driver_tb__DOT__digit1_en_i = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver_tb__DOT__digit1_i = VL_RAND_RESET_I(4);
    vlSelf->basys3_7seg_driver_tb__DOT__digit2_en_i = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver_tb__DOT__digit2_i = VL_RAND_RESET_I(4);
    vlSelf->basys3_7seg_driver_tb__DOT__digit3_en_i = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver_tb__DOT__digit3_i = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
