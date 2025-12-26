# Function: FUN_0040a704
# Address: 0x0040a704 - 0x0040a7ec
# Size: 0xe8 (232 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040a704 <_mcount+0x1c>:
  40a704:	3c1c0fc1 	lui	gp,0xfc1
  40a708:	279c342c 	addiu	gp,gp,13356
  40a70c:	0399e021 	addu	gp,gp,t9
  40a710:	8f828a24 	lw	v0,-30172(gp)
  40a714:	8f83897c 	lw	v1,-30340(gp)
  40a718:	27bdffe0 	addiu	sp,sp,-32
  40a71c:	c4440018 	lwc1	$f4,24(v0)
  40a720:	8c6e0000 	lw	t6,0(v1)
  40a724:	afbf001c 	sw	ra,28(sp)
  40a728:	afbc0018 	sw	gp,24(sp)
  40a72c:	e5c40000 	swc1	$f4,0(t6)
  40a730:	c446001c 	lwc1	$f6,28(v0)
  40a734:	8c6f0000 	lw	t7,0(v1)
  40a738:	00000000 	nop
  40a73c:	e5e60004 	swc1	$f6,4(t7)
  40a740:	c4480020 	lwc1	$f8,32(v0)
  40a744:	8c780000 	lw	t8,0(v1)
  40a748:	00000000 	nop
  40a74c:	e7080008 	swc1	$f8,8(t8)
  40a750:	8c790000 	lw	t9,0(v1)
  40a754:	00000000 	nop
  40a758:	a720000c 	sh	zero,12(t9)
  40a75c:	8c480028 	lw	t0,40(v0)
  40a760:	8c690000 	lw	t1,0(v1)
  40a764:	00000000 	nop
  40a768:	a528000e 	sh	t0,14(t1)
  40a76c:	8c4a0050 	lw	t2,80(v0)
  40a770:	8c6b0000 	lw	t3,0(v1)
  40a774:	00000000 	nop
  40a778:	a56a0010 	sh	t2,16(t3)
  40a77c:	8f998528 	lw	t9,-31448(gp)
  40a780:	00000000 	nop
  40a784:	0320f809 	jalr	t9
  40a788:	00000000 	nop
  40a78c:	8fbc0018 	lw	gp,24(sp)
  40a790:	00000000 	nop
  40a794:	8f99852c 	lw	t9,-31444(gp)
  40a798:	00000000 	nop
  40a79c:	0320f809 	jalr	t9
  40a7a0:	00000000 	nop
  40a7a4:	8fbc0018 	lw	gp,24(sp)
  40a7a8:	00000000 	nop
  40a7ac:	8f83897c 	lw	v1,-30340(gp)
  40a7b0:	00000000 	nop
  40a7b4:	8c6c0000 	lw	t4,0(v1)
  40a7b8:	00000000 	nop
  40a7bc:	a1800c51 	sb	zero,3153(t4)
  40a7c0:	8c6d0000 	lw	t5,0(v1)
  40a7c4:	00000000 	nop
  40a7c8:	a1a00c53 	sb	zero,3155(t5)
  40a7cc:	8f99877c 	lw	t9,-30852(gp)
  40a7d0:	00000000 	nop
  40a7d4:	0320f809 	jalr	t9
  40a7d8:	00000000 	nop
  40a7dc:	8fbf001c 	lw	ra,28(sp)
  40a7e0:	8fbc0018 	lw	gp,24(sp)
  40a7e4:	03e00008 	jr	ra
  40a7e8:	27bd0020 	addiu	sp,sp,32
