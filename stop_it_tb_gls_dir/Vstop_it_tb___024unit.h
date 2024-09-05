// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstop_it_tb.h for the primary calling header

#ifndef VERILATED_VSTOP_IT_TB___024UNIT_H_
#define VERILATED_VSTOP_IT_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstop_it_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstop_it_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 8> __Venumtab_enum_name0;

    // INTERNAL VARIABLES
    Vstop_it_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstop_it_tb___024unit(Vstop_it_tb__Syms* symsp, const char* v__name);
    ~Vstop_it_tb___024unit();
    VL_UNCOPYABLE(Vstop_it_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
