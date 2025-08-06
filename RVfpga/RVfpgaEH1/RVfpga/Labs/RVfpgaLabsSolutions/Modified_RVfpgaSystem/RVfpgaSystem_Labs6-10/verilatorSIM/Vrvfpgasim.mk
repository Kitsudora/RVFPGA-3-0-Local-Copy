# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vrvfpgasim.mk

default: Vrvfpgasim

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vrvfpgasim
# Module prefix (from --prefix)
VM_MODPREFIX = Vrvfpgasim
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I../src/SweRVolfSoC/SweRVEh1CoreComplex/include \
	-I../src/OtherSources/jtag_vpi_0-r5/ \
	-I../src/SweRVolfSoC/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include \
	-I../src/OtherSources/pulp-platform.org__common_cells_1.20.0/include \
	-I../src/SweRVolfSoC/Peripherals/uart \
	-I../src/SweRVolfSoC/Peripherals/spi \
	-I../src/SweRVolfSoC/Peripherals/ptc \
	-I../src/SweRVolfSoC/Peripherals/gpio \
	-I../src/SweRVolfSoC/Interconnect/WishboneInterconnect/wb_common_1.0.3 \
	-I../src/SweRVolfSoC/Interconnect/WishboneInterconnect \
	-I../src/SweRVolfSoC/Interconnect/AxiInterconnect \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lwebsockets \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	jtagServer \
	jtag_common \
	tb_ViDBo \
	vidbo \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	../src/OtherSources/jtag_vpi_0-r5 \


### Default rules...
# Include list of all generated classes
include Vrvfpgasim_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

jtagServer.o: ../src/OtherSources/jtag_vpi_0-r5/jtagServer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
jtag_common.o: ../src/OtherSources/jtag_vpi_0-r5/jtag_common.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
tb_ViDBo.o: ./tb_ViDBo.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vidbo.o: ./vidbo.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vrvfpgasim: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
