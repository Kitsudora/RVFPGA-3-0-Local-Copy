// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_wb_mem_wrapper__M1000_Iz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_wb_mem_wrapper__M1000_Iz1) {
    VL_CELL(ram, Vrvfpgasim_dpram64__S1000_MBz1);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::~Vrvfpgasim_wb_mem_wrapper__M1000_Iz1() {
}

void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst = VL_RAND_RESET_I(1);
    __PVT__i_wb_adr = VL_RAND_RESET_I(10);
    __PVT__i_wb_dat = VL_RAND_RESET_I(32);
    __PVT__i_wb_sel = VL_RAND_RESET_I(4);
    __PVT__i_wb_we = VL_RAND_RESET_I(1);
    __PVT__i_wb_cyc = VL_RAND_RESET_I(1);
    __PVT__i_wb_stb = VL_RAND_RESET_I(1);
    __PVT__o_wb_ack = VL_RAND_RESET_I(1);
    __PVT__o_wb_rdt = VL_RAND_RESET_I(32);
    __PVT__mem_we = VL_RAND_RESET_I(8);
}
