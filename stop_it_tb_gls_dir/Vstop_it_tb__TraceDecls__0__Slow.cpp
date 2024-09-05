// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vstop_it_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"WAITING_TO_START", "STARTING", "DECREMENTING", 
                                "CORRECT", "WRONG", 
                                "WON"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(1, "stop_it_pkg::state_t", 6, 5, __VenumItemNames, __VenumItemValues);
    }
}

void Vstop_it_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vstop_it_tb___024root__traceDeclTypesSub0(tracep);
}
