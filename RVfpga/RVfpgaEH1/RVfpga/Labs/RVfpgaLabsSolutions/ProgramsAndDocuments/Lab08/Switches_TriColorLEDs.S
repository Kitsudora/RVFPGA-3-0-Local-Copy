#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define RPTC2_CNTR   0x80001240
#define RPTC2_HRC    0x80001244
#define RPTC2_LRC    0x80001248
#define RPTC2_CTRL   0x8000124c

#define RPTC3_CNTR   0x80001280
#define RPTC3_HRC    0x80001284
#define RPTC3_LRC    0x80001288
#define RPTC3_CTRL   0x8000128c

#define RPTC4_CNTR   0x800012c0
#define RPTC4_HRC    0x800012c4
#define RPTC4_LRC    0x800012c8
#define RPTC4_CTRL   0x800012cc


.globl main
main:


li t0, 0xFFFF
li t1, GPIO_INOUT
sw t0, 0(t1)

next:

    ##################################
    # Read the Switches
    ##################################
    li  a1,    GPIO_SWs
    lw  t0, 0(a1)
    ##################################


    ##################################
    # Write the LEDs
    ##################################
    li  a0, GPIO_LEDs
    srl t0, t0, 16
    sw  t0, 0(a0)
    ##################################


    ##################################
    # PTC2
    ##################################
    li t1, RPTC2_HRC
    li t2, 0xF
    sw t2, 0(t1)

    and t2, t0, 0x1F
    add t2, t2, 0xF
    li t1, RPTC2_LRC
    sw t2, 0(t1)

    li t2, 0x80             # 0 1000 0000
    li t1, RPTC2_CTRL
    sw t2, 0(t1)
    li t2, 0x9              # 0 0000 1001
    li t1, RPTC2_CTRL
    sw t2, 0(t1)
    ##################################

    ##################################
    # PTC3
    ##################################
    li t1, RPTC3_HRC
    li t2, 0xF
    sw t2, 0(t1)

    srl t0, t0, 5
    and t2, t0, 0x1F
    add t2, t2, 0xF
    li t1, RPTC3_LRC
    sw t2, 0(t1)

    li t2, 0x80             # 0 1000 0000
    li t1, RPTC3_CTRL
    sw t2, 0(t1)
    li t2, 0x9              # 0 0000 1001
    li t1, RPTC3_CTRL
    sw t2, 0(t1)
    ##################################

    ##################################
    # PTC4
    ##################################
    li t1, RPTC4_HRC
    li t2, 0xF
    sw t2, 0(t1)

    srl t0, t0, 5
    and t2, t0, 0x1F
    add t2, t2, 0xF
    li t1, RPTC4_LRC
    sw t2, 0(t1)

    li t2, 0x80             # 0 1000 0000
    li t1, RPTC4_CTRL
    sw t2, 0(t1)
    li t2, 0x9              # 0 0000 1001
    li t1, RPTC4_CTRL
    sw t2, 0(t1)
    ##################################

    li  t3, 10000
    delay:
        add t3, t3, -1
        bge t3, zero, delay

    beq zero, zero, next

.end
