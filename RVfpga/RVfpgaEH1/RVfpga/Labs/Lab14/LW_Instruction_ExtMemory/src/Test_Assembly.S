#define INSERT_NOPS_1	   nop;
#define INSERT_NOPS_2	   nop; INSERT_NOPS_1
#define INSERT_NOPS_3	   nop; INSERT_NOPS_2
#define INSERT_NOPS_4	   nop; INSERT_NOPS_3
#define INSERT_NOPS_5	   nop; INSERT_NOPS_4
#define INSERT_NOPS_6	   nop; INSERT_NOPS_5
#define INSERT_NOPS_7	   nop; INSERT_NOPS_6
#define INSERT_NOPS_8	   nop; INSERT_NOPS_7
#define INSERT_NOPS_9	   nop; INSERT_NOPS_8
#define INSERT_NOPS_10	   nop; INSERT_NOPS_9


.globl Test_Assembly

.data
D: .word 11

.text
Test_Assembly:

add sp, sp, -64
sw s1, 0(sp)
sw s3, 4(sp)
sw s4, 8(sp)
sw s5, 12(sp)
sw ra, 16(sp)
sw s2, 20(sp)
sw s0, 24(sp)
sw s6, 28(sp)
sw s7, 32(sp)
sw s8, 36(sp)
sw s9, 40(sp)
sw s10, 44(sp)
sw s11, 48(sp)
sw gp, 52(sp)
sw tp, 56(sp)

la x29, D

li x30, 0xFFFF

add x1, zero, 1
add x3, zero, 1
add x4, zero, 1
add x5, zero, 1
add x6, zero, 1
add x7, zero, 1
add x8, zero, 1
add x9, zero, 1
add x10, zero, 1
add x11, zero, 1
add x12, zero, 1
add x13, zero, 1
add x14, zero, 1
add x15, zero, 1
add x16, zero, 1
add x17, zero, 1
add x18, zero, 1
add x19, zero, 1
add x20, zero, 1
add x21, zero, 1
add x22, zero, 1
add x23, zero, 1
add x24, zero, 1
add x25, zero, 1
add x26, zero, 1
add x27, zero, 1
add x28, zero, 1
add x31, zero, 1

REPEAT:
   lw x28, (x29)
   add x30, x30, -1
   add x1, x1, 1
   add x31, x31, 1
   add x3, x3, 1
   add x4, x4, 1
   add x5, x5, 1
   add x6, x6, 1
   add x7, x7, 1
   add x8, x8, 1
   add x9, x9, 1
   add x10, x10, 1
   add x11, x11, 1
   add x12, x12, 1
   add x13, x13, 1
   add x14, x14, 1
   add x15, x15, 1
   add x16, x16, 1
   add x17, x17, 1
   add x18, x18, 1
   add x19, x19, 1
   add x20, x20, 1
   add x21, x21, 1
   add x22, x22, 1
   add x23, x23, 1
   add x24, x24, 1
   add x25, x25, 1
   add x26, x26, 1
   add x27, x27, 1
   add x31, x31, 1
   add x3, x3, 1
   add x4, x4, 1
   add x5, x5, 1
   add x6, x6, 1
   add x25, x25, 1
   add x26, x26, 1
   add x27, x27, 1
   bne x30, zero, REPEAT    # Repeat the loop

lw s1, 0(sp)
lw s3, 4(sp)
lw s4, 8(sp)
lw s5, 12(sp)
lw ra, 16(sp)
lw s2, 20(sp)
lw s0, 24(sp)
lw s6, 28(sp)
lw s7, 32(sp)
lw s8, 36(sp)
lw s9, 40(sp)
lw s10, 44(sp)
lw s11, 48(sp)
lw gp, 52(sp)
lw tp, 56(sp)
add sp, sp, 64

ret

.end