// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_tb.h for the primary calling header

#include "Vlfsr_tb__pch.h"
#include "Vlfsr_tb__Syms.h"
#include "Vlfsr_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vlfsr_tb___024root___eval_initial__TOP__Vtiming__1(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ lfsr_tb__DOT____Vrepeat0;
    lfsr_tb__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Begin simulation.\n",0);
    (void)VL_URANDOM_SEEDED_II(0x64U);
    vlSelf->lfsr_tb__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_hb913d3c0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lfsr_tb.clk_i)", 
                                                       "dv/lfsr_tb.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_hb913d3c0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge lfsr_tb.clk_i)", 
                                                       "dv/lfsr_tb.sv", 
                                                       50);
    vlSelf->lfsr_tb__DOT__rst_ni = 1U;
    vlSelf->lfsr_tb__DOT__next_i = 1U;
    lfsr_tb__DOT____Vrepeat0 = 0x2710U;
    while (VL_LTS_III(32, 0U, lfsr_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hb913d3c0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge lfsr_tb.clk_i)", 
                                                           "dv/lfsr_tb.sv", 
                                                           54);
        lfsr_tb__DOT____Vrepeat0 = (lfsr_tb__DOT____Vrepeat0 
                                    - (IData)(1U));
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((VL_ITOR_D_I(32, vlSelf->lfsr_tb__DOT__counters[0U]) 
                                 > 2.50000000000000000e+03) 
                                & (VL_ITOR_D_I(32, 
                                               vlSelf->lfsr_tb__DOT__counters[0U]) 
                                   < 7.50000000000000000e+03)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: lfsr_tb.sv:58: Assertion failed in %Nlfsr_tb.sim.unnamedblk2: Bit 0 of rand_o doesn't appear to be random.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/lfsr_tb.sv", 58, "");
            }
        }
    }
    vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((VL_ITOR_D_I(32, vlSelf->lfsr_tb__DOT__counters[1U]) 
                                 > 2.50000000000000000e+03) 
                                & (VL_ITOR_D_I(32, 
                                               vlSelf->lfsr_tb__DOT__counters[1U]) 
                                   < 7.50000000000000000e+03)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: lfsr_tb.sv:58: Assertion failed in %Nlfsr_tb.sim.unnamedblk2: Bit 1 of rand_o doesn't appear to be random.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/lfsr_tb.sv", 58, "");
            }
        }
    }
    vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i = 2U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((VL_ITOR_D_I(32, vlSelf->lfsr_tb__DOT__counters[2U]) 
                                 > 2.50000000000000000e+03) 
                                & (VL_ITOR_D_I(32, 
                                               vlSelf->lfsr_tb__DOT__counters[2U]) 
                                   < 7.50000000000000000e+03)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: lfsr_tb.sv:58: Assertion failed in %Nlfsr_tb.sim.unnamedblk2: Bit 2 of rand_o doesn't appear to be random.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/lfsr_tb.sv", 58, "");
            }
        }
    }
    vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i = 3U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((VL_ITOR_D_I(32, vlSelf->lfsr_tb__DOT__counters[3U]) 
                                 > 2.50000000000000000e+03) 
                                & (VL_ITOR_D_I(32, 
                                               vlSelf->lfsr_tb__DOT__counters[3U]) 
                                   < 7.50000000000000000e+03)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: lfsr_tb.sv:58: Assertion failed in %Nlfsr_tb.sim.unnamedblk2: Bit 3 of rand_o doesn't appear to be random.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/lfsr_tb.sv", 58, "");
            }
        }
    }
    vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i = 4U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((VL_ITOR_D_I(32, vlSelf->lfsr_tb__DOT__counters[4U]) 
                                 > 2.50000000000000000e+03) 
                                & (VL_ITOR_D_I(32, 
                                               vlSelf->lfsr_tb__DOT__counters[4U]) 
                                   < 7.50000000000000000e+03)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: lfsr_tb.sv:58: Assertion failed in %Nlfsr_tb.sim.unnamedblk2: Bit 4 of rand_o doesn't appear to be random.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/lfsr_tb.sv", 58, "");
            }
        }
    }
    vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i = 5U;
    VL_WRITEF_NX("[%0t] -Info: lfsr_tb.sv:61: %Nlfsr_tb.sim: All lfsr tests passed, but not every edge case is tested in this testbench. View dump.fst to confirm the behavior.\nEnd simulation.\n",0,
                 64,VL_TIME_UNITED_Q(1),-3,vlSymsp->name());
    VL_FINISH_MT("dv/lfsr_tb.sv", 65, "");
}

VL_INLINE_OPT VlCoroutine Vlfsr_tb___024root___eval_initial__TOP__Vtiming__2(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hb913d3c0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge lfsr_tb.clk_i)", 
                                                           "dv/lfsr_tb.sv", 
                                                           34);
        if ((1U & (~ (IData)(vlSelf->lfsr_tb__DOT__rst_ni)))) {
            co_await vlSelf->__VtrigSched_hb913d3c0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge lfsr_tb.clk_i)", 
                                                               "dv/lfsr_tb.sv", 
                                                               36);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0U == (0x1fU & (IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/lfsr_tb.sv", 
                                                           38);
                        VL_WRITEF_NX("[%0t] %%Error: lfsr_tb.sv:38: Assertion failed in %Nlfsr_tb: Reset should not set all bits to 0.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name());
                        VL_STOP_MT("dv/lfsr_tb.sv", 38, "");
                    }
                }
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_tb___024root___dump_triggers__act(Vlfsr_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr_tb___024root___eval_triggers__act(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->lfsr_tb__DOT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__lfsr_tb__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__lfsr_tb__DOT__clk_i__0 
        = vlSelf->lfsr_tb__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlfsr_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
