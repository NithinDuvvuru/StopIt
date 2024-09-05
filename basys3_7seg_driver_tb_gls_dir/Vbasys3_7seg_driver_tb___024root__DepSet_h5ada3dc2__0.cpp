// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbasys3_7seg_driver_tb.h for the primary calling header

#include "Vbasys3_7seg_driver_tb__pch.h"
#include "Vbasys3_7seg_driver_tb__Syms.h"
#include "Vbasys3_7seg_driver_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__1(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ basys3_7seg_driver_tb__DOT____Vrepeat0;
    basys3_7seg_driver_tb__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Begin simulation.\n",0);
    (void)VL_URANDOM_SEEDED_II(0x64U);
    vlSelf->basys3_7seg_driver_tb__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_hddad697d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge basys3_7seg_driver_tb.clk_1k_i)", 
                                                       "dv/basys3_7seg_driver_tb.sv", 
                                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hddad697d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge basys3_7seg_driver_tb.clk_1k_i)", 
                                                       "dv/basys3_7seg_driver_tb.sv", 
                                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->basys3_7seg_driver_tb__DOT__rst_ni = 1U;
    co_await vlSelf->__VtrigSched_hddad6a3c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge basys3_7seg_driver_tb.clk_1k_i)", 
                                                       "dv/basys3_7seg_driver_tb.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    basys3_7seg_driver_tb__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, basys3_7seg_driver_tb__DOT____Vrepeat0)) {
        vlSelf->basys3_7seg_driver_tb__DOT__digit0_en_i 
            = (1U & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit1_en_i 
            = (1U & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit2_en_i 
            = (1U & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit3_en_i 
            = (1U & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit0_i 
            = (0xfU & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit1_i 
            = (0xfU & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit2_i 
            = (0xfU & VL_RANDOM_I());
        vlSelf->basys3_7seg_driver_tb__DOT__digit3_i 
            = (0xfU & VL_RANDOM_I());
        co_await vlSelf->__VtrigSched_hddad6a3c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge basys3_7seg_driver_tb.clk_1k_i)", 
                                                           "dv/basys3_7seg_driver_tb.sv", 
                                                           102);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        basys3_7seg_driver_tb__DOT____Vrepeat0 = (basys3_7seg_driver_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
    }
    VL_WRITEF_NX("End simulation.\n",0);
    VL_FINISH_MT("dv/basys3_7seg_driver_tb.sv", 117, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root___dump_triggers__act(Vbasys3_7seg_driver_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbasys3_7seg_driver_tb___024root___eval_triggers__act(Vbasys3_7seg_driver_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0)));
    vlSelf->__Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0 
        = vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbasys3_7seg_driver_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
