// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_axi_mem_wrapper__I6_M10000) {
    VL_CELL(ram, Vrvfpgasim_dpram64__S10000_MBz1);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_axi_mem_wrapper__I6_M10000::~Vrvfpgasim_axi_mem_wrapper__I6_M10000() {
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_settle__TOP__rvfpgasim__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_settle__TOP__rvfpgasim__ram__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt = ((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout 
                                                              >> 0x20U))
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout));
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_initial__TOP__rvfpgasim__ram__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_initial__TOP__rvfpgasim__ram__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs = 0U;
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_settle__TOP__rvfpgasim__ram__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_settle__TOP__rvfpgasim__ram__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we = ((0xf0U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we)) 
                                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we)) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)))
                                                      ? (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel)
                                                      : 0U));
    vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we = ((0xfU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we)) 
                                                  | ((((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                       ? (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel)
                                                       : 0U) 
                                                     << 4U));
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst_n = VL_RAND_RESET_I(1);
    __PVT__i_awid = VL_RAND_RESET_I(6);
    __PVT__i_awaddr = VL_RAND_RESET_I(32);
    __PVT__i_awlen = VL_RAND_RESET_I(8);
    __PVT__i_awsize = VL_RAND_RESET_I(3);
    __PVT__i_awburst = VL_RAND_RESET_I(2);
    __PVT__i_awvalid = VL_RAND_RESET_I(1);
    __PVT__o_awready = VL_RAND_RESET_I(1);
    __PVT__i_arid = VL_RAND_RESET_I(6);
    __PVT__i_araddr = VL_RAND_RESET_I(32);
    __PVT__i_arlen = VL_RAND_RESET_I(8);
    __PVT__i_arsize = VL_RAND_RESET_I(3);
    __PVT__i_arburst = VL_RAND_RESET_I(2);
    __PVT__i_arvalid = VL_RAND_RESET_I(1);
    __PVT__o_arready = VL_RAND_RESET_I(1);
    __PVT__i_wdata = VL_RAND_RESET_Q(64);
    __PVT__i_wstrb = VL_RAND_RESET_I(8);
    __PVT__i_wlast = VL_RAND_RESET_I(1);
    __PVT__i_wvalid = VL_RAND_RESET_I(1);
    __PVT__o_wready = VL_RAND_RESET_I(1);
    __PVT__o_bid = VL_RAND_RESET_I(6);
    __PVT__o_bresp = VL_RAND_RESET_I(2);
    __PVT__o_bvalid = VL_RAND_RESET_I(1);
    __PVT__i_bready = VL_RAND_RESET_I(1);
    __PVT__o_rid = VL_RAND_RESET_I(6);
    __PVT__o_rdata = VL_RAND_RESET_Q(64);
    __PVT__o_rresp = VL_RAND_RESET_I(2);
    __PVT__o_rlast = VL_RAND_RESET_I(1);
    __PVT__o_rvalid = VL_RAND_RESET_I(1);
    __PVT__i_rready = VL_RAND_RESET_I(1);
    __PVT__wb_adr = VL_RAND_RESET_I(14);
    __PVT__wb_dat = VL_RAND_RESET_I(32);
    __PVT__wb_sel = VL_RAND_RESET_I(4);
    __PVT__wb_we = VL_RAND_RESET_I(1);
    __PVT__wb_cyc = VL_RAND_RESET_I(1);
    __PVT__wb_stb = VL_RAND_RESET_I(1);
    __PVT__wb_ack = VL_RAND_RESET_I(1);
    __PVT__wb_rdt = VL_RAND_RESET_I(32);
    __PVT__mem_we = VL_RAND_RESET_I(8);
    __PVT__axi2wb__DOT__hi_32b_w = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    __PVT__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
    __Vdly__wb_ack = VL_RAND_RESET_I(1);
    __Vdly__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    __Vdly__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    __Vdly__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
}
