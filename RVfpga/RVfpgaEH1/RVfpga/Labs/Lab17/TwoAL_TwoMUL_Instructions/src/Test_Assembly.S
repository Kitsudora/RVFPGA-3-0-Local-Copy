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

.text

Test_Assembly:

# li t2, 0x400            # Disable Dual-Issue Execution
# csrrs t1, 0x7F9, t2

li t0, 0x0
li t1, 0x1
li t2, 0x0
li t3, 0x3                
li t4, 0x4                
li t5, 0x5                
li t6, 0x6                
lui t2, 0xF4
add t2, t2, 0x240

REPEAT:
  add t0, t0, 1
  INSERT_NOPS_10
  INSERT_NOPS_3
  mul t3, t3, t1        
  add t4, t4, t1
  mul t5, t5, t1        
  sub t6, t6, t1
  INSERT_NOPS_10
  INSERT_NOPS_3
  bne t0, t2, REPEAT # Repeat the loop

.end