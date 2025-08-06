// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _VRVFPGASIM_DPRAM64__S1000_MBZ1_H_
#define _VRVFPGASIM_DPRAM64__S1000_MBZ1_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;

//----------

VL_MODULE(Vrvfpgasim_dpram64__S1000_MBz1) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,7,0);
    VL_IN16(__PVT__waddr,11,0);
    VL_IN16(__PVT__raddr,11,0);
    VL_IN64(__PVT__din,63,0);
    VL_OUT64(__PVT__dout,63,0);
    
    // LOCAL SIGNALS
    QData/*63:0*/ mem[512];
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_dpram64__S1000_MBz1);  ///< Copying not allowed
  public:
    Vrvfpgasim_dpram64__S1000_MBz1(const char* name = "TOP");
    ~Vrvfpgasim_dpram64__S1000_MBz1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__rvfpgasim__swervolf__bootrom__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
