.globl Test_Assembly

.text

Test_Assembly:

# li t2, 0x400            # Disable Dual-Issue Execution
# csrrs t1, 0x7F9, t2

li t1, 0x1                
li t3, 0x3                
li t4, 0x4                
li t5, 0x5                
li t6, 0x6                
li a0, 0x0
li a1, 1000
nop

REPEAT:
   add a0, a0, 1
   add t3, t3, 2
   sub t4, t4, t1
   add t5, t5, t1
   sub t6, t6, t1
   bne a0, a1, REPEAT # Repeat the loop 
.end