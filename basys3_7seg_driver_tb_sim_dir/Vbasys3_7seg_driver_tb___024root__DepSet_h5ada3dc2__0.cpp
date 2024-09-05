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
    CData/*6:0*/ __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout;
    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in;
    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in = 0;
    CData/*6:0*/ __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout;
    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in;
    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in = 0;
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
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(VL_GTS_III(32, 3U, VL_COUNTONES_I((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    co_await vlSelf->__VdlySched.delay(1ULL, 
                                                       nullptr, 
                                                       "dv/basys3_7seg_driver_tb.sv", 
                                                       105);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    VL_WRITEF_NX("[%0t] %%Error: basys3_7seg_driver_tb.sv:105: Assertion failed in %Nbasys3_7seg_driver_tb.sim: At most 1 anode should be enabled at a time. anode=%b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -3,vlSymsp->name(),
                                 4,(IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o));
                    VL_STOP_MT("dv/basys3_7seg_driver_tb.sv", 105, "");
                }
            }
        }
        if (vlSelf->basys3_7seg_driver_tb__DOT__expected_digit_en) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((((0xfU == (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o))
                                 ? 0x7fU : (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A) 
                                             << 6U) 
                                            | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B) 
                                                << 5U) 
                                               | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G)))))))) 
                               != ([&]() {
                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in 
                                        = vlSelf->basys3_7seg_driver_tb__DOT__expected_digit;
                                    {
                                        if ((8U & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                            if ((4U 
                                                 & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0xeU;
                                                        goto __Vlabel1;
                                                    } else {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 6U;
                                                        goto __Vlabel1;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x21U;
                                                    goto __Vlabel1;
                                                } else {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x46U;
                                                    goto __Vlabel1;
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 3U;
                                                    goto __Vlabel1;
                                                } else {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 8U;
                                                    goto __Vlabel1;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x10U;
                                                goto __Vlabel1;
                                            } else {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0U;
                                                goto __Vlabel1;
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                            if ((2U 
                                                 & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x78U;
                                                    goto __Vlabel1;
                                                } else {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 2U;
                                                    goto __Vlabel1;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x12U;
                                                goto __Vlabel1;
                                            } else {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x19U;
                                                goto __Vlabel1;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                            if ((1U 
                                                 & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x30U;
                                                goto __Vlabel1;
                                            } else {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x24U;
                                                goto __Vlabel1;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__in))) {
                                            __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x79U;
                                            goto __Vlabel1;
                                        } else {
                                            __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout = 0x40U;
                                            goto __Vlabel1;
                                        }
                                        __Vlabel1: ;
                                    }
                                }(), (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__1__Vfuncout))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/basys3_7seg_driver_tb.sv", 
                                                           109);
                        vlSelf->__Vm_traceActivity[2U] = 1U;
                        VL_WRITEF_NX("[%0t] %%Error: basys3_7seg_driver_tb.sv:109: Assertion failed in %Nbasys3_7seg_driver_tb.sim: Incorrect segments for anode=%b. segments=%b, expected=%b\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name(),
                                     4,(IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o),
                                     7,((0xfU == (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o))
                                         ? 0x7fU : 
                                        (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A) 
                                          << 6U) | 
                                         (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B) 
                                           << 5U) | 
                                          (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C) 
                                            << 4U) 
                                           | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D) 
                                               << 3U) 
                                              | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G)))))))),
                                     7,([&]() {
                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in 
                                            = vlSelf->basys3_7seg_driver_tb__DOT__expected_digit;
                                        {
                                            if ((8U 
                                                 & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                            __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0xeU;
                                                            goto __Vlabel2;
                                                        } else {
                                                            __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 6U;
                                                            goto __Vlabel2;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x21U;
                                                        goto __Vlabel2;
                                                    } else {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x46U;
                                                        goto __Vlabel2;
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 3U;
                                                        goto __Vlabel2;
                                                    } else {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 8U;
                                                        goto __Vlabel2;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x10U;
                                                    goto __Vlabel2;
                                                } else {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0U;
                                                    goto __Vlabel2;
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x78U;
                                                        goto __Vlabel2;
                                                    } else {
                                                        __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 2U;
                                                        goto __Vlabel2;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x12U;
                                                    goto __Vlabel2;
                                                } else {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x19U;
                                                    goto __Vlabel2;
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x30U;
                                                    goto __Vlabel2;
                                                } else {
                                                    __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x24U;
                                                    goto __Vlabel2;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__in))) {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x79U;
                                                goto __Vlabel2;
                                            } else {
                                                __Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout = 0x40U;
                                                goto __Vlabel2;
                                            }
                                            __Vlabel2: ;
                                        }
                                    }(), (IData)(__Vfunc_basys3_7seg_driver_tb__DOT__hex7seg_expected__2__Vfuncout)));
                        VL_STOP_MT("dv/basys3_7seg_driver_tb.sv", 109, "");
                    }
                }
            }
        } else if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((0x7fU != ((0xfU == (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o))
                                      ? 0x7fU : (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    co_await vlSelf->__VdlySched.delay(1ULL, 
                                                       nullptr, 
                                                       "dv/basys3_7seg_driver_tb.sv", 
                                                       112);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    VL_WRITEF_NX("[%0t] %%Error: basys3_7seg_driver_tb.sv:112: Assertion failed in %Nbasys3_7seg_driver_tb.sim: No segments should be enabled for anode=%b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -3,vlSymsp->name(),
                                 4,(IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o));
                    VL_STOP_MT("dv/basys3_7seg_driver_tb.sv", 112, "");
                }
            }
        }
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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
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
