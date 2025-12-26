# Function: FUN_0040bce8
# Address: 0x0040bce8 - 0x0040bdb4
# Size: 0xcc (204 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bce8 <setOverlayWindow+0xcc>:
  40bce8:	3c1c0fc1 	lui	gp,0xfc1
  40bcec:	279c1e48 	addiu	gp,gp,7752
  40bcf0:	0399e021 	addu	gp,gp,t9
  40bcf4:	27bdffe0 	addiu	sp,sp,-32
  40bcf8:	8f998770 	lw	t9,-30864(gp)
  40bcfc:	afbf001c 	sw	ra,28(sp)
  40bd00:	afbc0018 	sw	gp,24(sp)
  40bd04:	afa40020 	sw	a0,32(sp)
  40bd08:	afa50024 	sw	a1,36(sp)
  40bd0c:	0320f809 	jalr	t9
  40bd10:	afa60028 	sw	a2,40(sp)
  40bd14:	8fbc0018 	lw	gp,24(sp)
  40bd18:	8fa40020 	lw	a0,32(sp)
  40bd1c:	8f998778 	lw	t9,-30856(gp)
  40bd20:	24050001 	li	a1,1
  40bd24:	0320f809 	jalr	t9
  40bd28:	00000000 	nop
  40bd2c:	8fbc0018 	lw	gp,24(sp)
  40bd30:	00000000 	nop
  40bd34:	8f998520 	lw	t9,-31456(gp)
  40bd38:	00000000 	nop
  40bd3c:	0320f809 	jalr	t9
  40bd40:	00000000 	nop
  40bd44:	8fbc0018 	lw	gp,24(sp)
  40bd48:	00002025 	move	a0,zero
  40bd4c:	8f998304 	lw	t9,-31996(gp)
  40bd50:	00000000 	nop
  40bd54:	0320f809 	jalr	t9
  40bd58:	00000000 	nop
  40bd5c:	8fbc0018 	lw	gp,24(sp)
  40bd60:	00000000 	nop
  40bd64:	8f998308 	lw	t9,-31992(gp)
  40bd68:	00000000 	nop
  40bd6c:	0320f809 	jalr	t9
  40bd70:	00000000 	nop
  40bd74:	8fbc0018 	lw	gp,24(sp)
  40bd78:	00000000 	nop
  40bd7c:	8f998330 	lw	t9,-31952(gp)
  40bd80:	00000000 	nop
  40bd84:	0320f809 	jalr	t9
  40bd88:	00000000 	nop
  40bd8c:	8fbc0018 	lw	gp,24(sp)
  40bd90:	00000000 	nop
  40bd94:	8f998774 	lw	t9,-30860(gp)
  40bd98:	00000000 	nop
  40bd9c:	0320f809 	jalr	t9
  40bda0:	00000000 	nop
  40bda4:	8fbf001c 	lw	ra,28(sp)
  40bda8:	8fbc0018 	lw	gp,24(sp)
  40bdac:	03e00008 	jr	ra
  40bdb0:	27bd0020 	addiu	sp,sp,32
