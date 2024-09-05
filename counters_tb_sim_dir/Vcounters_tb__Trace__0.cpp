// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcounters_tb__Syms.h"


void Vcounters_tb___024root__trace_chg_0_sub_0(Vcounters_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcounters_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root__trace_chg_0\n"); );
    // Init
    Vcounters_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounters_tb___024root*>(voidSelf);
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcounters_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounters_tb___024root__trace_chg_0_sub_0(Vcounters_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->counters_tb__DOT__clk_4_i));
    bufp->chgBit(oldp+1,(vlSelf->counters_tb__DOT__rst_ni));
    bufp->chgBit(oldp+2,(vlSelf->counters_tb__DOT__en_i));
    bufp->chgCData(oldp+3,(vlSelf->counters_tb__DOT__game_counter__DOT__state_q),5);
    bufp->chgCData(oldp+4,((0x1fU & ((IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q) 
                                     - (IData)(vlSelf->counters_tb__DOT__en_i)))),5);
    bufp->chgCData(oldp+5,(vlSelf->counters_tb__DOT__time_counter__DOT__state_q),5);
    bufp->chgCData(oldp+6,((0x1fU & ((IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q) 
                                     + (IData)(vlSelf->counters_tb__DOT__en_i)))),5);
}

void Vcounters_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root__trace_cleanup\n"); );
    // Init
    Vcounters_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounters_tb___024root*>(voidSelf);
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
