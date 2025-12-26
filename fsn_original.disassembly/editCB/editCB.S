# Function: editCB
# Address: 0x0041e124 - 0x0041e260
# Size: 0x13c (316 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041e124 <editCB>:
  41e124:	3c1c0fc0 	lui	gp,0xfc0
  41e128:	279cfa0c 	addiu	gp,gp,-1524
  41e12c:	0399e021 	addu	gp,gp,t9
  41e130:	27bdfa70 	addiu	sp,sp,-1424
  41e134:	8f82897c 	lw	v0,-30340(gp)
  41e138:	afbf001c 	sw	ra,28(sp)
  41e13c:	8c420000 	lw	v0,0(v0)
  41e140:	afbc0018 	sw	gp,24(sp)
  41e144:	afb00014 	sw	s0,20(sp)
  41e148:	afa40590 	sw	a0,1424(sp)
  41e14c:	afa50594 	sw	a1,1428(sp)
  41e150:	afa60598 	sw	a2,1432(sp)
  41e154:	8c4e0048 	lw	t6,72(v0)
  41e158:	00000000 	nop
  41e15c:	11c0003d 	beqz	t6,41e254 <editCB+0x130>
  41e160:	8fbf001c 	lw	ra,28(sp)
  41e164:	8c4f0044 	lw	t7,68(v0)
  41e168:	00000000 	nop
  41e16c:	11e00039 	beqz	t7,41e254 <editCB+0x130>
  41e170:	8fbf001c 	lw	ra,28(sp)
  41e174:	8f84805c 	lw	a0,-32676(gp)
  41e178:	8f9981a8 	lw	t9,-32344(gp)
  41e17c:	2484b344 	addiu	a0,a0,-19644
  41e180:	0320f809 	jalr	t9
  41e184:	00000000 	nop
  41e188:	8fbc0018 	lw	gp,24(sp)
  41e18c:	10400030 	beqz	v0,41e250 <editCB+0x12c>
  41e190:	00403025 	move	a2,v0
  41e194:	8f85805c 	lw	a1,-32676(gp)
  41e198:	8f9983e4 	lw	t9,-31772(gp)
  41e19c:	27b0002c 	addiu	s0,sp,44
  41e1a0:	02002025 	move	a0,s0
  41e1a4:	0320f809 	jalr	t9
  41e1a8:	24a5b350 	addiu	a1,a1,-19632
  41e1ac:	8fbc0018 	lw	gp,24(sp)
  41e1b0:	02002025 	move	a0,s0
  41e1b4:	8f9983e0 	lw	t9,-31776(gp)
  41e1b8:	00000000 	nop
  41e1bc:	0320f809 	jalr	t9
  41e1c0:	00000000 	nop
  41e1c4:	8fbc0018 	lw	gp,24(sp)
  41e1c8:	00502021 	addu	a0,v0,s0
  41e1cc:	8f98897c 	lw	t8,-30340(gp)
  41e1d0:	8f99857c 	lw	t9,-31364(gp)
  41e1d4:	8f180000 	lw	t8,0(t8)
  41e1d8:	00000000 	nop
  41e1dc:	8f050044 	lw	a1,68(t8)
  41e1e0:	0320f809 	jalr	t9
  41e1e4:	00000000 	nop
  41e1e8:	8fbc0018 	lw	gp,24(sp)
  41e1ec:	02002025 	move	a0,s0
  41e1f0:	8f99897c 	lw	t9,-30340(gp)
  41e1f4:	00000000 	nop
  41e1f8:	8f390000 	lw	t9,0(t9)
  41e1fc:	00000000 	nop
  41e200:	8f280048 	lw	t0,72(t9)
  41e204:	8f99831c 	lw	t9,-31972(gp)
  41e208:	8d050000 	lw	a1,0(t0)
  41e20c:	0320f809 	jalr	t9
  41e210:	00000000 	nop
  41e214:	8fbc0018 	lw	gp,24(sp)
  41e218:	02002025 	move	a0,s0
  41e21c:	8f85805c 	lw	a1,-32676(gp)
  41e220:	8f99831c 	lw	t9,-31972(gp)
  41e224:	24a5b354 	addiu	a1,a1,-19628
  41e228:	0320f809 	jalr	t9
  41e22c:	00000000 	nop
  41e230:	8fbc0018 	lw	gp,24(sp)
  41e234:	02002025 	move	a0,s0
  41e238:	8f998254 	lw	t9,-32172(gp)
  41e23c:	00000000 	nop
  41e240:	0320f809 	jalr	t9
  41e244:	00000000 	nop
  41e248:	8fbc0018 	lw	gp,24(sp)
  41e24c:	00000000 	nop
  41e250:	8fbf001c 	lw	ra,28(sp)
  41e254:	8fb00014 	lw	s0,20(sp)
  41e258:	03e00008 	jr	ra
  41e25c:	27bd0590 	addiu	sp,sp,1424
