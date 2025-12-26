# Function: FUN_0042d28c
# Address: 0x0042d28c - 0x0042d314
# Size: 0x88 (136 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d28c <hidePreferencePanel+0x638>:
  42d28c:	3c1c0fbf 	lui	gp,0xfbf
  42d290:	279c08a4 	addiu	gp,gp,2212
  42d294:	0399e021 	addu	gp,gp,t9
  42d298:	27bdffd0 	addiu	sp,sp,-48
  42d29c:	afa50034 	sw	a1,52(sp)
  42d2a0:	8f998154 	lw	t9,-32428(gp)
  42d2a4:	afbf001c 	sw	ra,28(sp)
  42d2a8:	afbc0018 	sw	gp,24(sp)
  42d2ac:	afa40030 	sw	a0,48(sp)
  42d2b0:	8cc40008 	lw	a0,8(a2)
  42d2b4:	8f8580a0 	lw	a1,-32608(gp)
  42d2b8:	0320f809 	jalr	t9
  42d2bc:	27a60024 	addiu	a2,sp,36
  42d2c0:	8fbc0018 	lw	gp,24(sp)
  42d2c4:	10400010 	beqz	v0,42d308 <hidePreferencePanel+0x6b4>
  42d2c8:	8fbf001c 	lw	ra,28(sp)
  42d2cc:	8f84806c 	lw	a0,-32660(gp)
  42d2d0:	8f998214 	lw	t9,-32236(gp)
  42d2d4:	8fa50024 	lw	a1,36(sp)
  42d2d8:	8c846e48 	lw	a0,28232(a0)
  42d2dc:	0320f809 	jalr	t9
  42d2e0:	00000000 	nop
  42d2e4:	8fbc0018 	lw	gp,24(sp)
  42d2e8:	8fa40024 	lw	a0,36(sp)
  42d2ec:	8f998174 	lw	t9,-32396(gp)
  42d2f0:	00000000 	nop
  42d2f4:	0320f809 	jalr	t9
  42d2f8:	00000000 	nop
  42d2fc:	8fbc0018 	lw	gp,24(sp)
  42d300:	00000000 	nop
  42d304:	8fbf001c 	lw	ra,28(sp)
  42d308:	27bd0030 	addiu	sp,sp,48
  42d30c:	03e00008 	jr	ra
  42d310:	00000000 	nop
