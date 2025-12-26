# Function: FUN_0041f1d8
# Address: 0x0041f1d8 - 0x0041f2b4
# Size: 0xdc (220 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041f1d8 <doIt+0xcc>:
  41f1d8:	3c1c0fc0 	lui	gp,0xfc0
  41f1dc:	279ce958 	addiu	gp,gp,-5800
  41f1e0:	0399e021 	addu	gp,gp,t9
  41f1e4:	8f8e8068 	lw	t6,-32664(gp)
  41f1e8:	27bdffb0 	addiu	sp,sp,-80
  41f1ec:	8dce6e5c 	lw	t6,28252(t6)
  41f1f0:	afbf001c 	sw	ra,28(sp)
  41f1f4:	afbc0018 	sw	gp,24(sp)
  41f1f8:	15c00025 	bnez	t6,41f290 <doIt+0x184>
  41f1fc:	afa40050 	sw	a0,80(sp)
  41f200:	8f8f80a0 	lw	t7,-32608(gp)
  41f204:	8f848a10 	lw	a0,-30192(gp)
  41f208:	8f85805c 	lw	a1,-32676(gp)
  41f20c:	8f9981e8 	lw	t9,-32280(gp)
  41f210:	24180001 	li	t8,1
  41f214:	25ef177d 	addiu	t7,t7,6013
  41f218:	8c840000 	lw	a0,0(a0)
  41f21c:	afaf0024 	sw	t7,36(sp)
  41f220:	afb80028 	sw	t8,40(sp)
  41f224:	27a60024 	addiu	a2,sp,36
  41f228:	24070001 	li	a3,1
  41f22c:	0320f809 	jalr	t9
  41f230:	24a5b4b0 	addiu	a1,a1,-19280
  41f234:	8fbc0018 	lw	gp,24(sp)
  41f238:	8fa70050 	lw	a3,80(sp)
  41f23c:	8f818068 	lw	at,-32664(gp)
  41f240:	34f90100 	ori	t9,a3,0x100
  41f244:	03203825 	move	a3,t9
  41f248:	8f9983ac 	lw	t9,-31828(gp)
  41f24c:	8f8580a0 	lw	a1,-32608(gp)
  41f250:	8f86801c 	lw	a2,-32740(gp)
  41f254:	00402025 	move	a0,v0
  41f258:	ac226e5c 	sw	v0,28252(at)
  41f25c:	24a5214e 	addiu	a1,a1,8526
  41f260:	0320f809 	jalr	t9
  41f264:	24c6f2b4 	addiu	a2,a2,-3404
  41f268:	8fbc0018 	lw	gp,24(sp)
  41f26c:	00000000 	nop
  41f270:	8f848068 	lw	a0,-32664(gp)
  41f274:	8f9987a4 	lw	t9,-30812(gp)
  41f278:	8f858938 	lw	a1,-30408(gp)
  41f27c:	8c846e5c 	lw	a0,28252(a0)
  41f280:	0320f809 	jalr	t9
  41f284:	00000000 	nop
  41f288:	8fbc0018 	lw	gp,24(sp)
  41f28c:	00000000 	nop
  41f290:	8f848068 	lw	a0,-32664(gp)
  41f294:	8f998388 	lw	t9,-31864(gp)
  41f298:	8c846e5c 	lw	a0,28252(a0)
  41f29c:	0320f809 	jalr	t9
  41f2a0:	00000000 	nop
  41f2a4:	8fbf001c 	lw	ra,28(sp)
  41f2a8:	8fbc0018 	lw	gp,24(sp)
  41f2ac:	03e00008 	jr	ra
  41f2b0:	27bd0050 	addiu	sp,sp,80
