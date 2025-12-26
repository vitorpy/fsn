# Function: SG_getUnderlayArgs
# Address: 0x00432200 - 0x00432370
# Size: 0x170 (368 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00432200 <SG_getUnderlayArgs>:
  432200:	3c1c0fbf 	lui	gp,0xfbf
  432204:	279cb930 	addiu	gp,gp,-18128
  432208:	0399e021 	addu	gp,gp,t9
  43220c:	27bdffc0 	addiu	sp,sp,-64
  432210:	afb10024 	sw	s1,36(sp)
  432214:	00c08825 	move	s1,a2
  432218:	8f86806c 	lw	a2,-32660(gp)
  43221c:	8f9987fc 	lw	t9,-30724(gp)
  432220:	afb00020 	sw	s0,32(sp)
  432224:	00e08025 	move	s0,a3
  432228:	afbf002c 	sw	ra,44(sp)
  43222c:	afbc0028 	sw	gp,40(sp)
  432230:	afa40040 	sw	a0,64(sp)
  432234:	afa50044 	sw	a1,68(sp)
  432238:	24070001 	li	a3,1
  43223c:	0320f809 	jalr	t9
  432240:	24c69660 	addiu	a2,a2,-27040
  432244:	8fbc0028 	lw	gp,40(sp)
  432248:	8fa40040 	lw	a0,64(sp)
  43224c:	8f998020 	lw	t9,-32736(gp)
  432250:	8f87806c 	lw	a3,-32660(gp)
  432254:	8fa50044 	lw	a1,68(sp)
  432258:	240e0001 	li	t6,1
  43225c:	27392370 	addiu	t9,t9,9072
  432260:	afa20038 	sw	v0,56(sp)
  432264:	afae0010 	sw	t6,16(sp)
  432268:	00403025 	move	a2,v0
  43226c:	0320f809 	jalr	t9
  432270:	24e79660 	addiu	a3,a3,-27040
  432274:	8fbc0028 	lw	gp,40(sp)
  432278:	8fa40040 	lw	a0,64(sp)
  43227c:	8fa50044 	lw	a1,68(sp)
  432280:	04410008 	bgez	v0,4322a4 <SG_getUnderlayArgs+0xa4>
  432284:	00403025 	move	a2,v0
  432288:	8f998804 	lw	t9,-30716(gp)
  43228c:	02203025 	move	a2,s1
  432290:	0320f809 	jalr	t9
  432294:	02003825 	move	a3,s0
  432298:	8fbc0028 	lw	gp,40(sp)
  43229c:	10000030 	b	432360 <SG_getUnderlayArgs+0x160>
  4322a0:	8fbf002c 	lw	ra,44(sp)
  4322a4:	8f9987f8 	lw	t9,-30728(gp)
  4322a8:	afa60034 	sw	a2,52(sp)
  4322ac:	0320f809 	jalr	t9
  4322b0:	00000000 	nop
  4322b4:	8fbc0028 	lw	gp,40(sp)
  4322b8:	8e180000 	lw	t8,0(s0)
  4322bc:	8f8f80a4 	lw	t7,-32604(gp)
  4322c0:	0018c8c0 	sll	t9,t8,0x3
  4322c4:	8fa30038 	lw	v1,56(sp)
  4322c8:	8fa60034 	lw	a2,52(sp)
  4322cc:	02394021 	addu	t0,s1,t9
  4322d0:	25ef009a 	addiu	t7,t7,154
  4322d4:	ad0f0000 	sw	t7,0(t0)
  4322d8:	8e090000 	lw	t1,0(s0)
  4322dc:	8f8e80a4 	lw	t6,-32604(gp)
  4322e0:	000950c0 	sll	t2,t1,0x3
  4322e4:	022a5821 	addu	t3,s1,t2
  4322e8:	ad620004 	sw	v0,4(t3)
  4322ec:	8e0c0000 	lw	t4,0(s0)
  4322f0:	25ce00a3 	addiu	t6,t6,163
  4322f4:	258d0001 	addiu	t5,t4,1
  4322f8:	000dc8c0 	sll	t9,t5,0x3
  4322fc:	ae0d0000 	sw	t5,0(s0)
  432300:	02397821 	addu	t7,s1,t9
  432304:	adee0000 	sw	t6,0(t7)
  432308:	8e080000 	lw	t0,0(s0)
  43230c:	8f8d8080 	lw	t5,-32640(gp)
  432310:	000848c0 	sll	t1,t0,0x3
  432314:	02295021 	addu	t2,s1,t1
  432318:	ad430004 	sw	v1,4(t2)
  43231c:	8e0b0000 	lw	t3,0(s0)
  432320:	25ad0068 	addiu	t5,t5,104
  432324:	256c0001 	addiu	t4,t3,1
  432328:	000cc8c0 	sll	t9,t4,0x3
  43232c:	ae0c0000 	sw	t4,0(s0)
  432330:	02397021 	addu	t6,s1,t9
  432334:	adcd0000 	sw	t5,0(t6)
  432338:	8e0f0000 	lw	t7,0(s0)
  43233c:	00601025 	move	v0,v1
  432340:	000f40c0 	sll	t0,t7,0x3
  432344:	02284821 	addu	t1,s1,t0
  432348:	ad260004 	sw	a2,4(t1)
  43234c:	8e0a0000 	lw	t2,0(s0)
  432350:	00000000 	nop
  432354:	254b0001 	addiu	t3,t2,1
  432358:	ae0b0000 	sw	t3,0(s0)
  43235c:	8fbf002c 	lw	ra,44(sp)
  432360:	8fb00020 	lw	s0,32(sp)
  432364:	8fb10024 	lw	s1,36(sp)
  432368:	03e00008 	jr	ra
  43236c:	27bd0040 	addiu	sp,sp,64
