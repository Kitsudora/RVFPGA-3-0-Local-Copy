// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__76(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__76\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                     << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
             >> 0x1eU) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 0x1fU))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__77(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__77\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1579[3];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1 
        = ((((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                >> 0x18U)))) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x13U)) 
           & (~ (IData)((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                      >> 8U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_dma_bubble 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (IData)((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                       >> 8U)))))) 
           | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend 
        = ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x10U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid 
        = (((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid 
        = (((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_arvalid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
           | (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_awvalid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
              | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)))
            : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg)) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_wvalid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid) 
           | ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
              | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid)) 
          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid)) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                           >> 0x14U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                     >> 0x11U));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | (0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_arvalid) 
                             << 0x13U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | (0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_awvalid) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | (0xffc00000U & (0x400000U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_wvalid) 
                                          << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xffffc3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | (0x3c00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                         >> 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0xfe1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | (0x1e00000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | (0xfffc0000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                       << 0x15U) | (QData)((IData)(
                                                                   (0x178U 
                                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                       << 0xaU)))))) 
                             << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
        = ((0x3ffffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                  << 0x15U) | (QData)((IData)(
                                                              (0x178U 
                                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                  << 0xaU)))))) 
                        >> 0xeU)) | (0xfffc0000U & 
                                     ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(
                                                                  (0x178U 
                                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                      << 0xaU))))) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
        = (0x3ffffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                  << 0x15U) | (QData)((IData)(
                                                              (0x178U 
                                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                  << 0xaU))))) 
                                >> 0x20U)) >> 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0x1fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | (0xe0000000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                       << 0x15U) | (QData)((IData)(
                                                                   (0x100U 
                                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                       << 0xaU)))))) 
                             << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
        = ((0x1fffffffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                     << 0x15U) | (QData)((IData)(
                                                                 (0x100U 
                                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                     << 0xaU)))))) 
                           >> 3U)) | (0xe0000000U & 
                                      ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (0x100U 
                                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                       << 0xaU))))) 
                                                >> 0x20U)) 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0xffc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | (0x1fffffffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (0x100U 
                                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                        << 0xaU))))) 
                                      >> 0x20U)) >> 3U)));
    __Vtemp1579[0U] = (1U | ((0xfffffe00U & ((IData)(
                                                     (((((- (QData)((IData)(
                                                                            (0U 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                         & (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                      << 0x20U) 
                                                                     | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                         << 0x18U) 
                                                                        | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                            << 0x10U) 
                                                                           | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                               << 8U) 
                                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                                        | ((- (QData)((IData)(
                                                                              (1U 
                                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                           & (((QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                  << 0x20U) 
                                                                 | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                                       | ((- (QData)((IData)(
                                                                             (2U 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                          & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                                      | ((- (QData)((IData)(
                                                                            (3U 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))) 
                                             << 9U)) 
                             | (0x1feU & ((((((- (IData)(
                                                         (0U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr))) 
                                             | ((- (IData)(
                                                           (1U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                & ((IData)(3U) 
                                                   << 
                                                   (6U 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)))) 
                                            | ((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                               & ((IData)(0xfU) 
                                                  << 
                                                  (4U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)))) 
                                           | (- (IData)(
                                                        (3U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                          << 1U))));
    __Vtemp1579[1U] = ((0x1ffU & ((IData)((((((- (QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                           << 0x20U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                              << 0x18U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                 << 0x10U) 
                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 8U) 
                                                                   | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (1U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                & (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                            | ((- (QData)((IData)(
                                                                  (2U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                           | ((- (QData)((IData)(
                                                                 (3U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))) 
                                  >> 0x17U)) | (0xfffffe00U 
                                                & ((IData)(
                                                           ((((((- (QData)((IData)(
                                                                                (0U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                & (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                       << 0x30U) 
                                                                      | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                             << 0x20U) 
                                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 0x18U) 
                                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 0x10U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                                               | ((- (QData)((IData)(
                                                                                (1U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                  & (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                      << 0x30U) 
                                                                     | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                         << 0x20U) 
                                                                        | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                            << 0x10U) 
                                                                           | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                                              | ((- (QData)((IData)(
                                                                                (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                 & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                                             | ((- (QData)((IData)(
                                                                                (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                            >> 0x20U)) 
                                                   << 9U)));
    __Vtemp1579[2U] = (0x1ffU & ((IData)(((((((- (QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                           << 0x20U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                              << 0x18U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                 << 0x10U) 
                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 8U) 
                                                                   | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (1U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                & (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                            | ((- (QData)((IData)(
                                                                  (2U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                           | ((- (QData)((IData)(
                                                                 (3U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                          >> 0x20U)) 
                                 >> 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | (0xfe000000U & (__Vtemp1579[0U] << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
        = ((0x1ffffffU & (__Vtemp1579[0U] >> 7U)) | 
           (0xfe000000U & (__Vtemp1579[1U] << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
        = ((0x1ffffffU & (__Vtemp1579[1U] >> 7U)) | 
           (0xfe000000U & (__Vtemp1579[2U] << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | (0x1ffffffU & (__Vtemp1579[2U] >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__78(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__78\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & (((IData)(0x27U) 
                                                                        * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                      | (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & (((IData)(0x27U) 
                                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                               >> 5U)))])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                               ? 0x20U
                                               : ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))))
                                   : 0ULL));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & (((IData)(0x27U) 
                                                                        * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                      | (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & (((IData)(0x27U) 
                                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                               >> 5U)))])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                               ? 0x20U
                                               : ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))))
                                   : 0ULL));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
                                >> 0x20U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
                                >> 0x20U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3));
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__79(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__79\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
           & (IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
           & ((0xfffffffcU & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 1U))))))) 
                              << 2U)) | (IData)(((0x3ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                 >> 0x20U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
           & ((0xfffffff0U & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 2U))))))) 
                              << 4U)) | ((3U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                >> 0x1eU)) 
                                         | (0xfffffffcU 
                                            & ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U)))))) 
                                                        >> 0x20U)) 
                                               << 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
           & ((0xffffffc0U & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
                              << 6U)) | ((0xfU & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                  >> 0x1cU)) 
                                         | (0xfffffff0U 
                                            & ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                        >> 0x20U)) 
                                               << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U]) 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
              & ((0x3fU & ((IData)((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 3U))))))) 
                           >> 0x1aU)) | (0xffffffc0U 
                                         & ((IData)(
                                                    ((0x3ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                               >> 3U)))))) 
                                                     >> 0x20U)) 
                                            << 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U]) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                     & ((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                        >> 0x18U))) | (0xffffff00U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                          & ((0xfffffc00U 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                 << 0xaU)) 
                                             | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                         >> 0x20U)) 
                                                << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                     & ((0xffU & ((IData)((0x3ffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                    >> 1U))))))) 
                                  >> 0x16U)) | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                         >> 0x20U)) 
                                                >> 0x18U)))) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                             & ((0xfffff000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                << 0xcU)) 
                                | ((0x300U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                              >> 0x16U)) 
                                   | (0xfffffc00U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 0xaU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                     & (((IData)((0x3ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                         >> 2U))))))) 
                         >> 0x14U) | ((IData)(((0x3ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                         >> 1U)))))) 
                                               >> 0x20U)) 
                                      >> 0x16U)))) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                             & ((0xffffc000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                << 0xeU)) 
                                | ((0xf00U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                              >> 0x14U)) 
                                   | (0xfffff000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       << 0xcU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U]) 
           | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                        & (((IData)((0x3ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                              >> 3U))))))) 
                            >> 0x12U) | ((IData)(((0x3ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                            >> 2U)))))) 
                                                  >> 0x20U)) 
                                         >> 0x14U)))) 
              | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                & ((0x3f00U & ((IData)(
                                                       (0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                               >> 0x12U)) 
                                   | (0xffffc000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 3U)))))) 
                                                >> 0x20U)) 
                                       << 0xeU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U]) 
           | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
        = ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
                       & ((IData)((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                          >> 0x10U))) | (0xffff0000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
                                            & ((0xfffc0000U 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                   << 0x12U)) 
                                               | ((IData)(
                                                          ((0x3ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
        = ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
                       & ((0xffffU & ((IData)((0x3ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                        >> 1U))))))) 
                                      >> 0xeU)) | ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U)))) 
           | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
                             & ((0xfff00000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                << 0x14U)) 
                                | ((0x30000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                >> 0xeU)) 
                                   | (0xfffc0000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 0x12U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
        = ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
                       & (((IData)((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 2U))))))) 
                           >> 0xcU) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       >> 0xeU)))) 
           | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
                             & ((0xffc00000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                << 0x16U)) 
                                | ((0xf0000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                >> 0xcU)) 
                                   | (0xfff00000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
        = ((0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU]) 
           | ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                          & (((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
                              >> 0xaU) | ((IData)((
                                                   (0x3ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                             >> 2U)))))) 
                                                   >> 0x20U)) 
                                          >> 0xcU)))) 
              | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                                & ((0x3f0000U & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                 >> 0xaU)) 
                                   | (0xffc00000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 3U)))))) 
                                                >> 0x20U)) 
                                       << 0x16U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU]) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
                         & ((IData)((0x3ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                            >> 8U))) | (0xff000000U 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
                                           & ((0xfc000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                  << 0x1aU)) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                          >> 0x20U)) 
                                                 << 0x18U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
                         & ((0xffffffU & ((IData)((0x3ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                            >> 1U))))))) 
                                          >> 6U)) | 
                            ((IData)(((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                      >> 0x20U)) >> 8U)))) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
                             & ((0xf0000000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                << 0x1cU)) 
                                | ((0x3000000U & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                  >> 6U)) 
                                   | (0xfc000000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 0x1aU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
                         & (((IData)((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 2U))))))) 
                             >> 4U) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       >> 6U)))) | 
           (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
                           & ((0xc0000000U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                              << 0x1eU)) 
                              | ((0xf000000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                >> 4U)) 
                                 | (0xf0000000U & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                            >> 0x20U)) 
                                                   << 0x1cU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
                         & (((IData)((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 3U))))))) 
                             >> 2U) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       >> 4U)))) | 
           (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
                           & ((0x3f000000U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                              >> 2U)) 
                              | (0xc0000000U & ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U)))))) 
                                                         >> 0x20U)) 
                                                << 0x1eU))))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
           | (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U])));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
        = ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
                                        >> 8U))) >> 0x18U)) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
        = ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                                        >> 8U))) >> 0x18U)) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
        = ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                                        >> 8U))) >> 0x18U)) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U]) 
           | ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                              << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                           >> 8U))) 
                        >> 0x18U)) | (0xff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                   ? 
                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                   : 
                                                  ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                                      >> 8U))) 
                                                 << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U]) 
           | (0xffff0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                   << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                                >> 0x10U))) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
        = ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                         : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                             << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                          >> 0x10U))) 
                       >> 0x10U)) | (0xffff0000U & 
                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                              >> 0x10U))) 
                                      << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
        = ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                         : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                             << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                          >> 0x10U))) 
                       >> 0x10U)) | (0xffff0000U & 
                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                              >> 0x10U))) 
                                      << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
        = ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                         : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                             << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                          >> 0x10U))) 
                       >> 0x10U)) | (0xffff0000U & 
                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                              >> 0x10U))) 
                                      << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
        = ((0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU]) 
           | ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                            : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                             >> 0x10U))) 
                          >> 0x10U)) | (0xff0000U & 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                                 >> 0x10U))) 
                                         << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU]) 
           | (0xff000000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                   << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                             >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                                     : 
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                                     : 
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                                     : 
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                     : 
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                                     >> 0x18U)) 
                                                   << 0x18U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__80(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__80\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
        = (0x1fffffU & (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff)))) 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                               >> 1U)))) 
                             & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                 << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
                                             >> 0x15U)))) 
                         | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                              >> 2U)))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                                << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                             >> 0xaU)))) 
                        | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                             >> 3U)))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                               << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                         >> 0x1fU)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__81(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__81\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
           | (0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
           | (0x100000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
           | (0xffe00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xfffffe00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xc00003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x3ffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x80000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
        = ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U]) 
           | (0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U]) 
           | (0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (1U & (VL_REDXOR_32((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U])) 
                    ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                       >> 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (2U & ((VL_REDXOR_32((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                                                  >> 0x15U)))) 
                     << 1U) ^ (0xfffffeU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                            >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (4U & ((VL_REDXOR_32((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                                << 0x16U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                                  >> 0xaU)))) 
                     << 2U) ^ (0xcU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                       >> 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (8U & ((VL_REDXOR_32((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                                << 1U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                                  >> 0x1fU)))) 
                     << 3U) ^ (0xfff8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                          >> 0x10U)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__82(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__82\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
            & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                 >> 8U))) | ((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                  >> 0x18U))) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x11U)))) 
                  | ((2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x18U))) & 
                     (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))))) 
           & ((~ (((0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid_en) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_sent_q))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_dma_bubble)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x14U));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x10U));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid 
            = ((2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                     >> 1U))) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 1U) | (0xfffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)))) 
              & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 2U) | (0xfffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 2U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 1U)))) 
              & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 3U) | (0xfffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 3U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 2U)))) 
              & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
              >> 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout))));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout))));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout))));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (4U & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (8U & ((0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 3U))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))) 
           & ((~ ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0x10U))) 
                  | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                              >> 0xfU))))) 
              | ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))) 
                 & (2U != (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                 >> 0x14U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
           & (0xf004U != (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                     >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibvalid 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3)) 
            << 3U) | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2)) 
                       << 2U) | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1)) 
                                  << 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0)) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error))) 
           & (((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                       & (3U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                       >> (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))))))) 
                | ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                   & ((0U != (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                         & (0xfU != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                             >> (7U 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)))))))) 
               | ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                  & ((0U != (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                        & (0xffU != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen)))))) 
              | (((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0x10U))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel)) 
                 & (~ ((2U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size))) 
                       | (3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size))))))));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U]));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U];
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr)) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                 | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
                | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2)) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U])) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U])) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U])) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2)) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                     ? (((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                           & (0x6033U | (0xf8000U & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                          << 0xfU)))) 
                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                             & (0x6033U | (0xf80U & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                            << 7U))))) 
                         | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                            & (0x2073U | (0xfff00000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                             << 0x14U))))) 
                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                           & (0x1073U | (0xfff00000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                            << 0x14U)))))
                     : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                       >> 1U)) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 1U) | (0x1fffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xfU)))) 
               & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 1U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 2U) | (0x3fffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 1U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xeU)))) 
               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 3U) | (0x7fff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 2U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xdU)))) 
               & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 3U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
               : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                   << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset))))) 
                 & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)
                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 1U))))) & 
                 ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 2U))))) & 
                 ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 3U))))) & 
                 ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U] 
        = (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                    & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 1U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 2U))))
                    ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 1U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 2U))))
                     ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 2U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 4U))))
                    ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 2U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 4U))))
                     ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 3U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 6U))))
                    ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 3U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 6U))))
                     ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__83(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__83\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                            ? 3U : 4U);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                    = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                                  ? 3U : 4U) : ((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0xeU))) 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))));
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__84(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__84\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                  >> 1U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__core_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xffffc0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | ((0x3000U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail))) 
                          << 0xcU)) | ((0xc00U & ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                  << 0xaU)) 
                                       | (0x300U & 
                                          ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))) 
                                           << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din 
        = (((((((((((((- (IData)((4U == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg) 
                     | ((- (IData)((5U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)) 
                    | (0x2fffffffU & ((- (IData)((0x10U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg))) 
                   | ((- (IData)((0x11U == (0x7fU & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg)) 
                  | ((- (IData)((0x16U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                 | ((- (IData)((0x17U == (0x7fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
                | ((- (IData)((0x18U == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
               | ((- (IData)((0x40U == (0x7fU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__haltsum0_reg)) 
              | ((- (IData)((0x38U == (0x7fU & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
             | ((- (IData)((0x39U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)) 
            | ((- (IData)((0x3cU == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U)))))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg)) 
           | ((- (IData)((0x3dU == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__85(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__85\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new 
        = ((~ ((((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x22U)))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 0x1eU))) & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
           & (((((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x22U)))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 3U))) & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0x18U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x22U))))) 
                  & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                        >> 0xcU))) ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren 
        = ((((0x38U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                              >> 0x18U))) | (((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                             & (((0x39U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                                 | (0x3cU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x22U))))) 
                                                | (0x3dU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))))
                  ? (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                        & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x18U)))) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__86(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__86\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3dU == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x39U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren 
        = (((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren 
        = (((0x17U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3cU == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                  ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__87(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__87\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (5U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (4U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__88(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__88\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__bcnt = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__treg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__wfre = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk = 0U;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__wfre = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt)))))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__treg 
                        = ((0xfeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__treg) 
                                     << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__i_accel_miso));
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__bcnt 
                        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__bcnt))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk 
                            = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_accel_sclk)));
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state = 1U;
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state = 0U;
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk 
                            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 3U));
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state = 0U;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt)))))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk 
                        = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_accel_sclk)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state = 3U;
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk 
                    = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                             >> 3U));
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__bcnt = 7U;
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__treg 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem
                    [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp];
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty)))) {
                    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk 
                            = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_accel_sclk)));
                    }
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__wfre = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state = 1U;
                }
            }
        }
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__bcnt = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__treg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__wfre = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk = 0U;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__wfre = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt)))))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__treg 
                        = (0xfeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__treg) 
                                    << 1U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__bcnt 
                        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__bcnt))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk 
                            = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_flash_sclk)));
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state = 1U;
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state = 0U;
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk 
                            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 3U));
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state = 0U;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt)))))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk 
                        = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_flash_sclk)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state = 3U;
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk 
                    = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                             >> 3U));
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__bcnt = 7U;
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__treg 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem
                    [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp];
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty)))) {
                    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk 
                            = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_flash_sclk)));
                    }
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__wfre = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__bcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__bcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_accel_sclk 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__clkcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__treg 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__treg;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem[vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvdim0__spi2__DOT__wfifo__DOT__mem__v0] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvval__spi2__DOT__wfifo__DOT__mem__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__bcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__bcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_flash_sclk 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__clkcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__treg 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__treg;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem[vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvval__spi__DOT__wfifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__89(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__89\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
               >> 0x1fU)) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                >> 1U)));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                  >> 0x1fU) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                  >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__90(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__90\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din 
        = ((((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0x10U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))
            ? ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xdU) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                     >> 1U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 1U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4 
        = (((((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (1U & (((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0xbU)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0xcU)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x13U)) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0x12U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x10U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & ((((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0xeU) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                    >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 4U))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 0x15U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xeU) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__coll_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1) 
            << 9U) | (((((((0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                       >> 6U))) == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                        & ((3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                   << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                               >> 0x16U))) 
                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) 
                       << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  << 4U) | ((8U & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                   << 3U)) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((0x7ffffffeU 
                                                       & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
                                                           << 1U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 1U))) 
                                                      | (0xfffffffeU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                 >> 2U)) 
                                                               << 1U))))) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb) 
                   | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                              >> 2U))) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U)) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                                             >> 1U))) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)
                ? 0U : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb) 
                   | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                              >> 2U))) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U)) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                                             >> 1U))) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)
                ? 0U : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x11U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (3U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                         >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xeU) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U))) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb) 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 9U))) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                            >> 0xeU)))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))
                           ? ((((- (IData)((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb)))) 
                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                   >> 1U)) | ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 3U)))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout)) 
                              | ((- (IData)(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ns 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
            ? ((0x3f80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
               | (((((0x40U & ((- (IData)((1U & (((
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 0xbU) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                       >> 7U))) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))) 
                               << 4U)) | (0x30U & (
                                                   (- (IData)(
                                                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                                & (~ 
                                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                    >> 7U))) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))))) 
                                                   << 4U))) 
                    | (0x10U & ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                   >> 7U) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)))))) 
                                << 4U))) | (0x20U & 
                                            ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                             << 4U))) 
                  | (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)
                ? ((0x2000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                               >> 2U)) | ((0x300U & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                            >> 2U)) 
                                          | ((0x70U 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                             | ((2U 
                                                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                     << 1U) 
                                                    | (0xfffffffeU 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                      >> 2U))))))
                : ((0x3ffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                       << 1U) | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 4U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                    & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 1U))) ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ns)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode))) 
               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                  >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                           >> 0xbU))))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 4U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                        >> 2U))) | 
                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)))) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible)) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 1U)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4 
        = ((((((((((((((0xbU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
                       | (7U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int))))) 
                      | (0x1dU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int))))) 
                     | (0x1cU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))))) 
                    | (0x1eU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int))))) 
                   | (2U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))))) 
                  | (0xbU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4))))) 
                 | (1U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))))) 
                | (3U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)))))) 
               | (4U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
              | (5U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
             | (6U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
            | (7U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                       << 8U) | ((0x80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             << 5U) 
                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                               << 7U)) 
                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                  << 7U)) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U)) 
                                                 << 7U)))) 
                                 | ((0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 3U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 << 4U))) 
                                    | ((((0x3fffffe0U 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             >> 2U)) 
                                         | (0xffffffe0U 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                                           << 5U)) 
                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                               << 2U) 
                                              | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                    << 1U) 
                                                   & ((0x7ffffffeU 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                          >> 1U)) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled) 
                                                         << 1U))) 
                                                  | (0xfffffffeU 
                                                     & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                           << 1U) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 3U)) 
                                                           << 1U)))) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                     & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                         >> 2U) 
                                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 3U)))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & ((((((((
                                                   ((((- (IData)(
                                                                 ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4) 
                                                     | ((- (IData)(
                                                                   (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4))) 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))))) 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4)) 
                                                    | ((- (IData)(
                                                                  ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt))) 
                                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))))) 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4)) 
                                                   | ((- (IData)(
                                                                 ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4)) 
                                                  | ((- (IData)(
                                                                ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))) 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
                                                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                        ? 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec 
                                                        >> 1U)
                                                        : 
                                                       ((1U 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)
                                                         ? 
                                                        ((0x7ffffffeU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                             << 1U)))
                                                         : 
                                                        (0x7ffffffeU 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))))) 
                                                | (0x7ffffffeU 
                                                   & ((- (IData)(
                                                                 ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
                                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4)))) 
                                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))) 
                                               | ((- (IData)(
                                                             (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb))))) 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout)) 
                                              | ((- (IData)(
                                                            ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout)) 
                                             | ((- (IData)(
                                                           ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)))) 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)) 
                                            | ((- (IData)(
                                                          (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)))) 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                  >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = ((0x200U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                      << 1U)) | ((0x100U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            << 5U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                     << 7U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                     >> 7U))) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid) 
                                                   << 5U) 
                                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 2U))) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4) 
                                                            << 2U) 
                                                           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                 << 1U) 
                                                                | (0xfffeU 
                                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                       << 1U) 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                         >> 0x10U)))) 
                                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                            >> 0x11U))) 
                                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
              & ((((((((((((((((((((((((((((((((((((((((((((((((((((1U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))))) 
                                                                   | (1U 
                                                                      & ((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                            >> 3U)))) 
                                                                  | (1U 
                                                                     & ((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                           >> 4U)))) 
                                                                 | ((- (IData)(
                                                                               (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                    & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                                | ((- (IData)(
                                                                              (5U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 6U))) 
                                                                       << 1U) 
                                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                               | ((- (IData)(
                                                                             (6U 
                                                                              == 
                                                                              (0x3fU 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                  & ((0x7fffffeU 
                                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                          << 1U) 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 5U))) 
                                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                              | ((- (IData)(
                                                                            (7U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned))) 
                                                             | ((- (IData)(
                                                                           (8U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded))) 
                                                            | ((- (IData)(
                                                                          (0x1dU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                                           | ((- (IData)(
                                                                         (0x1eU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                          | ((- (IData)(
                                                                        (9U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                             & (((1U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                         | ((- (IData)(
                                                                       (0xaU 
                                                                        == 
                                                                        (0x3fU 
                                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                >> 1U) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))) 
                                                        | ((- (IData)(
                                                                      (0xbU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                           & (((2U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                       | ((- (IData)(
                                                                     (0xcU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((3U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (3U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                      | (((- (IData)(
                                                                     (0xdU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((2U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (2U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                     | (((- (IData)(
                                                                    (0xeU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                         & (((3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                             << 1U) 
                                                            | (3U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                    | ((- (IData)(
                                                                  (0xfU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                       & (((4U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           << 1U) 
                                                          | (4U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                   | ((- (IData)(
                                                                 (0x10U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                      & (5U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                  | ((- (IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                     & (6U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                 | ((- (IData)(
                                                               (0x11U 
                                                                == 
                                                                (0x3fU 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                    & (7U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                | ((- (IData)(
                                                              (0x13U 
                                                               == 
                                                               (0x3fU 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                   & (8U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                               | ((- (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                  & (9U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                              | ((- (IData)(
                                                            (0x15U 
                                                             == 
                                                             (0x3fU 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                 & (0xaU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                             | ((- (IData)(
                                                           (0x16U 
                                                            == 
                                                            (0x3fU 
                                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                & (0xbU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                            | ((- (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x3fU 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (0xcU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                           | ((- (IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x3fU 
                                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                              & ((((0xdU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                   | (0xeU 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                  << 1U) 
                                                 | ((0xdU 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                    | (0xeU 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))))) 
                                          | ((- (IData)(
                                                        (0x19U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & ((0xfffffeU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                       << 1U))) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                         | ((- (IData)(
                                                       (0x1aU 
                                                        == 
                                                        (0x3fU 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                            & ((0x1fffffeU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                      << 1U))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                        | ((- (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                           & ((0x7ffffffeU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                   >> 1U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                     << 1U))) 
                                              | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                  >> 3U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                       | ((- (IData)(
                                                     (0x1cU 
                                                      == 
                                                      (0x3fU 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall))) 
                                      | ((- (IData)(
                                                    (0x1dU 
                                                     == 
                                                     (0x3fU 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                     | ((- (IData)(
                                                   (0x1eU 
                                                    == 
                                                    (0x3fU 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                    | ((- (IData)((0x1fU 
                                                   == 
                                                   (0x3fU 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall))) 
                                   | ((- (IData)((0x20U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall))) 
                                  | ((- (IData)((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                 | ((- (IData)((0x22U 
                                                == 
                                                (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any))) 
                                | ((- (IData)((0x23U 
                                               == (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any))) 
                               | ((- (IData)((0x24U 
                                              == (0x3fU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any))) 
                              | ((- (IData)((0x25U 
                                             == (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)))) 
                             | ((- (IData)((0x26U == 
                                            (0x3fU 
                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                            | ((- (IData)((0x27U == 
                                           (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                           | ((- (IData)((0x28U == 
                                          (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4))) 
                          | ((- (IData)((0x29U == (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                 << 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))))) 
                         | (1U & ((- (IData)((0x2aU 
                                              == (0x3fU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                        | ((- (IData)((0x2bU == (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn))) 
                       | ((- (IData)((0x2cU == (0x3fU 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned))) 
                      | (1U & ((- (IData)((0x2dU == 
                                           (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                  >> 2U)))) | ((- (IData)(
                                                          (0x2eU 
                                                           == 
                                                           (0x3fU 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error))) 
                    | (1U & ((- (IData)((0x2fU == (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                >> 1U)))) | ((- (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy))) 
                  | (1U & ((- (IData)((0x31U == (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))))) 
                 | ((- (IData)((0x32U == (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                       & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 2U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((4U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                               << 2U)) 
                                                                           | (4U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                          | (4U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                             << 2U) 
                                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                            << 2U) 
                                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 3U) 
                                                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                           << 2U) 
                                                                          & ((0x1ffffff8U 
                                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 3U))) 
                                                                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 2U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 2U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 2U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 2U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                      << 2U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 3U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 2U)))) 
                                                                 | (0xfffffffcU 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        << 2U) 
                                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 1U) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 2U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                    << 2U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 3U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 2U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 2U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                  << 2U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 3U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 2U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 2U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                << 2U) 
                                                               & (((4U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 3U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 2U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 6U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 2U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 6U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 2U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 6U))))) 
                                                             & (7U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 6U))))) 
                                                            & (8U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 2U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 6U))))) 
                                                           & (9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 2U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 6U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 2U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 6U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 2U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 6U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 2U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 6U))))) 
                                                       << 2U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 3U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 6U))))) 
                                                      << 2U) 
                                                     & ((0x3fffff8U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 6U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 3U))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 2U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 6U))))) 
                                                     << 2U) 
                                                    & ((0x7fffff8U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 5U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 3U))) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 2U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 6U))))) 
                                                    << 2U) 
                                                   & ((0xfffffff8U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 1U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 3U))) 
                                                      | (0x7ffffffcU 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             >> 1U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 2U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 2U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 2U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 6U))))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 2U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 2U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 2U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 6U))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 2U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 6U))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 2U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 6U))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 2U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 2U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 2U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 2U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                                      << 2U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 3U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 2U)))) 
                                 | (4U & (((- (IData)(
                                                      (0x2aU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                          << 2U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 2U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 2U)) 
                              | (4U & (((- (IData)(
                                                   (0x2dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 2U)) | (4U & (((- (IData)(
                                                             (0x2fU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  << 2U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    << 1U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 6U))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 2U)) | (4U & (((- (IData)(
                                                           (0x31U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                               << 2U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 4U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x10U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                               << 4U)) 
                                                                           | (0x10U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 1U)))) 
                                                                          | (0x10U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                             << 4U) 
                                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                            << 4U) 
                                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 5U) 
                                                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                           << 4U) 
                                                                          & ((0x7fffffe0U 
                                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 1U))) 
                                                                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 4U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 4U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 4U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 4U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                      << 4U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 5U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 4U)))) 
                                                                 | (0xfffffff0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        << 4U) 
                                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 3U) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 4U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                    << 4U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 5U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 4U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 4U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                  << 4U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 5U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 4U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 4U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                << 4U) 
                                                               & (((4U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 5U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 4U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0xcU))))) 
                                                               & (5U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 4U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0xcU))))) 
                                                              & (6U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 4U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0xcU))))) 
                                                             & (7U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0xcU))))) 
                                                            & (8U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 4U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0xcU))))) 
                                                           & (9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 4U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0xcU))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 4U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0xcU))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 4U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0xcU))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 4U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0xcU))))) 
                                                       << 4U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 5U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xcU))))) 
                                                      << 4U) 
                                                     & ((0xfffffe0U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 4U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 5U))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 4U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0xcU))))) 
                                                     << 4U) 
                                                    & ((0x1fffffe0U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 3U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 5U))) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 4U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xcU))))) 
                                                    << 4U) 
                                                   & ((0xffffffe0U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 3U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 5U))) 
                                                      | (0xfffffff0U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 1U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 4U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 4U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0xcU))))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 4U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0xcU))))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 4U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xcU))))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 4U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 4U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 4U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 4U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xcU))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 4U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 4U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 4U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 4U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                                      << 4U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 5U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 4U)))) 
                                 | (0x10U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 4U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 4U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 4U)) 
                              | (0x10U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           << 4U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 2U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 4U)) | (0x10U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             << 4U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 3U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0xcU))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 4U)) | (0x10U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 4U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 6U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x40U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                               << 6U)) 
                                                                           | (0x40U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 3U)))) 
                                                                          | (0x40U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                            << 6U) 
                                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 7U) 
                                                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                           << 6U) 
                                                                          & ((0xffffff80U 
                                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                << 1U))) 
                                                                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 6U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 6U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 6U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 6U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                      << 6U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 7U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 6U)))) 
                                                                 | (0xffffffc0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        << 6U) 
                                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 5U) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 6U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                    << 6U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 7U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 6U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 6U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                  << 6U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 7U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 6U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 6U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                << 6U) 
                                                               & (((4U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 7U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 6U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x12U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 6U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x12U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 6U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x12U))))) 
                                                             & (7U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x12U))))) 
                                                            & (8U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 6U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x12U))))) 
                                                           & (9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 6U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x12U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 6U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x12U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 6U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x12U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 6U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x12U))))) 
                                                       << 6U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 7U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x12U))))) 
                                                      << 6U) 
                                                     & ((0x3fffff80U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 2U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 7U))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 6U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x12U))))) 
                                                     << 6U) 
                                                    & ((0x7fffff80U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 7U))) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 6U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x12U))))) 
                                                    << 6U) 
                                                   & ((0xffffff80U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 5U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 7U))) 
                                                      | (0xffffffc0U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 3U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 6U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 6U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x12U))))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 6U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0x12U))))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 6U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x12U))))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 6U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 6U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 6U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 6U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x12U))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 6U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 6U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 6U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 6U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                                      << 6U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 7U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 6U)))) 
                                 | (0x40U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 6U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 6U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 6U)) 
                              | (0x40U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           << 6U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 4U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 6U)) | (0x40U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             << 6U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 5U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0x12U))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 6U)) | (0x40U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 6U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__91(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__91\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                               >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (0xfffffffeU & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                             << 0xbU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                                               >> 0x15U))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (0xfffffffcU & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                               >> 0xaU))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (0xfffffff8U & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                               >> 0x1fU))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
            << 0x31U) | (((QData)((IData)(((((0U != 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
                                            << 0x1fU) 
                                           | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2))) 
                          << 0x11U) | (QData)((IData)(
                                                      ((0x1ffe0U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                           << 1U)) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_q)
            ? (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)))) 
                  & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                 | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                      >> 1U)))) & (1U 
                                                   | (4U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                     >> 2U)))) & (4U 
                                                  | (2U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
               | (2U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                          >> 3U)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))
            : (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
                  & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))) 
                 | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                      >> 1U)))) & (1U 
                                                   | (4U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                     >> 2U)))) & (4U 
                                                  | (2U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
               | (2U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                          >> 3U)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout) 
                       >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2 
        = ((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2 
        = (((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
            & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr_ff)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout) 
                   >> 1U)) & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))
                               : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))))
            : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2)))
                : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                             ? 2U : 0U) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                            ? 5U : 0U))
                     : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                             ? 3U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                      ? 0U : (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                               ? 4U
                                               : ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                                    ? 2U
                                                    : 0U)))))
                         : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                             ? 1U : 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2) 
               & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                  | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
              & (~ ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err_ff)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt))) 
                  & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
             & (~ ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
           | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__faddrf2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xfffffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))
                          ? (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 3U) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2 
        = (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1 
        = ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                           >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle))) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                                              & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed)) 
                                                 << 1U)) 
                                             & ((~ 
                                                 (((((((2U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                                                      | (0U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout)))) 
                                                << 1U)) 
                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                               << 1U))))) 
           | (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                         & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)))) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right 
        = (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
            | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2 
        = ((0xffffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                             << 7U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                       << 1U)) & ((
                                                   ((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                      >> 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                        >> 1U))) 
                                                   & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                  << 7U))) 
           | ((0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                          << 1U)) & 
                              (((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                    >> 2U)) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                  >> 1U))) 
                               << 6U))) | ((0xffffffe0U 
                                            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                 << 5U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                   << 1U)) 
                                               & ((((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                      >> 2U)) 
                                                    & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                   | ((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                        >> 2U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                          >> 1U)))) 
                                                  << 5U))) 
                                           | ((0xfffffff0U 
                                               & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                    << 4U) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                       >> 2U)) 
                                                     << 4U))) 
                                              | ((0xfffffff8U 
                                                  & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                       << 3U) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                         << 1U)) 
                                                     & ((((~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                            >> 1U)) 
                                                          & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                         | (~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                             >> 2U))) 
                                                        << 3U))) 
                                                 | ((0xfffffffcU 
                                                     & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          << 2U) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                            << 1U)) 
                                                        & (((~ 
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                              >> 1U)) 
                                                            | (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                >> 2U))) 
                                                           << 2U))) 
                                                    | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2)) 
                                                         & (((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout) 
                                                             | (~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                 >> 1U))) 
                                                            | (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                >> 2U)))) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                      | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                       >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout)))))
            ? (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
               | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((((1U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                        | (2U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                       | (7U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 1U)))) | (3U 
                                                & ((- (IData)(
                                                              ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                      >> 2U)))) 
                     | (1U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 3U)))) | (0xeU 
                                              & ((- (IData)(
                                                            ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                    << 1U)))) 
                   | ((- (IData)((1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left))) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr_in 
        = ((((1U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
             | (2U & (- (IData)(((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)))))) 
            | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (1U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                   | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2 
        = (1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen 
        = ((((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            << 2U) | ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
                       << 1U) | ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))
                           ? (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
                               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc)) 
                              | ((- (IData)((1U & (
                                                   ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))))) 
                                 & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                                       & ((IData)(1U) 
                                          + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                      | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                         & ((IData)(2U) 
                                            + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                        & ((IData)(3U) 
                                           + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                       & ((IData)(4U) 
                                          + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val_in 
        = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off_in 
        = (7U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off_in 
        = (7U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off_in 
        = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__92(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__92\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((((1U 
                                                & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U)))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                    >> 0x11U))))))) 
                                              | (4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                   >> 0x11U))))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din 
        = ((0xff000000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 0x18U)) 
           | (((0x780000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 0x15U)) << 0x13U)) 
               | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x1aU)))) 
                    & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                               >> 0x14U))) << 0x12U) 
                  | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1aU)))) 
                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x13U))) << 0x11U) 
                     | (0x10000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x12U)) 
                                    << 0x10U))))) | 
              (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                       ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din 
                          >> 0x10U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__93(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__93\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spsr 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spif) 
            << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wcol) 
                       << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty) 
                                             << 2U) 
                                            | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp) 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                                << 1U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp)) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spsr 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif) 
            << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wcol) 
                       << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty) 
                                             << 2U) 
                                            | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                << 1U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb))))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__94(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__94\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1671[5];
    // Body
    __Vtemp1671[0U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                        >> 0x18U))));
    __Vtemp1671[1U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                                        >> 0x18U))));
    __Vtemp1671[2U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                                        >> 0x18U))));
    __Vtemp1671[3U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                                        >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U] 
        = __Vtemp1671[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
        = __Vtemp1671[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
        = __Vtemp1671[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
        = __Vtemp1671[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
        = (0xffU & (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 1U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                             << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                          >> 8U)))) 
                     | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                            << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                         >> 0x10U)))) 
                    | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                          >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_data_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffffffULL & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff)
                              ? ((((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 4U))))) 
                                     & (((QData)((IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
                                                             >> 0x14U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0xfffff000U 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
                                                               << 0xcU)) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status) 
                                                               << 4U) 
                                                              | (0U 
                                                                 != 
                                                                 (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout)) 
                                                                  & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff))))))))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                              >> 8U))))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U]))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                             >> 7U))))) 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U])) 
                                               >> 2U))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 6U))))) 
                                     & (((QData)((IData)(
                                                         vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                              >> 4U))))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                           >> 5U))))) 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                        >> 6U)))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2 
        = ((0xc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U]) 
           | ((0x30U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U]) 
              | ((0xcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U]) 
                 | (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
               << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
                            >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)((((QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                           >> 6U)))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                     << 0x1cU) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                       >> 4U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)(((((QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                            >> 6U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                      << 0x1cU) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                        >> 4U))))) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U];
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U];
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__95(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__95\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                       | ((((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                             >> 0x18U))) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                               >> 0x13U)) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                          & (~ (IData)((0U != (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))))
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din
                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__96(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__96\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__wfre;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__wfre;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr) {
            if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr 
                    = (0xffU & (0x10U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr = 0x10U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr 
                    = (0xffU & (0x10U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr = 0x10U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr 
        = ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper) 
                    << 2U)) | (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr 
        = ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper) 
                    << 2U)) | (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
        } else {
            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 1U;
                        if ((1U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 1U;
                        if ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                                = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low)));
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 7U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr));
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0xfU;
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 5U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 4U;
                        }
                    } else {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 6U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w 
                                = (0U == (0xfU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                     >> 0xaU))));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 2U;
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                << 0x12U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                  >> 0xeU)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                        >> 0x12U));
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                << 0x16U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                  >> 0xaU)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        >> 0x12U));
                            }
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 1U;
                        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                              >> 0x12U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                   | (0x3ffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                                                  << 7U) 
                                                 | (0x7eU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
                                                       >> 0x19U)))));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 0U;
                            if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w 
                                    = (0U == (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                  << 0x16U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                    >> 0xaU))));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                    = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 2U;
                                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w) {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                      >> 0xeU)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                              >> 0x12U));
                                } else {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                    << 0x16U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                      >> 0xaU)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                              >> 0x12U));
                                }
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 1U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                    = (0x3fffU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                   << 0x1eU) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
                                                     >> 2U)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0xfU;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
            ? 0U : (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                          >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7feU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (0x2000U == (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7fdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1800U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7fbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1400U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7f7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x12c0U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7efU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1280U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7dfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1240U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7bfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1200U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x77fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1100U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x6ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1040U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x5ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1000U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0U == (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                     << 2U))) << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid) 
                             << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid) 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U]) 
           | (0xfffffffeU & (2U | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata) 
                                                  << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata) 
                  >> 0x1cU)) | (0xfffffffeU & ((0xeU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xfffffffeU & ((0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rid) 
                                                << 4U)) 
                                | (0xeU & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                                                    >> 0x20U)) 
                                           >> 0x1cU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xffe00000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready) 
                              << 0x17U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready) 
                                            << 0x16U) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready) 
                                              << 0x15U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0xaU;
    }
    if ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 9U;
    }
    if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 8U;
    }
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 7U;
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 6U;
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 5U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 4U;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc) 
              << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_err = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_err = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 8U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 7U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfre 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfre 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wr_spsr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wr_spsr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__97(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__97\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_rdt;
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_dat;
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_dat;
    if ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_hrc;
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[4U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_hrc;
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[5U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_hrc;
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[6U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[3U] 
            = ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_lrc
                : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl)
                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr));
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[4U] 
            = ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_lrc
                : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl)
                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr));
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[5U] 
            = ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_lrc
                : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl)
                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr));
        vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[6U] 
            = ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc
                : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[7U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2_rdt;
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[8U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi_rdt;
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[9U] 
        = (IData)((((QData)((IData)(((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                      ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                 >> 0x20U))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat))));
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[0xaU] 
        = (IData)(((((QData)((IData)(((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                       ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                  >> 0x20U))
                                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat 
        = ((0x15fU >= (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                 << 5U))) ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                   << 5U)))
                                               ? 0U
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                       << 5U))))) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellinp__wb_mux_io__wbs_dat_i[
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                    << 5U))))
            : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__98(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__98\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0xe0000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U]);
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0x1fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | (0xe0000000U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                             << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
        = (0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                          >> 3U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__99(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__99\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
            = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in
                : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk)));
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints;
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                        = (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig);
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe)
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in));
        }
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat 
            = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_in
                : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_in
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk)));
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ints;
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat 
                        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat 
                        = (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig);
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat 
                = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe)
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_in));
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err 
        = (((0xaU >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_err) 
                 << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err) 
                            << 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_err) 
                                      << 1U))) >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack 
        = ((0xaU >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack) 
                << 0xaU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack) 
                             << 9U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack) 
                                        << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack) 
                                                   << 7U) 
                                                  | ((0xffffffc0U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                                            << 6U))) 
                                                     | ((0xffffffe0U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                                               << 5U))) 
                                                        | ((0xfffffff0U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                                                  << 4U))) 
                                                           | ((0xfffffff8U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                                                     << 3U))) 
                                                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_ack) 
                                                                     << 1U) 
                                                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_uart_ack))))))))))) 
              >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__100(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__100\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
        = (0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                         >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfff00000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                              << 0x18U) | (0xf00000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                              >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                       >> 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                        << 8U)) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                                   >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                      << 0x10U)) | 
                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                         >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                             << 8U)));
}
