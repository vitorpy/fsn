# Function: __ct__13ByteCodedIconFP8RuleInfo
# Address: 0x00435028 - 0x0043515c
# Size: 0x134 (308 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435028 <__ct__13ByteCodedIconFP8RuleInfo>:
  435028:	3c1c0fbf 	lui	gp,0xfbf
  43502c:	279c8b08 	addiu	gp,gp,-29944
  435030:	0399e021 	addu	gp,gp,t9
  435034:	27bdffe0 	addiu	sp,sp,-32
  435038:	afb00014 	sw	s0,20(sp)
  43503c:	00a08025 	move	s0,a1
  435040:	afbf001c 	sw	ra,28(sp)
  435044:	afbc0018 	sw	gp,24(sp)
  435048:	14800008 	bnez	a0,43506c <__ct__13ByteCodedIconFP8RuleInfo+0x44>
  43504c:	00803825 	move	a3,a0
  435050:	8f9984a4 	lw	t9,-31580(gp)
  435054:	24040064 	li	a0,100
  435058:	0320f809 	jalr	t9
  43505c:	00000000 	nop
  435060:	8fbc0018 	lw	gp,24(sp)
  435064:	10400038 	beqz	v0,435148 <__ct__13ByteCodedIconFP8RuleInfo+0x120>
  435068:	00403825 	move	a3,v0
  43506c:	8f8e89f0 	lw	t6,-30224(gp)
  435070:	240fff78 	li	t7,-136
  435074:	2418ff81 	li	t8,-127
  435078:	acf00014 	sw	s0,20(a3)
  43507c:	a0e00000 	sb	zero,0(a3)
  435080:	a0e00001 	sb	zero,1(a3)
  435084:	a0e00002 	sb	zero,2(a3)
  435088:	a0e00003 	sb	zero,3(a3)
  43508c:	a0e00004 	sb	zero,4(a3)
  435090:	acef0008 	sw	t7,8(a3)
  435094:	acf8000c 	sw	t8,12(a3)
  435098:	ace00010 	sw	zero,16(a3)
  43509c:	acee0060 	sw	t6,96(a3)
  4350a0:	8e020020 	lw	v0,32(s0)
  4350a4:	00000000 	nop
  4350a8:	10400011 	beqz	v0,4350f0 <__ct__13ByteCodedIconFP8RuleInfo+0xc8>
  4350ac:	00000000 	nop
  4350b0:	8f9984a4 	lw	t9,-31580(gp)
  4350b4:	00402025 	move	a0,v0
  4350b8:	0320f809 	jalr	t9
  4350bc:	afa70020 	sw	a3,32(sp)
  4350c0:	8fa70020 	lw	a3,32(sp)
  4350c4:	8fbc0018 	lw	gp,24(sp)
  4350c8:	ace20018 	sw	v0,24(a3)
  4350cc:	8f99819c 	lw	t9,-32356(gp)
  4350d0:	8e060020 	lw	a2,32(s0)
  4350d4:	8e04001c 	lw	a0,28(s0)
  4350d8:	0320f809 	jalr	t9
  4350dc:	00402825 	move	a1,v0
  4350e0:	8fbc0018 	lw	gp,24(sp)
  4350e4:	8fa70020 	lw	a3,32(sp)
  4350e8:	10000003 	b	4350f8 <__ct__13ByteCodedIconFP8RuleInfo+0xd0>
  4350ec:	8e190024 	lw	t9,36(s0)
  4350f0:	ace00018 	sw	zero,24(a3)
  4350f4:	8e190024 	lw	t9,36(s0)
  4350f8:	44800000 	mtc1	zero,$f0
  4350fc:	3c013f80 	lui	at,0x3f80
  435100:	44811000 	mtc1	at,$f2
  435104:	acf9001c 	sw	t9,28(a3)
  435108:	e4e0002c 	swc1	$f0,44(a3)
  43510c:	e4e00028 	swc1	$f0,40(a3)
  435110:	e4e00024 	swc1	$f0,36(a3)
  435114:	e4e0003c 	swc1	$f0,60(a3)
  435118:	e4e00038 	swc1	$f0,56(a3)
  43511c:	e4e00030 	swc1	$f0,48(a3)
  435120:	e4e0004c 	swc1	$f0,76(a3)
  435124:	e4e00044 	swc1	$f0,68(a3)
  435128:	e4e00040 	swc1	$f0,64(a3)
  43512c:	e4e00058 	swc1	$f0,88(a3)
  435130:	e4e00054 	swc1	$f0,84(a3)
  435134:	e4e00050 	swc1	$f0,80(a3)
  435138:	e4e2005c 	swc1	$f2,92(a3)
  43513c:	e4e20048 	swc1	$f2,72(a3)
  435140:	e4e20034 	swc1	$f2,52(a3)
  435144:	e4e20020 	swc1	$f2,32(a3)
  435148:	8fbf001c 	lw	ra,28(sp)
  43514c:	8fb00014 	lw	s0,20(sp)
  435150:	27bd0020 	addiu	sp,sp,32
  435154:	03e00008 	jr	ra
  435158:	00e01025 	move	v0,a3
