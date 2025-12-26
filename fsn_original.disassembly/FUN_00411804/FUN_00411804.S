# Function: FUN_00411804
# Address: 0x00411804 - 0x004118b0
# Size: 0xac (172 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411804 <fileerror+0x77c>:
  411804:	3c1c0fc1 	lui	gp,0xfc1
  411808:	279cc32c 	addiu	gp,gp,-15572
  41180c:	0399e021 	addu	gp,gp,t9
  411810:	8f8e8924 	lw	t6,-30428(gp)
  411814:	27bdffe0 	addiu	sp,sp,-32
  411818:	8dce0000 	lw	t6,0(t6)
  41181c:	afbf001c 	sw	ra,28(sp)
  411820:	afbc0018 	sw	gp,24(sp)
  411824:	15c00006 	bnez	t6,411840 <fileerror+0x7b8>
  411828:	00802825 	move	a1,a0
  41182c:	8f818a24 	lw	at,-30172(gp)
  411830:	00000000 	nop
  411834:	c4200080 	lwc1	$f0,128(at)
  411838:	1000001a 	b	4118a4 <fileerror+0x81c>
  41183c:	8fbf001c 	lw	ra,28(sp)
  411840:	8f998018 	lw	t9,-32744(gp)
  411844:	8ca4000c 	lw	a0,12(a1)
  411848:	27391774 	addiu	t9,t9,6004
  41184c:	0320f809 	jalr	t9
  411850:	00000000 	nop
  411854:	8fbc0018 	lw	gp,24(sp)
  411858:	46000121 	cvt.d.s	$f4,$f0
  41185c:	8f81806c 	lw	at,-32660(gp)
  411860:	00000000 	nop
  411864:	c42666b0 	lwc1	$f6,26288(at)
  411868:	8f818a24 	lw	at,-30172(gp)
  41186c:	46003221 	cvt.d.s	$f8,$f6
  411870:	46282282 	mul.d	$f10,$f4,$f8
  411874:	c42c0080 	lwc1	$f12,128(at)
  411878:	00000000 	nop
  41187c:	460064a1 	cvt.d.s	$f18,$f12
  411880:	462050a0 	cvt.s.d	$f2,$f10
  411884:	46001421 	cvt.d.s	$f16,$f2
  411888:	4632803c 	c.lt.d	$f16,$f18
  41188c:	00000000 	nop
  411890:	45000002 	bc1f	41189c <fileerror+0x814>
  411894:	00000000 	nop
  411898:	46006086 	mov.s	$f2,$f12
  41189c:	46001006 	mov.s	$f0,$f2
  4118a0:	8fbf001c 	lw	ra,28(sp)
  4118a4:	27bd0020 	addiu	sp,sp,32
  4118a8:	03e00008 	jr	ra
  4118ac:	00000000 	nop
