# Function: createOverview
# Address: 0x0041fde4 - 0x00420318
# Size: 0x534 (1332 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fde4 <createOverview>:
  41fde4:	3c1c0fc0 	lui	gp,0xfc0
  41fde8:	279cdd4c 	addiu	gp,gp,-8884
  41fdec:	0399e021 	addu	gp,gp,t9
  41fdf0:	8f8e8068 	lw	t6,-32664(gp)
  41fdf4:	27bdff18 	addiu	sp,sp,-232
  41fdf8:	91ce6ebc 	lbu	t6,28348(t6)
  41fdfc:	afbf0024 	sw	ra,36(sp)
  41fe00:	15c0000d 	bnez	t6,41fe38 <createOverview+0x54>
  41fe04:	afbc0020 	sw	gp,32(sp)
  41fe08:	8f848a00 	lw	a0,-30208(gp)
  41fe0c:	8f858068 	lw	a1,-32664(gp)
  41fe10:	8f9983c4 	lw	t9,-31804(gp)
  41fe14:	8c840000 	lw	a0,0(a0)
  41fe18:	24060004 	li	a2,4
  41fe1c:	0320f809 	jalr	t9
  41fe20:	24a56e94 	addiu	a1,a1,28308
  41fe24:	8fbc0020 	lw	gp,32(sp)
  41fe28:	240f0001 	li	t7,1
  41fe2c:	8f818068 	lw	at,-32664(gp)
  41fe30:	00000000 	nop
  41fe34:	a02f6ebc 	sb	t7,28348(at)
  41fe38:	27b90034 	addiu	t9,sp,52
  41fe3c:	8f9880a4 	lw	t8,-32604(gp)
  41fe40:	afb9004c 	sw	t9,76(sp)
  41fe44:	8f9986a0 	lw	t9,-31072(gp)
  41fe48:	2718009a 	addiu	t8,t8,154
  41fe4c:	0320f809 	jalr	t9
  41fe50:	afb80048 	sw	t8,72(sp)
  41fe54:	8fbc0020 	lw	gp,32(sp)
  41fe58:	10400006 	beqz	v0,41fe74 <createOverview+0x90>
  41fe5c:	27aa0030 	addiu	t2,sp,48
  41fe60:	8f88805c 	lw	t0,-32676(gp)
  41fe64:	00000000 	nop
  41fe68:	2508b954 	addiu	t0,t0,-18092
  41fe6c:	10000005 	b	41fe84 <createOverview+0xa0>
  41fe70:	afa80050 	sw	t0,80(sp)
  41fe74:	8f89805c 	lw	t1,-32676(gp)
  41fe78:	00000000 	nop
  41fe7c:	2529b964 	addiu	t1,t1,-18076
  41fe80:	afa90050 	sw	t1,80(sp)
  41fe84:	8f8b8984 	lw	t3,-30332(gp)
  41fe88:	8f998364 	lw	t9,-31900(gp)
  41fe8c:	8d6b0000 	lw	t3,0(t3)
  41fe90:	afaa0054 	sw	t2,84(sp)
  41fe94:	8d640008 	lw	a0,8(t3)
  41fe98:	24060002 	li	a2,2
  41fe9c:	0320f809 	jalr	t9
  41fea0:	27a50048 	addiu	a1,sp,72
  41fea4:	8fbc0020 	lw	gp,32(sp)
  41fea8:	240d0001 	li	t5,1
  41feac:	8f8c8080 	lw	t4,-32640(gp)
  41feb0:	8f85808c 	lw	a1,-32628(gp)
  41feb4:	8f868a10 	lw	a2,-30192(gp)
  41feb8:	8f84805c 	lw	a0,-32676(gp)
  41febc:	8f99820c 	lw	t9,-32244(gp)
  41fec0:	240e0001 	li	t6,1
  41fec4:	258c0118 	addiu	t4,t4,280
  41fec8:	8ca50000 	lw	a1,0(a1)
  41fecc:	8cc60000 	lw	a2,0(a2)
  41fed0:	afac0048 	sw	t4,72(sp)
  41fed4:	afad004c 	sw	t5,76(sp)
  41fed8:	afae0010 	sw	t6,16(sp)
  41fedc:	27a70048 	addiu	a3,sp,72
  41fee0:	0320f809 	jalr	t9
  41fee4:	2484b974 	addiu	a0,a0,-18060
  41fee8:	8fbc0020 	lw	gp,32(sp)
  41feec:	00402025 	move	a0,v0
  41fef0:	8f838068 	lw	v1,-32664(gp)
  41fef4:	8f8580a4 	lw	a1,-32604(gp)
  41fef8:	24636eb4 	addiu	v1,v1,28340
  41fefc:	ac620000 	sw	v0,0(v1)
  41ff00:	8f9983ac 	lw	t9,-31828(gp)
  41ff04:	8f86801c 	lw	a2,-32740(gp)
  41ff08:	00003825 	move	a3,zero
  41ff0c:	24a500a9 	addiu	a1,a1,169
  41ff10:	0320f809 	jalr	t9
  41ff14:	24c61180 	addiu	a2,a2,4480
  41ff18:	8fbc0020 	lw	gp,32(sp)
  41ff1c:	27a60048 	addiu	a2,sp,72
  41ff20:	8f848068 	lw	a0,-32664(gp)
  41ff24:	8f85805c 	lw	a1,-32676(gp)
  41ff28:	8f99837c 	lw	t9,-31876(gp)
  41ff2c:	8c846eb4 	lw	a0,28340(a0)
  41ff30:	00003825 	move	a3,zero
  41ff34:	0320f809 	jalr	t9
  41ff38:	24a5b980 	addiu	a1,a1,-18048
  41ff3c:	8fbc0020 	lw	gp,32(sp)
  41ff40:	afa20040 	sw	v0,64(sp)
  41ff44:	8f998388 	lw	t9,-31864(gp)
  41ff48:	00402025 	move	a0,v0
  41ff4c:	0320f809 	jalr	t9
  41ff50:	00000000 	nop
  41ff54:	8fbc0020 	lw	gp,32(sp)
  41ff58:	8fa40040 	lw	a0,64(sp)
  41ff5c:	8f9987a4 	lw	t9,-30812(gp)
  41ff60:	8f858940 	lw	a1,-30400(gp)
  41ff64:	0320f809 	jalr	t9
  41ff68:	00000000 	nop
  41ff6c:	8fbc0020 	lw	gp,32(sp)
  41ff70:	00000000 	nop
  41ff74:	8f9986a0 	lw	t9,-31072(gp)
  41ff78:	00000000 	nop
  41ff7c:	0320f809 	jalr	t9
  41ff80:	00000000 	nop
  41ff84:	8fbc0020 	lw	gp,32(sp)
  41ff88:	10400004 	beqz	v0,41ff9c <createOverview+0x1b8>
  41ff8c:	24190001 	li	t9,1
  41ff90:	8f818068 	lw	at,-32664(gp)
  41ff94:	240f3000 	li	t7,12288
  41ff98:	ac2f6e64 	sw	t7,28260(at)
  41ff9c:	8f9880a0 	lw	t8,-32608(gp)
  41ffa0:	8f8880a0 	lw	t0,-32608(gp)
  41ffa4:	8f8a80a0 	lw	t2,-32608(gp)
  41ffa8:	8f8c80a0 	lw	t4,-32608(gp)
  41ffac:	8f8e805c 	lw	t6,-32676(gp)
  41ffb0:	8f8f8068 	lw	t7,-32664(gp)
  41ffb4:	afb9004c 	sw	t9,76(sp)
  41ffb8:	8f9986a0 	lw	t9,-31072(gp)
  41ffbc:	24090001 	li	t1,1
  41ffc0:	240b0001 	li	t3,1
  41ffc4:	240d0001 	li	t5,1
  41ffc8:	271827b5 	addiu	t8,t8,10165
  41ffcc:	25081d63 	addiu	t0,t0,7523
  41ffd0:	254a2375 	addiu	t2,t2,9077
  41ffd4:	258c1399 	addiu	t4,t4,5017
  41ffd8:	25ceb990 	addiu	t6,t6,-18032
  41ffdc:	25ef6e64 	addiu	t7,t7,28260
  41ffe0:	afb80048 	sw	t8,72(sp)
  41ffe4:	afa80050 	sw	t0,80(sp)
  41ffe8:	afa90054 	sw	t1,84(sp)
  41ffec:	afaa0058 	sw	t2,88(sp)
  41fff0:	afab005c 	sw	t3,92(sp)
  41fff4:	afac0060 	sw	t4,96(sp)
  41fff8:	afad0064 	sw	t5,100(sp)
  41fffc:	afaf006c 	sw	t7,108(sp)
  420000:	0320f809 	jalr	t9
  420004:	afae0068 	sw	t6,104(sp)
  420008:	8fbc0020 	lw	gp,32(sp)
  42000c:	10400006 	beqz	v0,420028 <createOverview+0x244>
  420010:	27a30048 	addiu	v1,sp,72
  420014:	8f98805c 	lw	t8,-32676(gp)
  420018:	00000000 	nop
  42001c:	2718b99c 	addiu	t8,t8,-18020
  420020:	10000005 	b	420038 <createOverview+0x254>
  420024:	afb80070 	sw	t8,112(sp)
  420028:	8f99805c 	lw	t9,-32676(gp)
  42002c:	00000000 	nop
  420030:	2739b9a8 	addiu	t9,t9,-18008
  420034:	afb90070 	sw	t9,112(sp)
  420038:	8f8a80a4 	lw	t2,-32604(gp)
  42003c:	24070006 	li	a3,6
  420040:	24080001 	li	t0,1
  420044:	000748c0 	sll	t1,a3,0x3
  420048:	8f818a30 	lw	at,-30160(gp)
  42004c:	afa80074 	sw	t0,116(sp)
  420050:	00691021 	addu	v0,v1,t1
  420054:	254a0368 	addiu	t2,t2,872
  420058:	ac4a0000 	sw	t2,0(v0)
  42005c:	c4240000 	lwc1	$f4,0(at)
  420060:	8f818a2c 	lw	at,-30164(gp)
  420064:	460021a1 	cvt.d.s	$f6,$f4
  420068:	c4280000 	lwc1	$f8,0(at)
  42006c:	3c014008 	lui	at,0x4008
  420070:	460042a1 	cvt.d.s	$f10,$f8
  420074:	462a3401 	sub.d	$f16,$f6,$f10
  420078:	44819800 	mtc1	at,$f19
  42007c:	44809000 	mtc1	zero,$f18
  420080:	8f8d80a4 	lw	t5,-32604(gp)
  420084:	46328102 	mul.d	$f4,$f16,$f18
  420088:	24e70001 	addiu	a3,a3,1
  42008c:	000760c0 	sll	t4,a3,0x3
  420090:	25ad00ea 	addiu	t5,t5,234
  420094:	8f9986a0 	lw	t9,-31072(gp)
  420098:	444bf800 	cfc1	t3,c1_fcsr
  42009c:	24e70001 	addiu	a3,a3,1
  4200a0:	35610003 	ori	at,t3,0x3
  4200a4:	38210002 	xori	at,at,0x2
  4200a8:	44c1f800 	ctc1	at,c1_fcsr
  4200ac:	8f818a38 	lw	at,-30152(gp)
  4200b0:	46202224 	cvt.w.d	$f8,$f4
  4200b4:	e4480004 	swc1	$f8,4(v0)
  4200b8:	006c1021 	addu	v0,v1,t4
  4200bc:	ac4d0000 	sw	t5,0(v0)
  4200c0:	c4260000 	lwc1	$f6,0(at)
  4200c4:	8f818a34 	lw	at,-30156(gp)
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
  420100:	0320f809 	jalr	t9
  420104:	afa70044 	sw	a3,68(sp)
  420108:	8fbc0020 	lw	gp,32(sp)
  42010c:	8fa70044 	lw	a3,68(sp)
  420110:	10400008 	beqz	v0,420134 <createOverview+0x350>
  420114:	27a60048 	addiu	a2,sp,72
  420118:	8f99805c 	lw	t9,-32676(gp)
  42011c:	000778c0 	sll	t7,a3,0x3
  420120:	27b80048 	addiu	t8,sp,72
  420124:	01f81021 	addu	v0,t7,t8
  420128:	2739b9b4 	addiu	t9,t9,-17996
  42012c:	10000007 	b	42014c <createOverview+0x368>
  420130:	ac590000 	sw	t9,0(v0)
  420134:	8f8a805c 	lw	t2,-32676(gp)
  420138:	000740c0 	sll	t0,a3,0x3
  42013c:	27a90048 	addiu	t1,sp,72
  420140:	01091021 	addu	v0,t0,t1
  420144:	254ab9c4 	addiu	t2,t2,-17980
  420148:	ac4a0000 	sw	t2,0(v0)
  42014c:	8fab0030 	lw	t3,48(sp)
  420150:	8f85805c 	lw	a1,-32676(gp)
  420154:	8f9981fc 	lw	t9,-32260(gp)
  420158:	ac4b0004 	sw	t3,4(v0)
  42015c:	8fa40040 	lw	a0,64(sp)
  420160:	24e70001 	addiu	a3,a3,1
  420164:	0320f809 	jalr	t9
  420168:	24a5b9d4 	addiu	a1,a1,-17964
  42016c:	8fbc0020 	lw	gp,32(sp)
  420170:	00402025 	move	a0,v0
  420174:	8f83806c 	lw	v1,-32660(gp)
  420178:	8f85805c 	lw	a1,-32676(gp)
  42017c:	24636c0c 	addiu	v1,v1,27660
  420180:	ac620000 	sw	v0,0(v1)
  420184:	8f9983ac 	lw	t9,-31828(gp)
  420188:	8f86801c 	lw	a2,-32740(gp)
  42018c:	00003825 	move	a3,zero
  420190:	24a5b9e0 	addiu	a1,a1,-17952
  420194:	0320f809 	jalr	t9
  420198:	24c60bfc 	addiu	a2,a2,3068
  42019c:	8fbc0020 	lw	gp,32(sp)
  4201a0:	00000000 	nop
  4201a4:	8f9986a0 	lw	t9,-31072(gp)
  4201a8:	00000000 	nop
  4201ac:	0320f809 	jalr	t9
  4201b0:	00000000 	nop
  4201b4:	8fbc0020 	lw	gp,32(sp)
  4201b8:	10400004 	beqz	v0,4201cc <createOverview+0x3e8>
  4201bc:	00003825 	move	a3,zero
  4201c0:	8f85805c 	lw	a1,-32676(gp)
  4201c4:	10000004 	b	4201d8 <createOverview+0x3f4>
  4201c8:	24a5b9f0 	addiu	a1,a1,-17936
  4201cc:	8f85805c 	lw	a1,-32676(gp)
  4201d0:	00000000 	nop
  4201d4:	24a5ba04 	addiu	a1,a1,-17916
  4201d8:	8f84806c 	lw	a0,-32660(gp)
  4201dc:	8f86801c 	lw	a2,-32740(gp)
  4201e0:	8f9983ac 	lw	t9,-31828(gp)
  4201e4:	8c846c0c 	lw	a0,27660(a0)
  4201e8:	0320f809 	jalr	t9
  4201ec:	24c60c50 	addiu	a2,a2,3152
  4201f0:	8fbc0020 	lw	gp,32(sp)
  4201f4:	00003825 	move	a3,zero
  4201f8:	8f84806c 	lw	a0,-32660(gp)
  4201fc:	8f85805c 	lw	a1,-32676(gp)
  420200:	8f86801c 	lw	a2,-32740(gp)
  420204:	8f9983ac 	lw	t9,-31828(gp)
  420208:	8c846c0c 	lw	a0,27660(a0)
  42020c:	24a5ba18 	addiu	a1,a1,-17896
  420210:	0320f809 	jalr	t9
  420214:	24c60ca4 	addiu	a2,a2,3236
  420218:	8fbc0020 	lw	gp,32(sp)
  42021c:	00003825 	move	a3,zero
  420220:	8f84806c 	lw	a0,-32660(gp)
  420224:	8f85805c 	lw	a1,-32676(gp)
  420228:	8f86801c 	lw	a2,-32740(gp)
  42022c:	8f9983ac 	lw	t9,-31828(gp)
  420230:	8c846c0c 	lw	a0,27660(a0)
  420234:	24a5ba28 	addiu	a1,a1,-17880
  420238:	0320f809 	jalr	t9
  42023c:	24c60e74 	addiu	a2,a2,3700
  420240:	8fbc0020 	lw	gp,32(sp)
  420244:	00000000 	nop
  420248:	8f84806c 	lw	a0,-32660(gp)
  42024c:	8f998388 	lw	t9,-31864(gp)
  420250:	8c846c0c 	lw	a0,27660(a0)
  420254:	0320f809 	jalr	t9
  420258:	00000000 	nop
  42025c:	8fbc0020 	lw	gp,32(sp)
  420260:	00000000 	nop
  420264:	8f858068 	lw	a1,-32664(gp)
  420268:	00000000 	nop
  42026c:	8ca56e60 	lw	a1,28256(a1)
  420270:	00000000 	nop
  420274:	14a0000c 	bnez	a1,4202a8 <createOverview+0x4c4>
  420278:	00000000 	nop
  42027c:	8f9983f0 	lw	t9,-31760(gp)
  420280:	8f848954 	lw	a0,-30380(gp)
  420284:	0320f809 	jalr	t9
  420288:	00000000 	nop
  42028c:	8fbc0020 	lw	gp,32(sp)
  420290:	00000000 	nop
  420294:	8f818068 	lw	at,-32664(gp)
  420298:	8f858068 	lw	a1,-32664(gp)
  42029c:	ac226e60 	sw	v0,28256(at)
  4202a0:	8ca56e60 	lw	a1,28256(a1)
  4202a4:	00000000 	nop
  4202a8:	8f84806c 	lw	a0,-32660(gp)
  4202ac:	8f9983a8 	lw	t9,-31832(gp)
  4202b0:	8c846c0c 	lw	a0,27660(a0)
  4202b4:	0320f809 	jalr	t9
  4202b8:	00000000 	nop
  4202bc:	8fbc0020 	lw	gp,32(sp)
  4202c0:	8fad0034 	lw	t5,52(sp)
  4202c4:	8f8c80a4 	lw	t4,-32604(gp)
  4202c8:	8f84806c 	lw	a0,-32660(gp)
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
  4202f4:	8f848068 	lw	a0,-32664(gp)
  4202f8:	8f998388 	lw	t9,-31864(gp)
  4202fc:	8c846eb4 	lw	a0,28340(a0)
  420300:	0320f809 	jalr	t9
  420304:	00000000 	nop
  420308:	8fbf0024 	lw	ra,36(sp)
  42030c:	8fbc0020 	lw	gp,32(sp)
  420310:	03e00008 	jr	ra
  420314:	27bd00e8 	addiu	sp,sp,232
