# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrvfpgasim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrvfpgasim \
	Vrvfpgasim_rvfpgasim \
	Vrvfpgasim___024unit \
	Vrvfpgasim_swervolf_core__Bz1 \
	Vrvfpgasim_swervolf_core__Bz1__1 \
	Vrvfpgasim_swervolf_core__Bz1__2 \
	Vrvfpgasim_swervolf_core__Bz1__3 \
	Vrvfpgasim_swervolf_core__Bz1__4 \
	Vrvfpgasim_swervolf_core__Bz1__5 \
	Vrvfpgasim_swervolf_core__Bz1__6 \
	Vrvfpgasim_swervolf_core__Bz1__7 \
	Vrvfpgasim_swervolf_core__Bz1__8 \
	Vrvfpgasim_swervolf_core__Bz1__9 \
	Vrvfpgasim_swervolf_core__Bz1__10 \
	Vrvfpgasim_swervolf_core__Bz1__11 \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000 \
	Vrvfpgasim_wb_mem_wrapper__M1000_Iz1 \
	Vrvfpgasim_dpram64__S1000_MBz1 \
	Vrvfpgasim_dpram64__S10000_MBz1 \
	Vrvfpgasim_axi_demux__pi2 \
	Vrvfpgasim_axi_mux__pi4 \
	Vrvfpgasim_axi_demux_id_counters__pi5 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrvfpgasim__Slow \
	Vrvfpgasim_rvfpgasim__Slow \
	Vrvfpgasim___024unit__Slow \
	Vrvfpgasim_swervolf_core__Bz1__Slow \
	Vrvfpgasim_swervolf_core__Bz1__1__Slow \
	Vrvfpgasim_swervolf_core__Bz1__2__Slow \
	Vrvfpgasim_swervolf_core__Bz1__3__Slow \
	Vrvfpgasim_swervolf_core__Bz1__4__Slow \
	Vrvfpgasim_swervolf_core__Bz1__5__Slow \
	Vrvfpgasim_swervolf_core__Bz1__6__Slow \
	Vrvfpgasim_swervolf_core__Bz1__7__Slow \
	Vrvfpgasim_swervolf_core__Bz1__8__Slow \
	Vrvfpgasim_swervolf_core__Bz1__9__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__Slow \
	Vrvfpgasim_wb_mem_wrapper__M1000_Iz1__Slow \
	Vrvfpgasim_dpram64__S1000_MBz1__Slow \
	Vrvfpgasim_dpram64__S10000_MBz1__Slow \
	Vrvfpgasim_axi_demux__pi2__Slow \
	Vrvfpgasim_axi_mux__pi4__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrvfpgasim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrvfpgasim__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
