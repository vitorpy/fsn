# Function: FUN_00431788
# Address: 0x00431788 - 0x004318b0
# Size: 0x128 (296 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431788 <SG_getDefaultDepth+0x2b4>:
  431788:	3c1c0fbf 	lui	gp,0xfbf
  43178c:	279cc3a8 	addiu	gp,gp,-15448
  431790:	0399e021 	addu	gp,gp,t9
  431794:	27bdffd8 	addiu	sp,sp,-40
  431798:	afb1001c 	sw	s1,28(sp)
  43179c:	afb00018 	sw	s0,24(sp)
  4317a0:	00c08025 	move	s0,a2
  4317a4:	00e08825 	move	s1,a3
  4317a8:	afbf0024 	sw	ra,36(sp)
  4317ac:	14800003 	bnez	a0,4317bc <SG_getDefaultDepth+0x2e8>
  4317b0:	afbc0020 	sw	gp,32(sp)
  4317b4:	10000039 	b	43189c <SG_getDefaultDepth+0x3c8>
  4317b8:	2402fffe 	li	v0,-2
  4317bc:	14a00003 	bnez	a1,4317cc <SG_getDefaultDepth+0x2f8>
  4317c0:	00000000 	nop
  4317c4:	8c850084 	lw	a1,132(a0)
  4317c8:	00000000 	nop
  4317cc:	8f998020 	lw	t9,-32736(gp)
  4317d0:	afa40028 	sw	a0,40(sp)
  4317d4:	273925fc 	addiu	t9,t9,9724
  4317d8:	0320f809 	jalr	t9
  4317dc:	afa5002c 	sw	a1,44(sp)
  4317e0:	8c4e0018 	lw	t6,24(v0)
  4317e4:	8fbc0020 	lw	gp,32(sp)
  4317e8:	00403025 	move	a2,v0
  4317ec:	19c00023 	blez	t6,43187c <SG_getDefaultDepth+0x3a8>
  4317f0:	00002825 	move	a1,zero
  4317f4:	8c440020 	lw	a0,32(v0)
  4317f8:	8fa70038 	lw	a3,56(sp)
  4317fc:	00000000 	nop
  431800:	8c8f0000 	lw	t7,0(a0)
  431804:	0005c880 	sll	t9,a1,0x2
  431808:	122f0004 	beq	s1,t7,43181c <SG_getDefaultDepth+0x348>
  43180c:	0325c821 	addu	t9,t9,a1
  431810:	8cc30018 	lw	v1,24(a2)
  431814:	10000016 	b	431870 <SG_getDefaultDepth+0x39c>
  431818:	24a50001 	addiu	a1,a1,1
  43181c:	8c580014 	lw	t8,20(v0)
  431820:	0019c8c0 	sll	t9,t9,0x3
  431824:	12000009 	beqz	s0,43184c <SG_getDefaultDepth+0x378>
  431828:	03191821 	addu	v1,t8,t9
  43182c:	8c680010 	lw	t0,16(v1)
  431830:	8e090000 	lw	t1,0(s0)
  431834:	00000000 	nop
  431838:	11090004 	beq	t0,t1,43184c <SG_getDefaultDepth+0x378>
  43183c:	00000000 	nop
  431840:	8cc30018 	lw	v1,24(a2)
  431844:	1000000a 	b	431870 <SG_getDefaultDepth+0x39c>
  431848:	24a50001 	addiu	a1,a1,1
  43184c:	8c6a000c 	lw	t2,12(v1)
  431850:	00000000 	nop
  431854:	14ea0003 	bne	a3,t2,431864 <SG_getDefaultDepth+0x390>
  431858:	00000000 	nop
  43185c:	1000000f 	b	43189c <SG_getDefaultDepth+0x3c8>
  431860:	00e01025 	move	v0,a3
  431864:	8cc30018 	lw	v1,24(a2)
  431868:	00000000 	nop
  43186c:	24a50001 	addiu	a1,a1,1
  431870:	00a3082a 	slt	at,a1,v1
  431874:	1420ffe2 	bnez	at,431800 <SG_getDefaultDepth+0x32c>
  431878:	24840004 	addiu	a0,a0,4
  43187c:	8f9987fc 	lw	t9,-30724(gp)
  431880:	8fa40028 	lw	a0,40(sp)
  431884:	8fa5002c 	lw	a1,44(sp)
  431888:	02003025 	move	a2,s0
  43188c:	0320f809 	jalr	t9
  431890:	02203825 	move	a3,s1
  431894:	8fbc0020 	lw	gp,32(sp)
  431898:	00000000 	nop
  43189c:	8fbf0024 	lw	ra,36(sp)
  4318a0:	8fb00018 	lw	s0,24(sp)
  4318a4:	8fb1001c 	lw	s1,28(sp)
  4318a8:	03e00008 	jr	ra
  4318ac:	27bd0028 	addiu	sp,sp,40
