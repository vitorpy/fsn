# Function: FUN_0042c970
# Address: 0x0042c970 - 0x0042caa0
# Size: 0x130 (304 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042c970 <showPreferencePanel+0xf88>:
  42c970:	3c1c0fbf 	lui	gp,0xfbf
  42c974:	279c11c0 	addiu	gp,gp,4544
  42c978:	0399e021 	addu	gp,gp,t9
  42c97c:	27bdffe0 	addiu	sp,sp,-32
  42c980:	308f0001 	andi	t7,a0,0x1
  42c984:	afbf001c 	sw	ra,28(sp)
  42c988:	afbc0018 	sw	gp,24(sp)
  42c98c:	11e00007 	beqz	t7,42c9ac <showPreferencePanel+0xfc4>
  42c990:	afa40020 	sw	a0,32(sp)
  42c994:	8f998588 	lw	t9,-31352(gp)
  42c998:	00000000 	nop
  42c99c:	0320f809 	jalr	t9
  42c9a0:	00000000 	nop
  42c9a4:	8fbc0018 	lw	gp,24(sp)
  42c9a8:	00000000 	nop
  42c9ac:	8fb80020 	lw	t8,32(sp)
  42c9b0:	00000000 	nop
  42c9b4:	33190004 	andi	t9,t8,0x4
  42c9b8:	13200008 	beqz	t9,42c9dc <showPreferencePanel+0xff4>
  42c9bc:	8fa80020 	lw	t0,32(sp)
  42c9c0:	8f99872c 	lw	t9,-30932(gp)
  42c9c4:	00000000 	nop
  42c9c8:	0320f809 	jalr	t9
  42c9cc:	00000000 	nop
  42c9d0:	8fbc0018 	lw	gp,24(sp)
  42c9d4:	00000000 	nop
  42c9d8:	8fa80020 	lw	t0,32(sp)
  42c9dc:	00000000 	nop
  42c9e0:	31090010 	andi	t1,t0,0x10
  42c9e4:	11200014 	beqz	t1,42ca38 <showPreferencePanel+0x1050>
  42c9e8:	8fac0020 	lw	t4,32(sp)
  42c9ec:	8f99851c 	lw	t9,-31460(gp)
  42c9f0:	00000000 	nop
  42c9f4:	0320f809 	jalr	t9
  42c9f8:	00000000 	nop
  42c9fc:	8fbc0018 	lw	gp,24(sp)
  42ca00:	00000000 	nop
  42ca04:	8f8a8a24 	lw	t2,-30172(gp)
  42ca08:	8f8b897c 	lw	t3,-30340(gp)
  42ca0c:	8d4a0050 	lw	t2,80(t2)
  42ca10:	8d6b0000 	lw	t3,0(t3)
  42ca14:	00000000 	nop
  42ca18:	a56a0010 	sh	t2,16(t3)
  42ca1c:	8f998524 	lw	t9,-31452(gp)
  42ca20:	00000000 	nop
  42ca24:	0320f809 	jalr	t9
  42ca28:	00000000 	nop
  42ca2c:	8fbc0018 	lw	gp,24(sp)
  42ca30:	00000000 	nop
  42ca34:	8fac0020 	lw	t4,32(sp)
  42ca38:	00000000 	nop
  42ca3c:	318d0002 	andi	t5,t4,0x2
  42ca40:	11a00014 	beqz	t5,42ca94 <showPreferencePanel+0x10ac>
  42ca44:	8fbf001c 	lw	ra,28(sp)
  42ca48:	8f998534 	lw	t9,-31436(gp)
  42ca4c:	00000000 	nop
  42ca50:	0320f809 	jalr	t9
  42ca54:	00000000 	nop
  42ca58:	8fbc0018 	lw	gp,24(sp)
  42ca5c:	00000000 	nop
  42ca60:	8f998780 	lw	t9,-30848(gp)
  42ca64:	00000000 	nop
  42ca68:	0320f809 	jalr	t9
  42ca6c:	00000000 	nop
  42ca70:	8fbc0018 	lw	gp,24(sp)
  42ca74:	00000000 	nop
  42ca78:	8f998674 	lw	t9,-31116(gp)
  42ca7c:	00000000 	nop
  42ca80:	0320f809 	jalr	t9
  42ca84:	00000000 	nop
  42ca88:	8fbc0018 	lw	gp,24(sp)
  42ca8c:	00000000 	nop
  42ca90:	8fbf001c 	lw	ra,28(sp)
  42ca94:	27bd0020 	addiu	sp,sp,32
  42ca98:	03e00008 	jr	ra
  42ca9c:	00000000 	nop
