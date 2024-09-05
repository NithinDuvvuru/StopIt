// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbasys3_7seg_driver.h for the primary calling header

#include "Vbasys3_7seg_driver__pch.h"
#include "Vbasys3_7seg_driver___024root.h"

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___eval_static(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___eval_initial(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_1k_i__0 = vlSelf->clk_1k_i;
}

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___eval_final(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__stl(Vbasys3_7seg_driver___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbasys3_7seg_driver___024root___eval_phase__stl(Vbasys3_7seg_driver___024root* vlSelf);

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___eval_settle(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_settle\n"); );
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
            Vbasys3_7seg_driver___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/basys3/basys3_7seg_driver.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbasys3_7seg_driver___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__stl(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___stl_sequent__TOP__0(Vbasys3_7seg_driver___024root* vlSelf);

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___eval_stl(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vbasys3_7seg_driver___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h2c0786ec_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h4a60db2d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h07249a45_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h99bc80b0_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h19ce1593_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_hb0b190f7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vbasys3_7seg_driver__ConstPool__TABLE_h43f7727b_0;

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___stl_sequent__TOP__0(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___eval_triggers__stl(Vbasys3_7seg_driver___024root* vlSelf);

VL_ATTR_COLD bool Vbasys3_7seg_driver___024root___eval_phase__stl(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbasys3_7seg_driver___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vbasys3_7seg_driver___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__ico(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__act(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_1k_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver___024root___dump_triggers__nba(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_1k_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbasys3_7seg_driver___024root___ctor_var_reset(Vbasys3_7seg_driver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_1k_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->digit0_en_i = VL_RAND_RESET_I(1);
    vlSelf->digit0_i = VL_RAND_RESET_I(4);
    vlSelf->digit1_en_i = VL_RAND_RESET_I(1);
    vlSelf->digit1_i = VL_RAND_RESET_I(4);
    vlSelf->digit2_en_i = VL_RAND_RESET_I(1);
    vlSelf->digit2_i = VL_RAND_RESET_I(4);
    vlSelf->digit3_en_i = VL_RAND_RESET_I(1);
    vlSelf->digit3_i = VL_RAND_RESET_I(4);
    vlSelf->anode_o = VL_RAND_RESET_I(4);
    vlSelf->segments_o = VL_RAND_RESET_I(7);
    vlSelf->basys3_7seg_driver__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->basys3_7seg_driver__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->basys3_7seg_driver__DOT__digit = VL_RAND_RESET_I(4);
    vlSelf->basys3_7seg_driver__DOT__A = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver__DOT__B = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver__DOT__D = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver__DOT__E = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver__DOT__F = VL_RAND_RESET_I(1);
    vlSelf->basys3_7seg_driver__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_1k_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
