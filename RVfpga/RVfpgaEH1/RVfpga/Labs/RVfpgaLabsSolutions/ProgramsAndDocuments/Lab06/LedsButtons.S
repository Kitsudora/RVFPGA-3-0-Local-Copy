#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define GPIO2_BTNs  0x80001800
#define GPIO2_INOUT 0x80001808

#define GPIO3_BTNs  0x8000101C

#define SlowDelay   10000000
#define FastDelay   SlowDelay/10


.globl main
main:

li t0, 0
li t5, SlowDelay

li  a0,  GPIO_INOUT
li  x29, 0x0000FFFF
sw  x29, 0(a0)

li  a0,  GPIO2_INOUT
li  x29, 0x0
sw  x29, 0(a0)

next:
    li  a1, GPIO2_BTNs       # Read the Buttons from GPIO2
    lw  t1, 0(a1)

    and t2, t1, 1            # Check BTNC. If pushed, fast count; if not, slow count
    beq t2, zero, slow
    li  t5, FastDelay
    beq zero, zero, fast
    slow: li t5, SlowDelay
    fast:

    li  a1, GPIO3_BTNs       # Read the Buttons from GPIO3
    lw  t1, 0(a1)

    and t2, t1, 2            # Check BTNR. If 1, reset count
    beq t2, zero, continue_count
    li  t0, 0
    continue_count:
 
    li  a0, GPIO_LEDs        # Write the LEDs
    sw  t0, 0(a0)
 
    add  t3, zero, t5
    delay:
        add t3, t3, -1
        bge t3, zero, delay

    add t0, t0, 1

    beq zero, zero, next     # infinite loop

.end
