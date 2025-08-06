// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _VRVFPGASIM_RVFPGASIM_H_
#define _VRVFPGASIM_RVFPGASIM_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;
class Vrvfpgasim_axi_mem_wrapper__I6_M10000;
class Vrvfpgasim_swervolf_core__Bz1;


//----------

VL_MODULE(Vrvfpgasim_rvfpgasim) {
  public:
    // CELLS
    Vrvfpgasim_axi_mem_wrapper__I6_M10000* ram;
    Vrvfpgasim_swervolf_core__Bz1* swervolf;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    VL_IN8(i_pb,4,0);
    VL_OUT8(AN,7,0);
    VL_OUT8(CA,0,0);
    VL_OUT8(CB,0,0);
    VL_OUT8(CC,0,0);
    VL_OUT8(CD,0,0);
    VL_OUT8(CE,0,0);
    VL_OUT8(CF,0,0);
    VL_OUT8(CG,0,0);
    VL_OUT8(Enables_Reg,7,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(tf_push,0,0);
    VL_OUT8(wb_m2s_uart_dat_output,7,0);
    VL_OUT8(o_gpio,0,0);
    VL_IN16(i_sw,15,0);
    VL_OUT16(o_led,15,0);
    VL_OUT(Digits_Reg,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__dmi_reg_en;
    CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
    CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
    CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
    CData/*0:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en;
    CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
    CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
    WData/*1023:0*/ __PVT__ram_init_file[32];
    WData/*1023:0*/ __PVT__rom_init_file[32];
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__dmi_wrapper__core_rst_n;
    CData/*4:0*/ __Vtableidx1;
    QData/*40:0*/ __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    static CData/*3:0*/ __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[32];
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_rvfpgasim);  ///< Copying not allowed
  public:
    Vrvfpgasim_rvfpgasim(const char* name = "TOP");
    ~Vrvfpgasim_rvfpgasim();
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    static void _combo__TOP__rvfpgasim__10(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _combo__TOP__rvfpgasim__11(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__rvfpgasim__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__rvfpgasim__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__4(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__6(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__8(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__9(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__rvfpgasim__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
