// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbasys3_7seg_driver_tb.h for the primary calling header

#include "Vbasys3_7seg_driver_tb__pch.h"
#include "Vbasys3_7seg_driver_tb___024root.h"

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___eval_initial__TOP(Vbasys3_7seg_driver_tb___024root* vlSelf);
VlCoroutine Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__0(Vbasys3_7seg_driver_tb___024root* vlSelf);
VlCoroutine Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__1(Vbasys3_7seg_driver_tb___024root* vlSelf);

void Vbasys3_7seg_driver_tb___024root___eval_initial(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_initial\n"); );
    // Body
    Vbasys3_7seg_driver_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0 
        = vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i;
}

VL_INLINE_OPT VlCoroutine Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__0(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i = 0U;
    while (1U) {
        vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i 
            = (1U & (~ (IData)(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i)));
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "dv/basys3_7seg_driver_tb.sv", 
                                           68);
    }
}

void Vbasys3_7seg_driver_tb___024root___eval_act(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_act\n"); );
}

void Vbasys3_7seg_driver_tb___024root___eval_nba(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_nba\n"); );
}

void Vbasys3_7seg_driver_tb___024root___timing_resume(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hddad697d__0.resume("@(posedge basys3_7seg_driver_tb.clk_1k_i)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hddad6a3c__0.resume("@(negedge basys3_7seg_driver_tb.clk_1k_i)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vbasys3_7seg_driver_tb___024root___timing_commit(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hddad697d__0.commit("@(posedge basys3_7seg_driver_tb.clk_1k_i)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hddad6a3c__0.commit("@(negedge basys3_7seg_driver_tb.clk_1k_i)");
    }
}

void Vbasys3_7seg_driver_tb___024root___eval_triggers__act(Vbasys3_7seg_driver_tb___024root* vlSelf);

bool Vbasys3_7seg_driver_tb___024root___eval_phase__act(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbasys3_7seg_driver_tb___024root___eval_triggers__act(vlSelf);
    Vbasys3_7seg_driver_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbasys3_7seg_driver_tb___024root___timing_resume(vlSelf);
        Vbasys3_7seg_driver_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbasys3_7seg_driver_tb___024root___eval_phase__nba(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbasys3_7seg_driver_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___dump_triggers__nba(Vbasys3_7seg_driver_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___dump_triggers__act(Vbasys3_7seg_driver_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbasys3_7seg_driver_tb___024root___eval(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbasys3_7seg_driver_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/basys3_7seg_driver_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbasys3_7seg_driver_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/basys3_7seg_driver_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbasys3_7seg_driver_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbasys3_7seg_driver_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbasys3_7seg_driver_tb___024root___eval_debug_assertions(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
