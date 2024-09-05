// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vlfsr_tb__Syms.h"


void Vlfsr_tb___024root__trace_chg_0_sub_0(Vlfsr_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vlfsr_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root__trace_chg_0\n"); );
    // Init
    Vlfsr_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr_tb___024root*>(voidSelf);
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlfsr_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vlfsr_tb___024root__trace_chg_0_sub_0(Vlfsr_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->lfsr_tb__DOT__counters[0U]),32);
        bufp->chgIData(oldp+1,(vlSelf->lfsr_tb__DOT__counters[1U]),32);
        bufp->chgIData(oldp+2,(vlSelf->lfsr_tb__DOT__counters[2U]),32);
        bufp->chgIData(oldp+3,(vlSelf->lfsr_tb__DOT__counters[3U]),32);
        bufp->chgIData(oldp+4,(vlSelf->lfsr_tb__DOT__counters[4U]),32);
        bufp->chgIData(oldp+5,(vlSelf->lfsr_tb__DOT__counters[5U]),32);
        bufp->chgCData(oldp+6,((0x1fU & (IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state))),5);
        bufp->chgCData(oldp+7,(vlSelf->lfsr_tb__DOT__lfsr__DOT__state),8);
        bufp->chgIData(oldp+8,(vlSelf->lfsr_tb__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+9,(vlSelf->lfsr_tb__DOT__clk_i));
    bufp->chgBit(oldp+10,(vlSelf->lfsr_tb__DOT__rst_ni));
    bufp->chgBit(oldp+11,(vlSelf->lfsr_tb__DOT__next_i));
    bufp->chgIData(oldp+12,(vlSelf->lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i),32);
}

void Vlfsr_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root__trace_cleanup\n"); );
    // Init
    Vlfsr_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr_tb___024root*>(voidSelf);
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
