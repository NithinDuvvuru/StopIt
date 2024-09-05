// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_shifter_tb.h for the primary calling header

#include "Vled_shifter_tb__pch.h"
#include "Vled_shifter_tb___024root.h"

VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__0(Vled_shifter_tb___024root* vlSelf);
VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__1(Vled_shifter_tb___024root* vlSelf);
VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__2(Vled_shifter_tb___024root* vlSelf);
VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__3(Vled_shifter_tb___024root* vlSelf);
VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__4(Vled_shifter_tb___024root* vlSelf);
VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__5(Vled_shifter_tb___024root* vlSelf);

void Vled_shifter_tb___024root___eval_initial(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__led_shifter_tb__DOT__clk_i__0 
        = vlSelf->led_shifter_tb__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__0(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->led_shifter_tb__DOT__clk_i = 0U;
    while (1U) {
        vlSelf->led_shifter_tb__DOT__clk_i = (1U & 
                                              (~ (IData)(vlSelf->led_shifter_tb__DOT__clk_i)));
        co_await vlSelf->__VdlySched.delay(0x7dULL, 
                                           nullptr, 
                                           "dv/led_shifter_tb.sv", 
                                           30);
    }
}

void Vled_shifter_tb___024root___act_comb__TOP__0(Vled_shifter_tb___024root* vlSelf);

void Vled_shifter_tb___024root___eval_act(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vled_shifter_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vled_shifter_tb___024root___act_comb__TOP__0(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o 
        = ((IData)(vlSelf->led_shifter_tb__DOT__off_i)
            ? ((IData)(vlSelf->led_shifter_tb__DOT__off_i)
                ? 0U : (IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state))
            : (IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state));
}

void Vled_shifter_tb___024root___nba_sequent__TOP__0(Vled_shifter_tb___024root* vlSelf);

void Vled_shifter_tb___024root___eval_nba(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vled_shifter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vled_shifter_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vled_shifter_tb___024root___nba_sequent__TOP__0(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->led_shifter_tb__DOT__rst_ni) {
        if (vlSelf->led_shifter_tb__DOT__shift_i) {
            vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state 
                = (1U | (0xfffeU & ((IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state) 
                                    << 1U)));
        } else if (vlSelf->led_shifter_tb__DOT__load_i) {
            vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state 
                = vlSelf->led_shifter_tb__DOT__switches_i;
        }
    } else {
        vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state = 0U;
    }
}

void Vled_shifter_tb___024root___timing_resume(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he0de042d__0.resume("@(posedge led_shifter_tb.clk_i)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he0de04ec__0.resume("@(negedge led_shifter_tb.clk_i)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vled_shifter_tb___024root___timing_commit(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he0de042d__0.commit("@(posedge led_shifter_tb.clk_i)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he0de04ec__0.commit("@(negedge led_shifter_tb.clk_i)");
    }
}

void Vled_shifter_tb___024root___eval_triggers__act(Vled_shifter_tb___024root* vlSelf);

bool Vled_shifter_tb___024root___eval_phase__act(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vled_shifter_tb___024root___eval_triggers__act(vlSelf);
    Vled_shifter_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vled_shifter_tb___024root___timing_resume(vlSelf);
        Vled_shifter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vled_shifter_tb___024root___eval_phase__nba(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vled_shifter_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__nba(Vled_shifter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__act(Vled_shifter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vled_shifter_tb___024root___eval(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vled_shifter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/led_shifter_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vled_shifter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/led_shifter_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vled_shifter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vled_shifter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vled_shifter_tb___024root___eval_debug_assertions(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
