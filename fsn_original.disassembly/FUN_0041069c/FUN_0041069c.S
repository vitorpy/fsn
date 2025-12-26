# Function: FUN_0041069c
# Address: 0x0041069c - 0x004106d8
# Size: 0x3c (60 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041069c <zoomto+0x444>:
  41069c:	3c1c0fc1 	lui	gp,0xfc1
  4106a0:	279cd494 	addiu	gp,gp,-11116
  4106a4:	0399e021 	addu	gp,gp,t9
  4106a8:	27bdffe0 	addiu	sp,sp,-32
  4106ac:	8f998550 	lw	t9,-31408(gp)
  4106b0:	afbf001c 	sw	ra,28(sp)
  4106b4:	afbc0018 	sw	gp,24(sp)
  4106b8:	afa40020 	sw	a0,32(sp)
  4106bc:	afa50024 	sw	a1,36(sp)
  4106c0:	0320f809 	jalr	t9
  4106c4:	afa60028 	sw	a2,40(sp)
  4106c8:	8fbf001c 	lw	ra,28(sp)
  4106cc:	8fbc0018 	lw	gp,24(sp)
  4106d0:	03e00008 	jr	ra
  4106d4:	27bd0020 	addiu	sp,sp,32
