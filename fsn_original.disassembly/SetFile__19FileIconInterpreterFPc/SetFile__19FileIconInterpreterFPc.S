# Function: SetFile__19FileIconInterpreterFPc
# Address: 0x004357e0 - 0x0043592c
# Size: 0x14c (332 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004357e0 <SetFile__19FileIconInterpreterFPc>:
  4357e0:	3c1c0fbf 	lui	gp,0xfbf
  4357e4:	279c8350 	addiu	gp,gp,-31920
  4357e8:	0399e021 	addu	gp,gp,t9
  4357ec:	27bdffe0 	addiu	sp,sp,-32
  4357f0:	afbf001c 	sw	ra,28(sp)
  4357f4:	afbc0018 	sw	gp,24(sp)
  4357f8:	afb00014 	sw	s0,20(sp)
  4357fc:	00808025 	move	s0,a0
  435800:	10a0000f 	beqz	a1,435840 <SetFile__19FileIconInterpreterFPc+0x60>
  435804:	ac850228 	sw	a1,552(a0)
  435808:	8f9982c0 	lw	t9,-32064(gp)
  43580c:	00a02025 	move	a0,a1
  435810:	0320f809 	jalr	t9
  435814:	2405002f 	li	a1,47
  435818:	8fbc0018 	lw	gp,24(sp)
  43581c:	14400004 	bnez	v0,435830 <SetFile__19FileIconInterpreterFPc+0x50>
  435820:	ae02022c 	sw	v0,556(s0)
  435824:	8e0e0228 	lw	t6,552(s0)
  435828:	10000005 	b	435840 <SetFile__19FileIconInterpreterFPc+0x60>
  43582c:	ae0e022c 	sw	t6,556(s0)
  435830:	8e0f022c 	lw	t7,556(s0)
  435834:	00000000 	nop
  435838:	25f80001 	addiu	t8,t7,1
  43583c:	ae18022c 	sw	t8,556(s0)
  435840:	8f9981d0 	lw	t9,-32304(gp)
  435844:	8e040228 	lw	a0,552(s0)
  435848:	0320f809 	jalr	t9
  43584c:	26050244 	addiu	a1,s0,580
  435850:	0002182b 	sltu	v1,zero,v0
  435854:	2c630001 	sltiu	v1,v1,1
  435858:	8fbc0018 	lw	gp,24(sp)
  43585c:	10600009 	beqz	v1,435884 <SetFile__19FileIconInterpreterFPc+0xa4>
  435860:	ae030230 	sw	v1,560(s0)
  435864:	8e190258 	lw	t9,600(s0)
  435868:	34018000 	li	at,0x8000
  43586c:	3328f000 	andi	t0,t9,0xf000
  435870:	35098000 	ori	t1,t0,0x8000
  435874:	15210004 	bne	t1,at,435888 <SetFile__19FileIconInterpreterFPc+0xa8>
  435878:	240a0001 	li	t2,1
  43587c:	10000003 	b	43588c <SetFile__19FileIconInterpreterFPc+0xac>
  435880:	ae000240 	sw	zero,576(s0)
  435884:	240a0001 	li	t2,1
  435888:	ae0a0240 	sw	t2,576(s0)
  43588c:	8e0b0240 	lw	t3,576(s0)
  435890:	00000000 	nop
  435894:	1560000e 	bnez	t3,4358d0 <SetFile__19FileIconInterpreterFPc+0xf0>
  435898:	00000000 	nop
  43589c:	8f9981cc 	lw	t9,-32308(gp)
  4358a0:	8e040228 	lw	a0,552(s0)
  4358a4:	0320f809 	jalr	t9
  4358a8:	24050004 	li	a1,4
  4358ac:	8fbc0018 	lw	gp,24(sp)
  4358b0:	2401ffff 	li	at,-1
  4358b4:	14410003 	bne	v0,at,4358c4 <SetFile__19FileIconInterpreterFPc+0xe4>
  4358b8:	ae020238 	sw	v0,568(s0)
  4358bc:	10000005 	b	4358d4 <SetFile__19FileIconInterpreterFPc+0xf4>
  4358c0:	ae00023c 	sw	zero,572(s0)
  4358c4:	240c0001 	li	t4,1
  4358c8:	10000002 	b	4358d4 <SetFile__19FileIconInterpreterFPc+0xf4>
  4358cc:	ae0c023c 	sw	t4,572(s0)
  4358d0:	ae00023c 	sw	zero,572(s0)
  4358d4:	8e0d023c 	lw	t5,572(s0)
  4358d8:	26050020 	addiu	a1,s0,32
  4358dc:	11a0000d 	beqz	t5,435914 <SetFile__19FileIconInterpreterFPc+0x134>
  4358e0:	00000000 	nop
  4358e4:	8f9981ec 	lw	t9,-32276(gp)
  4358e8:	8e040238 	lw	a0,568(s0)
  4358ec:	0320f809 	jalr	t9
  4358f0:	24060200 	li	a2,512
  4358f4:	8fbc0018 	lw	gp,24(sp)
  4358f8:	04400004 	bltz	v0,43590c <SetFile__19FileIconInterpreterFPc+0x12c>
  4358fc:	ae0202cc 	sw	v0,716(s0)
  435900:	240e0001 	li	t6,1
  435904:	10000004 	b	435918 <SetFile__19FileIconInterpreterFPc+0x138>
  435908:	ae0e0234 	sw	t6,564(s0)
  43590c:	10000002 	b	435918 <SetFile__19FileIconInterpreterFPc+0x138>
  435910:	ae000234 	sw	zero,564(s0)
  435914:	ae000234 	sw	zero,564(s0)
  435918:	ae000220 	sw	zero,544(s0)
  43591c:	8fbf001c 	lw	ra,28(sp)
  435920:	8fb00014 	lw	s0,20(sp)
  435924:	03e00008 	jr	ra
  435928:	27bd0020 	addiu	sp,sp,32
