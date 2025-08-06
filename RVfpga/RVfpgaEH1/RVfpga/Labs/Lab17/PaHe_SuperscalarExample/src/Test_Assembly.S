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
a: .space 16000
b: .space 16000

.text

Test_Assembly:

//li t2, 0x400            # Disable Pipelined Dual-Issue Execution
//csrrs t1, 0x7F9, t2

la x10, a
la x11, b

li x12, 0
li x13, 8000
li x14, 0

TOP:
     slli x5, x12, 2
     add x6, x10, x5
     lw x7, 0(x6)
     lw x29, 4(x6)
     sub x30, x7, x29
     add x31, x11, x5
     sw x30, 0(x31)
     addi x12, x12, 2
     ENT: bne x12, x13, TOP


.end
