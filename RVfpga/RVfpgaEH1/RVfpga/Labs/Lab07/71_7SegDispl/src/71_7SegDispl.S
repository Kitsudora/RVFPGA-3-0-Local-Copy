#define SegEn_ADDR    0x80001038
#define SegDig_ADDR   0x8000103C

.globl main
main:

    li t1, SegEn_ADDR
    li t6, 0xFC
    sb t6, 0(t1)						# Enable the 7SegDisplays

    li t1, SegDig_ADDR
    li t6, 0x71
    sw t6, 0(t1)						# Write the 7SegDisplays

next:	beq zero, zero, next

.end
