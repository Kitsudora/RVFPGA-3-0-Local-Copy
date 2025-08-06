#define SegEn_ADDR    0x80001038
#define SegDig_ADDR   0x8000103C

#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408


.globl main
main:


li x28, 0xFFFF
li x29, GPIO_INOUT
sw x28, 0(x29)

li t1, SegEn_ADDR
li t6, 0xF0
sb t6, 0(t1)                            # Enable the 7SegDisplays

next:

	li  a1,    GPIO_SWs
	lw  t0, 0(a1)						# Read the Switches
	srl t0, t0, 16

    li t1, SegDig_ADDR
    sw t0, 0(t1)						# Write the 7SegDisplays

    li  t3, 100000
    delay:
        add t3, t3, -1
        bge t3, zero, delay

	beq zero, zero, next

.end
