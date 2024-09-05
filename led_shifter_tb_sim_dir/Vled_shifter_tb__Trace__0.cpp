// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vled_shifter_tb__Syms.h"


void Vled_shifter_tb___024root__trace_chg_0_sub_0(Vled_shifter_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vled_shifter_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_chg_0\n"); );
    // Init
    Vled_shifter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_shifter_tb___024root*>(voidSelf);
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vled_shifter_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vled_shifter_tb___024root__trace_chg_0_sub_0(Vled_shifter_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->led_shifter_tb__DOT__rst_ni));
        bufp->chgBit(oldp+1,(vlSelf->led_shifter_tb__DOT__shift_i));
        bufp->chgSData(oldp+2,(vlSelf->led_shifter_tb__DOT__switches_i),16);
        bufp->chgBit(oldp+3,(vlSelf->led_shifter_tb__DOT__load_i));
        bufp->chgBit(oldp+4,(vlSelf->led_shifter_tb__DOT__off_i));
        bufp->chgSData(oldp+5,(vlSelf->led_shifter_tb__DOT__sim__DOT__past_leds),16);
    }
    bufp->chgBit(oldp+6,(vlSelf->led_shifter_tb__DOT__clk_i));
    bufp->chgSData(oldp+7,(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o),16);
    bufp->chgSData(oldp+8,(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state),16);
    bufp->chgSData(oldp+9,(vlSelf->led_shifter_tb__DOT__unnamedblk1__DOT__past_switches),16);
    bufp->chgSData(oldp+10,(vlSelf->led_shifter_tb__DOT__unnamedblk2__DOT__past_leds),16);
}

void Vled_shifter_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_cleanup\n"); );
    // Init
    Vled_shifter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_shifter_tb___024root*>(voidSelf);
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
