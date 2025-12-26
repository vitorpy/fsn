# Function: FUN_004220f0
# Address: 0x004220f0 - 0x004221c8
# Size: 0xd8 (216 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004220f0 <allocOverlayColor+0xc>:
  4220f0:	27bdff68 	addiu	sp,sp,-152
  4220f4:	8f9986a0 	lw	t9,-31072(gp)
  4220f8:	afbf0024 	sw	ra,36(sp)
  4220fc:	afbc0020 	sw	gp,32(sp)
  422100:	afa40098 	sw	a0,152(sp)
  422104:	0320f809 	jalr	t9
  422108:	afa5009c 	sw	a1,156(sp)
  42210c:	8fbc0020 	lw	gp,32(sp)
  422110:	10400006 	beqz	v0,42212c <allocOverlayColor+0x48>
  422114:	27b80040 	addiu	t8,sp,64
  422118:	8f8e805c 	lw	t6,-32676(gp)
  42211c:	00000000 	nop
  422120:	25cebac8 	addiu	t6,t6,-17720
  422124:	10000005 	b	42213c <allocOverlayColor+0x58>
  422128:	afae0048 	sw	t6,72(sp)
  42212c:	8f8f805c 	lw	t7,-32676(gp)
  422130:	00000000 	nop
  422134:	25efbad8 	addiu	t7,t7,-17704
  422138:	afaf0048 	sw	t7,72(sp)
  42213c:	8f998364 	lw	t9,-31900(gp)
  422140:	8fa40098 	lw	a0,152(sp)
  422144:	afb8004c 	sw	t8,76(sp)
  422148:	24060001 	li	a2,1
  42214c:	0320f809 	jalr	t9
  422150:	27a50048 	addiu	a1,sp,72
  422154:	8fbc0020 	lw	gp,32(sp)
  422158:	27b90028 	addiu	t9,sp,40
  42215c:	8f848a04 	lw	a0,-30204(gp)
  422160:	afb90010 	sw	t9,16(sp)
  422164:	8f9982bc 	lw	t9,-32068(gp)
  422168:	8fa50040 	lw	a1,64(sp)
  42216c:	8fa6009c 	lw	a2,156(sp)
  422170:	8c840000 	lw	a0,0(a0)
  422174:	0320f809 	jalr	t9
  422178:	27a70034 	addiu	a3,sp,52
  42217c:	8fbc0020 	lw	gp,32(sp)
  422180:	10400004 	beqz	v0,422194 <allocOverlayColor+0xb0>
  422184:	00000000 	nop
  422188:	8fa20034 	lw	v0,52(sp)
  42218c:	1000000b 	b	4221bc <allocOverlayColor+0xd8>
  422190:	8fbf0024 	lw	ra,36(sp)
  422194:	8f848098 	lw	a0,-32616(gp)
  422198:	8f85805c 	lw	a1,-32676(gp)
  42219c:	8f9983f8 	lw	t9,-31752(gp)
  4221a0:	8fa6009c 	lw	a2,156(sp)
  4221a4:	24840020 	addiu	a0,a0,32
  4221a8:	0320f809 	jalr	t9
  4221ac:	24a5bae8 	addiu	a1,a1,-17688
  4221b0:	8fbc0020 	lw	gp,32(sp)
  4221b4:	24020001 	li	v0,1
  4221b8:	8fbf0024 	lw	ra,36(sp)
  4221bc:	27bd0098 	addiu	sp,sp,152
  4221c0:	03e00008 	jr	ra
  4221c4:	00000000 	nop
