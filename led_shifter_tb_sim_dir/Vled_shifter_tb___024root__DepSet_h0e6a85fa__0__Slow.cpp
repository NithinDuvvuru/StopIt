// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_shifter_tb.h for the primary calling header

#include "Vled_shifter_tb__pch.h"
#include "Vled_shifter_tb___024root.h"

VL_ATTR_COLD void Vled_shifter_tb___024root___eval_static(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vled_shifter_tb___024root___eval_final(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__stl(Vled_shifter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vled_shifter_tb___024root___eval_phase__stl(Vled_shifter_tb___024root* vlSelf);

VL_ATTR_COLD void Vled_shifter_tb___024root___eval_settle(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vled_shifter_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/led_shifter_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vled_shifter_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__stl(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vled_shifter_tb___024root___act_comb__TOP__0(Vled_shifter_tb___024root* vlSelf);

VL_ATTR_COLD void Vled_shifter_tb___024root___eval_stl(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vled_shifter_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vled_shifter_tb___024root___eval_triggers__stl(Vled_shifter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vled_shifter_tb___024root___eval_phase__stl(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vled_shifter_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vled_shifter_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__act(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge led_shifter_tb.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge led_shifter_tb.clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__nba(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge led_shifter_tb.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge led_shifter_tb.clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vled_shifter_tb___024root___ctor_var_reset(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->led_shifter_tb__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->led_shifter_tb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->led_shifter_tb__DOT__shift_i = VL_RAND_RESET_I(1);
    vlSelf->led_shifter_tb__DOT__switches_i = VL_RAND_RESET_I(16);
    vlSelf->led_shifter_tb__DOT__load_i = VL_RAND_RESET_I(1);
    vlSelf->led_shifter_tb__DOT__off_i = VL_RAND_RESET_I(1);
    vlSelf->led_shifter_tb__DOT__unnamedblk1__DOT__past_switches = VL_RAND_RESET_I(16);
    vlSelf->led_shifter_tb__DOT__unnamedblk2__DOT__past_leds = VL_RAND_RESET_I(16);
    vlSelf->led_shifter_tb__DOT__sim__DOT__past_leds = VL_RAND_RESET_I(16);
    vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o = VL_RAND_RESET_I(16);
    vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__led_shifter_tb__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
