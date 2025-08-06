#define SegEn_ADDR  0x80001038
#define SegDig_ADDR 0x8000103c

#define RPTC_CNTR   0x80001200
#define RPTC_HRC    0x80001204
#define RPTC_LRC    0x80001208
#define RPTC_CTRL   0x8000120c


.globl main
main:

li t4, 0x0

##################################
# Configure LRC
##################################
li t3, 0x2FFFFFF
li t1, RPTC_LRC
sw t3, 0(t1)
##################################

next:

    ##################################
    # Enable the 7SegDisplays
    ##################################
    li t1, SegEn_ADDR
    li t2, 0x0
    sb t2, 0(t1)
    ##################################
    ##################################
    # Write the 7SegDisplays
    ##################################
    li t1, SegDig_ADDR
    sw t4, 0(t1)
    ##################################

    ######################################
    # Timer: Count and continue when done
    ######################################

    li t3, 0xC0             # 0 1100 0000
    li t1, RPTC_CTRL
    sw t3, 0(t1)
    li t3, 0x21             # 0 0010 0001
    sw t3, 0(t1)

    counting:
        lw t3, 0(t1)
        and t3, t3, 0x40
        beq t3, zero, counting

    ##################################

    add t4, t4, 1

    beq zero, zero, next

.end
