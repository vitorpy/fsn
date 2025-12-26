# Function: FUN_004118b0
# Address: 0x004118b0 - 0x0041198c
# Size: 0xdc (220 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004118b0 <fileerror+0x828>:
  4118b0:	3c1c0fc1 	lui	gp,0xfc1
  4118b4:	279cc280 	addiu	gp,gp,-15744
  4118b8:	0399e021 	addu	gp,gp,t9
  4118bc:	8f8e8924 	lw	t6,-30428(gp)
  4118c0:	27bdffe0 	addiu	sp,sp,-32
  4118c4:	8dce0000 	lw	t6,0(t6)
  4118c8:	afbf001c 	sw	ra,28(sp)
  4118cc:	afbc0018 	sw	gp,24(sp)
  4118d0:	11c00007 	beqz	t6,4118f0 <fileerror+0x868>
  4118d4:	00802825 	move	a1,a0
  4118d8:	8f828928 	lw	v0,-30424(gp)
  4118dc:	24010002 	li	at,2
  4118e0:	8c420000 	lw	v0,0(v0)
  4118e4:	00000000 	nop
  4118e8:	14400004 	bnez	v0,4118fc <fileerror+0x874>
  4118ec:	00000000 	nop
  4118f0:	44800000 	mtc1	zero,$f0
  4118f4:	10000022 	b	411980 <fileerror+0x8f8>
  4118f8:	8fbf001c 	lw	ra,28(sp)
  4118fc:	14410010 	bne	v0,at,411940 <fileerror+0x8b8>
  411900:	00000000 	nop
  411904:	8f998018 	lw	t9,-32744(gp)
  411908:	8ca40020 	lw	a0,32(a1)
  41190c:	27391774 	addiu	t9,t9,6004
  411910:	0320f809 	jalr	t9
  411914:	00000000 	nop
  411918:	8fbc0018 	lw	gp,24(sp)
  41191c:	46000121 	cvt.d.s	$f4,$f0
  411920:	8f81806c 	lw	at,-32660(gp)
  411924:	00000000 	nop
  411928:	c42666b4 	lwc1	$f6,26292(at)
  41192c:	00000000 	nop
  411930:	46003221 	cvt.d.s	$f8,$f6
  411934:	46282282 	mul.d	$f10,$f4,$f8
  411938:	1000000f 	b	411978 <fileerror+0x8f0>
  41193c:	462050a0 	cvt.s.d	$f2,$f10
  411940:	8f998018 	lw	t9,-32744(gp)
  411944:	8ca4001c 	lw	a0,28(a1)
  411948:	27391774 	addiu	t9,t9,6004
  41194c:	0320f809 	jalr	t9
  411950:	00000000 	nop
  411954:	8fbc0018 	lw	gp,24(sp)
  411958:	46000421 	cvt.d.s	$f16,$f0
  41195c:	8f81806c 	lw	at,-32660(gp)
  411960:	00000000 	nop
  411964:	c43266b4 	lwc1	$f18,26292(at)
  411968:	00000000 	nop
  41196c:	460091a1 	cvt.d.s	$f6,$f18
  411970:	46268102 	mul.d	$f4,$f16,$f6
  411974:	462020a0 	cvt.s.d	$f2,$f4
  411978:	46001006 	mov.s	$f0,$f2
  41197c:	8fbf001c 	lw	ra,28(sp)
  411980:	27bd0020 	addiu	sp,sp,32
  411984:	03e00008 	jr	ra
  411988:	00000000 	nop
