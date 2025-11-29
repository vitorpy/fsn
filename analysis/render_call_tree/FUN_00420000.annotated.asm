# Disassembly of FUN_00420000
# Address: 0x00420000
# End: 0x00420318
# Size: 0x318 (792 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420000 <createOverview+0x21c>:
  420000:	0320f809 	jalr	t9
  420004:	afae0068 	sw	t6,104(sp)
  420008:	8fbc0020 	lw	gp,32(sp)
  42000c:	10400006 	beqz	v0,420028 <createOverview+0x244>
  420010:	27a30048 	addiu	v1,sp,72
  420014:	8f98805c 	lw	t8,-32676(gp)  # DAT_10010000
  420018:	00000000 	nop
  42001c:	2718b99c 	addiu	t8,t8,-18020
  420020:	10000005 	b	420038 <createOverview+0x254>
  420024:	afb80070 	sw	t8,112(sp)
  420028:	8f99805c 	lw	t9,-32676(gp)  # DAT_10010000
  42002c:	00000000 	nop
  420030:	2739b9a8 	addiu	t9,t9,-18008
  420034:	afb90070 	sw	t9,112(sp)
  420038:	8f8a80a4 	lw	t2,-32604(gp)
  42003c:	24070006 	li	a3,6
  420040:	24080001 	li	t0,1
  420044:	000748c0 	sll	t1,a3,0x3
  420048:	8f818a30 	lw	at,-30160(gp)  # maxx
  42004c:	afa80074 	sw	t0,116(sp)
  420050:	00691021 	addu	v0,v1,t1
  420054:	254a0368 	addiu	t2,t2,872
  420058:	ac4a0000 	sw	t2,0(v0)
  42005c:	c4240000 	lwc1	$f4,0(at)
  420060:	8f818a2c 	lw	at,-30164(gp)  # minx
  420064:	460021a1 	cvt.d.s	$f6,$f4
  420068:	c4280000 	lwc1	$f8,0(at)
  42006c:	3c014008 	lui	at,0x4008
  420070:	460042a1 	cvt.d.s	$f10,$f8
  420074:	462a3401 	sub.d	$f16,$f6,$f10
  420078:	44819800 	mtc1	at,$f19  # $f19 = 2.125f
  42007c:	44809000 	mtc1	zero,$f18
  420080:	8f8d80a4 	lw	t5,-32604(gp)
  420084:	46328102 	mul.d	$f4,$f16,$f18
  420088:	24e70001 	addiu	a3,a3,1
  42008c:	000760c0 	sll	t4,a3,0x3
  420090:	25ad00ea 	addiu	t5,t5,234
  420094:	8f9986a0 	lw	t9,-31072(gp)  # FUN_00421f10
  420098:	444bf800 	cfc1	t3,c1_fcsr
  42009c:	24e70001 	addiu	a3,a3,1
  4200a0:	35610003 	ori	at,t3,0x3
  4200a4:	38210002 	xori	at,at,0x2
  4200a8:	44c1f800 	ctc1	at,c1_fcsr
  4200ac:	8f818a38 	lw	at,-30152(gp)  # maxy
  4200b0:	46202224 	cvt.w.d	$f8,$f4
  4200b4:	e4480004 	swc1	$f8,4(v0)
  4200b8:	006c1021 	addu	v0,v1,t4
  4200bc:	ac4d0000 	sw	t5,0(v0)
  4200c0:	c4260000 	lwc1	$f6,0(at)
  4200c4:	8f818a34 	lw	at,-30156(gp)  # miny
  4200c8:	44cbf800 	ctc1	t3,c1_fcsr
  4200cc:	c4300000 	lwc1	$f16,0(at)
  4200d0:	460032a1 	cvt.d.s	$f10,$f6
  4200d4:	460084a1 	cvt.d.s	$f18,$f16
  4200d8:	46325101 	sub.d	$f4,$f10,$f18
  4200dc:	444ef800 	cfc1	t6,c1_fcsr
  4200e0:	00000000 	nop
  4200e4:	35c10003 	ori	at,t6,0x3
  4200e8:	38210002 	xori	at,at,0x2
  4200ec:	44c1f800 	ctc1	at,c1_fcsr
  4200f0:	00000000 	nop
  4200f4:	46202224 	cvt.w.d	$f8,$f4
  4200f8:	e4480004 	swc1	$f8,4(v0)
  4200fc:	44cef800 	ctc1	t6,c1_fcsr
  420100:	0320f809 	jalr	t9  # call FUN_00421f10
  420104:	afa70044 	sw	a3,68(sp)
  420108:	8fbc0020 	lw	gp,32(sp)
  42010c:	8fa70044 	lw	a3,68(sp)
  420110:	10400008 	beqz	v0,420134 <createOverview+0x350>
  420114:	27a60048 	addiu	a2,sp,72
  420118:	8f99805c 	lw	t9,-32676(gp)  # DAT_10010000
  42011c:	000778c0 	sll	t7,a3,0x3
  420120:	27b80048 	addiu	t8,sp,72
  420124:	01f81021 	addu	v0,t7,t8
  420128:	2739b9b4 	addiu	t9,t9,-17996
  42012c:	10000007 	b	42014c <createOverview+0x368>
  420130:	ac590000 	sw	t9,0(v0)
  420134:	8f8a805c 	lw	t2,-32676(gp)  # DAT_10010000
  420138:	000740c0 	sll	t0,a3,0x3
  42013c:	27a90048 	addiu	t1,sp,72
  420140:	01091021 	addu	v0,t0,t1
  420144:	254ab9c4 	addiu	t2,t2,-17980
  420148:	ac4a0000 	sw	t2,0(v0)
  42014c:	8fab0030 	lw	t3,48(sp)
  420150:	8f85805c 	lw	a1,-32676(gp)  # DAT_10010000
  420154:	8f9981fc 	lw	t9,-32260(gp)
  420158:	ac4b0004 	sw	t3,4(v0)
  42015c:	8fa40040 	lw	a0,64(sp)
  420160:	24e70001 	addiu	a3,a3,1
  420164:	0320f809 	jalr	t9  # call DAT_10010000
  420168:	24a5b9d4 	addiu	a1,a1,-17964
  42016c:	8fbc0020 	lw	gp,32(sp)
  420170:	00402025 	move	a0,v0
  420174:	8f83806c 	lw	v1,-32660(gp)  # DAT_10010000
  420178:	8f85805c 	lw	a1,-32676(gp)  # DAT_10010000
  42017c:	24636c0c 	addiu	v1,v1,27660
  420180:	ac620000 	sw	v0,0(v1)
  420184:	8f9983ac 	lw	t9,-31828(gp)
  420188:	8f86801c 	lw	a2,-32740(gp)  # FUN_00420000
  42018c:	00003825 	move	a3,zero
  420190:	24a5b9e0 	addiu	a1,a1,-17952
  420194:	0320f809 	jalr	t9
  420198:	24c60bfc 	addiu	a2,a2,3068
  42019c:	8fbc0020 	lw	gp,32(sp)
  4201a0:	00000000 	nop
  4201a4:	8f9986a0 	lw	t9,-31072(gp)  # FUN_00421f10
  4201a8:	00000000 	nop
  4201ac:	0320f809 	jalr	t9  # call FUN_00421f10
  4201b0:	00000000 	nop
  4201b4:	8fbc0020 	lw	gp,32(sp)
  4201b8:	10400004 	beqz	v0,4201cc <createOverview+0x3e8>
  4201bc:	00003825 	move	a3,zero
  4201c0:	8f85805c 	lw	a1,-32676(gp)  # DAT_10010000
  4201c4:	10000004 	b	4201d8 <createOverview+0x3f4>
  4201c8:	24a5b9f0 	addiu	a1,a1,-17936
  4201cc:	8f85805c 	lw	a1,-32676(gp)  # DAT_10010000
  4201d0:	00000000 	nop
  4201d4:	24a5ba04 	addiu	a1,a1,-17916
  4201d8:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  4201dc:	8f86801c 	lw	a2,-32740(gp)  # FUN_00420000
  4201e0:	8f9983ac 	lw	t9,-31828(gp)
  4201e4:	8c846c0c 	lw	a0,27660(a0)
  4201e8:	0320f809 	jalr	t9
  4201ec:	24c60c50 	addiu	a2,a2,3152
  4201f0:	8fbc0020 	lw	gp,32(sp)
  4201f4:	00003825 	move	a3,zero
  4201f8:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  4201fc:	8f85805c 	lw	a1,-32676(gp)  # DAT_10010000
  420200:	8f86801c 	lw	a2,-32740(gp)  # FUN_00420000
  420204:	8f9983ac 	lw	t9,-31828(gp)
  420208:	8c846c0c 	lw	a0,27660(a0)
  42020c:	24a5ba18 	addiu	a1,a1,-17896
  420210:	0320f809 	jalr	t9
  420214:	24c60ca4 	addiu	a2,a2,3236
  420218:	8fbc0020 	lw	gp,32(sp)
  42021c:	00003825 	move	a3,zero
  420220:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  420224:	8f85805c 	lw	a1,-32676(gp)  # DAT_10010000
  420228:	8f86801c 	lw	a2,-32740(gp)  # FUN_00420000
  42022c:	8f9983ac 	lw	t9,-31828(gp)
  420230:	8c846c0c 	lw	a0,27660(a0)
  420234:	24a5ba28 	addiu	a1,a1,-17880
  420238:	0320f809 	jalr	t9
  42023c:	24c60e74 	addiu	a2,a2,3700
  420240:	8fbc0020 	lw	gp,32(sp)
  420244:	00000000 	nop
  420248:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  42024c:	8f998388 	lw	t9,-31864(gp)
  420250:	8c846c0c 	lw	a0,27660(a0)
  420254:	0320f809 	jalr	t9
  420258:	00000000 	nop
  42025c:	8fbc0020 	lw	gp,32(sp)
  420260:	00000000 	nop
  420264:	8f858068 	lw	a1,-32664(gp)  # small
  420268:	00000000 	nop
  42026c:	8ca56e60 	lw	a1,28256(a1)
  420270:	00000000 	nop
  420274:	14a0000c 	bnez	a1,4202a8 <createOverview+0x4c4>
  420278:	00000000 	nop
  42027c:	8f9983f0 	lw	t9,-31760(gp)
  420280:	8f848954 	lw	a0,-30380(gp)  # overviewGlw_translations
  420284:	0320f809 	jalr	t9
  420288:	00000000 	nop
  42028c:	8fbc0020 	lw	gp,32(sp)
  420290:	00000000 	nop
  420294:	8f818068 	lw	at,-32664(gp)  # small
  420298:	8f858068 	lw	a1,-32664(gp)  # small
  42029c:	ac226e60 	sw	v0,28256(at)
  4202a0:	8ca56e60 	lw	a1,28256(a1)
  4202a4:	00000000 	nop
  4202a8:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  4202ac:	8f9983a8 	lw	t9,-31832(gp)
  4202b0:	8c846c0c 	lw	a0,27660(a0)
  4202b4:	0320f809 	jalr	t9
  4202b8:	00000000 	nop
  4202bc:	8fbc0020 	lw	gp,32(sp)
  4202c0:	8fad0034 	lw	t5,52(sp)
  4202c4:	8f8c80a4 	lw	t4,-32604(gp)
  4202c8:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  4202cc:	8f998340 	lw	t9,-31936(gp)
  4202d0:	258c009a 	addiu	t4,t4,154
  4202d4:	8c846c0c 	lw	a0,27660(a0)
  4202d8:	afac0048 	sw	t4,72(sp)
  4202dc:	27a50048 	addiu	a1,sp,72
  4202e0:	24060001 	li	a2,1
  4202e4:	0320f809 	jalr	t9
  4202e8:	afad004c 	sw	t5,76(sp)
  4202ec:	8fbc0020 	lw	gp,32(sp)
  4202f0:	00000000 	nop
  4202f4:	8f848068 	lw	a0,-32664(gp)  # small
  4202f8:	8f998388 	lw	t9,-31864(gp)
  4202fc:	8c846eb4 	lw	a0,28340(a0)
  420300:	0320f809 	jalr	t9
  420304:	00000000 	nop
  420308:	8fbf0024 	lw	ra,36(sp)
  42030c:	8fbc0020 	lw	gp,32(sp)
  420310:	03e00008 	jr	ra
  420314:	27bd00e8 	addiu	sp,sp,232


======================================================================
ANALYSIS SUMMARY: FUN_00420000
======================================================================

FUNCTION CALLS:
----------------------------------------
  DAT_10010000
  FUN_00421f10 (2x)

FLOAT CONSTANTS LOADED:
----------------------------------------
  0x40080000 = 2.125f

GP SYMBOL REFERENCES:
----------------------------------------
  DAT_10010000
  FUN_00420000
  FUN_00421f10
  maxx
  maxy
  minx
  miny
  overviewGlw_translations
  small

======================================================================