# Function: FUN_00413580
# Address: 0x00413580 - 0x00413604
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00413580 <findfile+0xc>:
  413580:	27bdffa0 	addiu	sp,sp,-96
  413584:	afbf0024 	sw	ra,36(sp)
  413588:	afbc0020 	sw	gp,32(sp)
  41358c:	afa40060 	sw	a0,96(sp)
  413590:	afa50064 	sw	a1,100(sp)
  413594:	8c8f000c 	lw	t7,12(a0)
  413598:	8fb80064 	lw	t8,100(sp)
  41359c:	15e00003 	bnez	t7,4135ac <findfile+0x38>
  4135a0:	27a40058 	addiu	a0,sp,88
  4135a4:	10000013 	b	4135f4 <findfile+0x80>
  4135a8:	00001025 	move	v0,zero
  4135ac:	27b9002c 	addiu	t9,sp,44
  4135b0:	8fa80060 	lw	t0,96(sp)
  4135b4:	afb90058 	sw	t9,88(sp)
  4135b8:	afb8002c 	sw	t8,44(sp)
  4135bc:	8f9980f8 	lw	t9,-32520(gp)
  4135c0:	8f89859c 	lw	t1,-31332(gp)
  4135c4:	8d06000c 	lw	a2,12(t0)
  4135c8:	8d050010 	lw	a1,16(t0)
  4135cc:	24070004 	li	a3,4
  4135d0:	0320f809 	jalr	t9
  4135d4:	afa90010 	sw	t1,16(sp)
  4135d8:	8fbc0020 	lw	gp,32(sp)
  4135dc:	10400004 	beqz	v0,4135f0 <findfile+0x7c>
  4135e0:	00001825 	move	v1,zero
  4135e4:	8c430000 	lw	v1,0(v0)
  4135e8:	10000002 	b	4135f4 <findfile+0x80>
  4135ec:	00601025 	move	v0,v1
  4135f0:	00601025 	move	v0,v1
  4135f4:	8fbf0024 	lw	ra,36(sp)
  4135f8:	27bd0060 	addiu	sp,sp,96
  4135fc:	03e00008 	jr	ra
  413600:	00000000 	nop
