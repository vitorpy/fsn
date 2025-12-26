# Function: AddServer__6ClientFliT2
# Address: 0x0043b1bc - 0x0043b30c
# Size: 0x150 (336 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b1bc <AddServer__6ClientFliT2>:
  43b1bc:	3c1c0fbe 	lui	gp,0xfbe
  43b1c0:	279c2974 	addiu	gp,gp,10612
  43b1c4:	0399e021 	addu	gp,gp,t9
  43b1c8:	27bdffc0 	addiu	sp,sp,-64
  43b1cc:	8f9984a4 	lw	t9,-31580(gp)
  43b1d0:	afbf001c 	sw	ra,28(sp)
  43b1d4:	afa40040 	sw	a0,64(sp)
  43b1d8:	afbc0018 	sw	gp,24(sp)
  43b1dc:	afa50044 	sw	a1,68(sp)
  43b1e0:	afa60048 	sw	a2,72(sp)
  43b1e4:	afa7004c 	sw	a3,76(sp)
  43b1e8:	0320f809 	jalr	t9
  43b1ec:	240417a0 	li	a0,6048
  43b1f0:	8fbc0018 	lw	gp,24(sp)
  43b1f4:	8faf0044 	lw	t7,68(sp)
  43b1f8:	8f998378 	lw	t9,-31880(gp)
  43b1fc:	240e0002 	li	t6,2
  43b200:	8fa50048 	lw	a1,72(sp)
  43b204:	8fa6004c 	lw	a2,76(sp)
  43b208:	a7ae0028 	sh	t6,40(sp)
  43b20c:	27a40028 	addiu	a0,sp,40
  43b210:	24070006 	li	a3,6
  43b214:	afa20024 	sw	v0,36(sp)
  43b218:	0320f809 	jalr	t9
  43b21c:	afaf002c 	sw	t7,44(sp)
  43b220:	8fbc0018 	lw	gp,24(sp)
  43b224:	8fa30024 	lw	v1,36(sp)
  43b228:	14400003 	bnez	v0,43b238 <AddServer__6ClientFliT2+0x7c>
  43b22c:	a7a2002a 	sh	v0,42(sp)
  43b230:	10000032 	b	43b2fc <AddServer__6ClientFliT2+0x140>
  43b234:	2402ffff 	li	v0,-1
  43b238:	8f998394 	lw	t9,-31852(gp)
  43b23c:	24040002 	li	a0,2
  43b240:	24050002 	li	a1,2
  43b244:	00003025 	move	a2,zero
  43b248:	0320f809 	jalr	t9
  43b24c:	afa30024 	sw	v1,36(sp)
  43b250:	8fbc0018 	lw	gp,24(sp)
  43b254:	8fa30024 	lw	v1,36(sp)
  43b258:	04410003 	bgez	v0,43b268 <AddServer__6ClientFliT2+0xac>
  43b25c:	00403825 	move	a3,v0
  43b260:	10000026 	b	43b2fc <AddServer__6ClientFliT2+0x140>
  43b264:	2402fffe 	li	v0,-2
  43b268:	8f9983b0 	lw	t9,-31824(gp)
  43b26c:	00e02025 	move	a0,a3
  43b270:	27a50028 	addiu	a1,sp,40
  43b274:	24060010 	li	a2,16
  43b278:	afa30024 	sw	v1,36(sp)
  43b27c:	0320f809 	jalr	t9
  43b280:	afa7003c 	sw	a3,60(sp)
  43b284:	8fa30024 	lw	v1,36(sp)
  43b288:	8fbc0018 	lw	gp,24(sp)
  43b28c:	8fa7003c 	lw	a3,60(sp)
  43b290:	04410008 	bgez	v0,43b2b4 <AddServer__6ClientFliT2+0xf8>
  43b294:	24640be4 	addiu	a0,v1,3044
  43b298:	8f99825c 	lw	t9,-32164(gp)
  43b29c:	00e02025 	move	a0,a3
  43b2a0:	0320f809 	jalr	t9
  43b2a4:	00000000 	nop
  43b2a8:	8fbc0018 	lw	gp,24(sp)
  43b2ac:	10000013 	b	43b2fc <AddServer__6ClientFliT2+0x140>
  43b2b0:	2402fffd 	li	v0,-3
  43b2b4:	8fa60040 	lw	a2,64(sp)
  43b2b8:	2462001c 	addiu	v0,v1,28
  43b2bc:	8cc50000 	lw	a1,0(a2)
  43b2c0:	acc30000 	sw	v1,0(a2)
  43b2c4:	ac620014 	sw	v0,20(v1)
  43b2c8:	ac620018 	sw	v0,24(v1)
  43b2cc:	24180001 	li	t8,1
  43b2d0:	ac670000 	sw	a3,0(v1)
  43b2d4:	ac60000c 	sw	zero,12(v1)
  43b2d8:	ac600010 	sw	zero,16(v1)
  43b2dc:	ac640bdc 	sw	a0,3036(v1)
  43b2e0:	ac640be0 	sw	a0,3040(v1)
  43b2e4:	ac600bd8 	sw	zero,3032(v1)
  43b2e8:	ac780bd4 	sw	t8,3028(v1)
  43b2ec:	ac600008 	sw	zero,8(v1)
  43b2f0:	ac60179c 	sw	zero,6044(v1)
  43b2f4:	00e01025 	move	v0,a3
  43b2f8:	ac650004 	sw	a1,4(v1)
  43b2fc:	8fbf001c 	lw	ra,28(sp)
  43b300:	27bd0040 	addiu	sp,sp,64
  43b304:	03e00008 	jr	ra
  43b308:	00000000 	nop
