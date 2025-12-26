# Function: postMenu
# Address: 0x0041f054 - 0x0041f104
# Size: 0xb0 (176 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041f054 <postMenu>:
  41f054:	3c1c0fc0 	lui	gp,0xfc0
  41f058:	279ceadc 	addiu	gp,gp,-5412
  41f05c:	0399e021 	addu	gp,gp,t9
  41f060:	27bdffe0 	addiu	sp,sp,-32
  41f064:	afbf001c 	sw	ra,28(sp)
  41f068:	afbc0018 	sw	gp,24(sp)
  41f06c:	afa40020 	sw	a0,32(sp)
  41f070:	afa50024 	sw	a1,36(sp)
  41f074:	afa60028 	sw	a2,40(sp)
  41f078:	8ccf0034 	lw	t7,52(a2)
  41f07c:	24010003 	li	at,3
  41f080:	15e1001d 	bne	t7,at,41f0f8 <postMenu+0xa4>
  41f084:	8fbf001c 	lw	ra,28(sp)
  41f088:	8f84806c 	lw	a0,-32660(gp)
  41f08c:	8f998368 	lw	t9,-31896(gp)
  41f090:	8c846b94 	lw	a0,27540(a0)
  41f094:	0320f809 	jalr	t9
  41f098:	00000000 	nop
  41f09c:	8fbc0018 	lw	gp,24(sp)
  41f0a0:	00402025 	move	a0,v0
  41f0a4:	8f998698 	lw	t9,-31080(gp)
  41f0a8:	00000000 	nop
  41f0ac:	0320f809 	jalr	t9
  41f0b0:	00000000 	nop
  41f0b4:	8fbc0018 	lw	gp,24(sp)
  41f0b8:	8fa50028 	lw	a1,40(sp)
  41f0bc:	8f84806c 	lw	a0,-32660(gp)
  41f0c0:	8f9981dc 	lw	t9,-32292(gp)
  41f0c4:	8c846b94 	lw	a0,27540(a0)
  41f0c8:	0320f809 	jalr	t9
  41f0cc:	00000000 	nop
  41f0d0:	8fbc0018 	lw	gp,24(sp)
  41f0d4:	00000000 	nop
  41f0d8:	8f84806c 	lw	a0,-32660(gp)
  41f0dc:	8f998388 	lw	t9,-31864(gp)
  41f0e0:	8c846b94 	lw	a0,27540(a0)
  41f0e4:	0320f809 	jalr	t9
  41f0e8:	00000000 	nop
  41f0ec:	8fbc0018 	lw	gp,24(sp)
  41f0f0:	00000000 	nop
  41f0f4:	8fbf001c 	lw	ra,28(sp)
  41f0f8:	27bd0020 	addiu	sp,sp,32
  41f0fc:	03e00008 	jr	ra
  41f100:	00000000 	nop
