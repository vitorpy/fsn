# Function: popzoom
# Address: 0x0041007c - 0x004101d8
# Size: 0x15c (348 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041007c <popzoom>:
  41007c:	3c1c0fc1 	lui	gp,0xfc1
  410080:	279cdab4 	addiu	gp,gp,-9548
  410084:	0399e021 	addu	gp,gp,t9
  410088:	27bdffc8 	addiu	sp,sp,-56
  41008c:	afb1001c 	sw	s1,28(sp)
  410090:	8f91897c 	lw	s1,-30340(gp)
  410094:	afbf0034 	sw	ra,52(sp)
  410098:	8e380000 	lw	t8,0(s1)
  41009c:	afbc0030 	sw	gp,48(sp)
  4100a0:	afb5002c 	sw	s5,44(sp)
  4100a4:	afb40028 	sw	s4,40(sp)
  4100a8:	afb30024 	sw	s3,36(sp)
  4100ac:	afb20020 	sw	s2,32(sp)
  4100b0:	afb00018 	sw	s0,24(sp)
  4100b4:	afa40038 	sw	a0,56(sp)
  4100b8:	afa5003c 	sw	a1,60(sp)
  4100bc:	afa60040 	sw	a2,64(sp)
  4100c0:	afa70044 	sw	a3,68(sp)
  4100c4:	8f190040 	lw	t9,64(t8)
  4100c8:	24140038 	li	s4,56
  4100cc:	03340019 	multu	t9,s4
  4100d0:	8f938984 	lw	s3,-30332(gp)
  4100d4:	8f9987c8 	lw	t9,-30776(gp)
  4100d8:	8e6e0000 	lw	t6,0(s3)
  4100dc:	00008025 	move	s0,zero
  4100e0:	8dcf0034 	lw	t7,52(t6)
  4100e4:	00004012 	mflo	t0
  4100e8:	01e82021 	addu	a0,t7,t0
  4100ec:	0320f809 	jalr	t9
  4100f0:	00000000 	nop
  4100f4:	8fbc0030 	lw	gp,48(sp)
  4100f8:	14400021 	bnez	v0,410180 <popzoom+0x104>
  4100fc:	24150009 	li	s5,9
  410100:	2412000a 	li	s2,10
  410104:	8e220000 	lw	v0,0(s1)
  410108:	00000000 	nop
  41010c:	8c490040 	lw	t1,64(v0)
  410110:	00000000 	nop
  410114:	252affff 	addiu	t2,t1,-1
  410118:	ac4a0040 	sw	t2,64(v0)
  41011c:	8e220000 	lw	v0,0(s1)
  410120:	00000000 	nop
  410124:	8c430040 	lw	v1,64(v0)
  410128:	00000000 	nop
  41012c:	04610006 	bgez	v1,410148 <popzoom+0xcc>
  410130:	00000000 	nop
  410134:	ac550040 	sw	s5,64(v0)
  410138:	8e2b0000 	lw	t3,0(s1)
  41013c:	00000000 	nop
  410140:	8d630040 	lw	v1,64(t3)
  410144:	00000000 	nop
  410148:	00740019 	multu	v1,s4
  41014c:	8e6c0000 	lw	t4,0(s3)
  410150:	8f9987c8 	lw	t9,-30776(gp)
  410154:	8d8d0034 	lw	t5,52(t4)
  410158:	26100001 	addiu	s0,s0,1
  41015c:	00007012 	mflo	t6
  410160:	01ae2021 	addu	a0,t5,t6
  410164:	0320f809 	jalr	t9
  410168:	00000000 	nop
  41016c:	8fbc0030 	lw	gp,48(sp)
  410170:	14400003 	bnez	v0,410180 <popzoom+0x104>
  410174:	00000000 	nop
  410178:	1612ffe2 	bne	s0,s2,410104 <popzoom+0x88>
  41017c:	00000000 	nop
  410180:	8e220000 	lw	v0,0(s1)
  410184:	24150009 	li	s5,9
  410188:	8c580040 	lw	t8,64(v0)
  41018c:	00000000 	nop
  410190:	2719ffff 	addiu	t9,t8,-1
  410194:	ac590040 	sw	t9,64(v0)
  410198:	8e220000 	lw	v0,0(s1)
  41019c:	00000000 	nop
  4101a0:	8c4f0040 	lw	t7,64(v0)
  4101a4:	00000000 	nop
  4101a8:	05e10003 	bgez	t7,4101b8 <popzoom+0x13c>
  4101ac:	8fbf0034 	lw	ra,52(sp)
  4101b0:	ac550040 	sw	s5,64(v0)
  4101b4:	8fbf0034 	lw	ra,52(sp)
  4101b8:	8fb00018 	lw	s0,24(sp)
  4101bc:	8fb1001c 	lw	s1,28(sp)
  4101c0:	8fb20020 	lw	s2,32(sp)
  4101c4:	8fb30024 	lw	s3,36(sp)
  4101c8:	8fb40028 	lw	s4,40(sp)
  4101cc:	8fb5002c 	lw	s5,44(sp)
  4101d0:	03e00008 	jr	ra
  4101d4:	27bd0038 	addiu	sp,sp,56
