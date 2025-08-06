.globl main
main:

li t0, 0x4					
li t1, 0x2
li t3, 0x40800000					
li t4, 0x40000000

REPEAT:
	div t5, t0, t1
	nop
	nop
	.word 0x01ce8f53	# fadd.s 0000000 | 11100 | 11101 | 000 | 11110 | 1010011
	nop
	nop
	.word 0x11ce8f53	# fmul.s 0001000 | 11100 | 11101 | 000 | 11110 | 1010011
	nop
	nop
	.word 0x19ce8f53	# fdiv.s 0001100 | 11100 | 11101 | 000 | 11110 | 1010011
	nop
	nop
	beq  zero, zero, REPEAT	# Repeat the loop
    nop

.end
