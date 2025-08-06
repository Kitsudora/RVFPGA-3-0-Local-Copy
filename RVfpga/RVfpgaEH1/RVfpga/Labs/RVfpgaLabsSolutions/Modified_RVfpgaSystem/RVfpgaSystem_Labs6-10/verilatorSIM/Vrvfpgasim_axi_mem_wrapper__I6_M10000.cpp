// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__3\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low 
        = vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__wb_rdt_low;
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack = vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid = 0U;
    } else {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
              >> 0xfU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid 
                = (0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                            >> 0x14U));
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid = 0U;
    } else {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
              >> 0x1eU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid 
                = (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                             << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                       >> 0x1dU)));
        }
    }
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack = (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack)));
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__4\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
    } else {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 0U;
        if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
        } else {
            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 1U;
                        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U])) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 1U;
                        if ((8U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        if (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__wb_rdt_low)));
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 7U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr));
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0xfU;
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 5U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        if (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low 
                                = vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 4U;
                        }
                    } else {
                        if (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 6U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w 
                                = (0U == (0xfU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                   << 0x19U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     >> 7U))));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 2U;
                            if (vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w) {
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                << 0x15U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                  >> 0xbU)));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                        << 0x11U) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                        >> 0xfU));
                            } else {
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                << 0x19U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                  >> 7U)));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                        << 0x11U) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                        >> 0xfU));
                            }
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 1U;
                        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                              >> 0xfU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__arbiter))) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)) 
                                   | (0x3ffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                                                  << 0xaU) 
                                                 | (0x3feU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                                       >> 0x16U)))));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 0U;
                            if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w 
                                    = (0U == (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                  << 0x19U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                    >> 7U))));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                    = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 2U;
                                if (vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w) {
                                    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                      >> 0xbU)));
                                    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                            << 0x11U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                              >> 0xfU));
                                } else {
                                    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                    << 0x19U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                      >> 7U)));
                                    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                            << 0x11U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                              >> 0xfU));
                                }
                            } else {
                                vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 1U;
                            }
                        } else {
                            if ((0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U])) {
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                    = (0x3fffU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                                     >> 0x1fU)));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0xfU;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__wb_rdt_low 
        = vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack = vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt = ((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout 
                                                              >> 0x20U))
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout));
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
