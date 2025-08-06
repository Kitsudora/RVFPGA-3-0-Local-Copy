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
Test_Assembly:

# li t2, 0x400            # Disable Dual-Issue Execution
# csrrs t1, 0x7F9, t2

li t2, 0xFFFF

li t3, 0x3
li t4, 0x2
li t5, 0x2
li t6, 0x2

REPEAT:
   beq t2, zero, OUT     # Stay in the loop?
   INSERT_NOPS_9
   mul t0, t3, t4        # t0 = t3 * t4
   mul t1, t5, t6        # t1 = t5 * t6
   INSERT_NOPS_9
   add t2, t2, -1
   add t0, zero, zero
   add t1, zero, zero
   and zero,t4,t5
   j REPEAT
OUT:

.end