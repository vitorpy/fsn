# Disassembly of FUN_0041a8fc
# Address: 0x0041a8fc
# Size: 0x100
# GP = 0x1001db30
#
# GP offsets resolved to symbol names where known.
# See docs/DECOMPILATION_PROCEDURE.md for analysis workflow.
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041a8fc <highlightSpecialDir>:
  41a8fc:	3c1c0fc0 	lui	gp,0xfc0
  41a900:	279c3234 	addiu	gp,gp,12852
  41a904:	0399e021 	addu	gp,gp,t9
  41a908:	27bdffe0 	addiu	sp,sp,-32
  41a90c:	e7ad0020 	swc1	$f13,32(sp)
  41a910:	e7ac0024 	swc1	$f12,36(sp)
  41a914:	e7af0028 	swc1	$f15,40(sp)
  41a918:	e7ae002c 	swc1	$f14,44(sp)
  41a91c:	c7a6002c 	lwc1	$f6,44(sp)
  41a920:	c7a70028 	lwc1	$f7,40(sp)
  41a924:	c7a40024 	lwc1	$f4,36(sp)
  41a928:	c7a50020 	lwc1	$f5,32(sp)
  41a92c:	8f9984a0 	lw	t9,-31584(gp)
  41a930:	afbf001c 	sw	ra,28(sp)
  41a934:	afbc0018 	sw	gp,24(sp)
  41a938:	24060000 	li	a2,0
  41a93c:	462033a0 	cvt.s.d	$f14,$f6
  41a940:	0320f809 	jalr	t9
  41a944:	46202320 	cvt.s.d	$f12,$f4
  41a948:	8fbc0018 	lw	gp,24(sp)
  41a94c:	24050078 	li	a1,120
  41a950:	8f8e897c 	lw	t6,-30340(gp)  # curcontext
  41a954:	8f998498 	lw	t9,-31592(gp)
  41a958:	8dce0000 	lw	t6,0(t6)
  41a95c:	00000000 	nop
  41a960:	85c4000e 	lh	a0,14(t6)
  41a964:	00000000 	nop
  41a968:	00042023 	negu	a0,a0
  41a96c:	00047c00 	sll	t7,a0,0x10
  41a970:	0320f809 	jalr	t9
  41a974:	000f2403 	sra	a0,t7,0x10
  41a978:	8fbc0018 	lw	gp,24(sp)
  41a97c:	44806000 	mtc1	zero,$f12
  41a980:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  41a984:	8f9984a0 	lw	t9,-31584(gp)
  41a988:	44066000 	mfc1	a2,$f12
  41a98c:	c42e00e8 	lwc1	$f14,232(at)
  41a990:	0320f809 	jalr	t9
  41a994:	00000000 	nop
  41a998:	8fbc0018 	lw	gp,24(sp)
  41a99c:	3c014000 	lui	at,0x4000
  41a9a0:	44818800 	mtc1	at,$f17
  41a9a4:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  41a9a8:	44808000 	mtc1	zero,$f16
  41a9ac:	c42000e4 	lwc1	$f0,228(at)
  41a9b0:	8f998210 	lw	t9,-32240(gp)
  41a9b4:	46000121 	cvt.d.s	$f4,$f0
  41a9b8:	00000000 	nop
  41a9bc:	46302183 	div.d	$f6,$f4,$f16
  41a9c0:	46000207 	neg.s	$f8,$f0
  41a9c4:	460042a1 	cvt.d.s	$f10,$f8
  41a9c8:	00000000 	nop
  41a9cc:	46305483 	div.d	$f18,$f10,$f16
  41a9d0:	462030a0 	cvt.s.d	$f2,$f6
  41a9d4:	44061000 	mfc1	a2,$f2
  41a9d8:	44071000 	mfc1	a3,$f2
  41a9dc:	46209320 	cvt.s.d	$f12,$f18
  41a9e0:	0320f809 	jalr	t9
  41a9e4:	46006386 	mov.s	$f14,$f12
  41a9e8:	8fbf001c 	lw	ra,28(sp)
  41a9ec:	8fbc0018 	lw	gp,24(sp)
  41a9f0:	03e00008 	jr	ra
  41a9f4:	27bd0020 	addiu	sp,sp,32

0041a9f8 <highlightDirWarp>:
  41a9f8:	3c1c0fc0 	lui	gp,0xfc0
