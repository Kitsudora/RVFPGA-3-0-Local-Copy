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

li  t2, 0x1
li  t4, 0x0
li  t6, 0x0
li  a2, 0xFFFF
add t3, a0, zero
add t5, a1, zero

REPEAT:
   mul t0, t3, t2        # t0 = t3 * t2
   mul t1, t5, t2        # t1 = t5 * t2
   add t2, t2, 1
   sub t4, t0, t1
   add t6, t6, t4
   bne t2, a2, REPEAT   # Repeat the loop

add a0, t6, zero

ret

.end