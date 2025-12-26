# Function: SG_getOverlay4Args
# Address: 0x00431f3c - 0x00432088
# Size: 0x14c (332 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431f3c <SG_getOverlay4Args>:
  431f3c:	3c1c0fbf 	lui	gp,0xfbf
  431f40:	279cbbf4 	addiu	gp,gp,-17420
  431f44:	0399e021 	addu	gp,gp,t9
  431f48:	27bdffc0 	addiu	sp,sp,-64
  431f4c:	afb00020 	sw	s0,32(sp)
  431f50:	8f998020 	lw	t9,-32736(gp)
  431f54:	00e08025 	move	s0,a3
  431f58:	8f87806c 	lw	a3,-32660(gp)
  431f5c:	afb10024 	sw	s1,36(sp)
  431f60:	00c08825 	move	s1,a2
  431f64:	afbf002c 	sw	ra,44(sp)
  431f68:	240e0003 	li	t6,3
  431f6c:	27392370 	addiu	t9,t9,9072
  431f70:	afbc0028 	sw	gp,40(sp)
  431f74:	afae0010 	sw	t6,16(sp)
  431f78:	24060004 	li	a2,4
  431f7c:	afa40040 	sw	a0,64(sp)
  431f80:	afa50044 	sw	a1,68(sp)
  431f84:	0320f809 	jalr	t9
  431f88:	24e79660 	addiu	a3,a3,-27040
  431f8c:	8fbc0028 	lw	gp,40(sp)
  431f90:	8fa40040 	lw	a0,64(sp)
  431f94:	8fa50044 	lw	a1,68(sp)
  431f98:	04410008 	bgez	v0,431fbc <SG_getOverlay4Args+0x80>
  431f9c:	00403025 	move	a2,v0
  431fa0:	8f998808 	lw	t9,-30712(gp)
  431fa4:	02203025 	move	a2,s1
  431fa8:	0320f809 	jalr	t9
  431fac:	02003825 	move	a3,s0
  431fb0:	8fbc0028 	lw	gp,40(sp)
  431fb4:	10000030 	b	432078 <SG_getOverlay4Args+0x13c>
  431fb8:	8fbf002c 	lw	ra,44(sp)
  431fbc:	8f9987f8 	lw	t9,-30728(gp)
  431fc0:	afa60034 	sw	a2,52(sp)
  431fc4:	0320f809 	jalr	t9
  431fc8:	00000000 	nop
  431fcc:	8fbc0028 	lw	gp,40(sp)
  431fd0:	8e180000 	lw	t8,0(s0)
  431fd4:	8f8f80a4 	lw	t7,-32604(gp)
  431fd8:	0018c8c0 	sll	t9,t8,0x3
  431fdc:	8fa60034 	lw	a2,52(sp)
  431fe0:	02394021 	addu	t0,s1,t9
  431fe4:	25ef009a 	addiu	t7,t7,154
  431fe8:	ad0f0000 	sw	t7,0(t0)
  431fec:	8e090000 	lw	t1,0(s0)
  431ff0:	8f8e80a4 	lw	t6,-32604(gp)
  431ff4:	000950c0 	sll	t2,t1,0x3
  431ff8:	022a5821 	addu	t3,s1,t2
  431ffc:	ad620004 	sw	v0,4(t3)
  432000:	8e0c0000 	lw	t4,0(s0)
  432004:	25ce00a3 	addiu	t6,t6,163
  432008:	258d0001 	addiu	t5,t4,1
  43200c:	000dc8c0 	sll	t9,t5,0x3
  432010:	ae0d0000 	sw	t5,0(s0)
  432014:	02397821 	addu	t7,s1,t9
  432018:	adee0000 	sw	t6,0(t7)
  43201c:	8e090000 	lw	t1,0(s0)
  432020:	24080004 	li	t0,4
  432024:	000950c0 	sll	t2,t1,0x3
  432028:	022a5821 	addu	t3,s1,t2
  43202c:	ad680004 	sw	t0,4(t3)
  432030:	8e0c0000 	lw	t4,0(s0)
  432034:	8f988080 	lw	t8,-32640(gp)
  432038:	25990001 	addiu	t9,t4,1
  43203c:	001970c0 	sll	t6,t9,0x3
  432040:	ae190000 	sw	t9,0(s0)
  432044:	022e7821 	addu	t7,s1,t6
  432048:	27180068 	addiu	t8,t8,104
  43204c:	adf80000 	sw	t8,0(t7)
  432050:	8e090000 	lw	t1,0(s0)
  432054:	24020004 	li	v0,4
  432058:	000950c0 	sll	t2,t1,0x3
  43205c:	022a4021 	addu	t0,s1,t2
  432060:	ad060004 	sw	a2,4(t0)
  432064:	8e0b0000 	lw	t3,0(s0)
  432068:	00000000 	nop
  43206c:	256c0001 	addiu	t4,t3,1
  432070:	ae0c0000 	sw	t4,0(s0)
  432074:	8fbf002c 	lw	ra,44(sp)
  432078:	8fb00020 	lw	s0,32(sp)
  43207c:	8fb10024 	lw	s1,36(sp)
  432080:	03e00008 	jr	ra
  432084:	27bd0040 	addiu	sp,sp,64
