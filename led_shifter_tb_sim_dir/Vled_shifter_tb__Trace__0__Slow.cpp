// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vled_shifter_tb__Syms.h"


VL_ATTR_COLD void Vled_shifter_tb___024root__trace_init_sub__TOP__0(Vled_shifter_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("led_shifter_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"shift_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"switches_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+4,0,"load_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"off_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("led_shifter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"shift_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"switches_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+4,0,"load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"off_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"leds_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("sim", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"past_leds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"past_switches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"past_leds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_init_top(Vled_shifter_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_init_top\n"); );
    // Body
    Vled_shifter_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vled_shifter_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vled_shifter_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vled_shifter_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_register(Vled_shifter_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vled_shifter_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vled_shifter_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vled_shifter_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vled_shifter_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_const_0\n"); );
    // Init
    Vled_shifter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_shifter_tb___024root*>(voidSelf);
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_full_0_sub_0(Vled_shifter_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_full_0\n"); );
    // Init
    Vled_shifter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_shifter_tb___024root*>(voidSelf);
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vled_shifter_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vled_shifter_tb___024root__trace_full_0_sub_0(Vled_shifter_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->led_shifter_tb__DOT__rst_ni));
    bufp->fullBit(oldp+2,(vlSelf->led_shifter_tb__DOT__shift_i));
    bufp->fullSData(oldp+3,(vlSelf->led_shifter_tb__DOT__switches_i),16);
    bufp->fullBit(oldp+4,(vlSelf->led_shifter_tb__DOT__load_i));
    bufp->fullBit(oldp+5,(vlSelf->led_shifter_tb__DOT__off_i));
    bufp->fullSData(oldp+6,(vlSelf->led_shifter_tb__DOT__sim__DOT__past_leds),16);
    bufp->fullBit(oldp+7,(vlSelf->led_shifter_tb__DOT__clk_i));
    bufp->fullSData(oldp+8,(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o),16);
    bufp->fullSData(oldp+9,(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__state),16);
    bufp->fullSData(oldp+10,(vlSelf->led_shifter_tb__DOT__unnamedblk1__DOT__past_switches),16);
    bufp->fullSData(oldp+11,(vlSelf->led_shifter_tb__DOT__unnamedblk2__DOT__past_leds),16);
}
