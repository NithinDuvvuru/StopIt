// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vbasys3_7seg_driver_tb__Syms.h"


void Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vbasys3_7seg_driver_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_chg_0\n"); );
    // Init
    Vbasys3_7seg_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbasys3_7seg_driver_tb___024root*>(voidSelf);
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->basys3_7seg_driver_tb__DOT__rst_ni));
        bufp->chgBit(oldp+1,(vlSelf->basys3_7seg_driver_tb__DOT__digit0_en_i));
        bufp->chgCData(oldp+2,(vlSelf->basys3_7seg_driver_tb__DOT__digit0_i),4);
        bufp->chgBit(oldp+3,(vlSelf->basys3_7seg_driver_tb__DOT__digit1_en_i));
        bufp->chgCData(oldp+4,(vlSelf->basys3_7seg_driver_tb__DOT__digit1_i),4);
        bufp->chgBit(oldp+5,(vlSelf->basys3_7seg_driver_tb__DOT__digit2_en_i));
        bufp->chgCData(oldp+6,(vlSelf->basys3_7seg_driver_tb__DOT__digit2_i),4);
        bufp->chgBit(oldp+7,(vlSelf->basys3_7seg_driver_tb__DOT__digit3_en_i));
        bufp->chgCData(oldp+8,(vlSelf->basys3_7seg_driver_tb__DOT__digit3_i),4);
    }
    bufp->chgBit(oldp+9,(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i));
    bufp->chgCData(oldp+10,(vlSelf->basys3_7seg_driver_tb__DOT____Vxrand_h8df6f9e8__0),4);
}

void Vbasys3_7seg_driver_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_cleanup\n"); );
    // Init
    Vbasys3_7seg_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbasys3_7seg_driver_tb___024root*>(voidSelf);
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
