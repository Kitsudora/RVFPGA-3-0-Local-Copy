#define SegDig1_ADDR   0x80001038
#define SegDig2_ADDR   0x8000103C

.globl main
main:

    li t1, SegDig2_ADDR
    li t6, 0xCFFF2408
    sw t6, 0(t1)						# Write the 7SegDisplays

    li t1, SegDig1_ADDR
    li t6, 0x44FF48CF
    sw t6, 0(t1)						# Write the 7SegDisplays

next:	beq zero, zero, next

.end
