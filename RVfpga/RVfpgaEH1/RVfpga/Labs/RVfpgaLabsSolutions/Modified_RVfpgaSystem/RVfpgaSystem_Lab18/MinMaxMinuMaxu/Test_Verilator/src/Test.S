.globl main
main:

li t3, 0x2					
li t4, 0x30
li t6, -0x5

REPEAT:
	nop
	nop
	add t3, t3, t3
	add t4, t4, t6
	nop
	.word 0x0bde4f33 		# min t5, t4, t3     0000 101 | 1 1101  | 1110 0 | 100 | 1111 0 | 011 0011
	nop
	.word 0x0bde6f33 		# max t5, t4, t3     0000 101 | 1 1101  | 1110 0 | 110 | 1111 0 | 011 0011
	nop
	.word 0x0bde5f33 		# minu t5, t4, t3    0000 101 | 1 1101  | 1110 0 | 101 | 1111 0 | 011 0011
	nop
	.word 0x0bde7f33 		# maxu t5, t4, t3    0000 101 | 1 1101  | 1110 0 | 111 | 1111 0 | 011 0011
	nop
	nop
	beq  zero, zero, REPEAT	# Repeat the loop
    nop

.end
