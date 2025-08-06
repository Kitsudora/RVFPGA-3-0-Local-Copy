// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__3\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden 
            = ((6U & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                      << 1U)) | (1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren 
            = ((6U & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                      << 1U)) | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 1U))));
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = 0U;
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = 0U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                  >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                               >> 2U))));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__4\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = ((IData)(vlTOPp->i_jtag_trst_n) ? (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                 >> 1U))
                                              ? vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                                              : (0x1fffffffffcULL 
                                                 & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))
            : 0ULL);
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.o_jtag_tdo = (1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__6\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->i_jtag_trst_n) {
        if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else {
            if ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                    = ((0U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                        ? 0x1fU : (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | (0x10U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | ((0x11U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
              << 1U));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__7\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.o_led = (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_data);
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__8\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    if (vlTOPp->i_jtag_trst_n) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
            = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
            = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = 0ULL;
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__9\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en = (1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                        >> 1U) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                           >> 2U)))));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__10\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vtableidx1 = (((IData)(vlTOPp->i_jtag_tms) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = vlSymsp->TOP__rvfpgasim.__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate
        [vlSymsp->TOP__rvfpgasim.__Vtableidx1];
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlTOPp->i_jtag_tdi))));
    } else {
        if ((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = (0x1fffffffffeULL & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                        = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                           << 2U);
                } else {
                    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
                    }
                }
            }
        } else {
            if ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                    = (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                        << 4U) | (QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                             >> 1U))))));
            } else {
                if ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__11\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n 
        = (1U & (~ (IData)(vlTOPp->rst)));
}
