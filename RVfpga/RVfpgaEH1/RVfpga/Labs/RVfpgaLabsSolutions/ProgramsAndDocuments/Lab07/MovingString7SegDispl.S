#define SegEn_ADDR    0x80001038
#define SegDig_ADDR   0x8000103C


.globl main
main:

li t6, SegEn_ADDR
li t3, 0x0
sb t3, 0(t6)                        # Enable the 7SegDisplays

li t3, 0
li t5, 8

next:
    and t4, t3, 0xF
    beq t4, t5, reset
    add t4, t4, 1
    beq zero, zero, not_reset
    reset:
        li t4, 0
    not_reset: 

    sll t3, t3, 4

    or t3, t3, t4

    li t6, SegDig_ADDR
    sw t3, 0(t6)					# Write the 7SegDisplays

    li  t6, 10000000
    delay:
        add t6, t6, -1
        bge t6, zero, delay

beq zero, zero, next

.end
