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
sw t0, 36(t0)			  # A[9] = 4
li t1, 0x5					# t1 = 2
sw t1, 16(t0)			  # A[5] = 5
li t4, 0x4					# t4 = 4
li s6, 0x0
li s7, 1000000


REPEAT:
  add s6, s6, 0x1

  INSERT_NOPS_10
  addi s1, t0, 11   # t0 contains the base address of the DCCM
  lw s2, 25(s1)
  lw s5, 16(s2)
  add s3, s2, s5
  or s4, s3, t4
  and s2, s3, s4
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
