# Function: highlightFileWarp
# Address: 0x0041ac80 - 0x0041aee0
# Size: 0x260 (608 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041ac80 <highlightFileWarp>:
  41ac80:	3c1c0fc0 	lui	gp,0xfc0
  41ac84:	279c2eb0 	addiu	gp,gp,11952
  41ac88:	0399e021 	addu	gp,gp,t9
  41ac8c:	27bdffd8 	addiu	sp,sp,-40
  41ac90:	8f8f897c 	lw	t7,-30340(gp)
  41ac94:	afbf001c 	sw	ra,28(sp)
  41ac98:	8def0000 	lw	t7,0(t7)
  41ac9c:	afbc0018 	sw	gp,24(sp)
  41aca0:	afb00014 	sw	s0,20(sp)
  41aca4:	afa40028 	sw	a0,40(sp)
  41aca8:	8df8003c 	lw	t8,60(t7)
  41acac:	00a08025 	move	s0,a1
  41acb0:	14980088 	bne	a0,t8,41aed4 <highlightFileWarp+0x254>
  41acb4:	8fbf001c 	lw	ra,28(sp)
  41acb8:	8f9984b8 	lw	t9,-31560(gp)
  41acbc:	afa00024 	sw	zero,36(sp)
  41acc0:	0320f809 	jalr	t9
  41acc4:	00000000 	nop
  41acc8:	8fb90028 	lw	t9,40(sp)
  41accc:	3c014000 	lui	at,0x4000
  41acd0:	c724003c 	lwc1	$f4,60(t9)
  41acd4:	44814800 	mtc1	at,$f9
  41acd8:	44804000 	mtc1	zero,$f8
  41acdc:	460021a1 	cvt.d.s	$f6,$f4
  41ace0:	00000000 	nop
  41ace4:	46283283 	div.d	$f10,$f6,$f8
  41ace8:	8fbc0018 	lw	gp,24(sp)
  41acec:	44806000 	mtc1	zero,$f12
  41acf0:	8f9984a0 	lw	t9,-31584(gp)
  41acf4:	44066000 	mfc1	a2,$f12
  41acf8:	0320f809 	jalr	t9
  41acfc:	462053a0 	cvt.s.d	$f14,$f10
  41ad00:	8fbc0018 	lw	gp,24(sp)
  41ad04:	02002025 	move	a0,s0
  41ad08:	8f9986f8 	lw	t9,-30984(gp)
  41ad0c:	00000000 	nop
  41ad10:	0320f809 	jalr	t9
  41ad14:	00000000 	nop
  41ad18:	8fbc0018 	lw	gp,24(sp)
  41ad1c:	c60c0014 	lwc1	$f12,20(s0)
  41ad20:	8f9984a0 	lw	t9,-31584(gp)
  41ad24:	c60e0018 	lwc1	$f14,24(s0)
  41ad28:	0320f809 	jalr	t9
  41ad2c:	24060000 	li	a2,0
  41ad30:	8fbc0018 	lw	gp,24(sp)
  41ad34:	8fa70024 	lw	a3,36(sp)
  41ad38:	8f88897c 	lw	t0,-30340(gp)
  41ad3c:	00000000 	nop
  41ad40:	8d080000 	lw	t0,0(t0)
  41ad44:	00000000 	nop
  41ad48:	91090c50 	lbu	t1,3152(t0)
  41ad4c:	00000000 	nop
  41ad50:	11200011 	beqz	t1,41ad98 <highlightFileWarp+0x118>
  41ad54:	00000000 	nop
  41ad58:	8f828a24 	lw	v0,-30172(gp)
  41ad5c:	00000000 	nop
  41ad60:	904a0005 	lbu	t2,5(v0)
  41ad64:	00000000 	nop
  41ad68:	1140000b 	beqz	t2,41ad98 <highlightFileWarp+0x118>
  41ad6c:	00000000 	nop
  41ad70:	c44c0070 	lwc1	$f12,112(v0)
  41ad74:	8f998494 	lw	t9,-31596(gp)
  41ad78:	8c460080 	lw	a2,128(v0)
  41ad7c:	afa70024 	sw	a3,36(sp)
  41ad80:	0320f809 	jalr	t9
  41ad84:	46006386 	mov.s	$f14,$f12
  41ad88:	8fbc0018 	lw	gp,24(sp)
  41ad8c:	8fa70024 	lw	a3,36(sp)
  41ad90:	1000000b 	b	41adc0 <highlightFileWarp+0x140>
  41ad94:	00000000 	nop
  41ad98:	8f828a24 	lw	v0,-30172(gp)
  41ad9c:	8f998494 	lw	t9,-31596(gp)
  41ada0:	c44c0070 	lwc1	$f12,112(v0)
  41ada4:	8e06001c 	lw	a2,28(s0)
  41ada8:	afa70024 	sw	a3,36(sp)
  41adac:	0320f809 	jalr	t9
  41adb0:	46006386 	mov.s	$f14,$f12
  41adb4:	8fbc0018 	lw	gp,24(sp)
  41adb8:	8fa70024 	lw	a3,36(sp)
  41adbc:	00000000 	nop
  41adc0:	8f82897c 	lw	v0,-30340(gp)
  41adc4:	c604001c 	lwc1	$f4,28(s0)
  41adc8:	8c420000 	lw	v0,0(v0)
  41adcc:	460021a1 	cvt.d.s	$f6,$f4
  41add0:	c4500008 	lwc1	$f16,8(v0)
  41add4:	3c014000 	lui	at,0x4000
  41add8:	460084a1 	cvt.d.s	$f18,$f16
  41addc:	4632303e 	c.le.d	$f6,$f18
  41ade0:	44817800 	mtc1	at,$f15
  41ade4:	8fad0028 	lw	t5,40(sp)
  41ade8:	45000002 	bc1f	41adf4 <highlightFileWarp+0x174>
  41adec:	00002025 	move	a0,zero
  41adf0:	24070010 	li	a3,16
  41adf4:	8f818a24 	lw	at,-30172(gp)
  41adf8:	44807000 	mtc1	zero,$f14
  41adfc:	c42a0070 	lwc1	$f10,112(at)
  41ae00:	c6080014 	lwc1	$f8,20(s0)
  41ae04:	46005421 	cvt.d.s	$f16,$f10
  41ae08:	00000000 	nop
  41ae0c:	462e8003 	div.d	$f0,$f16,$f14
  41ae10:	c4440000 	lwc1	$f4,0(v0)
  41ae14:	460040a1 	cvt.d.s	$f2,$f8
  41ae18:	46002321 	cvt.d.s	$f12,$f4
  41ae1c:	34eb0002 	ori	t3,a3,0x2
  41ae20:	46201481 	sub.d	$f18,$f2,$f0
  41ae24:	4632603e 	c.le.d	$f12,$f18
  41ae28:	46201180 	add.d	$f6,$f2,$f0
  41ae2c:	45000002 	bc1f	41ae38 <highlightFileWarp+0x1b8>
  41ae30:	00000000 	nop
  41ae34:	01603825 	move	a3,t3
  41ae38:	462c303e 	c.le.d	$f6,$f12
  41ae3c:	34ec0004 	ori	t4,a3,0x4
  41ae40:	45000002 	bc1f	41ae4c <highlightFileWarp+0x1cc>
  41ae44:	00000000 	nop
  41ae48:	01803825 	move	a3,t4
  41ae4c:	c5a8003c 	lwc1	$f8,60(t5)
  41ae50:	c6040018 	lwc1	$f4,24(s0)
  41ae54:	460042a1 	cvt.d.s	$f10,$f8
  41ae58:	00000000 	nop
  41ae5c:	462e5403 	div.d	$f16,$f10,$f14
  41ae60:	460024a1 	cvt.d.s	$f18,$f4
  41ae64:	c4460004 	lwc1	$f6,4(v0)
  41ae68:	34ef0001 	ori	t7,a3,0x1
  41ae6c:	46003321 	cvt.d.s	$f12,$f6
  41ae70:	46328080 	add.d	$f2,$f16,$f18
  41ae74:	46201201 	sub.d	$f8,$f2,$f0
  41ae78:	4628603e 	c.le.d	$f12,$f8
  41ae7c:	46201280 	add.d	$f10,$f2,$f0
  41ae80:	45000002 	bc1f	41ae8c <highlightFileWarp+0x20c>
  41ae84:	00000000 	nop
  41ae88:	01e03825 	move	a3,t7
  41ae8c:	462c503e 	c.le.d	$f10,$f12
  41ae90:	34ee0008 	ori	t6,a3,0x8
  41ae94:	45000002 	bc1f	41aea0 <highlightFileWarp+0x220>
  41ae98:	00000000 	nop
  41ae9c:	01c03825 	move	a3,t6
  41aea0:	8f9986b4 	lw	t9,-31052(gp)
  41aea4:	24050001 	li	a1,1
  41aea8:	0320f809 	jalr	t9
  41aeac:	00e03025 	move	a2,a3
  41aeb0:	8fbc0018 	lw	gp,24(sp)
  41aeb4:	00000000 	nop
  41aeb8:	8f9984d8 	lw	t9,-31528(gp)
  41aebc:	00000000 	nop
  41aec0:	0320f809 	jalr	t9
  41aec4:	00000000 	nop
  41aec8:	8fbc0018 	lw	gp,24(sp)
  41aecc:	00000000 	nop
  41aed0:	8fbf001c 	lw	ra,28(sp)
  41aed4:	8fb00014 	lw	s0,20(sp)
  41aed8:	03e00008 	jr	ra
  41aedc:	27bd0028 	addiu	sp,sp,40
