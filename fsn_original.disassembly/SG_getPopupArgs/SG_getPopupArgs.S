# Function: SG_getPopupArgs
# Address: 0x00432088 - 0x00432200
# Size: 0x178 (376 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00432088 <SG_getPopupArgs>:
  432088:	3c1c0fbf 	lui	gp,0xfbf
  43208c:	279cbaa8 	addiu	gp,gp,-17752
  432090:	0399e021 	addu	gp,gp,t9
  432094:	27bdffc0 	addiu	sp,sp,-64
  432098:	afb10024 	sw	s1,36(sp)
  43209c:	00c08825 	move	s1,a2
  4320a0:	8f86806c 	lw	a2,-32660(gp)
  4320a4:	8f9987fc 	lw	t9,-30724(gp)
  4320a8:	afb00020 	sw	s0,32(sp)
  4320ac:	00e08025 	move	s0,a3
  4320b0:	afbf002c 	sw	ra,44(sp)
  4320b4:	afbc0028 	sw	gp,40(sp)
  4320b8:	afa40040 	sw	a0,64(sp)
  4320bc:	afa50044 	sw	a1,68(sp)
  4320c0:	24070004 	li	a3,4
  4320c4:	0320f809 	jalr	t9
  4320c8:	24c69660 	addiu	a2,a2,-27040
  4320cc:	8fbc0028 	lw	gp,40(sp)
  4320d0:	8fa40040 	lw	a0,64(sp)
  4320d4:	8f998020 	lw	t9,-32736(gp)
  4320d8:	8f87806c 	lw	a3,-32660(gp)
  4320dc:	8fa50044 	lw	a1,68(sp)
  4320e0:	240e0004 	li	t6,4
  4320e4:	27392370 	addiu	t9,t9,9072
  4320e8:	afa20038 	sw	v0,56(sp)
  4320ec:	afae0010 	sw	t6,16(sp)
  4320f0:	00403025 	move	a2,v0
  4320f4:	0320f809 	jalr	t9
  4320f8:	24e79660 	addiu	a3,a3,-27040
  4320fc:	8fbc0028 	lw	gp,40(sp)
  432100:	8fa40040 	lw	a0,64(sp)
  432104:	8fa50044 	lw	a1,68(sp)
  432108:	04410008 	bgez	v0,43212c <SG_getPopupArgs+0xa4>
  43210c:	00403025 	move	a2,v0
  432110:	8f998804 	lw	t9,-30716(gp)
  432114:	02203025 	move	a2,s1
  432118:	0320f809 	jalr	t9
  43211c:	02003825 	move	a3,s0
  432120:	8fbc0028 	lw	gp,40(sp)
  432124:	10000032 	b	4321f0 <SG_getPopupArgs+0x168>
  432128:	8fbf002c 	lw	ra,44(sp)
  43212c:	8f9987f8 	lw	t9,-30728(gp)
  432130:	afa60034 	sw	a2,52(sp)
  432134:	0320f809 	jalr	t9
  432138:	00000000 	nop
  43213c:	8fbc0028 	lw	gp,40(sp)
  432140:	8e180000 	lw	t8,0(s0)
  432144:	8f8f80a4 	lw	t7,-32604(gp)
  432148:	0018c8c0 	sll	t9,t8,0x3
  43214c:	8fa60034 	lw	a2,52(sp)
  432150:	02394021 	addu	t0,s1,t9
  432154:	25ef009a 	addiu	t7,t7,154
  432158:	ad0f0000 	sw	t7,0(t0)
  43215c:	8e090000 	lw	t1,0(s0)
  432160:	8f8e80a4 	lw	t6,-32604(gp)
  432164:	000950c0 	sll	t2,t1,0x3
  432168:	022a5821 	addu	t3,s1,t2
  43216c:	ad620004 	sw	v0,4(t3)
  432170:	8e0c0000 	lw	t4,0(s0)
  432174:	25ce00a3 	addiu	t6,t6,163
  432178:	258d0001 	addiu	t5,t4,1
  43217c:	000dc8c0 	sll	t9,t5,0x3
  432180:	ae0d0000 	sw	t5,0(s0)
  432184:	02397821 	addu	t7,s1,t9
  432188:	adee0000 	sw	t6,0(t7)
  43218c:	8e090000 	lw	t1,0(s0)
  432190:	24080002 	li	t0,2
  432194:	000950c0 	sll	t2,t1,0x3
  432198:	022a5821 	addu	t3,s1,t2
  43219c:	ad680004 	sw	t0,4(t3)
  4321a0:	8e0c0000 	lw	t4,0(s0)
  4321a4:	8f988080 	lw	t8,-32640(gp)
  4321a8:	25990001 	addiu	t9,t4,1
  4321ac:	001970c0 	sll	t6,t9,0x3
  4321b0:	ae190000 	sw	t9,0(s0)
  4321b4:	022e7821 	addu	t7,s1,t6
  4321b8:	27180068 	addiu	t8,t8,104
  4321bc:	adf80000 	sw	t8,0(t7)
  4321c0:	8e090000 	lw	t1,0(s0)
  4321c4:	00000000 	nop
  4321c8:	000950c0 	sll	t2,t1,0x3
  4321cc:	022a4021 	addu	t0,s1,t2
  4321d0:	ad060004 	sw	a2,4(t0)
  4321d4:	8e0b0000 	lw	t3,0(s0)
  4321d8:	00000000 	nop
  4321dc:	256c0001 	addiu	t4,t3,1
  4321e0:	ae0c0000 	sw	t4,0(s0)
  4321e4:	8fa20038 	lw	v0,56(sp)
  4321e8:	00000000 	nop
  4321ec:	8fbf002c 	lw	ra,44(sp)
  4321f0:	8fb00020 	lw	s0,32(sp)
  4321f4:	8fb10024 	lw	s1,36(sp)
  4321f8:	03e00008 	jr	ra
  4321fc:	27bd0040 	addiu	sp,sp,64
