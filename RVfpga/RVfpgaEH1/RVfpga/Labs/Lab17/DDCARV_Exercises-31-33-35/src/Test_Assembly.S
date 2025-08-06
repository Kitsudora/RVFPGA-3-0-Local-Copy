#define INSERT_NOPS_1	   nop; 
#define INSERT_NOPS_2	   nop; INSERT_NOPS_1
#define INSERT_NOPS_3	   nop; INSERT_NOPS_2
#define INSERT_NOPS_4	   nop; INSERT_NOPS_3
#define INSERT_NOPS_5	   nop; INSERT_NOPS_4
#define INSERT_NOPS_6	   nop; INSERT_NOPS_5
#define INSERT_NOPS_7	   nop; INSERT_NOPS_6
#define INSERT_NOPS_8	   nop; INSERT_NOPS_7
#define INSERT_NOPS_9	   nop; INSERT_NOPS_8
#define INSERT_NOPS_10	 nop; INSERT_NOPS_9

.globl Test_Assembly

.section .midccm
#.data
A: .space 1000

.text

Test_Assembly:

add sp, sp, -32
sw s1, 0(sp)
sw s2, 4(sp)
sw s3, 8(sp)
sw s4, 12(sp)
sw s5, 16(sp)
sw s6, 20(sp)
sw s7, 24(sp)


//li t2, 0x400            # Disable Pipelined Dual-Issue Execution
//csrrs t1, 0x7F9, t2

la t0, A
li t1, 0x5					# t1 = 5
sw t1, 64(t0)			  # A[16] = 5
li s6, 0x0
li s7, 1000000


REPEAT:
  add s6, s6, 0x1

  INSERT_NOPS_10
  addi s1, t0, 52
  addi s0, s1, -4
  lw s3, 16(s0)
  sw s3, 20(s0)
  xor s2, s0, s3
  or s2, s2, s3
  INSERT_NOPS_10
  INSERT_NOPS_9

  bne s6, s7, REPEAT # Repeat the loop


lw s1, 0(sp)
lw s2, 4(sp)
lw s3, 8(sp)
lw s4, 12(sp)
lw s5, 16(sp)
lw s6, 20(sp)
lw s7, 24(sp)
add sp, sp, 32

ret

.end
