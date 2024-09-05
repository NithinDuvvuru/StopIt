// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbasys3_7seg_driver.h for the primary calling header

#include "Vbasys3_7seg_driver__pch.h"
#include "Vbasys3_7seg_driver___024root.h"

void Vbasys3_7seg_driver___024root___ico_sequent__TOP__0(Vbasys3_7seg_driver___024root* vlSelf);

void Vbasys3_7seg_driver___024root___eval_ico(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vbasys3_7seg_driver___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h2c0786ec_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h4a60db2d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h07249a45_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h99bc80b0_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h19ce1593_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_hb0b190f7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h43f7727b_0;

VL_INLINE_OPT void Vbasys3_7seg_driver___024root___ico_sequent__TOP__0(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((1U & (~ (((((0U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                     & (IData)(vlSelf->digit0_en_i)) 
                    | ((1U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                       & (IData)(vlSelf->digit1_en_i))) 
                   | ((2U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                      & (IData)(vlSelf->digit2_en_i))) 
                  | ((3U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                     & (IData)(vlSelf->digit3_en_i)))))) {
        vlSelf->anode_o = 0xfU;
    }
    vlSelf->basys3_7seg_driver__DOT__digit = ((0U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))
                                               ? (IData)(vlSelf->digit0_i)
                                               : ((1U 
                                                   == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))
                                                   ? (IData)(vlSelf->digit1_i)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))
                                                    ? (IData)(vlSelf->digit2_i)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))
                                                     ? (IData)(vlSelf->digit3_i)
                                                     : 0U))));
    __Vtableidx1 = vlSelf->basys3_7seg_driver__DOT__digit;
    vlSelf->basys3_7seg_driver__DOT__A = Vbasys3_7seg_driver__ConstPool__TABLE_h2c0786ec_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__B = Vbasys3_7seg_driver__ConstPool__TABLE_h4a60db2d_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__C = Vbasys3_7seg_driver__ConstPool__TABLE_h07249a45_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__D = Vbasys3_7seg_driver__ConstPool__TABLE_h99bc80b0_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__E = Vbasys3_7seg_driver__ConstPool__TABLE_h19ce1593_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__F = Vbasys3_7seg_driver__ConstPool__TABLE_hb0b190f7_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__G = Vbasys3_7seg_driver__ConstPool__TABLE_h43f7727b_0
        [__Vtableidx1];
    vlSelf->segments_o = ((((((0U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                              & (IData)(vlSelf->digit0_en_i)) 
                             | ((1U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                                & (IData)(vlSelf->digit1_en_i))) 
                            | ((2U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                               & (IData)(vlSelf->digit2_en_i))) 
                           | ((3U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                              & (IData)(vlSelf->digit3_en_i)))
                           ? (((IData)(vlSelf->basys3_7seg_driver__DOT__A) 
                               << 6U) | (((IData)(vlSelf->basys3_7seg_driver__DOT__B) 
                                          << 5U) | 
                                         (((IData)(vlSelf->basys3_7seg_driver__DOT__C) 
                                           << 4U) | 
                                          (((IData)(vlSelf->basys3_7seg_driver__DOT__D) 
                                            << 3U) 
                                           | (((IData)(vlSelf->basys3_7seg_driver__DOT__E) 
                                               << 2U) 
                                              | (((IData)(vlSelf->basys3_7seg_driver__DOT__F) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->basys3_7seg_driver__DOT__G)))))))
                           : (((IData)(vlSelf->basys3_7seg_driver__DOT__A) 
                               << 6U) | (((IData)(vlSelf->basys3_7seg_driver__DOT__B) 
                                          << 5U) | 
                                         (((IData)(vlSelf->basys3_7seg_driver__DOT__C) 
                                           << 4U) | 
                                          (((IData)(vlSelf->basys3_7seg_driver__DOT__D) 
                                            << 3U) 
                                           | (((IData)(vlSelf->basys3_7seg_driver__DOT__E) 
                                               << 2U) 
                                              | (((IData)(vlSelf->basys3_7seg_driver__DOT__F) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->basys3_7seg_driver__DOT__G))))))));
}

void Vbasys3_7seg_driver___024root___eval_triggers__ico(Vbasys3_7seg_driver___024root* vlSelf);

bool Vbasys3_7seg_driver___024root___eval_phase__ico(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbasys3_7seg_driver___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vbasys3_7seg_driver___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbasys3_7seg_driver___024root___eval_act(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_act\n"); );
}

void Vbasys3_7seg_driver___024root___nba_sequent__TOP__0(Vbasys3_7seg_driver___024root* vlSelf);

void Vbasys3_7seg_driver___024root___eval_nba(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbasys3_7seg_driver___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vbasys3_7seg_driver___024root___nba_sequent__TOP__0(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->basys3_7seg_driver__DOT__state_q = ((IData)(vlSelf->rst_ni)
                                                 ? (IData)(vlSelf->basys3_7seg_driver__DOT__state_d)
                                                 : 0U);
    vlSelf->basys3_7seg_driver__DOT__state_d = (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)));
    if ((0U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))) {
        vlSelf->anode_o = 0xeU;
        vlSelf->basys3_7seg_driver__DOT__digit = vlSelf->digit0_i;
    } else if ((1U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))) {
        vlSelf->anode_o = 0xdU;
        vlSelf->basys3_7seg_driver__DOT__digit = vlSelf->digit1_i;
    } else if ((2U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))) {
        vlSelf->anode_o = 0xbU;
        vlSelf->basys3_7seg_driver__DOT__digit = vlSelf->digit2_i;
    } else if ((3U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q))) {
        vlSelf->anode_o = 7U;
        vlSelf->basys3_7seg_driver__DOT__digit = vlSelf->digit3_i;
    } else {
        vlSelf->anode_o = 0xfU;
        vlSelf->basys3_7seg_driver__DOT__digit = 0U;
    }
    if ((1U & (~ (((((0U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                     & (IData)(vlSelf->digit0_en_i)) 
                    | ((1U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                       & (IData)(vlSelf->digit1_en_i))) 
                   | ((2U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                      & (IData)(vlSelf->digit2_en_i))) 
                  | ((3U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                     & (IData)(vlSelf->digit3_en_i)))))) {
        vlSelf->anode_o = 0xfU;
    }
    __Vtableidx1 = vlSelf->basys3_7seg_driver__DOT__digit;
    vlSelf->basys3_7seg_driver__DOT__A = Vbasys3_7seg_driver__ConstPool__TABLE_h2c0786ec_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__B = Vbasys3_7seg_driver__ConstPool__TABLE_h4a60db2d_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__C = Vbasys3_7seg_driver__ConstPool__TABLE_h07249a45_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__D = Vbasys3_7seg_driver__ConstPool__TABLE_h99bc80b0_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__E = Vbasys3_7seg_driver__ConstPool__TABLE_h19ce1593_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__F = Vbasys3_7seg_driver__ConstPool__TABLE_hb0b190f7_0
        [__Vtableidx1];
    vlSelf->basys3_7seg_driver__DOT__G = Vbasys3_7seg_driver__ConstPool__TABLE_h43f7727b_0
        [__Vtableidx1];
    vlSelf->segments_o = ((((((0U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                              & (IData)(vlSelf->digit0_en_i)) 
                             | ((1U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                                & (IData)(vlSelf->digit1_en_i))) 
                            | ((2U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                               & (IData)(vlSelf->digit2_en_i))) 
                           | ((3U == (IData)(vlSelf->basys3_7seg_driver__DOT__state_q)) 
                              & (IData)(vlSelf->digit3_en_i)))
                           ? (((IData)(vlSelf->basys3_7seg_driver__DOT__A) 
                               << 6U) | (((IData)(vlSelf->basys3_7seg_driver__DOT__B) 
                                          << 5U) | 
                                         (((IData)(vlSelf->basys3_7seg_driver__DOT__C) 
                                           << 4U) | 
                                          (((IData)(vlSelf->basys3_7seg_driver__DOT__D) 
                                            << 3U) 
                                           | (((IData)(vlSelf->basys3_7seg_driver__DOT__E) 
                                               << 2U) 
                                              | (((IData)(vlSelf->basys3_7seg_driver__DOT__F) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->basys3_7seg_driver__DOT__G)))))))
                           : (((IData)(vlSelf->basys3_7seg_driver__DOT__A) 
                               << 6U) | (((IData)(vlSelf->basys3_7seg_driver__DOT__B) 
                                          << 5U) | 
                                         (((IData)(vlSelf->basys3_7seg_driver__DOT__C) 
                                           << 4U) | 
                                          (((IData)(vlSelf->basys3_7seg_driver__DOT__D) 
                                            << 3U) 
                                           | (((IData)(vlSelf->basys3_7seg_driver__DOT__E) 
                                               << 2U) 
                                              | (((IData)(vlSelf->basys3_7seg_driver__DOT__F) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->basys3_7seg_driver__DOT__G))))))));
}

void Vbasys3_7seg_driver___024root___eval_triggers__act(Vbasys3_7seg_driver___024root* vlSelf);

bool Vbasys3_7seg_driver___024root___eval_phase__act(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbasys3_7seg_driver___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbasys3_7seg_driver___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbasys3_7seg_driver___024root___eval_phase__nba(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbasys3_7seg_driver___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__ico(Vbasys3_7seg_driver___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__nba(Vbasys3_7seg_driver___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__act(Vbasys3_7seg_driver___024root* vlSelf);
#endif  // VL_DEBUG

void Vbasys3_7seg_driver___024root___eval(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vbasys3_7seg_driver___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/basys3/basys3_7seg_driver.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbasys3_7seg_driver___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbasys3_7seg_driver___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/basys3/basys3_7seg_driver.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbasys3_7seg_driver___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/basys3/basys3_7seg_driver.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbasys3_7seg_driver___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbasys3_7seg_driver___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbasys3_7seg_driver___024root___eval_debug_assertions(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_1k_i & 0xfeU))) {
        Verilated::overWidthError("clk_1k_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->digit0_en_i & 0xfeU))) {
        Verilated::overWidthError("digit0_en_i");}
    if (VL_UNLIKELY((vlSelf->digit0_i & 0xf0U))) {
        Verilated::overWidthError("digit0_i");}
    if (VL_UNLIKELY((vlSelf->digit1_en_i & 0xfeU))) {
        Verilated::overWidthError("digit1_en_i");}
    if (VL_UNLIKELY((vlSelf->digit1_i & 0xf0U))) {
        Verilated::overWidthError("digit1_i");}
    if (VL_UNLIKELY((vlSelf->digit2_en_i & 0xfeU))) {
        Verilated::overWidthError("digit2_en_i");}
    if (VL_UNLIKELY((vlSelf->digit2_i & 0xf0U))) {
        Verilated::overWidthError("digit2_i");}
    if (VL_UNLIKELY((vlSelf->digit3_en_i & 0xfeU))) {
        Verilated::overWidthError("digit3_en_i");}
    if (VL_UNLIKELY((vlSelf->digit3_i & 0xf0U))) {
        Verilated::overWidthError("digit3_i");}
}
#endif  // VL_DEBUG
