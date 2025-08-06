#define INSERT_NOPS_1	   nop;
#define INSERT_NOPS_2	   nop; INSERT_NOPS_1
#define INSERT_NOPS_3	   nop; INSERT_NOPS_2
#define INSERT_NOPS_4	   nop; INSERT_NOPS_3
#define INSERT_NOPS_5	   nop; INSERT_NOPS_4
#define INSERT_NOPS_6	   nop; INSERT_NOPS_5
#define INSERT_NOPS_7	   nop; INSERT_NOPS_6
#define INSERT_NOPS_8	   nop; INSERT_NOPS_7
#define INSERT_NOPS_15	   INSERT_NOPS_8; INSERT_NOPS_7
#define INSERT_NOPS_16	   INSERT_NOPS_8; INSERT_NOPS_8
#define INSERT_NOPS_31	   INSERT_NOPS_16; INSERT_NOPS_15
#define INSERT_NOPS_32	   INSERT_NOPS_16; INSERT_NOPS_16
#define INSERT_NOPS_63	   INSERT_NOPS_32; INSERT_NOPS_31
#define INSERT_NOPS_64	   INSERT_NOPS_32; INSERT_NOPS_32
#define INSERT_NOPS_127	   INSERT_NOPS_64; INSERT_NOPS_63
#define INSERT_NOPS_128	   INSERT_NOPS_64; INSERT_NOPS_64
#define INSERT_NOPS_255	   INSERT_NOPS_128; INSERT_NOPS_127
#define INSERT_NOPS_256	   INSERT_NOPS_128; INSERT_NOPS_128
#define INSERT_NOPS_511	   INSERT_NOPS_256; INSERT_NOPS_255
#define INSERT_NOPS_512	   INSERT_NOPS_256; INSERT_NOPS_256
#define INSERT_NOPS_1023	INSERT_NOPS_512; INSERT_NOPS_511

.globl Test_Assembly

.text

Test_Assembly:

li t0, 0x10000
INSERT_NOPS_16
INSERT_NOPS_2

Set8_Block1:   beq t0, zero, OUT
               add t0, t0, -1
               j Set8_Block2        # This j instruction is stored at address 0x00000200
               INSERT_NOPS_1023

Set8_Block2:   j Set8_Block4        # This j instruction is stored at address 0x00001200
               INSERT_NOPS_1023

Set8_Block4:   j Set8_Block5        # This j instruction is stored at address 0x00003200
               INSERT_NOPS_1023

Set8_Block5:   j Set8_Block1        # This j instruction is stored at address 0x00004200

OUT:

ret

.end