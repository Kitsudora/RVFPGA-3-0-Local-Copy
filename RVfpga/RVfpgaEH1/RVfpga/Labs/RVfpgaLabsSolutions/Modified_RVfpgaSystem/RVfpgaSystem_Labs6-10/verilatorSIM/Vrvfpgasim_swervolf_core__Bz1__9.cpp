// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__46(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__46\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                          << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                                      >> 0x16U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                        << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                                    >> 0x16U)))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = ((0x3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U]) 
           | (0xffffc000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = ((0xffe00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U]) 
           | ((0x3fffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__dccm_bank__Q 
                                                    >> 0x20U)) 
                                           << 0xeU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__47(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__47\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                          << 0x1fU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                       >> 1U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                        << 0x1fU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                     >> 1U)))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[3U]) 
           | (0xffe00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
                             << 0x15U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | ((0x1fffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q) 
                            >> 0xbU)) | (0xffe00000U 
                                         & ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__dccm_bank__Q 
                                                     >> 0x20U)) 
                                            << 0x15U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__48(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__48\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                          << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                       >> 0xcU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                        << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                     >> 0xcU)))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__4__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[4U]) 
           | (0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[5U] 
        = ((0xfffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q) 
                          >> 4U)) | (0xf0000000U & 
                                     ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = ((0xfffffff8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U]) 
           | (0xfffffffU & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__4__KET____DOT__dccm_bank__Q 
                                     >> 0x20U)) >> 4U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__49(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__49\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                          << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                    >> 0x17U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                        << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                                  >> 0x17U)))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__5__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U] 
        = ((7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[6U]) 
           | (0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                             << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U]) 
           | ((7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q) 
                     >> 0x1dU)) | (0xfffffff8U & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__5__KET____DOT__dccm_bank__Q 
                                                           >> 0x20U)) 
                                                  << 3U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__50(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__50\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                         >> 2U));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                       >> 2U))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__6__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U] 
        = ((0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[7U]) 
           | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                             << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = ((0xfffe0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U]) 
           | ((0x3ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q) 
                         >> 0x16U)) | (0xfffffc00U 
                                       & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__6__KET____DOT__dccm_bank__Q 
                                                   >> 0x20U)) 
                                          << 0xaU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__51(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__51\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                         >> 0xdU));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
                       >> 0xdU))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__7__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U] 
        = ((0x1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[8U]) 
           | (0xfffe0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                             << 0x11U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[9U] 
        = ((0x1ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__7__KET____DOT__dccm_bank__Q 
                                               >> 0x20U)) 
                                      << 0x11U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__52(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__52\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
        = (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U]) 
           | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__53(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__53\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                                  >> 2U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U]) 
           | (0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]) 
           | ((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                     >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                           >> 0x20U)) 
                                                  << 2U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__54(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__54\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                  >> 4U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]) 
           | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
        = ((0xffffffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U]) 
           | ((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                               >> 0x20U)) 
                                      << 4U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__55(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__55\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x1000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x1000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
        = ((0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U]) 
           | (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U]) 
           | ((0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                        >> 0x1aU)) | (0xffffffc0U & 
                                      ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                >> 0x20U)) 
                                       << 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__56(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__56\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U]) 
           | (0xffffff00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
        = ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U]) 
           | ((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                >> 0x20U)) 
                                       << 8U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__57(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__57\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                                  >> 2U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
        = ((0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U]) 
           | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U]) 
           | ((0x3ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                         >> 0x16U)) | (0xfffffc00U 
                                       & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                   >> 0x20U)) 
                                          << 0xaU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__58(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__58\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                  >> 4U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U]) 
           | (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
        = ((0xffffc000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U]) 
           | ((0xfffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                         >> 0x14U)) | (0xfffff000U 
                                       & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                   >> 0x20U)) 
                                          << 0xcU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__59(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__59\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x2000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x2000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
        = ((0x3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U]) 
           | (0xffffc000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U]) 
           | ((0x3fffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                    >> 0x20U)) 
                                           << 0xeU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__60(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__60\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
        = ((0xfffc0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U]) 
           | ((0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                          >> 0x10U)) | (0xffff0000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                    >> 0x20U)) 
                                           << 0x10U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__61(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__61\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                                  >> 2U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U]) 
           | (0xfffc0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU]) 
           | ((0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                           >> 0xeU)) | (0xfffc0000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                    >> 0x20U)) 
                                           << 0x12U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__62(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__62\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                  >> 4U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU]) 
           | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
        = ((0xffc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU]) 
           | ((0xfffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                           >> 0xcU)) | (0xfff00000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                    >> 0x20U)) 
                                           << 0x14U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__63(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__63\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x4000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x4000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
        = ((0x3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU]) 
           | (0xffc00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
        = ((0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU]) 
           | ((0x3fffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                            >> 0xaU)) | (0xffc00000U 
                                         & ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                     >> 0x20U)) 
                                            << 0x16U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__64(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__64\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U]))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
        = ((0xfc000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU]) 
           | ((0xffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q) 
                            >> 8U)) | (0xff000000U 
                                       & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__Q 
                                                   >> 0x20U)) 
                                          << 0x18U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__65(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__65\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U])) 
                                                  >> 2U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
        = ((0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU]) 
           | (0xfc000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU]) 
           | ((0x3ffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q) 
                             >> 6U)) | (0xfc000000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__Q 
                                                    >> 0x20U)) 
                                           << 0x1aU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__66(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__66\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x800U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U])) 
                                                  >> 4U))));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x800U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU]) 
           | (0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
        = ((0xc0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU]) 
           | ((0xfffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q) 
                             >> 4U)) | (0xf0000000U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__Q 
                                                    >> 0x20U)) 
                                           << 0x1cU))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__67(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__67\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    QData/*33:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 0U;
    if ((0x8000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = (0x3ffffffffULL & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U])) 
                                               >> 6U)));
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
        = ((0x8000U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU]) 
           | (0xc0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
        = ((0x3fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__Q 
                                                >> 0x20U)) 
                                       << 0x1eU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__68(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__68\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))
            ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
        = ((0xffe00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__69(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__69\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))
            ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
           | (0xffe00000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
                             << 0x15U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]) 
           | (0x1fffffU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
                           >> 0xbU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__70(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__70\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))
            ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((0x800003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]) 
           | (0xfffffc00U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
                             << 0xaU)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__71(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__71\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    IData/*20:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))
            ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]) 
           | (0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
                             << 0x1fU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
        = (0x7fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__Q 
                          >> 1U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__72(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__72\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]) 
           | (0xffffff00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U]) 
           | (0xffffff00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0xbU] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0xbU]) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xffff0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                             << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xfff0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xff0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority) 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xf0ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           | (0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
        = ((0xf0ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]) 
           | (0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
        = ((0xffffff0fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U]) 
           | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                             << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
        = ((0xfffff0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U]) 
           | (0xffffff00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
        = ((0xfff0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
            >> 9U) & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
            >> 0x1eU) & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
            >> 0x13U) & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                     >> 0xcU));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                     >> 1U));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                     >> 0x16U));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
            >> 0x18U) & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
            >> 0xdU) & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
            >> 2U) & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__eclk_gate 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__gate_clk_pad_i) 
                 ^ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__hrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_hrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__lrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_lrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__eclk_gate 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__gate_clk_pad_i) 
                 ^ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__hrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_hrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__lrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_lrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__eclk_gate 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__gate_clk_pad_i) 
                 ^ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__hrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_hrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__lrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_lrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__eclk_gate 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__gate_clk_pad_i) 
                 ^ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__hrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr 
              == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__pl_in_q 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                    ? (~ ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[6U] 
                           << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                        >> 0x10U)))
                    : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[6U] 
                        << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                     >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]) 
           < (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                       << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                    >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                     << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                  << 0x14U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                    >> 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                     << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                       >> 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                     << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                  << 4U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                    >> 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]) 
           < (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                       << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                    >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0xcU))) < (0xfU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                      >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                     << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                 >> 0x14U))) < (0xfU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                      >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                     << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                               >> 0x1cU))) < (0xfU 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                     << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                                  << 4U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                    >> 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]) 
           < (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                       << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                    >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                     << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                  >> 4U))) < (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                                    >> 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
        } else {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
        } else {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
        } else {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1)) 
                      << (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1)) 
                      << (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ (0xfffULL << (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n) 
                   | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1)) 
                      << (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                              << 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                            << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                      >> 0x1dU))) << 
                  (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                           << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 2U))));
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                        << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                  >> 0x1dU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                              << 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                        >> 0x12U))) 
                  << (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                              << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 2U))));
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                    >> 0x12U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                                              << 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | ((0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                            << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                         >> 7U))) << 
                  (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
                           << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 2U))));
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                     >> 7U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                      >> 8U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 4U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]);
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                   >> 0x18U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0xcU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                         << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                      >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 8U)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                      >> 8U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                    >> 0x14U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0x10U)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                   >> 0x18U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                         << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                      >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                        << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x18U)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                      >> 8U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 4U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]);
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0x10U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                         << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                   >> 0x18U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0xcU)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U] 
                         << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                      >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x18U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U] 
                         << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                      >> 8U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                    >> 0x14U)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U] 
                         << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                   >> 0x18U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x1cU)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                         << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                   >> 0x18U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                         << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                      >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                        << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x18U)));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[7U] 
                         << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                      >> 8U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                     >> 4U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]);
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[9U] 
                         << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                      >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                        << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                     >> 8U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[9U] 
                         << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                      >> 8U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                        << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                     >> 4U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                    >> 0xdU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                >> 0xfU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                    >> 0xdU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                >> 0xfU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                    >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                              >> 4U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                    >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                              >> 4U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                    >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                 >> 0x19U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                    >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                 >> 0x19U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x20000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                            << 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                  << (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                            << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x16U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                            << 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                  << (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                            << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfffffff0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
                             << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
        = ((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                                                 << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | ((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                                      << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                                            << 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o) 
                  << (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q) 
                            << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
                        >> 0x18U)) | (0xffffff00U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
                                       << 8U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__73(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__73\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0xffe1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | (0x1e0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                           >> 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U]) 
           | (0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
        = (1U | ((0xfffffe00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data) 
                                 << 9U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen) 
                                             & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)))) 
                                            << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
        = ((0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data) 
                      >> 0x17U)) | (0xfffffe00U & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data 
                                                            >> 0x20U)) 
                                                   << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0xfffffe00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | (0x1ffU & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data 
                                 >> 0x20U)) >> 0x17U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | (0xfe000000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                          : 
                                                         (0xfffffff8U 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (0x100U 
                                                                     | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                           : 3U) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                             ? 0U
                                                                             : 0xfU) 
                                                                           << 3U)))))))) 
                             << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
        = ((0x1ffffffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                    << 0x35U) | (((QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                    : 
                                                                   (0xfffffff8U 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (0x100U 
                                                                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                          : 3U) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                            ? 0U
                                                                            : 0xfU) 
                                                                          << 3U)))))))) 
                          >> 7U)) | (0xfe000000U & 
                                     ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                      : 
                                                                     (0xfffffff8U 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x100U 
                                                                      | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                            : 3U) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                              ? 0U
                                                                              : 0xfU) 
                                                                            << 3U))))))) 
                                               >> 0x20U)) 
                                      << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0xfffc0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | (0x1ffffffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                          : 
                                                         (0xfffffff8U 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (0x100U 
                                                                     | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                           : 3U) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                             ? 0U
                                                                             : 0xfU) 
                                                                           << 3U))))))) 
                                     >> 0x20U)) >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                          : 
                                                         (0xfffffff8U 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (0x100U 
                                                                     | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                           : 3U) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                             ? 0U
                                                                             : 0xfU) 
                                                                           << 3U)))))))) 
                             << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
        = ((0xe0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U]) 
           | ((0xfU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                 << 0x35U) | (((QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                 : 
                                                                (0xfffffff8U 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                               << 0x15U) 
                                              | (QData)((IData)(
                                                                (0x100U 
                                                                 | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                       ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                       : 3U) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                         ? 0U
                                                                         : 0xfU) 
                                                                       << 3U)))))))) 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                                                      : 
                                                                     (0xfffffff8U 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x100U 
                                                                      | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                                                                            : 3U) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                                                              ? 0U
                                                                              : 0xfU) 
                                                                            << 3U))))))) 
                                               >> 0x20U)) 
                                      << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((0xffffff87U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | (0x78U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                       >> 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((0x7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | (0xfffff800U & ((IData)((0xd7cULL | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                                                   << 0x35U) 
                                                  | ((QData)((IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                                      << 3U))) 
                                                     << 0x15U)))) 
                             << 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U] 
        = ((0x7ffU & ((IData)((0xd7cULL | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                                            << 0x35U) 
                                           | ((QData)((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                               << 3U))) 
                                              << 0x15U)))) 
                      >> 0x15U)) | (0xfffff800U & ((IData)(
                                                           ((0xd7cULL 
                                                             | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                                                                 << 0x35U) 
                                                                | ((QData)((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                                                << 3U))) 
                                                                   << 0x15U))) 
                                                            >> 0x20U)) 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]) 
           | (0x7ffU & ((IData)(((0xd7cULL | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
                                               << 0x35U) 
                                              | ((QData)((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                                  << 3U))) 
                                                 << 0x15U))) 
                                 >> 0x20U)) >> 0x15U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
                             << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU]) 
           | (0xfffffe00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__lsu_awvalid) 
                             << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U]) 
           | (0xfc000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__lsu_arvalid) 
                             << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
        = ((0x9fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U]) 
           | (0xe0000000U & (0x20000000U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__lsu_wvalid) 
                                            << 0x1eU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data 
        = (((QData)((IData)((1U & (VL_REDXOR_32(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any) 
                                   ^ VL_REDXOR_32((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT__ecc_out_temp)))))) 
            << 0x26U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode__DOT__ecc_out_temp)) 
                          << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
              & (0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                              >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (3U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (4U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (5U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (6U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wren) 
               & (7U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)))) << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U] 
        = (IData)((0x3ffffffffULL & (((0U == (3U & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                            >> 2U)))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                      ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                         >> 0x13U) : 
                                     (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U]) 
           | (IData)(((0x3ffffffffULL & (((0U == (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                             >> 2U)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                             >> 0x13U)
                                          : (((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U]) 
           | (0xfffffffcU & ((IData)((0x3ffffffffULL 
                                      & (((1U == (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                             >> 2U)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                             >> 0x13U)
                                          : (((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                >> 2U))))) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U]) 
           | ((3U & ((IData)((0x3ffffffffULL & (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                              >> 2U)))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                 >> 0x13U)
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                    >> 2U))))) 
                     >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                          ((0x3ffffffffULL 
                                                            & (((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                             >> 2U)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                                                ? 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                >> 0x13U)
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                                   >> 2U)))) 
                                                           >> 0x20U)) 
                                                  << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U]) 
           | (0xfffffff0U & ((IData)((0x3ffffffffULL 
                                      & (((2U == (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                             >> 2U)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                             >> 0x13U)
                                          : (((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[0U])))))) 
                             << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
        = ((0xffffffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U]) 
           | ((0xfU & ((IData)((0x3ffffffffULL & ((
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                >> 2U)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                                   ? 
                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                   >> 0x13U)
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[0U])))))) 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     ((IData)(((0x3ffffffffULL 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                 >> 2U)))) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                                    ? 
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                    >> 0x13U)
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[0U]))))) 
                                               >> 0x20U)) 
                                      << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
        = ((0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U]) 
           | (0xffffffc0U & ((IData)((0x3ffffffffULL 
                                      & (((3U == (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                             >> 2U)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                             >> 0x13U)
                                          : (((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                >> 2U))))) 
                             << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
        = ((0x3fU & ((IData)((0x3ffffffffULL & (((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                              >> 2U)))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                 >> 0x13U)
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                    >> 2U))))) 
                     >> 0x1aU)) | (0xffffffc0U & ((IData)(
                                                          ((0x3ffffffffULL 
                                                            & (((3U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                             >> 2U)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt))
                                                                ? 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                >> 0x13U)
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[2U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_wr_data[1U])) 
                                                                   >> 2U)))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q 
        = (0xffU & ((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                    >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                     ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                >> 4U)) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xfff0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
               & (- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                      >> 2U)))))) | 
              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
               & (- (IData)((0U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                  >> 2U)))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xff0fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
                & (- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 2U)))))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                  & (- (IData)((1U == (3U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                     >> 2U)))))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xf0ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
                & (- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                    >> 2U))))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                                                  & (- (IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                            >> 2U)))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
                & (- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                    >> 2U))))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                                                  & (- (IData)(
                                                               (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                            >> 2U)))))))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wr_data 
        = (0x1fffffU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                          >> 0x12U))))
                         ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                    >> 0x1fU)) : ((0x100000U 
                                                   & (VL_REDXOR_32(
                                                                   (0xfffffU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                                       >> 0xbU))) 
                                                      << 0x14U)) 
                                                  | (0xfffffU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                        >> 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q 
        = (0x3fU & ((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                    >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                     ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                >> 6U)) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ic_wr_en) 
            & (- (IData)((7U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 2U)))))) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_wr_way_en));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__core_rst_l) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
        = ((0xfffff800U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]) 
           | (0x7ffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                            >> 5U) : (((0U == (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                >> 2U))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                       ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                          >> 5U) : 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                       >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
        = ((0xffc007ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]) 
           | (0x3ff800U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                >> 5U) : (((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                      >> 2U))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                           ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                              >> 5U)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 5U))) 
                           << 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
        = ((0x3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]) 
           | (0xffc00000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                  >> 5U) : (((2U == 
                                              (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                >> 2U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                >> 5U)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                >> 5U))) 
                             << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (1U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                         >> 5U) : (((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                  >> 2U))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                       >> 5U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                 >> 5U))) 
                    >> 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0xfffff001U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (0xffeU & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                             >> 5U) : (((3U == (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                   >> 2U))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                           >> 5U) : 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                        >> 5U))) << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0xff800fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (0x7ff000U & (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                >> 5U) : (((4U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                      >> 2U))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                           ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                              >> 5U)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 5U))) 
                           << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
        = ((0x7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U]) 
           | (0xff800000U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                  >> 5U) : (((5U == 
                                              (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                >> 2U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                >> 5U)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                >> 5U))) 
                             << 0x17U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
        = ((0xfffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U]) 
           | (3U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                         >> 5U) : (((5U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                  >> 2U))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                       >> 5U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                 >> 5U))) 
                    >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
        = ((0xffe003U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U]) 
           | (0x1ffcU & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                              >> 5U) : (((6U == (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                    >> 2U))) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                            >> 5U) : 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                         >> 5U))) << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U] 
        = ((0x1fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[2U]) 
           | (0xffe000U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                >> 5U) : (((7U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                      >> 2U))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                           ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                              >> 5U)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 5U))) 
                           << 0xdU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                              >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                           >> 0xaU)))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                       >> 7U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 8U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 0x11U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                               >> 8U))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                       >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb 
        = ((0xffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb) 
           | ((0x200U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                          >> 0x12U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 8U))) | (
                                                   (0x180U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                       >> 0xcU)) 
                                                   | ((0x40U 
                                                       & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                            >> 0x15U) 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                              >> 0xbU)) 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                             >> 6U))) 
                                                      | ((0x20U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                             >> 6U)) 
                                                         | ((0x18U 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                >> 3U)) 
                                                            | ((4U 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                   & ((~ 
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                        >> 0x13U)) 
                                                                      << 2U))) 
                                                               | ((2U 
                                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                                                  | (1U 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                                            >> 0x13U))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                    >> 9U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                   >> 4U)))) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done) 
                 | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xfU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 5U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x7a2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x7a2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
             & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x7a2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
              & (0x7a2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
             & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0x11U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4 
        = ((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0x11U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_ns) 
                 & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 1U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                   >> 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4 
        = ((~ ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                           >> 0x11U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                         >> 6U))) & 
           (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp) 
                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d)) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__legal_csr) 
                           & ((~ (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc)) 
                                      | ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x1eU) 
                                           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                 >> 0x18U))) 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 0x16U)) 
                                         & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                               >> 0x15U)))) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1)) 
                                  | ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                        >> 0x1eU) & 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                        >> 0x17U)) 
                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                         >> 0x15U)) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                        >> 0x14U)))) 
                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                 >> 0x11U)))) & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                                                  & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid) 
                                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid)) 
                                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid)) 
                                                       | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            >> 0x1eU) 
                                                           & (~ 
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 0x1bU))) 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 0x16U))) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac)) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel 
                   + (IData)((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ns 
        = (0x3ffU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x7a1U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                             >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                         | ((0x100U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        << 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0))) 
                            | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ns 
        = (0x3ffU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x7a1U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
                       & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                             >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                         | ((0x100U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                            | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ns 
        = (0x3ffU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x7a1U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
                       & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                             >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                         | ((0x100U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                            | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ns 
        = (0x3ffU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0x7a1U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U))))) 
                       & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                      & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                             >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb
                      : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)) 
                         | ((0x100U & ((0x7fffff00U 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 1U)) 
                                       | (0xffffff00U 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))) 
                            | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                           >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                           >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
           & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                           >> 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
            & (0x7c8U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? ((0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                            >> 8U)) | ((0xc000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                   >> 6U)) 
                                       | (0x3fffU & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                           >> 2U))))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dicawics_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x7c9U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x7caU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x7b1U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod)) 
           & (0x7b0U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0x14U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                  >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            >> 3U))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb)) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
           & (~ ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state) 
                    & (0U == (0x7fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data 
                                             >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4 
        = ((((8U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                             >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
              >> 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4 
        = (((0xcU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                              >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
             >> 0x14U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                              >> 0x23U)))) & (~ (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                         >> 0x24U)))) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                         >> 0x25U))) & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                   >> 0x22U)))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4 
        = (((9U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                            >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4 
        = ((((8U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                             >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                 >> 0xdU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4 
        = (((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                >> 0x19U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
             >> 0x16U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
             >> 0x15U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_incr))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_incr))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_incr))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_incr))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data_valid))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1_ff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data_valid))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb)
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                      : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data 
                                 >> 0x20U))) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4 
        = (1U & (((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0x11U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                    >> 2U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb))) 
                 | ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0x15U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0x11U))) 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                           >> 2U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                          >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1 
        = (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                      >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                    & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                           >> 4U) & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))))) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
            >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
            >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4 
        = (1U & (((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                      & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 4U)) & (~ ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                            >> 1U)) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected)))) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                          >> 0xeU))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0xeU))) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 3U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0x15U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 8U) | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                  >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mhwakeup) 
                                & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                       >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                                                  >> 2U)))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                               >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4 
        = ((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0x11U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4 
        = (((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x11U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U))) & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                   >> 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                >> 0x11U)) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4)) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfpc_dc4))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank0_rd_data_f2_in) 
                << 0xeU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank1_rd_data_f2_in) 
                             << 0xcU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank2_rd_data_f2_in) 
                                          << 0xaU) 
                                         | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank3_rd_data_f2_in) 
                                             << 8U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank4_rd_data_f2_in) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank5_rd_data_f2_in) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank6_rd_data_f2_in) 
                                                      << 2U) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank7_rd_data_f2_in))))))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
        = ((((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
              | ((- (IData)((1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)))))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout)) 
             | ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2)) 
            | ((- (IData)(((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
           | (0x7ffffff8U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))) 
                             & (((IData)(1U) + (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                                >> 3U)) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_en 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4 
        = (0x7fffffffU & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__smallnum_case)
                                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_path_e1
                                 : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                                     ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__npc_any_ff__dout
                                     : ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout 
                                                >> 0x1fU) 
                                               & (~ 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                                                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout)))))
                                         ? ((1U & (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                    ? 
                                                   ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken))) 
                                                     | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                                         >> 3U) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken))) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__any_jal)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e4_ff__dout) 
                                                    >> 1U)))
                                             ? (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                        >> 1U))
                                             : ((1U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4
                                                 : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout))
                                         : ((1U & (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                    ? 
                                                   ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken))) 
                                                     | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                                         >> 3U) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken))) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__any_jal)))
                                                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e4_ff__dout)))
                                             ? (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                        >> 1U))
                                             : ((2U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__sec_decode_e4_ff__dout))
                                                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4
                                                 : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout 
                                                            >> 0x20U)))))))) 
                            | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4))) 
                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout)) 
                          | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4)))))) 
                             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_en) 
                 | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                            >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0x11U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                >> 1U))) << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
              & ((~ (IData)((0U != (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 1U))))) 
                 | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                            >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
               & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                      >> 2U)) | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                         >> 1U)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
               & ((~ (IData)((3U == (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 1U))))) 
                  | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                             >> 1U)))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw 
        = (1U & (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                           >> 0x26U)) & (~ ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                     >> 0x23U)) 
                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4)) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                  >> 9U))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4 
        = (((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0x11U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))) 
             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))
            ? ((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4)) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual 
        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 8U) & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4 
        = ((~ (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))) 
                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                     >> 9U)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 6U)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
           & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
            & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_action)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
              & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_action)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                            >> 0x23U))) & (~ (IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                      >> 0x24U)))) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                          >> 0x25U))) & (~ (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                    >> 0x22U)))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4 
        = (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4))) 
                & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                      >> 9U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
             & (~ (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                       >> 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                    >> 0x11U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfpc_dc4)))) 
            & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                 >> 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                              >> 0x11U)) | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                           >> 0x23U))) 
                                               & (~ (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                             >> 0x24U)))) 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                         >> 0x25U))) 
                                             & (~ (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                           >> 0x22U)))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
           & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                         >> 0x21U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                      >> 0x21U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4)) 
           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                      >> 0x24U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt 
        = ((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                       >> 9U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))) 
            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 3U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual 
        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                    >> 4U) & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__74(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__74\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__swerv_eh1__extintsrc_req 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
             ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol)) 
            << 3U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                        ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                       << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq) 
                                  << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__Digits_Bits 
        = ((0x37U >= (0x3fU & ((IData)(7U) * (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q)))))
            ? (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
                                >> (0x3fU & ((IData)(7U) 
                                             * (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q)))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc2__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc3__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc4__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc__DOT__rptc_ctrl;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfre) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfre) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__enable) {
            if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
                        } else {
                            if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                 | (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                                    = ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b))
                                        ? 4U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error))));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
                            } else {
                                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error)))) {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 1U;
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 4U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                            }
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
                                = (1U & (VL_REDXOR_32((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                         ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity)));
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 5U;
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                            if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter))) {
                                if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 3U;
                                } else {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 4U;
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
                                }
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                    = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter) 
                                             - (IData)(1U)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 2U;
                            }
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                        ? 7U : 6U) : 
                                   ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                     ? 5U : 4U));
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 2U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 6U;
                            }
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error 
                                = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                          ? ((0x20U 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                              ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity)
                                              : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor))
                                          : ((0x20U 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                              ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity))
                                              : (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor)))));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 9U;
                        } else {
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error 
                                    = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0xaU;
                            }
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity 
                                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 8U;
                            }
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        } else {
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
                                            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                                << 7U) 
                                               | (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                                    } else {
                                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
                                            = ((0x80U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                                   << 6U) 
                                                  | (0x3fU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                        >> 1U))));
                                    }
                                } else {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
                                        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                            ? ((0xc0U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                        >> 1U))))
                                            : ((0xe0U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) 
                                                   << 4U) 
                                                  | (0xfU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                        >> 1U)))));
                                }
                            }
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 7U;
                            }
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate 
                                    = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in)
                                        ? 0U : 6U);
                            }
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in)) 
                                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tx_reset) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count = 0U;
        } else {
            if ((2U == (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__tf_push) 
                         << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
                if ((0x10U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
                }
            } else {
                if ((1U == (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__tf_push) 
                             << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
                    if ((0U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
                            = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count) 
                                        - (IData)(1U)));
                    }
                } else {
                    if ((3U == (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__tf_push) 
                                 << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_irq 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_irq 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ints) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_data 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
            ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out 
                & (~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux)) 
               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__aux_i 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ints;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ints 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ints;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tx_reset 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__tf_push 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                    >> 7U))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__enable) {
            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out)));
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x1fU 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        }
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                        >> 1U));
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 1U;
                    } else {
                        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                = ((0U == (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr)))
                                    ? 0xdU : ((4U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr)))
                                               ? 0x15U
                                               : 0x1dU));
                        }
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 4U;
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                        }
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
                        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                if ((0U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                                 - (IData)(1U)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
                                        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                           | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                                 >> 1U)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                        = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 2U;
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                            = (1U & 
                                               ((0x10U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                 ? 
                                                ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                                 : 
                                                (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 3U;
                                    } else {
                                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 4U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 2U;
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                        }
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
                    } else {
                        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 5U;
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5 
        = ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count)) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__enable 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl)) 
              & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dlc))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dlc 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__dlc;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl 
                    = ((0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                          << 8U));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl 
            = (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl));
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl 
                    = ((0xff00U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl 
            = (0xff00U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl));
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr = 3U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vtableidx2 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_value 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vtable2___PVT__uart16550_0__DOT__regs__DOT__block_value
        [vlSymsp->TOP__rvfpgasim__swervolf.__Vtableidx2];
    vlSymsp->TOP__rvfpgasim__swervolf.__Vtableidx3 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vtable3___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value
        [vlSymsp->TOP__rvfpgasim__swervolf.__Vtableidx3];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is 
            = (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_out)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__srx_pad));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__re_o) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__re_o) 
            & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__re_o) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__re_o) 
            & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__75(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__75\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1544[3];
    WData/*95:0*/ __Vtemp1576[3];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_debug_wdata_rs1_d)
                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg
                 : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d)) 
            | (0xfffffffeU & ((- (IData)((1U & ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x2aU)))))) 
                              & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                          >> 1U)) << 1U)))) 
           | ((- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0xdU)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__postsync) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                    & (0x7c2U == (0xfffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync 
        = (1U & (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0xeU)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__presync) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d)) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw)) 
                 | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_fence_pending 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 3U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync) 
           & ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 5U))) ? ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                          >> 0x18U) 
                                         | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                             >> 0x18U) 
                                            | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                >> 0x18U) 
                                               | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                      | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])) 
                                                  >> 1U))))
               : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4) 
                  | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                      >> 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                   >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d 
        = (1U & ((((((((((((((((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal)) 
                                      | (((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d)) 
                                          | (((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x1cU)) 
                                              | (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x17U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x29U)))) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                                   | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                              >> 0xeU))) 
                                  | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0xdU))) 
                                 | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                             >> 0x20U)) 
                                    | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                               >> 0x23U)))) 
                                | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                           >> 0x21U))) 
                               | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                          >> 0x22U))) 
                              | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x13U))) 
                             | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x10U))) 
                            | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x13U))) 
                           | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x10U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall)) 
                         | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 0x28U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                        | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1)) 
                             | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                       >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2)) 
                                  & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x29U)))) 
                                 & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U)))) 
                                & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                              >> 9U))))) 
                            | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                    >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x28U))))) 
                           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                    >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x28U)))) 
                              & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                            >> 9U)))))) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                               >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2)) 
                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                 >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2)))) 
                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d))) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                     | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x27U)) & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x27U)))) 
                    | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                >> 9U)) & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 9U)))) 
                   | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                               >> 0x29U)) & ((7U <= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                  | ((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                   >> 0x31U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                  >> 1U)) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e3)) 
                     | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x31U))) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                              >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e3)) 
                         & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x28U)))) 
                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                              >> 7U))))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d 
        = (1U & (((((((((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x13U)) & 
                              (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U] 
                                   | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U]) 
                                  | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]) 
                                 | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U]) 
                                | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]) 
                               >> 0x1fU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall)) 
                           | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xeU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                        | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__lsu_idle)))) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall)) 
                      | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1)) 
                           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                     >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2)) 
                                & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x29U)))) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x28U)))) 
                              & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 9U))))) 
                          | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1)) 
                             & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U))))) 
                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2)) 
                             & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U)))) 
                            & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U)))))) 
                     | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                             >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                               >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2)))) 
                    | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                >> 0x28U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                   | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                               >> 0x29U)) & ((7U <= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                  | ((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                  >> 0x31U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
                        & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x31U)))) 
                       | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x31U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
                           & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x31U)))) 
                          & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x28U))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 7U)))) | (((((~ (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x31U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                              >> 1U)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3)) 
                                         | ((((~ (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x31U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                 >> 1U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3)) 
                                            & (~ (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x28U))))) 
                                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                              >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                       << 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout_any_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout)
            : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)))
            ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_illegal_inst))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_illegal_inst);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0cg0ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout)
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                     >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en 
        = (1U & ((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 4U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 2U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 3U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en 
        = (1U & ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                               >> 1U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               << 0x19U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                             << 0x18U) | ((((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                     >> 0x24U)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                           << 0x17U) 
                                          | ((((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                        >> 0x21U)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                              << 0x16U) 
                                             | ((((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                           >> 0x22U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 0x15U) 
                                                | ((((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                              >> 2U)) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                   << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xc3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfc000000U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 9U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x1dU) | ((((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x29U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                            << 0x1cU) 
                                           | ((((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x28U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                               << 0x1bU) 
                                              | (((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 5U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 0x1aU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xff800000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                             << 0x17U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xff000000U & (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x2dU)) 
                                & (0U != (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x19U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                           << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (0xfff80000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                              << 0x1fU) | (0x7ff80000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0x7ffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                             >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U] 
        = ((0xfff1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]) 
           | (0xfffe0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x13U) | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))) 
                                            << 0x12U) 
                                           | (0x3ffe0000U 
                                              & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                   >> 2U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                                     << 0x11U)) 
                                                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
                                                    << 0x11U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x31U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x13U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc 
        = ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 9U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
            << 3U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x29U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                       << 2U) | (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x31U)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                  << 1U) | (((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x31U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_raw);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e4pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout;
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) 
          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U];
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_result_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en)
            ? (((QData)((IData)((0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 0xfU)))) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_rddata_d)))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en) 
            << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en) 
                       << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U];
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2loadff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2loadff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U];
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4nbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4nbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) 
            << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en) 
                       << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en) 
                                  << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = ((0x37fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                >> 1U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U]) 
           | (0xc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U]) 
           | (0x300000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__divpcff__dout);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_trigger;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_waddr_wb));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csrmiscff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)
            : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d) 
                << 4U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x12U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                           << 3U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x11U)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                              >> 0xfU))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 9U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 1U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x29U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 2U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x28U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 3U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 1U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 4U;
        }
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 5U;
        }
        if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 6U;
        }
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 7U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xcU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 8U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xbU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 9U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 3U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xaU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 2U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xbU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xaU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xcU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x1cU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xdU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x17U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xeU;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1c_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x80000U & (((0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc) 
                                           << 0x12U)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc) 
                              << 0x13U)) | ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 0x31U)) 
                                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stallff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall)
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                    | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)))) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1loadff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? ((0x7ffffffeU & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                   >> 1U) & (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                              | (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                             << 1U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                     >> 1U) & (((1U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                | (2U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                               << 1U))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                   << 1U)) | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                 >> 1U) 
                                                & (((1U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                    | (2U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                   << 1U)) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   >> 1U) 
                                                  & (((1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                      | (2U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     << 1U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                 << 1U)))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                   & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                              >> 0x29U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0x3f00fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d) 
                & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d)))))) 
               << 0x10U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_trigger_match_d) 
                             & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))) 
                            << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (0xfffc0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                             << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffffff9U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffffffeU & (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x2dU)) 
                                & (0U != (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                              << 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                        << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2 
        = (1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                       >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                 | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)))) 
                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                         >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                   | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                   | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                         >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                   | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)))) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                           >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                     | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d))) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout) 
                     >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 9U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 1U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x29U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 2U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x28U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 3U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 1U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 4U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x1cU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0xdU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x17U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0xeU;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U] 
        = ((0xfff1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]) 
           | (0xfffe0000U & ((0xfff80000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                              << 0x10U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                << 0x13U))) 
                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_error) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                 << 0x12U) | (0x3ffe0000U 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                    << 0x11U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                       >> 0x31U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 5U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 5U)))) 
            << 2U) | ((2U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 5U)))
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x1dU))
                               : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                          >> 0x1dU))) 
                             << 1U)) | (1U & ((1U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 5U)))
                                               ? (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 4U))
                                               : (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc 
        = ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 9U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
            << 3U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x29U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                       << 2U) | (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x31U)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                  << 1U) | (((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x31U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 9U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 9U)))) 
            << 5U) | ((0x10U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 9U)))
                                  ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 8U))
                                  : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 8U))) 
                                << 4U)) | ((8U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 9U)))
                                                    ? (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 7U))
                                                    : (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 7U))) 
                                                  << 3U)) 
                                           | ((4U & 
                                               (((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 9U)))
                                                  ? (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 6U))
                                                  : (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 6U))) 
                                                << 2U)) 
                                              | ((0x7ffffffeU 
                                                  & (((((((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 9U)) 
                                                          & (3U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                           >> 1U)) 
                                                       | ((((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                     >> 9U)) 
                                                            & (4U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                           << 1U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                             >> 1U))) 
                                                      | (((((~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                        >> 9U))) 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                       >> 9U))) 
                                                           & (3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                          << 1U) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                            >> 1U))) 
                                                     | (((((~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                       >> 9U))) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                      >> 9U))) 
                                                          & (4U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                           >> 1U)))) 
                                                 | ((((((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 9U)) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                          >> 2U)) 
                                                      | (((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 9U)) 
                                                          & (4U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                            >> 2U))) 
                                                     | ((((~ (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                      >> 9U))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                     >> 9U))) 
                                                         & (3U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                           >> 2U))) 
                                                    | ((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                     >> 9U))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                    >> 9U))) 
                                                        & (4U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                          >> 2U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                       << 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x27U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x27U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__csr_rs1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_csr_rs1_e1)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_csr_rs1_e1);
    __Vtemp1544[0U] = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                          >> 0x15U))))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x16U)))) 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                   | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                   : 
                                                                  ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                                    << 0x14U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                      >> 0xcU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                         << 0xdU) 
                                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                           >> 0x13U))))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x14U)))) 
                                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                    | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                    : 
                                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                     << 0x14U) 
                                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                       >> 0xcU))))))) 
                                       << 0xcU)) | 
                       (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U]));
    __Vtemp1544[1U] = ((0xfffU & ((IData)((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                     >> 0x15U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x16U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                    << 0xdU) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                      >> 0x13U))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x14U)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                  >> 0xcU))))))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U))))
                                                                                ? 
                                                                               (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x16U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                : 
                                                                               ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                                >> 0xcU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                                << 0xdU) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U))))
                                                                                 ? 
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x14U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                 : 
                                                                                ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                                >> 0xcU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp1544[2U] = (0xfffU & ((IData)(((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                     >> 0x15U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x16U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                    << 0xdU) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                      >> 0x13U))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x14U)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                  >> 0xcU)))))) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = __Vtemp1544[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = __Vtemp1544[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = __Vtemp1544[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
                           ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en) 
             >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_path_e1 
                << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (((QData)((IData)((0x7fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                                >> 1U)))) 
                << 0x20U) | (QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pred_correct_npc_e2 
                                              << 1U) 
                                             | (1U 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (((QData)((IData)((0x7fffffffU & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout 
                                                        >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((0xfffffffeU 
                                              & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout 
                                                          >> 1U)) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en) 
             >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_csr_ren_d))))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff);
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_sec_decode_e3))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                << 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                             >> 0xfU))))
                ? (((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0x12U)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                          >> 0x11U)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                         >> 0x10U)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0xfU)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[2U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U] 
                                 >> 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                << 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                             >> 0xbU))))
                ? (((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0xeU)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                          >> 0xdU)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                         >> 0xcU)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0xbU)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U] 
                                 >> 0xcU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_br_immed_d 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
                   >> 2U) & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x17U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)
            : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                      << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0)))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freezeff__DOT__din_new 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst)) 
           & (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2)) 
                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)) 
                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                     >> 0xeU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0x3fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype) 
               << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype) 
                          << 4U) | ((8U & ((((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x1cU)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 0x17U))) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br))) 
                                           << 3U)) 
                                    | (4U & ((((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                        >> 0x1cU)) 
                                               | (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x17U))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br))) 
                                             << 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = ((0x37fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                >> 1U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U]) 
           | (0xc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U]) 
           | (0x300000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p))
            ? (((QData)((IData)((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d 
                                          >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_in 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                    >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p))
            ? ((8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs1_d 
                      >> 0x1cU)) | ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d 
                                           >> 0x1dU)) 
                                    | ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                                             >> 1U)) 
                                         & (0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs2_d)) 
                                        << 1U) | (1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                    >> 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable))) 
                              & (0x21U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct)))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x1ffffffffULL & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__div_p) 
                                     >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable)))))
                              ? ((((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)))))) 
                                   & (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_rs1_d))) 
                                  | ((- (QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
                                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U)))))) 
                                     & ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_eff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                        << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff)))) 
                                 | ((- (QData)((IData)(
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
                                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U))))))) 
                                    & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U)))))))))
                              : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1c_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (0x80000U & (((0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc) 
                                           << 0x12U)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc) 
                              << 0x13U)) | ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                     >> 0x31U)) 
                                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1)
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                   >> 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 6U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1cg0ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout)
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                     >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                  >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                  >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 4U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en 
        = ((8U & ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                  >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                              >> 7U)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                  << 3U)) | ((4U & ((((0U != (3U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                               >> 3U))) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                         >> 7U)) & 
                                     (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                    << 2U)) | ((2U 
                                                & ((((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                                          >> 2U))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                        >> 7U)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                                          >> 1U))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                        >> 7U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dccm_valid) 
               >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & (~ (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                   | (6U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                 | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                      & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                            >> 0xbU))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                                >> 0xbU)))) 
                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                       & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                             >> 0xbU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval 
        = (((7U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1))) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                      >> 1U))) | (3U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                                           >> 2U)))) 
           | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_br_immed_d)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((0xfffff000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
                               << 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_br_immed_d));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((0xfffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
                          >> 0x14U)) | (0xfffff000U 
                                        & ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (0xfffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                                  >> 0x20U)) >> 0x14U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dt
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)
                ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap)
                    ? ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                              << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset))
                : ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap)
                    ? ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                              << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_br_immed_d 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
                   >> 2U) & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x17U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset)
            : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                      << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 4U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__mul_p));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((1U & ((~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 9U)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d) 
                 | ((- (IData)((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                       & (~ (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 9U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 9U)))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d)) 
                | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U))))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
               | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))) 
                              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 9U))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((1U & ((~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 9U)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
                 | ((- (IData)((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                       & (~ (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 9U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 9U)))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d)) 
                | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U))))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
               | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))) 
                              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 9U))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs1_bypass_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs2_bypass_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e1;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_result_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en) 
            << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en) 
                       << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en)));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                      >> 1U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout 
                       >> 1U)) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout);
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en) 
          >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout 
                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                  << 0x1fU))) | (0x7fffffffU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (((QData)((IData)(((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                 << 0x1eU)) 
                                 | (0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__any_jal)
                                                    ? 
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                                                    >> 1U)
                                                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout))))) 
                << 1U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout);
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_sec_decode_e3))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                 << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                              >> 7U))))
                ? ((((((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 0xdU)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3) 
                        | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                             >> 0xcU)))) 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3)) 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                            >> 0xbU)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3)) 
                      | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 0xaU)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff)) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                          >> 9U)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                         >> 8U)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                        >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[2U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U] 
                                 >> 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]))
                ? ((((((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 6U)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3) 
                        | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                             >> 5U)))) 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3)) 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                            >> 4U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3)) 
                      | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 3U)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff)) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                          >> 2U)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                         >> 1U)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U] 
                                 >> 0xcU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                  | ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                   >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                             << 1U))))) 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                           >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
                      >= (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                >> 0x10U))) ? ((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)))
                          ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | ((((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error))) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 2U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 6U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
             >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                          >> 3U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
             >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                          >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
             >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                          >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_br_immed_d)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U];
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((0xfffff000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d)))) 
                               << 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_br_immed_d));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((0xfffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d)))) 
                          >> 0x14U)) | (0xfffff000U 
                                        & ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (0xfffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_rs2_d))) 
                                  >> 0x20U)) >> 0x14U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
    }
    __Vtemp1576[0U] = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                          >> 0x10U))))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x11U)))) 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                   | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                   : 
                                                                  ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                                    << 0x14U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                      >> 0xcU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                         << 0x12U) 
                                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                           >> 0xeU))))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xfU)))) 
                                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                    | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                    : 
                                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                     << 0x14U) 
                                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                       >> 0xcU))))))) 
                                       << 0xcU)) | 
                       (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U]));
    __Vtemp1576[1U] = ((0xfffU & ((IData)((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                     >> 0x10U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0x11U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                    << 0x12U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                      >> 0xeU))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0xfU)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                  >> 0xcU))))))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U))))
                                                                                ? 
                                                                               (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x11U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                : 
                                                                               ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                                >> 0xcU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU))))
                                                                                 ? 
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xfU)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                 : 
                                                                                ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                                >> 0xcU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp1576[2U] = (0xfffU & ((IData)(((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                     >> 0x10U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0x11U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                    << 0x12U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                      >> 0xeU))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0xfU)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                  >> 0xcU)))))) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = __Vtemp1576[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = __Vtemp1576[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = __Vtemp1576[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken) 
                    & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                        >> 0xdU) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                      >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)
                ? ((((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                      << 6U))) ? 0ULL
                      : ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                         ((IData)(2U) 
                                          + (6U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                   << 1U)))])) 
                         << ((IData)(0x40U) - (0x1fU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                  << 6U))))) 
                    | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                        ((IData)(1U) 
                                         + (6U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                  << 1U)))])) 
                        << ((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                             << 6U)))
                             ? 0x20U : ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                            << 6U))))) 
                       | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                          (6U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                 << 1U))])) 
                          >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                       << 6U))))) >> 
                   (0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr 
                             << 3U))) : (QData)((IData)(
                                                        (((((- (IData)(
                                                                       (1U 
                                                                        & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))))) 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                                                              & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))) 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x27U)))))) 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d)) 
                                                          | ((- (IData)(
                                                                        ((0U 
                                                                          != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U))))) 
                                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
                                                         | ((- (IData)(
                                                                       (((0U 
                                                                          != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                                                                         & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))) 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x27U))))) 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs2_bypass_data_d)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & ((((((- (IData)((1U & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x29U)))))) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                >> 0x14U)) | ((- (IData)(
                                                         (1U 
                                                          & (((~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                          >> 0x27U))) 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                         >> 0x27U))) 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                        >> 0x29U)))))) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                 >> 0x14U))) 
                           | ((- (IData)((1U & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x28U)))))) 
                              & ((0xfe0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 7U))))) 
                          | ((- (IData)((1U & (((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x27U))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x27U))) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x28U)))))) 
                             & ((0xfe0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                            >> 7U))))) 
                         & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req))))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr
                : (((((- (IData)((1U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 0x27U)))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs1_d) 
                     | ((- (IData)((1U & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                           & (~ (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                     >> 0x27U)))))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d)) 
                    | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x27U))))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
                   | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                                   & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U)))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x27U))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_rs1_bypass_data_d)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1_raw;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken)
                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
                           >> 1U) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x27U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1;
    }
}
