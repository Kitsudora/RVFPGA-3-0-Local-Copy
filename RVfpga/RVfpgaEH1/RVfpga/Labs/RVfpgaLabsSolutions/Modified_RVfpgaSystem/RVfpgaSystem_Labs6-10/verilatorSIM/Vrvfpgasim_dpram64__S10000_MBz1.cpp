// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_dpram64__S10000_MBz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_dpram64__S10000_MBz1::_sequent__TOP__rvfpgasim__ram__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S10000_MBz1::_sequent__TOP__rvfpgasim__ram__ram__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvlsb__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*5:0*/ __Vdlyvlsb__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    CData/*5:0*/ __Vdlyvlsb__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    CData/*5:0*/ __Vdlyvlsb__mem__v3;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    CData/*5:0*/ __Vdlyvlsb__mem__v4;
    CData/*7:0*/ __Vdlyvval__mem__v4;
    CData/*0:0*/ __Vdlyvset__mem__v4;
    CData/*5:0*/ __Vdlyvlsb__mem__v5;
    CData/*7:0*/ __Vdlyvval__mem__v5;
    CData/*0:0*/ __Vdlyvset__mem__v5;
    CData/*5:0*/ __Vdlyvlsb__mem__v6;
    CData/*7:0*/ __Vdlyvval__mem__v6;
    CData/*0:0*/ __Vdlyvset__mem__v6;
    CData/*5:0*/ __Vdlyvlsb__mem__v7;
    CData/*7:0*/ __Vdlyvval__mem__v7;
    CData/*0:0*/ __Vdlyvset__mem__v7;
    SData/*12:0*/ __Vdlyvdim0__mem__v0;
    SData/*12:0*/ __Vdlyvdim0__mem__v1;
    SData/*12:0*/ __Vdlyvdim0__mem__v2;
    SData/*12:0*/ __Vdlyvdim0__mem__v3;
    SData/*12:0*/ __Vdlyvdim0__mem__v4;
    SData/*12:0*/ __Vdlyvdim0__mem__v5;
    SData/*12:0*/ __Vdlyvdim0__mem__v6;
    SData/*12:0*/ __Vdlyvdim0__mem__v7;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    __Vdlyvset__mem__v4 = 0U;
    __Vdlyvset__mem__v5 = 0U;
    __Vdlyvset__mem__v6 = 0U;
    __Vdlyvset__mem__v7 = 0U;
    vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout = 
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[(0x1fffU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                                  >> 1U))];
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v0 = (0xffU & vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvlsb__mem__v0 = 0U;
        __Vdlyvdim0__mem__v0 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        >> 8U));
        __Vdlyvset__mem__v1 = 1U;
        __Vdlyvlsb__mem__v1 = 8U;
        __Vdlyvdim0__mem__v1 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        >> 0x10U));
        __Vdlyvset__mem__v2 = 1U;
        __Vdlyvlsb__mem__v2 = 0x10U;
        __Vdlyvdim0__mem__v2 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v3 = (0xffU & (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        >> 0x18U));
        __Vdlyvset__mem__v3 = 1U;
        __Vdlyvlsb__mem__v3 = 0x18U;
        __Vdlyvdim0__mem__v3 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v4 = (0xffU & vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat);
        __Vdlyvset__mem__v4 = 1U;
        __Vdlyvlsb__mem__v4 = 0x20U;
        __Vdlyvdim0__mem__v4 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v5 = (0xffU & (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        >> 8U));
        __Vdlyvset__mem__v5 = 1U;
        __Vdlyvlsb__mem__v5 = 0x28U;
        __Vdlyvdim0__mem__v5 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v6 = (0xffU & (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        >> 0x10U));
        __Vdlyvset__mem__v6 = 1U;
        __Vdlyvlsb__mem__v6 = 0x30U;
        __Vdlyvdim0__mem__v6 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we))) {
        __Vdlyvval__mem__v7 = (0xffU & (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                        >> 0x18U));
        __Vdlyvset__mem__v7 = 1U;
        __Vdlyvlsb__mem__v7 = 0x38U;
        __Vdlyvdim0__mem__v7 = (0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr) 
                                           >> 1U));
    }
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v0))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v0]) | ((QData)((IData)(__Vdlyvval__mem__v0)) 
                                           << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v1))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v1]) | ((QData)((IData)(__Vdlyvval__mem__v1)) 
                                           << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v2))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v2]) | ((QData)((IData)(__Vdlyvval__mem__v2)) 
                                           << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v3))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v3]) | ((QData)((IData)(__Vdlyvval__mem__v3)) 
                                           << (IData)(__Vdlyvlsb__mem__v3)));
    }
    if (__Vdlyvset__mem__v4) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v4))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v4]) | ((QData)((IData)(__Vdlyvval__mem__v4)) 
                                           << (IData)(__Vdlyvlsb__mem__v4)));
    }
    if (__Vdlyvset__mem__v5) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v5))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v5]) | ((QData)((IData)(__Vdlyvval__mem__v5)) 
                                           << (IData)(__Vdlyvlsb__mem__v5)));
    }
    if (__Vdlyvset__mem__v6) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v6))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v6]) | ((QData)((IData)(__Vdlyvval__mem__v6)) 
                                           << (IData)(__Vdlyvlsb__mem__v6)));
    }
    if (__Vdlyvset__mem__v7) {
        vlSymsp->TOP__rvfpgasim__ram__ram.mem[__Vdlyvdim0__mem__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v7))) 
                & vlSymsp->TOP__rvfpgasim__ram__ram.mem
                [__Vdlyvdim0__mem__v7]) | ((QData)((IData)(__Vdlyvval__mem__v7)) 
                                           << (IData)(__Vdlyvlsb__mem__v7)));
    }
}
