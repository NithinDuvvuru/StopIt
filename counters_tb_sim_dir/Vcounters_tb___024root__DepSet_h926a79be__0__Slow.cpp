// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounters_tb.h for the primary calling header

#include "Vcounters_tb__pch.h"
#include "Vcounters_tb___024root.h"

VL_ATTR_COLD void Vcounters_tb___024root___eval_static(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcounters_tb___024root___eval_final(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__stl(Vcounters_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcounters_tb___024root___eval_phase__stl(Vcounters_tb___024root* vlSelf);

VL_ATTR_COLD void Vcounters_tb___024root___eval_settle(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_settle\n"); );
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
            Vcounters_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/counters_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcounters_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__stl(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcounters_tb___024root___act_comb__TOP__0(Vcounters_tb___024root* vlSelf);

VL_ATTR_COLD void Vcounters_tb___024root___eval_stl(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcounters_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcounters_tb___024root___eval_triggers__stl(Vcounters_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcounters_tb___024root___eval_phase__stl(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcounters_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcounters_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__act(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge counters_tb.clk_4_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge counters_tb.clk_4_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__nba(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge counters_tb.clk_4_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge counters_tb.clk_4_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounters_tb___024root___ctor_var_reset(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->counters_tb__DOT__clk_4_i = VL_RAND_RESET_I(1);
    vlSelf->counters_tb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->counters_tb__DOT__en_i = VL_RAND_RESET_I(1);
    vlSelf->counters_tb__DOT__time_counter__DOT__state_q = VL_RAND_RESET_I(5);
    vlSelf->counters_tb__DOT__time_counter__DOT__state_d = VL_RAND_RESET_I(5);
    vlSelf->counters_tb__DOT__game_counter__DOT__state_q = VL_RAND_RESET_I(5);
    vlSelf->counters_tb__DOT__game_counter__DOT__state_d = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__counters_tb__DOT__clk_4_i__0 = VL_RAND_RESET_I(1);
}
