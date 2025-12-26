# Function: FUN_00414da4
# Address: 0x00414da4 - 0x004154c4
# Size: 0x720 (1824 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00414da4 <findDirByFullName+0x1710>:
  414da4:	3c1c0fc1 	lui	gp,0xfc1
  414da8:	279c8d8c 	addiu	gp,gp,-29300
  414dac:	0399e021 	addu	gp,gp,t9
  414db0:	8f82892c 	lw	v0,-30420(gp)
  414db4:	27bdffb0 	addiu	sp,sp,-80
  414db8:	8c420000 	lw	v0,0(v0)
  414dbc:	afbf001c 	sw	ra,28(sp)
  414dc0:	afbc0018 	sw	gp,24(sp)
  414dc4:	104001bb 	beqz	v0,4154b4 <findDirByFullName+0x1e20>
  414dc8:	afb00014 	sw	s0,20(sp)
  414dcc:	8c4e0074 	lw	t6,116(v0)
  414dd0:	00000000 	nop
  414dd4:	000ec0c0 	sll	t8,t6,0x3
  414dd8:	070101b7 	bgez	t8,4154b8 <findDirByFullName+0x1e24>
  414ddc:	8fbf001c 	lw	ra,28(sp)
  414de0:	8f998a24 	lw	t9,-30172(gp)
  414de4:	00000000 	nop
  414de8:	93390000 	lbu	t9,0(t9)
  414dec:	00000000 	nop
  414df0:	172001b1 	bnez	t9,4154b8 <findDirByFullName+0x1e24>
  414df4:	8fbf001c 	lw	ra,28(sp)
  414df8:	8f998720 	lw	t9,-30944(gp)
  414dfc:	00000000 	nop
  414e00:	0320f809 	jalr	t9
  414e04:	00000000 	nop
  414e08:	8fbc0018 	lw	gp,24(sp)
  414e0c:	00002825 	move	a1,zero
  414e10:	8f84805c 	lw	a0,-32676(gp)
  414e14:	8f998568 	lw	t9,-31384(gp)
  414e18:	2484a764 	addiu	a0,a0,-22684
  414e1c:	0320f809 	jalr	t9
  414e20:	00000000 	nop
  414e24:	8fbc0018 	lw	gp,24(sp)
  414e28:	afa20040 	sw	v0,64(sp)
  414e2c:	8f998578 	lw	t9,-31368(gp)
  414e30:	00000000 	nop
  414e34:	0320f809 	jalr	t9
  414e38:	00000000 	nop
  414e3c:	8fbc0018 	lw	gp,24(sp)
  414e40:	00000000 	nop
  414e44:	8f848a24 	lw	a0,-30172(gp)
  414e48:	8f9983e0 	lw	t9,-31776(gp)
  414e4c:	8c84011c 	lw	a0,284(a0)
  414e50:	0320f809 	jalr	t9
  414e54:	00000000 	nop
  414e58:	8fbc0018 	lw	gp,24(sp)
  414e5c:	2444000c 	addiu	a0,v0,12
  414e60:	8f9983b8 	lw	t9,-31816(gp)
  414e64:	00000000 	nop
  414e68:	0320f809 	jalr	t9
  414e6c:	00000000 	nop
  414e70:	8fbc0018 	lw	gp,24(sp)
  414e74:	afa2004c 	sw	v0,76(sp)
  414e78:	8f858a24 	lw	a1,-30172(gp)
  414e7c:	8f998134 	lw	t9,-32460(gp)
  414e80:	8ca5011c 	lw	a1,284(a1)
  414e84:	0320f809 	jalr	t9
  414e88:	00402025 	move	a0,v0
  414e8c:	8fbc0018 	lw	gp,24(sp)
  414e90:	8fa4004c 	lw	a0,76(sp)
  414e94:	8f85805c 	lw	a1,-32676(gp)
  414e98:	8f99831c 	lw	t9,-31972(gp)
  414e9c:	24a5a780 	addiu	a1,a1,-22656
  414ea0:	0320f809 	jalr	t9
  414ea4:	00000000 	nop
  414ea8:	8fbc0018 	lw	gp,24(sp)
  414eac:	8fa4004c 	lw	a0,76(sp)
  414eb0:	8f99827c 	lw	t9,-32132(gp)
  414eb4:	00000000 	nop
  414eb8:	0320f809 	jalr	t9
  414ebc:	00000000 	nop
  414ec0:	8fbc0018 	lw	gp,24(sp)
  414ec4:	04410015 	bgez	v0,414f1c <findDirByFullName+0x1888>
  414ec8:	00402025 	move	a0,v0
  414ecc:	8f84805c 	lw	a0,-32676(gp)
  414ed0:	8f998570 	lw	t9,-31376(gp)
  414ed4:	2484a78c 	addiu	a0,a0,-22644
  414ed8:	0320f809 	jalr	t9
  414edc:	00000000 	nop
  414ee0:	8fbc0018 	lw	gp,24(sp)
  414ee4:	8fa4004c 	lw	a0,76(sp)
  414ee8:	8f9980c0 	lw	t9,-32576(gp)
  414eec:	00000000 	nop
  414ef0:	0320f809 	jalr	t9
  414ef4:	00000000 	nop
  414ef8:	8fbc0018 	lw	gp,24(sp)
  414efc:	8fa40040 	lw	a0,64(sp)
  414f00:	8f998564 	lw	t9,-31388(gp)
  414f04:	00000000 	nop
  414f08:	0320f809 	jalr	t9
  414f0c:	00000000 	nop
  414f10:	8fbc0018 	lw	gp,24(sp)
  414f14:	10000168 	b	4154b8 <findDirByFullName+0x1e24>
  414f18:	8fbf001c 	lw	ra,28(sp)
  414f1c:	8f888a24 	lw	t0,-30172(gp)
  414f20:	00000000 	nop
  414f24:	91080007 	lbu	t0,7(t0)
  414f28:	00000000 	nop
  414f2c:	11000049 	beqz	t0,415054 <findDirByFullName+0x19c0>
  414f30:	00000000 	nop
  414f34:	8f99825c 	lw	t9,-32164(gp)
  414f38:	00000000 	nop
  414f3c:	0320f809 	jalr	t9
  414f40:	00000000 	nop
  414f44:	8fbc0018 	lw	gp,24(sp)
  414f48:	8fa4004c 	lw	a0,76(sp)
  414f4c:	8f9983e0 	lw	t9,-31776(gp)
  414f50:	00000000 	nop
  414f54:	0320f809 	jalr	t9
  414f58:	00000000 	nop
  414f5c:	8fbc0018 	lw	gp,24(sp)
  414f60:	2444000a 	addiu	a0,v0,10
  414f64:	8f9983b8 	lw	t9,-31816(gp)
  414f68:	00000000 	nop
  414f6c:	0320f809 	jalr	t9
  414f70:	00000000 	nop
  414f74:	8fbc0018 	lw	gp,24(sp)
  414f78:	8fa6004c 	lw	a2,76(sp)
  414f7c:	8f85805c 	lw	a1,-32676(gp)
  414f80:	8f9983e4 	lw	t9,-31772(gp)
  414f84:	afa2002c 	sw	v0,44(sp)
  414f88:	00402025 	move	a0,v0
  414f8c:	0320f809 	jalr	t9
  414f90:	24a5a7b4 	addiu	a1,a1,-22604
  414f94:	8fbc0018 	lw	gp,24(sp)
  414f98:	8fa4002c 	lw	a0,44(sp)
  414f9c:	8f85805c 	lw	a1,-32676(gp)
  414fa0:	8f998260 	lw	t9,-32160(gp)
  414fa4:	24a5a7c0 	addiu	a1,a1,-22592
  414fa8:	0320f809 	jalr	t9
  414fac:	00000000 	nop
  414fb0:	8fbc0018 	lw	gp,24(sp)
  414fb4:	8fa4002c 	lw	a0,44(sp)
  414fb8:	8f9980c0 	lw	t9,-32576(gp)
  414fbc:	00408025 	move	s0,v0
  414fc0:	0320f809 	jalr	t9
  414fc4:	00000000 	nop
  414fc8:	8fbc0018 	lw	gp,24(sp)
  414fcc:	1600001f 	bnez	s0,41504c <findDirByFullName+0x19b8>
  414fd0:	24090001 	li	t1,1
  414fd4:	8f85805c 	lw	a1,-32676(gp)
  414fd8:	8f998264 	lw	t9,-32156(gp)
  414fdc:	8fa4004c 	lw	a0,76(sp)
  414fe0:	0320f809 	jalr	t9
  414fe4:	24a5a7c4 	addiu	a1,a1,-22588
  414fe8:	8fbc0018 	lw	gp,24(sp)
  414fec:	14400015 	bnez	v0,415044 <findDirByFullName+0x19b0>
  414ff0:	00408025 	move	s0,v0
  414ff4:	8f84805c 	lw	a0,-32676(gp)
  414ff8:	8f998570 	lw	t9,-31376(gp)
  414ffc:	2484a7c8 	addiu	a0,a0,-22584
  415000:	0320f809 	jalr	t9
  415004:	00000000 	nop
  415008:	8fbc0018 	lw	gp,24(sp)
  41500c:	8fa4004c 	lw	a0,76(sp)
  415010:	8f9980c0 	lw	t9,-32576(gp)
  415014:	00000000 	nop
  415018:	0320f809 	jalr	t9
  41501c:	00000000 	nop
  415020:	8fbc0018 	lw	gp,24(sp)
  415024:	8fa40040 	lw	a0,64(sp)
  415028:	8f998564 	lw	t9,-31388(gp)
  41502c:	00000000 	nop
  415030:	0320f809 	jalr	t9
  415034:	00000000 	nop
  415038:	8fbc0018 	lw	gp,24(sp)
  41503c:	1000011e 	b	4154b8 <findDirByFullName+0x1e24>
  415040:	8fbf001c 	lw	ra,28(sp)
  415044:	1000000a 	b	415070 <findDirByFullName+0x19dc>
  415048:	a3a00033 	sb	zero,51(sp)
  41504c:	10000008 	b	415070 <findDirByFullName+0x19dc>
  415050:	a3a90033 	sb	t1,51(sp)
  415054:	8f85805c 	lw	a1,-32676(gp)
  415058:	8f998268 	lw	t9,-32152(gp)
  41505c:	a3a00033 	sb	zero,51(sp)
  415060:	0320f809 	jalr	t9
  415064:	24a5a7f0 	addiu	a1,a1,-22544
  415068:	8fbc0018 	lw	gp,24(sp)
  41506c:	00408025 	move	s0,v0
  415070:	8f84805c 	lw	a0,-32676(gp)
  415074:	8f99828c 	lw	t9,-32116(gp)
  415078:	24050006 	li	a1,6
  41507c:	24060001 	li	a2,1
  415080:	02003825 	move	a3,s0
  415084:	0320f809 	jalr	t9
  415088:	2484a7f4 	addiu	a0,a0,-22540
  41508c:	8fbc0018 	lw	gp,24(sp)
  415090:	00000000 	nop
  415094:	8f8a809c 	lw	t2,-32612(gp)
  415098:	00000000 	nop
  41509c:	8d4a0000 	lw	t2,0(t2)
  4150a0:	00000000 	nop
  4150a4:	11400008 	beqz	t2,4150c8 <findDirByFullName+0x1a34>
  4150a8:	00000000 	nop
  4150ac:	8f998284 	lw	t9,-32124(gp)
  4150b0:	24040002 	li	a0,2
  4150b4:	0320f809 	jalr	t9
  4150b8:	02002825 	move	a1,s0
  4150bc:	8fbc0018 	lw	gp,24(sp)
  4150c0:	10000014 	b	415114 <findDirByFullName+0x1a80>
  4150c4:	00000000 	nop
  4150c8:	8e0b0000 	lw	t3,0(s0)
  4150cc:	00000000 	nop
  4150d0:	256cffff 	addiu	t4,t3,-1
  4150d4:	05810008 	bgez	t4,4150f8 <findDirByFullName+0x1a64>
  4150d8:	ae0c0000 	sw	t4,0(s0)
  4150dc:	8f998288 	lw	t9,-32120(gp)
  4150e0:	24040002 	li	a0,2
  4150e4:	0320f809 	jalr	t9
  4150e8:	02002825 	move	a1,s0
  4150ec:	8fbc0018 	lw	gp,24(sp)
  4150f0:	10000008 	b	415114 <findDirByFullName+0x1a80>
  4150f4:	00000000 	nop
  4150f8:	8e0f0004 	lw	t7,4(s0)
  4150fc:	240e0002 	li	t6,2
  415100:	a1ee0000 	sb	t6,0(t7)
  415104:	8e180004 	lw	t8,4(s0)
  415108:	00000000 	nop
  41510c:	27190001 	addiu	t9,t8,1
  415110:	ae190004 	sw	t9,4(s0)
  415114:	8f88809c 	lw	t0,-32612(gp)
  415118:	00000000 	nop
  41511c:	8d080000 	lw	t0,0(t0)
  415120:	00000000 	nop
  415124:	11000008 	beqz	t0,415148 <findDirByFullName+0x1ab4>
  415128:	00000000 	nop
  41512c:	8f998284 	lw	t9,-32124(gp)
  415130:	24040001 	li	a0,1
  415134:	0320f809 	jalr	t9
  415138:	02002825 	move	a1,s0
  41513c:	8fbc0018 	lw	gp,24(sp)
  415140:	10000014 	b	415194 <findDirByFullName+0x1b00>
  415144:	00000000 	nop
  415148:	8e090000 	lw	t1,0(s0)
  41514c:	00000000 	nop
  415150:	252affff 	addiu	t2,t1,-1
  415154:	05410008 	bgez	t2,415178 <findDirByFullName+0x1ae4>
  415158:	ae0a0000 	sw	t2,0(s0)
  41515c:	8f998288 	lw	t9,-32120(gp)
  415160:	24040001 	li	a0,1
  415164:	0320f809 	jalr	t9
  415168:	02002825 	move	a1,s0
  41516c:	8fbc0018 	lw	gp,24(sp)
  415170:	10000008 	b	415194 <findDirByFullName+0x1b00>
  415174:	00000000 	nop
  415178:	8e0d0004 	lw	t5,4(s0)
  41517c:	240c0001 	li	t4,1
  415180:	a1ac0000 	sb	t4,0(t5)
  415184:	8e0e0004 	lw	t6,4(s0)
  415188:	00000000 	nop
  41518c:	25cf0001 	addiu	t7,t6,1
  415190:	ae0f0004 	sw	t7,4(s0)
  415194:	8f85892c 	lw	a1,-30420(gp)
  415198:	8f998018 	lw	t9,-32744(gp)
  41519c:	8ca50000 	lw	a1,0(a1)
  4151a0:	27394870 	addiu	t9,t9,18544
  4151a4:	02002025 	move	a0,s0
  4151a8:	0320f809 	jalr	t9
  4151ac:	00003025 	move	a2,zero
  4151b0:	8fbc0018 	lw	gp,24(sp)
  4151b4:	00000000 	nop
  4151b8:	8f98809c 	lw	t8,-32612(gp)
  4151bc:	00000000 	nop
  4151c0:	8f180000 	lw	t8,0(t8)
  4151c4:	00000000 	nop
  4151c8:	13000008 	beqz	t8,4151ec <findDirByFullName+0x1b58>
  4151cc:	00000000 	nop
  4151d0:	8f998284 	lw	t9,-32124(gp)
  4151d4:	24040004 	li	a0,4
  4151d8:	0320f809 	jalr	t9
  4151dc:	02002825 	move	a1,s0
  4151e0:	8fbc0018 	lw	gp,24(sp)
  4151e4:	10000014 	b	415238 <findDirByFullName+0x1ba4>
  4151e8:	00000000 	nop
  4151ec:	8e190000 	lw	t9,0(s0)
  4151f0:	00000000 	nop
  4151f4:	2728ffff 	addiu	t0,t9,-1
  4151f8:	05010008 	bgez	t0,41521c <findDirByFullName+0x1b88>
  4151fc:	ae080000 	sw	t0,0(s0)
  415200:	8f998288 	lw	t9,-32120(gp)
  415204:	24040004 	li	a0,4
  415208:	0320f809 	jalr	t9
  41520c:	02002825 	move	a1,s0
  415210:	8fbc0018 	lw	gp,24(sp)
  415214:	10000008 	b	415238 <findDirByFullName+0x1ba4>
  415218:	00000000 	nop
  41521c:	8e0b0004 	lw	t3,4(s0)
  415220:	240a0004 	li	t2,4
  415224:	a16a0000 	sb	t2,0(t3)
  415228:	8e0c0004 	lw	t4,4(s0)
  41522c:	00000000 	nop
  415230:	258d0001 	addiu	t5,t4,1
  415234:	ae0d0004 	sw	t5,4(s0)
  415238:	8f998018 	lw	t9,-32744(gp)
  41523c:	02002025 	move	a0,s0
  415240:	27394cf0 	addiu	t9,t9,19696
  415244:	0320f809 	jalr	t9
  415248:	00000000 	nop
  41524c:	8fbc0018 	lw	gp,24(sp)
  415250:	02002025 	move	a0,s0
  415254:	8f9987e0 	lw	t9,-30752(gp)
  415258:	00000000 	nop
  41525c:	0320f809 	jalr	t9
  415260:	00000000 	nop
  415264:	8fbc0018 	lw	gp,24(sp)
  415268:	00000000 	nop
  41526c:	8f8e809c 	lw	t6,-32612(gp)
  415270:	00000000 	nop
  415274:	8dce0000 	lw	t6,0(t6)
  415278:	00000000 	nop
  41527c:	11c00008 	beqz	t6,4152a0 <findDirByFullName+0x1c0c>
  415280:	00000000 	nop
  415284:	8f998284 	lw	t9,-32124(gp)
  415288:	24040006 	li	a0,6
  41528c:	0320f809 	jalr	t9
  415290:	02002825 	move	a1,s0
  415294:	8fbc0018 	lw	gp,24(sp)
  415298:	10000014 	b	4152ec <findDirByFullName+0x1c58>
  41529c:	00000000 	nop
  4152a0:	8e0f0000 	lw	t7,0(s0)
  4152a4:	00000000 	nop
  4152a8:	25f8ffff 	addiu	t8,t7,-1
  4152ac:	07010008 	bgez	t8,4152d0 <findDirByFullName+0x1c3c>
  4152b0:	ae180000 	sw	t8,0(s0)
  4152b4:	8f998288 	lw	t9,-32120(gp)
  4152b8:	24040006 	li	a0,6
  4152bc:	0320f809 	jalr	t9
  4152c0:	02002825 	move	a1,s0
  4152c4:	8fbc0018 	lw	gp,24(sp)
  4152c8:	10000008 	b	4152ec <findDirByFullName+0x1c58>
  4152cc:	00000000 	nop
  4152d0:	8e090004 	lw	t1,4(s0)
  4152d4:	24080006 	li	t0,6
  4152d8:	a1280000 	sb	t0,0(t1)
  4152dc:	8e0a0004 	lw	t2,4(s0)
  4152e0:	00000000 	nop
  4152e4:	254b0001 	addiu	t3,t2,1
  4152e8:	ae0b0004 	sw	t3,4(s0)
  4152ec:	8f8c893c 	lw	t4,-30404(gp)
  4152f0:	00001025 	move	v0,zero
  4152f4:	918c0000 	lbu	t4,0(t4)
  4152f8:	27a4003c 	addiu	a0,sp,60
  4152fc:	11800002 	beqz	t4,415308 <findDirByFullName+0x1c74>
  415300:	24050002 	li	a1,2
  415304:	24020001 	li	v0,1
  415308:	8f8d8a1c 	lw	t5,-30180(gp)
  41530c:	344e0002 	ori	t6,v0,0x2
  415310:	91ad0000 	lbu	t5,0(t5)
  415314:	000e7c00 	sll	t7,t6,0x10
  415318:	11a00002 	beqz	t5,415324 <findDirByFullName+0x1c90>
  41531c:	00000000 	nop
  415320:	000f1403 	sra	v0,t7,0x10
  415324:	8f998a20 	lw	t9,-30176(gp)
  415328:	a7a2003c 	sh	v0,60(sp)
  41532c:	93390000 	lbu	t9,0(t9)
  415330:	344a0004 	ori	t2,v0,0x4
  415334:	13200002 	beqz	t9,415340 <findDirByFullName+0x1cac>
  415338:	00000000 	nop
  41533c:	a7aa003c 	sh	t2,60(sp)
  415340:	8f99828c 	lw	t9,-32116(gp)
  415344:	24060001 	li	a2,1
  415348:	0320f809 	jalr	t9
  41534c:	02003825 	move	a3,s0
  415350:	8fbc0018 	lw	gp,24(sp)
  415354:	00000000 	nop
  415358:	8f8b809c 	lw	t3,-32612(gp)
  41535c:	00000000 	nop
  415360:	8d6b0000 	lw	t3,0(t3)
  415364:	00000000 	nop
  415368:	11600008 	beqz	t3,41538c <findDirByFullName+0x1cf8>
  41536c:	00000000 	nop
  415370:	8f998284 	lw	t9,-32124(gp)
  415374:	24040008 	li	a0,8
  415378:	0320f809 	jalr	t9
  41537c:	02002825 	move	a1,s0
  415380:	8fbc0018 	lw	gp,24(sp)
  415384:	10000014 	b	4153d8 <findDirByFullName+0x1d44>
  415388:	00000000 	nop
  41538c:	8e0c0000 	lw	t4,0(s0)
  415390:	00000000 	nop
  415394:	258dffff 	addiu	t5,t4,-1
  415398:	05a10008 	bgez	t5,4153bc <findDirByFullName+0x1d28>
  41539c:	ae0d0000 	sw	t5,0(s0)
  4153a0:	8f998288 	lw	t9,-32120(gp)
  4153a4:	24040008 	li	a0,8
  4153a8:	0320f809 	jalr	t9
  4153ac:	02002825 	move	a1,s0
  4153b0:	8fbc0018 	lw	gp,24(sp)
  4153b4:	10000008 	b	4153d8 <findDirByFullName+0x1d44>
  4153b8:	00000000 	nop
  4153bc:	8e180004 	lw	t8,4(s0)
  4153c0:	240f0008 	li	t7,8
  4153c4:	a30f0000 	sb	t7,0(t8)
  4153c8:	8e190004 	lw	t9,4(s0)
  4153cc:	00000000 	nop
  4153d0:	27280001 	addiu	t0,t9,1
  4153d4:	ae080004 	sw	t0,4(s0)
  4153d8:	8f898924 	lw	t1,-30428(gp)
  4153dc:	8f8a8928 	lw	t2,-30424(gp)
  4153e0:	8f99828c 	lw	t9,-32116(gp)
  4153e4:	8d290000 	lw	t1,0(t1)
  4153e8:	8d4a0000 	lw	t2,0(t2)
  4153ec:	27a40034 	addiu	a0,sp,52
  4153f0:	24050008 	li	a1,8
  4153f4:	24060001 	li	a2,1
  4153f8:	02003825 	move	a3,s0
  4153fc:	afa90034 	sw	t1,52(sp)
  415400:	0320f809 	jalr	t9
  415404:	afaa0038 	sw	t2,56(sp)
  415408:	93ab0033 	lbu	t3,51(sp)
  41540c:	8fbc0018 	lw	gp,24(sp)
  415410:	11600008 	beqz	t3,415434 <findDirByFullName+0x1da0>
  415414:	00000000 	nop
  415418:	8f998274 	lw	t9,-32140(gp)
  41541c:	02002025 	move	a0,s0
  415420:	0320f809 	jalr	t9
  415424:	00000000 	nop
  415428:	8fbc0018 	lw	gp,24(sp)
  41542c:	10000007 	b	41544c <findDirByFullName+0x1db8>
  415430:	00000000 	nop
  415434:	8f998270 	lw	t9,-32144(gp)
  415438:	02002025 	move	a0,s0
  41543c:	0320f809 	jalr	t9
  415440:	00000000 	nop
  415444:	8fbc0018 	lw	gp,24(sp)
  415448:	00000000 	nop
  41544c:	8f858a24 	lw	a1,-30172(gp)
  415450:	8f99826c 	lw	t9,-32148(gp)
  415454:	8fa4004c 	lw	a0,76(sp)
  415458:	8ca50120 	lw	a1,288(a1)
  41545c:	0320f809 	jalr	t9
  415460:	00000000 	nop
  415464:	8fbc0018 	lw	gp,24(sp)
  415468:	8fa4004c 	lw	a0,76(sp)
  41546c:	8f9980c0 	lw	t9,-32576(gp)
  415470:	00000000 	nop
  415474:	0320f809 	jalr	t9
  415478:	00000000 	nop
  41547c:	8fbc0018 	lw	gp,24(sp)
  415480:	8fa40040 	lw	a0,64(sp)
  415484:	8f998564 	lw	t9,-31388(gp)
  415488:	00000000 	nop
  41548c:	0320f809 	jalr	t9
  415490:	00000000 	nop
  415494:	8fbc0018 	lw	gp,24(sp)
  415498:	00000000 	nop
  41549c:	8f99871c 	lw	t9,-30948(gp)
  4154a0:	00000000 	nop
  4154a4:	0320f809 	jalr	t9
  4154a8:	00000000 	nop
  4154ac:	8fbc0018 	lw	gp,24(sp)
  4154b0:	00000000 	nop
  4154b4:	8fbf001c 	lw	ra,28(sp)
  4154b8:	8fb00014 	lw	s0,20(sp)
  4154bc:	03e00008 	jr	ra
  4154c0:	27bd0050 	addiu	sp,sp,80
