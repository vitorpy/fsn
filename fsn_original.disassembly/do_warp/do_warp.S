# Function: do_warp
# Address: 0x004106d8 - 0x00410858
# Size: 0x180 (384 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004106d8 <do_warp>:
  4106d8:	3c1c0fc1 	lui	gp,0xfc1
  4106dc:	279cd458 	addiu	gp,gp,-11176
  4106e0:	0399e021 	addu	gp,gp,t9
  4106e4:	8f99851c 	lw	t9,-31460(gp)
  4106e8:	27bdffb0 	addiu	sp,sp,-80
  4106ec:	afbf003c 	sw	ra,60(sp)
  4106f0:	afbc0038 	sw	gp,56(sp)
  4106f4:	0320f809 	jalr	t9
  4106f8:	afa40050 	sw	a0,80(sp)
  4106fc:	8fbc0038 	lw	gp,56(sp)
  410700:	00000000 	nop
  410704:	8f99854c 	lw	t9,-31412(gp)
  410708:	00000000 	nop
  41070c:	0320f809 	jalr	t9
  410710:	00000000 	nop
  410714:	8fa30050 	lw	v1,80(sp)
  410718:	8fbc0038 	lw	gp,56(sp)
  41071c:	10600015 	beqz	v1,410774 <do_warp+0x9c>
  410720:	00000000 	nop
  410724:	8f828a24 	lw	v0,-30172(gp)
  410728:	8f998558 	lw	t9,-31400(gp)
  41072c:	c4480034 	lwc1	$f8,52(v0)
  410730:	c444002c 	lwc1	$f4,44(v0)
  410734:	c4460030 	lwc1	$f6,48(v0)
  410738:	8c4e0038 	lw	t6,56(v0)
  41073c:	460042a1 	cvt.d.s	$f10,$f8
  410740:	e7aa0014 	swc1	$f10,20(sp)
  410744:	e7ab0010 	swc1	$f11,16(sp)
  410748:	afa00018 	sw	zero,24(sp)
  41074c:	afa30020 	sw	v1,32(sp)
  410750:	afa00024 	sw	zero,36(sp)
  410754:	afa00028 	sw	zero,40(sp)
  410758:	46002321 	cvt.d.s	$f12,$f4
  41075c:	460033a1 	cvt.d.s	$f14,$f6
  410760:	0320f809 	jalr	t9
  410764:	afae001c 	sw	t6,28(sp)
  410768:	8fbc0038 	lw	gp,56(sp)
  41076c:	10000037 	b	41084c <do_warp+0x174>
  410770:	8fbf003c 	lw	ra,60(sp)
  410774:	8f8f897c 	lw	t7,-30340(gp)
  410778:	27a5004c 	addiu	a1,sp,76
  41077c:	8def0000 	lw	t7,0(t7)
  410780:	00000000 	nop
  410784:	8de4003c 	lw	a0,60(t7)
  410788:	00000000 	nop
  41078c:	1080001b 	beqz	a0,4107fc <do_warp+0x124>
  410790:	00000000 	nop
  410794:	8f9986ec 	lw	t9,-30996(gp)
  410798:	27a60048 	addiu	a2,sp,72
  41079c:	0320f809 	jalr	t9
  4107a0:	27a70044 	addiu	a3,sp,68
  4107a4:	8fbc0038 	lw	gp,56(sp)
  4107a8:	8fb90050 	lw	t9,80(sp)
  4107ac:	8f828a24 	lw	v0,-30172(gp)
  4107b0:	c7a40044 	lwc1	$f4,68(sp)
  4107b4:	afb90020 	sw	t9,32(sp)
  4107b8:	c7b0004c 	lwc1	$f16,76(sp)
  4107bc:	c7b20048 	lwc1	$f18,72(sp)
  4107c0:	8f998558 	lw	t9,-31400(gp)
  4107c4:	8c580028 	lw	t8,40(v0)
  4107c8:	460021a1 	cvt.d.s	$f6,$f4
  4107cc:	e7a60014 	swc1	$f6,20(sp)
  4107d0:	e7a70010 	swc1	$f7,16(sp)
  4107d4:	afa00018 	sw	zero,24(sp)
  4107d8:	afa00024 	sw	zero,36(sp)
  4107dc:	afa00028 	sw	zero,40(sp)
  4107e0:	46008321 	cvt.d.s	$f12,$f16
  4107e4:	460093a1 	cvt.d.s	$f14,$f18
  4107e8:	0320f809 	jalr	t9
  4107ec:	afb8001c 	sw	t8,28(sp)
  4107f0:	8fbc0038 	lw	gp,56(sp)
  4107f4:	10000015 	b	41084c <do_warp+0x174>
  4107f8:	8fbf003c 	lw	ra,60(sp)
  4107fc:	8f828a24 	lw	v0,-30172(gp)
  410800:	8f998558 	lw	t9,-31400(gp)
  410804:	c4500020 	lwc1	$f16,32(v0)
  410808:	c4480018 	lwc1	$f8,24(v0)
  41080c:	c44a001c 	lwc1	$f10,28(v0)
  410810:	8c480028 	lw	t0,40(v0)
  410814:	460084a1 	cvt.d.s	$f18,$f16
  410818:	e7b20014 	swc1	$f18,20(sp)
  41081c:	e7b30010 	swc1	$f19,16(sp)
  410820:	afa00018 	sw	zero,24(sp)
  410824:	afa30020 	sw	v1,32(sp)
  410828:	afa00024 	sw	zero,36(sp)
  41082c:	afa00028 	sw	zero,40(sp)
  410830:	46004321 	cvt.d.s	$f12,$f8
  410834:	460053a1 	cvt.d.s	$f14,$f10
  410838:	0320f809 	jalr	t9
  41083c:	afa8001c 	sw	t0,28(sp)
  410840:	8fbc0038 	lw	gp,56(sp)
  410844:	00000000 	nop
  410848:	8fbf003c 	lw	ra,60(sp)
  41084c:	27bd0050 	addiu	sp,sp,80
  410850:	03e00008 	jr	ra
  410854:	00000000 	nop
