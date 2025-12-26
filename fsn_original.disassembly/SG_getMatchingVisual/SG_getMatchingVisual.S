# Function: SG_getMatchingVisual
# Address: 0x004318b8 - 0x00431a0c
# Size: 0x154 (340 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004318b8 <SG_getMatchingVisual>:
  4318b8:	3c1c0fbf 	lui	gp,0xfbf
  4318bc:	279cc278 	addiu	gp,gp,-15752
  4318c0:	0399e021 	addu	gp,gp,t9
  4318c4:	27bdffe0 	addiu	sp,sp,-32
  4318c8:	afb00014 	sw	s0,20(sp)
  4318cc:	00c08025 	move	s0,a2
  4318d0:	afbf001c 	sw	ra,28(sp)
  4318d4:	14800003 	bnez	a0,4318e4 <SG_getMatchingVisual+0x2c>
  4318d8:	afbc0018 	sw	gp,24(sp)
  4318dc:	10000047 	b	4319fc <SG_getMatchingVisual+0x144>
  4318e0:	2402fffe 	li	v0,-2
  4318e4:	14a00003 	bnez	a1,4318f4 <SG_getMatchingVisual+0x3c>
  4318e8:	00000000 	nop
  4318ec:	8c850084 	lw	a1,132(a0)
  4318f0:	00000000 	nop
  4318f4:	8f998020 	lw	t9,-32736(gp)
  4318f8:	afa7002c 	sw	a3,44(sp)
  4318fc:	273925fc 	addiu	t9,t9,9724
  431900:	0320f809 	jalr	t9
  431904:	00000000 	nop
  431908:	8c4e0018 	lw	t6,24(v0)
  43190c:	8fbc0018 	lw	gp,24(sp)
  431910:	8fa7002c 	lw	a3,44(sp)
  431914:	00404025 	move	t0,v0
  431918:	19c00037 	blez	t6,4319f8 <SG_getMatchingVisual+0x140>
  43191c:	00001825 	move	v1,zero
  431920:	8fa60030 	lw	a2,48(sp)
  431924:	8fa50034 	lw	a1,52(sp)
  431928:	24040028 	li	a0,40
  43192c:	12000009 	beqz	s0,431954 <SG_getMatchingVisual+0x9c>
  431930:	00000000 	nop
  431934:	00640019 	multu	v1,a0
  431938:	8c4f0014 	lw	t7,20(v0)
  43193c:	0000c012 	mflo	t8
  431940:	01f8c821 	addu	t9,t7,t8
  431944:	8f290004 	lw	t1,4(t9)
  431948:	00000000 	nop
  43194c:	16090025 	bne	s0,t1,4319e4 <SG_getMatchingVisual+0x12c>
  431950:	00000000 	nop
  431954:	10e0000a 	beqz	a3,431980 <SG_getMatchingVisual+0xc8>
  431958:	00000000 	nop
  43195c:	00640019 	multu	v1,a0
  431960:	8c4a0014 	lw	t2,20(v0)
  431964:	8cee0000 	lw	t6,0(a3)
  431968:	00005812 	mflo	t3
  43196c:	014b6021 	addu	t4,t2,t3
  431970:	8d8d0010 	lw	t5,16(t4)
  431974:	00000000 	nop
  431978:	15ae001a 	bne	t5,t6,4319e4 <SG_getMatchingVisual+0x12c>
  43197c:	00000000 	nop
  431980:	10a00009 	beqz	a1,4319a8 <SG_getMatchingVisual+0xf0>
  431984:	00000000 	nop
  431988:	00640019 	multu	v1,a0
  43198c:	8c4f0014 	lw	t7,20(v0)
  431990:	0000c012 	mflo	t8
  431994:	01f8c821 	addu	t9,t7,t8
  431998:	8f29000c 	lw	t1,12(t9)
  43199c:	00000000 	nop
  4319a0:	14a90010 	bne	a1,t1,4319e4 <SG_getMatchingVisual+0x12c>
  4319a4:	00000000 	nop
  4319a8:	10c00008 	beqz	a2,4319cc <SG_getMatchingVisual+0x114>
  4319ac:	00000000 	nop
  4319b0:	8c4a0020 	lw	t2,32(v0)
  4319b4:	00035880 	sll	t3,v1,0x2
  4319b8:	014b6021 	addu	t4,t2,t3
  4319bc:	8d8d0000 	lw	t5,0(t4)
  4319c0:	00000000 	nop
  4319c4:	14cd0007 	bne	a2,t5,4319e4 <SG_getMatchingVisual+0x12c>
  4319c8:	00000000 	nop
  4319cc:	00640019 	multu	v1,a0
  4319d0:	8d0e0014 	lw	t6,20(t0)
  4319d4:	00007812 	mflo	t7
  4319d8:	01cf1021 	addu	v0,t6,t7
  4319dc:	10000008 	b	431a00 <SG_getMatchingVisual+0x148>
  4319e0:	8fbf001c 	lw	ra,28(sp)
  4319e4:	8d180018 	lw	t8,24(t0)
  4319e8:	24630001 	addiu	v1,v1,1
  4319ec:	0078082a 	slt	at,v1,t8
  4319f0:	1420ffce 	bnez	at,43192c <SG_getMatchingVisual+0x74>
  4319f4:	00000000 	nop
  4319f8:	2402fffc 	li	v0,-4
  4319fc:	8fbf001c 	lw	ra,28(sp)
  431a00:	8fb00014 	lw	s0,20(sp)
  431a04:	03e00008 	jr	ra
  431a08:	27bd0020 	addiu	sp,sp,32
