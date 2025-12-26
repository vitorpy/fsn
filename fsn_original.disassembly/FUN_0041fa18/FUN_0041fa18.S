# Function: FUN_0041fa18
# Address: 0x0041fa18 - 0x0041fadc
# Size: 0xc4 (196 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fa18 <doIt+0x90c>:
  41fa18:	3c1c0fc0 	lui	gp,0xfc0
  41fa1c:	279ce118 	addiu	gp,gp,-7912
  41fa20:	0399e021 	addu	gp,gp,t9
  41fa24:	8f8f892c 	lw	t7,-30420(gp)
  41fa28:	27bdffe0 	addiu	sp,sp,-32
  41fa2c:	8f81806c 	lw	at,-32660(gp)
  41fa30:	8def0000 	lw	t7,0(t7)
  41fa34:	240e0001 	li	t6,1
  41fa38:	afbf001c 	sw	ra,28(sp)
  41fa3c:	afbc0018 	sw	gp,24(sp)
  41fa40:	afa40020 	sw	a0,32(sp)
  41fa44:	afa50024 	sw	a1,36(sp)
  41fa48:	afa60028 	sw	a2,40(sp)
  41fa4c:	11e0001f 	beqz	t7,41facc <doIt+0x9c0>
  41fa50:	a02e6bc8 	sb	t6,27592(at)
  41fa54:	8f998770 	lw	t9,-30864(gp)
  41fa58:	00000000 	nop
  41fa5c:	0320f809 	jalr	t9
  41fa60:	00000000 	nop
  41fa64:	8fbc0018 	lw	gp,24(sp)
  41fa68:	8fa40024 	lw	a0,36(sp)
  41fa6c:	8f998778 	lw	t9,-30856(gp)
  41fa70:	24050001 	li	a1,1
  41fa74:	0320f809 	jalr	t9
  41fa78:	00000000 	nop
  41fa7c:	8fbc0018 	lw	gp,24(sp)
  41fa80:	8fa40020 	lw	a0,32(sp)
  41fa84:	8f998204 	lw	t9,-32252(gp)
  41fa88:	00000000 	nop
  41fa8c:	0320f809 	jalr	t9
  41fa90:	00000000 	nop
  41fa94:	8fbc0018 	lw	gp,24(sp)
  41fa98:	00402025 	move	a0,v0
  41fa9c:	8f99875c 	lw	t9,-30884(gp)
  41faa0:	00000000 	nop
  41faa4:	0320f809 	jalr	t9
  41faa8:	00000000 	nop
  41faac:	8fbc0018 	lw	gp,24(sp)
  41fab0:	00000000 	nop
  41fab4:	8f998774 	lw	t9,-30860(gp)
  41fab8:	00000000 	nop
  41fabc:	0320f809 	jalr	t9
  41fac0:	00000000 	nop
  41fac4:	8fbc0018 	lw	gp,24(sp)
  41fac8:	00000000 	nop
  41facc:	8fbf001c 	lw	ra,28(sp)
  41fad0:	27bd0020 	addiu	sp,sp,32
  41fad4:	03e00008 	jr	ra
  41fad8:	00000000 	nop
