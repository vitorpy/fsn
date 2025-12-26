# Function: FUN_0042b0c4
# Address: 0x0042b0c4 - 0x0042b390
# Size: 0x2cc (716 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b0c4 <createHelpMenu+0xc>:
  42b0c4:	27bdff98 	addiu	sp,sp,-104
  42b0c8:	afa40068 	sw	a0,104(sp)
  42b0cc:	8f848a04 	lw	a0,-30204(gp)
  42b0d0:	8f99880c 	lw	t9,-30708(gp)
  42b0d4:	afb2001c 	sw	s2,28(sp)
  42b0d8:	27b20040 	addiu	s2,sp,64
  42b0dc:	afbf0024 	sw	ra,36(sp)
  42b0e0:	8c840000 	lw	a0,0(a0)
  42b0e4:	afbc0020 	sw	gp,32(sp)
  42b0e8:	afb10018 	sw	s1,24(sp)
  42b0ec:	afb00014 	sw	s0,20(sp)
  42b0f0:	afa0003c 	sw	zero,60(sp)
  42b0f4:	02403025 	move	a2,s2
  42b0f8:	27a7003c 	addiu	a3,sp,60
  42b0fc:	0320f809 	jalr	t9
  42b100:	00002825 	move	a1,zero
  42b104:	8fbc0020 	lw	gp,32(sp)
  42b108:	8fa40068 	lw	a0,104(sp)
  42b10c:	8f85805c 	lw	a1,-32676(gp)
  42b110:	8f998434 	lw	t9,-31692(gp)
  42b114:	8fa7003c 	lw	a3,60(sp)
  42b118:	02403025 	move	a2,s2
  42b11c:	0320f809 	jalr	t9
  42b120:	24a51c80 	addiu	a1,a1,7296
  42b124:	8fbc0020 	lw	gp,32(sp)
  42b128:	00408825 	move	s1,v0
  42b12c:	8f8580a0 	lw	a1,-32608(gp)
  42b130:	8f9983ac 	lw	t9,-31828(gp)
  42b134:	8f8686b0 	lw	a2,-31056(gp)
  42b138:	00402025 	move	a0,v0
  42b13c:	00003825 	move	a3,zero
  42b140:	0320f809 	jalr	t9
  42b144:	24a51e96 	addiu	a1,a1,7830
  42b148:	8fbc0020 	lw	gp,32(sp)
  42b14c:	02202025 	move	a0,s1
  42b150:	8f8580a0 	lw	a1,-32608(gp)
  42b154:	8f9983ac 	lw	t9,-31828(gp)
  42b158:	8f8686ac 	lw	a2,-31060(gp)
  42b15c:	00003825 	move	a3,zero
  42b160:	0320f809 	jalr	t9
  42b164:	24a528d0 	addiu	a1,a1,10448
  42b168:	8fbc0020 	lw	gp,32(sp)
  42b16c:	afa0003c 	sw	zero,60(sp)
  42b170:	8f85805c 	lw	a1,-32676(gp)
  42b174:	8f9984e0 	lw	t9,-31520(gp)
  42b178:	02202025 	move	a0,s1
  42b17c:	02403025 	move	a2,s2
  42b180:	00003825 	move	a3,zero
  42b184:	0320f809 	jalr	t9
  42b188:	24a51c8c 	addiu	a1,a1,7308
  42b18c:	8fbc0020 	lw	gp,32(sp)
  42b190:	00408025 	move	s0,v0
  42b194:	8f868020 	lw	a2,-32736(gp)
  42b198:	8f8580a0 	lw	a1,-32608(gp)
  42b19c:	8f9983ac 	lw	t9,-31828(gp)
  42b1a0:	8f8789a0 	lw	a3,-30304(gp)
  42b1a4:	24c6b3f4 	addiu	a2,a2,-19468
  42b1a8:	afa6002c 	sw	a2,44(sp)
  42b1ac:	00402025 	move	a0,v0
  42b1b0:	0320f809 	jalr	t9
  42b1b4:	24a5124b 	addiu	a1,a1,4683
  42b1b8:	8fbc0020 	lw	gp,32(sp)
  42b1bc:	02002025 	move	a0,s0
  42b1c0:	8f998388 	lw	t9,-31864(gp)
  42b1c4:	00000000 	nop
  42b1c8:	0320f809 	jalr	t9
  42b1cc:	00000000 	nop
  42b1d0:	8fbc0020 	lw	gp,32(sp)
  42b1d4:	afa0003c 	sw	zero,60(sp)
  42b1d8:	8f85805c 	lw	a1,-32676(gp)
  42b1dc:	8f9984e0 	lw	t9,-31520(gp)
  42b1e0:	02202025 	move	a0,s1
  42b1e4:	02403025 	move	a2,s2
  42b1e8:	00003825 	move	a3,zero
  42b1ec:	0320f809 	jalr	t9
  42b1f0:	24a51c98 	addiu	a1,a1,7320
  42b1f4:	8fbc0020 	lw	gp,32(sp)
  42b1f8:	00408025 	move	s0,v0
  42b1fc:	8f8580a0 	lw	a1,-32608(gp)
  42b200:	8f868020 	lw	a2,-32736(gp)
  42b204:	8f9983ac 	lw	t9,-31828(gp)
  42b208:	00402025 	move	a0,v0
  42b20c:	00003825 	move	a3,zero
  42b210:	24a5124b 	addiu	a1,a1,4683
  42b214:	0320f809 	jalr	t9
  42b218:	24c6b5ac 	addiu	a2,a2,-19028
  42b21c:	8fbc0020 	lw	gp,32(sp)
  42b220:	02002025 	move	a0,s0
  42b224:	8f998388 	lw	t9,-31864(gp)
  42b228:	00000000 	nop
  42b22c:	0320f809 	jalr	t9
  42b230:	00000000 	nop
  42b234:	8fbc0020 	lw	gp,32(sp)
  42b238:	afa0003c 	sw	zero,60(sp)
  42b23c:	8f85805c 	lw	a1,-32676(gp)
  42b240:	8f9984e0 	lw	t9,-31520(gp)
  42b244:	02202025 	move	a0,s1
  42b248:	02403025 	move	a2,s2
  42b24c:	00003825 	move	a3,zero
  42b250:	0320f809 	jalr	t9
  42b254:	24a51ca8 	addiu	a1,a1,7336
  42b258:	8fbc0020 	lw	gp,32(sp)
  42b25c:	8fa6002c 	lw	a2,44(sp)
  42b260:	8f8580a0 	lw	a1,-32608(gp)
  42b264:	8f9983ac 	lw	t9,-31828(gp)
  42b268:	8f878998 	lw	a3,-30312(gp)
  42b26c:	00408025 	move	s0,v0
  42b270:	00402025 	move	a0,v0
  42b274:	0320f809 	jalr	t9
  42b278:	24a5124b 	addiu	a1,a1,4683
  42b27c:	8fbc0020 	lw	gp,32(sp)
  42b280:	02002025 	move	a0,s0
  42b284:	8f998388 	lw	t9,-31864(gp)
  42b288:	00000000 	nop
  42b28c:	0320f809 	jalr	t9
  42b290:	00000000 	nop
  42b294:	8fbc0020 	lw	gp,32(sp)
  42b298:	afa0003c 	sw	zero,60(sp)
  42b29c:	8f85805c 	lw	a1,-32676(gp)
  42b2a0:	8f9984e0 	lw	t9,-31520(gp)
  42b2a4:	02202025 	move	a0,s1
  42b2a8:	02403025 	move	a2,s2
  42b2ac:	00003825 	move	a3,zero
  42b2b0:	0320f809 	jalr	t9
  42b2b4:	24a51cb4 	addiu	a1,a1,7348
  42b2b8:	8fbc0020 	lw	gp,32(sp)
  42b2bc:	8fa6002c 	lw	a2,44(sp)
  42b2c0:	8f8580a0 	lw	a1,-32608(gp)
  42b2c4:	8f9983ac 	lw	t9,-31828(gp)
  42b2c8:	8f878994 	lw	a3,-30316(gp)
  42b2cc:	00408025 	move	s0,v0
  42b2d0:	00402025 	move	a0,v0
  42b2d4:	0320f809 	jalr	t9
  42b2d8:	24a5124b 	addiu	a1,a1,4683
  42b2dc:	8fbc0020 	lw	gp,32(sp)
  42b2e0:	02002025 	move	a0,s0
  42b2e4:	8f998388 	lw	t9,-31864(gp)
  42b2e8:	00000000 	nop
  42b2ec:	0320f809 	jalr	t9
  42b2f0:	00000000 	nop
  42b2f4:	8fbc0020 	lw	gp,32(sp)
  42b2f8:	240f0001 	li	t7,1
  42b2fc:	8f8e80a0 	lw	t6,-32608(gp)
  42b300:	8f85805c 	lw	a1,-32676(gp)
  42b304:	8f998408 	lw	t9,-31736(gp)
  42b308:	8fa40068 	lw	a0,104(sp)
  42b30c:	25ce26c9 	addiu	t6,t6,9929
  42b310:	afae0040 	sw	t6,64(sp)
  42b314:	afaf003c 	sw	t7,60(sp)
  42b318:	afb10044 	sw	s1,68(sp)
  42b31c:	02403025 	move	a2,s2
  42b320:	24070001 	li	a3,1
  42b324:	0320f809 	jalr	t9
  42b328:	24a51cc4 	addiu	a1,a1,7364
  42b32c:	8fbc0020 	lw	gp,32(sp)
  42b330:	00408025 	move	s0,v0
  42b334:	8f998388 	lw	t9,-31864(gp)
  42b338:	00402025 	move	a0,v0
  42b33c:	0320f809 	jalr	t9
  42b340:	00000000 	nop
  42b344:	8fbc0020 	lw	gp,32(sp)
  42b348:	24190001 	li	t9,1
  42b34c:	8f9880a0 	lw	t8,-32608(gp)
  42b350:	afb9003c 	sw	t9,60(sp)
  42b354:	8f998340 	lw	t9,-31936(gp)
  42b358:	8fa40068 	lw	a0,104(sp)
  42b35c:	27181f37 	addiu	t8,t8,7991
  42b360:	afb80040 	sw	t8,64(sp)
  42b364:	afb00044 	sw	s0,68(sp)
  42b368:	02402825 	move	a1,s2
  42b36c:	0320f809 	jalr	t9
  42b370:	24060001 	li	a2,1
  42b374:	8fbf0024 	lw	ra,36(sp)
  42b378:	8fbc0020 	lw	gp,32(sp)
  42b37c:	8fb00014 	lw	s0,20(sp)
  42b380:	8fb10018 	lw	s1,24(sp)
  42b384:	8fb2001c 	lw	s2,28(sp)
  42b388:	03e00008 	jr	ra
  42b38c:	27bd0068 	addiu	sp,sp,104
