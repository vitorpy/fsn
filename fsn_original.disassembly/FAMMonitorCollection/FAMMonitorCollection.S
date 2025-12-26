# Function: FAMMonitorCollection
# Address: 0x0043a110 - 0x0043a448
# Size: 0x338 (824 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043a110 <FAMMonitorCollection>:
  43a110:	3c1c0fbe 	lui	gp,0xfbe
  43a114:	279c3a20 	addiu	gp,gp,14880
  43a118:	0399e021 	addu	gp,gp,t9
  43a11c:	27bdf328 	addiu	sp,sp,-3288
  43a120:	8f998024 	lw	t9,-32732(gp)
  43a124:	afbf0034 	sw	ra,52(sp)
  43a128:	afb10020 	sw	s1,32(sp)
  43a12c:	afb0001c 	sw	s0,28(sp)
  43a130:	2739ade8 	addiu	t9,t9,-21016
  43a134:	00e08025 	move	s0,a3
  43a138:	00c08825 	move	s1,a2
  43a13c:	afbc0030 	sw	gp,48(sp)
  43a140:	afb4002c 	sw	s4,44(sp)
  43a144:	afb30028 	sw	s3,40(sp)
  43a148:	afb20024 	sw	s2,36(sp)
  43a14c:	afa40cd8 	sw	a0,3288(sp)
  43a150:	0320f809 	jalr	t9
  43a154:	afa50cdc 	sw	a1,3292(sp)
  43a158:	8fbc0030 	lw	gp,48(sp)
  43a15c:	2401ffff 	li	at,-1
  43a160:	14410003 	bne	v0,at,43a170 <FAMMonitorCollection+0x60>
  43a164:	00401825 	move	v1,v0
  43a168:	100000af 	b	43a428 <FAMMonitorCollection+0x318>
  43a16c:	2402ffff 	li	v0,-1
  43a170:	ae230000 	sw	v1,0(s1)
  43a174:	8f9983e0 	lw	t9,-31776(gp)
  43a178:	8fa40cdc 	lw	a0,3292(sp)
  43a17c:	0320f809 	jalr	t9
  43a180:	afa30cd4 	sw	v1,3284(sp)
  43a184:	8fbc0030 	lw	gp,48(sp)
  43a188:	2c410401 	sltiu	at,v0,1025
  43a18c:	1420000c 	bnez	at,43a1c0 <FAMMonitorCollection+0xb0>
  43a190:	00000000 	nop
  43a194:	8f85806c 	lw	a1,-32660(gp)
  43a198:	8f9983c8 	lw	t9,-31800(gp)
  43a19c:	24040001 	li	a0,1
  43a1a0:	0320f809 	jalr	t9
  43a1a4:	24a59ea4 	addiu	a1,a1,-24924
  43a1a8:	8fbc0030 	lw	gp,48(sp)
  43a1ac:	240e004e 	li	t6,78
  43a1b0:	8f818090 	lw	at,-32624(gp)
  43a1b4:	2402ffff 	li	v0,-1
  43a1b8:	1000009b 	b	43a428 <FAMMonitorCollection+0x318>
  43a1bc:	ac2e0000 	sw	t6,0(at)
  43a1c0:	12000008 	beqz	s0,43a1e4 <FAMMonitorCollection+0xd4>
  43a1c4:	00000000 	nop
  43a1c8:	8f998024 	lw	t9,-32732(gp)
  43a1cc:	8fa40cd4 	lw	a0,3284(sp)
  43a1d0:	2739aef8 	addiu	t9,t9,-20744
  43a1d4:	0320f809 	jalr	t9
  43a1d8:	02002825 	move	a1,s0
  43a1dc:	8fbc0030 	lw	gp,48(sp)
  43a1e0:	00000000 	nop
  43a1e4:	8f9983d4 	lw	t9,-31788(gp)
  43a1e8:	24040010 	li	a0,16
  43a1ec:	0320f809 	jalr	t9
  43a1f0:	27a50c10 	addiu	a1,sp,3088
  43a1f4:	8fbc0030 	lw	gp,48(sp)
  43a1f8:	28410002 	slti	at,v0,2
  43a1fc:	00409025 	move	s2,v0
  43a200:	a3a00c54 	sb	zero,3156(sp)
  43a204:	14200026 	bnez	at,43a2a0 <FAMMonitorCollection+0x190>
  43a208:	27b00c54 	addiu	s0,sp,3156
  43a20c:	00027880 	sll	t7,v0,0x2
  43a210:	27b80c10 	addiu	t8,sp,3088
  43a214:	01f89821 	addu	s3,t7,t8
  43a218:	27b10c14 	addiu	s1,sp,3092
  43a21c:	27b40c14 	addiu	s4,sp,3092
  43a220:	1634000e 	bne	s1,s4,43a25c <FAMMonitorCollection+0x14c>
  43a224:	02002025 	move	a0,s0
  43a228:	8f85806c 	lw	a1,-32660(gp)
  43a22c:	8f9983e4 	lw	t9,-31772(gp)
  43a230:	2646ffff 	addiu	a2,s2,-1
  43a234:	0320f809 	jalr	t9
  43a238:	24a59eb4 	addiu	a1,a1,-24908
  43a23c:	8fbc0030 	lw	gp,48(sp)
  43a240:	02002025 	move	a0,s0
  43a244:	8f9983e0 	lw	t9,-31776(gp)
  43a248:	00000000 	nop
  43a24c:	0320f809 	jalr	t9
  43a250:	00000000 	nop
  43a254:	8fbc0030 	lw	gp,48(sp)
  43a258:	02028021 	addu	s0,s0,v0
  43a25c:	8f85806c 	lw	a1,-32660(gp)
  43a260:	8f9983e4 	lw	t9,-31772(gp)
  43a264:	8e260000 	lw	a2,0(s1)
  43a268:	02002025 	move	a0,s0
  43a26c:	0320f809 	jalr	t9
  43a270:	24a59eb8 	addiu	a1,a1,-24904
  43a274:	8fbc0030 	lw	gp,48(sp)
  43a278:	02002025 	move	a0,s0
  43a27c:	8f9983e0 	lw	t9,-31776(gp)
  43a280:	00000000 	nop
  43a284:	0320f809 	jalr	t9
  43a288:	00000000 	nop
  43a28c:	26310004 	addiu	s1,s1,4
  43a290:	8fbc0030 	lw	gp,48(sp)
  43a294:	0233082b 	sltu	at,s1,s3
  43a298:	1420ffe1 	bnez	at,43a220 <FAMMonitorCollection+0x110>
  43a29c:	02028021 	addu	s0,s0,v0
  43a2a0:	93b90c54 	lbu	t9,3156(sp)
  43a2a4:	00000000 	nop
  43a2a8:	17200025 	bnez	t9,43a340 <FAMMonitorCollection+0x230>
  43a2ac:	00000000 	nop
  43a2b0:	8f998314 	lw	t9,-31980(gp)
  43a2b4:	00000000 	nop
  43a2b8:	0320f809 	jalr	t9
  43a2bc:	00000000 	nop
  43a2c0:	8fbc0030 	lw	gp,48(sp)
  43a2c4:	8fa80c10 	lw	t0,3088(sp)
  43a2c8:	8fa90cdc 	lw	t1,3292(sp)
  43a2cc:	8f85806c 	lw	a1,-32660(gp)
  43a2d0:	8f9983e4 	lw	t9,-31772(gp)
  43a2d4:	27b10050 	addiu	s1,sp,80
  43a2d8:	8fa60cd4 	lw	a2,3284(sp)
  43a2dc:	02202025 	move	a0,s1
  43a2e0:	00403825 	move	a3,v0
  43a2e4:	afa80010 	sw	t0,16(sp)
  43a2e8:	afa90014 	sw	t1,20(sp)
  43a2ec:	0320f809 	jalr	t9
  43a2f0:	24a59ebc 	addiu	a1,a1,-24900
  43a2f4:	8fbc0030 	lw	gp,48(sp)
  43a2f8:	02202025 	move	a0,s1
  43a2fc:	8f9983e0 	lw	t9,-31776(gp)
  43a300:	00000000 	nop
  43a304:	0320f809 	jalr	t9
  43a308:	00000000 	nop
  43a30c:	8fbc0030 	lw	gp,48(sp)
  43a310:	02222021 	addu	a0,s1,v0
  43a314:	8f85806c 	lw	a1,-32660(gp)
  43a318:	8f9983e4 	lw	t9,-31772(gp)
  43a31c:	24840001 	addiu	a0,a0,1
  43a320:	8fa60ce8 	lw	a2,3304(sp)
  43a324:	8fa70cec 	lw	a3,3308(sp)
  43a328:	00808025 	move	s0,a0
  43a32c:	0320f809 	jalr	t9
  43a330:	24a59ed4 	addiu	a1,a1,-24876
  43a334:	8fbc0030 	lw	gp,48(sp)
  43a338:	10000026 	b	43a3d4 <FAMMonitorCollection+0x2c4>
  43a33c:	00000000 	nop
  43a340:	8f998314 	lw	t9,-31980(gp)
  43a344:	00000000 	nop
  43a348:	0320f809 	jalr	t9
  43a34c:	00000000 	nop
  43a350:	8fbc0030 	lw	gp,48(sp)
  43a354:	8faa0c10 	lw	t2,3088(sp)
  43a358:	8fab0cdc 	lw	t3,3292(sp)
  43a35c:	8f85806c 	lw	a1,-32660(gp)
  43a360:	8f9983e4 	lw	t9,-31772(gp)
  43a364:	27b10050 	addiu	s1,sp,80
  43a368:	8fa60cd4 	lw	a2,3284(sp)
  43a36c:	02202025 	move	a0,s1
  43a370:	00403825 	move	a3,v0
  43a374:	afaa0010 	sw	t2,16(sp)
  43a378:	afab0014 	sw	t3,20(sp)
  43a37c:	0320f809 	jalr	t9
  43a380:	24a59ee0 	addiu	a1,a1,-24864
  43a384:	8fbc0030 	lw	gp,48(sp)
  43a388:	02202025 	move	a0,s1
  43a38c:	8f9983e0 	lw	t9,-31776(gp)
  43a390:	00000000 	nop
  43a394:	0320f809 	jalr	t9
  43a398:	00000000 	nop
  43a39c:	8fbc0030 	lw	gp,48(sp)
  43a3a0:	8fac0cec 	lw	t4,3308(sp)
  43a3a4:	8f85806c 	lw	a1,-32660(gp)
  43a3a8:	8f9983e4 	lw	t9,-31772(gp)
  43a3ac:	02222021 	addu	a0,s1,v0
  43a3b0:	24840001 	addiu	a0,a0,1
  43a3b4:	8fa70ce8 	lw	a3,3304(sp)
  43a3b8:	00808025 	move	s0,a0
  43a3bc:	27a60c54 	addiu	a2,sp,3156
  43a3c0:	afac0010 	sw	t4,16(sp)
  43a3c4:	0320f809 	jalr	t9
  43a3c8:	24a59ef0 	addiu	a1,a1,-24848
  43a3cc:	8fbc0030 	lw	gp,48(sp)
  43a3d0:	00000000 	nop
  43a3d4:	8f9983e0 	lw	t9,-31776(gp)
  43a3d8:	02002025 	move	a0,s0
  43a3dc:	0320f809 	jalr	t9
  43a3e0:	00000000 	nop
  43a3e4:	8fbc0030 	lw	gp,48(sp)
  43a3e8:	00408025 	move	s0,v0
  43a3ec:	8f9983e0 	lw	t9,-31776(gp)
  43a3f0:	02202025 	move	a0,s1
  43a3f4:	0320f809 	jalr	t9
  43a3f8:	00000000 	nop
  43a3fc:	8fbc0030 	lw	gp,48(sp)
  43a400:	8fa30cd8 	lw	v1,3288(sp)
  43a404:	8f998900 	lw	t9,-30464(gp)
  43a408:	00503821 	addu	a3,v0,s0
  43a40c:	8c640004 	lw	a0,4(v1)
  43a410:	8c650000 	lw	a1,0(v1)
  43a414:	24e70002 	addiu	a3,a3,2
  43a418:	0320f809 	jalr	t9
  43a41c:	02203025 	move	a2,s1
  43a420:	8fbc0030 	lw	gp,48(sp)
  43a424:	00001025 	move	v0,zero
  43a428:	8fbf0034 	lw	ra,52(sp)
  43a42c:	8fb0001c 	lw	s0,28(sp)
  43a430:	8fb10020 	lw	s1,32(sp)
  43a434:	8fb20024 	lw	s2,36(sp)
  43a438:	8fb30028 	lw	s3,40(sp)
  43a43c:	8fb4002c 	lw	s4,44(sp)
  43a440:	03e00008 	jr	ra
  43a444:	27bd0cd8 	addiu	sp,sp,3288
