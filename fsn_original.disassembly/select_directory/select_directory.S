# Function: select_directory
# Address: 0x0041d690 - 0x0041d914
# Size: 0x284 (644 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041d690 <select_directory>:
  41d690:	3c1c0fc0 	lui	gp,0xfc0
  41d694:	279c04a0 	addiu	gp,gp,1184
  41d698:	0399e021 	addu	gp,gp,t9
  41d69c:	8f8e897c 	lw	t6,-30340(gp)
  41d6a0:	27bdffa8 	addiu	sp,sp,-88
  41d6a4:	8dce0000 	lw	t6,0(t6)
  41d6a8:	afbf001c 	sw	ra,28(sp)
  41d6ac:	afbc0018 	sw	gp,24(sp)
  41d6b0:	afb00014 	sw	s0,20(sp)
  41d6b4:	8dc20044 	lw	v0,68(t6)
  41d6b8:	00808025 	move	s0,a0
  41d6bc:	14820014 	bne	a0,v0,41d710 <select_directory+0x80>
  41d6c0:	00000000 	nop
  41d6c4:	8f998640 	lw	t9,-31168(gp)
  41d6c8:	00000000 	nop
  41d6cc:	0320f809 	jalr	t9
  41d6d0:	00000000 	nop
  41d6d4:	8fbc0018 	lw	gp,24(sp)
  41d6d8:	00000000 	nop
  41d6dc:	8f8f8068 	lw	t7,-32664(gp)
  41d6e0:	00000000 	nop
  41d6e4:	91ef6e24 	lbu	t7,28196(t7)
  41d6e8:	00000000 	nop
  41d6ec:	11e00086 	beqz	t7,41d908 <select_directory+0x278>
  41d6f0:	8fbf001c 	lw	ra,28(sp)
  41d6f4:	8f99862c 	lw	t9,-31188(gp)
  41d6f8:	00000000 	nop
  41d6fc:	0320f809 	jalr	t9
  41d700:	00000000 	nop
  41d704:	8fbc0018 	lw	gp,24(sp)
  41d708:	1000007f 	b	41d908 <select_directory+0x278>
  41d70c:	8fbf001c 	lw	ra,28(sp)
  41d710:	1040001d 	beqz	v0,41d788 <select_directory+0xf8>
  41d714:	00000000 	nop
  41d718:	8f99801c 	lw	t9,-32740(gp)
  41d71c:	00000000 	nop
  41d720:	2739d418 	addiu	t9,t9,-11240
  41d724:	0320f809 	jalr	t9
  41d728:	00000000 	nop
  41d72c:	8fbc0018 	lw	gp,24(sp)
  41d730:	00000000 	nop
  41d734:	8f98897c 	lw	t8,-30340(gp)
  41d738:	00000000 	nop
  41d73c:	8f180000 	lw	t8,0(t8)
  41d740:	00000000 	nop
  41d744:	8f020044 	lw	v0,68(t8)
  41d748:	00000000 	nop
  41d74c:	90590074 	lbu	t9,116(v0)
  41d750:	00000000 	nop
  41d754:	3328ffdf 	andi	t0,t9,0xffdf
  41d758:	a0480074 	sb	t0,116(v0)
  41d75c:	8f998640 	lw	t9,-31168(gp)
  41d760:	00000000 	nop
  41d764:	0320f809 	jalr	t9
  41d768:	00000000 	nop
  41d76c:	8fbc0018 	lw	gp,24(sp)
  41d770:	00000000 	nop
  41d774:	8f82897c 	lw	v0,-30340(gp)
  41d778:	00000000 	nop
  41d77c:	8c490000 	lw	t1,0(v0)
  41d780:	00000000 	nop
  41d784:	a1200c50 	sb	zero,3152(t1)
  41d788:	8f84806c 	lw	a0,-32660(gp)
  41d78c:	8f998318 	lw	t9,-31976(gp)
  41d790:	8c846b98 	lw	a0,27544(a0)
  41d794:	0320f809 	jalr	t9
  41d798:	24050001 	li	a1,1
  41d79c:	8fbc0018 	lw	gp,24(sp)
  41d7a0:	920b0074 	lbu	t3,116(s0)
  41d7a4:	8f82897c 	lw	v0,-30340(gp)
  41d7a8:	356c0020 	ori	t4,t3,0x20
  41d7ac:	a20c0074 	sb	t4,116(s0)
  41d7b0:	8c4d0000 	lw	t5,0(v0)
  41d7b4:	02002825 	move	a1,s0
  41d7b8:	adb00044 	sw	s0,68(t5)
  41d7bc:	8f99857c 	lw	t9,-31364(gp)
  41d7c0:	8c440000 	lw	a0,0(v0)
  41d7c4:	0320f809 	jalr	t9
  41d7c8:	2484004c 	addiu	a0,a0,76
  41d7cc:	8fbc0018 	lw	gp,24(sp)
  41d7d0:	00000000 	nop
  41d7d4:	8f99862c 	lw	t9,-31188(gp)
  41d7d8:	00000000 	nop
  41d7dc:	0320f809 	jalr	t9
  41d7e0:	00000000 	nop
  41d7e4:	8fbc0018 	lw	gp,24(sp)
  41d7e8:	00000000 	nop
  41d7ec:	8f998674 	lw	t9,-31116(gp)
  41d7f0:	00000000 	nop
  41d7f4:	0320f809 	jalr	t9
  41d7f8:	00000000 	nop
  41d7fc:	8fbc0018 	lw	gp,24(sp)
  41d800:	27a50030 	addiu	a1,sp,48
  41d804:	8f8e80a0 	lw	t6,-32608(gp)
  41d808:	8f84806c 	lw	a0,-32660(gp)
  41d80c:	25ce2589 	addiu	t6,t6,9609
  41d810:	afae0030 	sw	t6,48(sp)
  41d814:	8e0f0074 	lw	t7,116(s0)
  41d818:	8c846b54 	lw	a0,27476(a0)
  41d81c:	000fc2c0 	sll	t8,t7,0xb
  41d820:	0018cfc2 	srl	t9,t8,0x1f
  41d824:	afb90034 	sw	t9,52(sp)
  41d828:	8f998340 	lw	t9,-31936(gp)
  41d82c:	24060001 	li	a2,1
  41d830:	0320f809 	jalr	t9
  41d834:	00000000 	nop
  41d838:	8fbc0018 	lw	gp,24(sp)
  41d83c:	27a50030 	addiu	a1,sp,48
  41d840:	8f8880a0 	lw	t0,-32608(gp)
  41d844:	8f84806c 	lw	a0,-32660(gp)
  41d848:	25082589 	addiu	t0,t0,9609
  41d84c:	afa80030 	sw	t0,48(sp)
  41d850:	8e090074 	lw	t1,116(s0)
  41d854:	8f998340 	lw	t9,-31936(gp)
  41d858:	00095340 	sll	t2,t1,0xd
  41d85c:	000a5fc2 	srl	t3,t2,0x1f
  41d860:	8c846b58 	lw	a0,27480(a0)
  41d864:	afab0034 	sw	t3,52(sp)
  41d868:	0320f809 	jalr	t9
  41d86c:	24060001 	li	a2,1
  41d870:	8fbc0018 	lw	gp,24(sp)
  41d874:	8e050074 	lw	a1,116(s0)
  41d878:	8f84806c 	lw	a0,-32660(gp)
  41d87c:	8f998318 	lw	t9,-31976(gp)
  41d880:	00056340 	sll	t4,a1,0xd
  41d884:	000c6fc2 	srl	t5,t4,0x1f
  41d888:	8c846b54 	lw	a0,27476(a0)
  41d88c:	0320f809 	jalr	t9
  41d890:	2da50001 	sltiu	a1,t5,1
  41d894:	8fbc0018 	lw	gp,24(sp)
  41d898:	00000000 	nop
  41d89c:	8f998630 	lw	t9,-31184(gp)
  41d8a0:	00000000 	nop
  41d8a4:	0320f809 	jalr	t9
  41d8a8:	00000000 	nop
  41d8ac:	8e040064 	lw	a0,100(s0)
  41d8b0:	8fbc0018 	lw	gp,24(sp)
  41d8b4:	10800007 	beqz	a0,41d8d4 <select_directory+0x244>
  41d8b8:	00000000 	nop
  41d8bc:	8f99824c 	lw	t9,-32180(gp)
  41d8c0:	00000000 	nop
  41d8c4:	0320f809 	jalr	t9
  41d8c8:	00000000 	nop
  41d8cc:	8fbc0018 	lw	gp,24(sp)
  41d8d0:	ae000064 	sw	zero,100(s0)
  41d8d4:	8e0f0074 	lw	t7,116(s0)
  41d8d8:	00000000 	nop
  41d8dc:	000fc280 	sll	t8,t7,0xa
  41d8e0:	0018cfc2 	srl	t9,t8,0x1f
  41d8e4:	17200008 	bnez	t9,41d908 <select_directory+0x278>
  41d8e8:	8fbf001c 	lw	ra,28(sp)
  41d8ec:	8f998714 	lw	t9,-30956(gp)
  41d8f0:	02002025 	move	a0,s0
  41d8f4:	0320f809 	jalr	t9
  41d8f8:	00000000 	nop
  41d8fc:	8fbc0018 	lw	gp,24(sp)
  41d900:	00000000 	nop
  41d904:	8fbf001c 	lw	ra,28(sp)
  41d908:	8fb00014 	lw	s0,20(sp)
  41d90c:	03e00008 	jr	ra
  41d910:	27bd0058 	addiu	sp,sp,88
