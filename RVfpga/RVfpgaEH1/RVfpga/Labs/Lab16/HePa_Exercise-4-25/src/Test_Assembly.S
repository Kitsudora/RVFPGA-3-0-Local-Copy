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
A: .space 32

.text

Test_Assembly:

//li t2, 0x400            # Disable Pipelined Dual-Issue Execution
//csrrs t1, 0x7F9, t2

la x13, A
li t0, 0
sw t0, 0(x13)
sw t0, 4(x13)
add t0, t0, 1
sw t0, 8(x13)
sw t0, 12(x13)
sw t0, 16(x13)
sw t0, 20(x13)
sw t0, 24(x13)
sw t0, 28(x13)
sw t0, 32(x13)
sw t0, 36(x13)
sw t0, 40(x13)
sw t0, 44(x13)
sw t0, 48(x13)
sw t0, 52(x13)
sw t0, 56(x13)
sw t0, 60(x13)
add x13, x13, 56

LOOP: lw x10, 0(x13)
      lw x11, 4(x13)
      add x12, x10, x11
      add x13, x13, -8
      bnez x12, LOOP

ret

.end
