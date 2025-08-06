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

.section .midccm
#.data
A: .space 100

.text

Test_Assembly:

add sp, sp, -32
sw s4,  0(sp)
sw s7,  4(sp)
sw s8,  8(sp)
sw s9,  12(sp)
sw s10, 16(sp)
sw s11, 20(sp)
sw s5,  24(sp)

//li t2, 0x400            # Disable Pipelined Dual-Issue Execution
//csrrs t1, 0x7F9, t2

la t0, A
li t1, 0x1
li s8, 0x8
li t2, 0x2
li t3, 0x3
li s4, 0x4
li t5, 0xf0040000
li t6, 0x40
li s7, 0x7
lui t4, 0xF4
add t4, t4, 0x240
li s5, 0x0

REPEAT:
  add s5, s5, 0x1
  lw s8, 40(t0)
  add s9, s8, t1
  sub s8, t2, t3
  and s10, s4, s8
  or s11, t5, t6
  sw s7, 80(s11)
  bne s5, t4, REPEAT # Repeat the loop

lw s4,  0(sp)
lw s7,  4(sp)
lw s8,  8(sp)
lw s9,  12(sp)
lw s10, 16(sp)
lw s11, 20(sp)
lw s5,  24(sp)
add sp, sp, 32
ret

.end
