# Function: FUN_004291fc
# Address: 0x004291fc - 0x00429284
# Size: 0x88 (136 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004291fc <makePatterns+0xc>:
  4291fc:	27bdffd8 	addiu	sp,sp,-40
  429200:	8f868068 	lw	a2,-32664(gp)
  429204:	8f99811c 	lw	t9,-32484(gp)
  429208:	afbf0024 	sw	ra,36(sp)
  42920c:	afbc0020 	sw	gp,32(sp)
  429210:	afb2001c 	sw	s2,28(sp)
  429214:	afb10018 	sw	s1,24(sp)
  429218:	afb00014 	sw	s0,20(sp)
  42921c:	24040001 	li	a0,1
  429220:	24050010 	li	a1,16
  429224:	0320f809 	jalr	t9
  429228:	24c67908 	addiu	a2,a2,30984
  42922c:	8fbc0020 	lw	gp,32(sp)
  429230:	00008025 	move	s0,zero
  429234:	8f918068 	lw	s1,-32664(gp)
  429238:	24120003 	li	s2,3
  42923c:	26317928 	addiu	s1,s1,31016
  429240:	8f99811c 	lw	t9,-32484(gp)
  429244:	26040002 	addiu	a0,s0,2
  429248:	00047400 	sll	t6,a0,0x10
  42924c:	000e2403 	sra	a0,t6,0x10
  429250:	24050010 	li	a1,16
  429254:	0320f809 	jalr	t9
  429258:	02203025 	move	a2,s1
  42925c:	26100001 	addiu	s0,s0,1
  429260:	8fbc0020 	lw	gp,32(sp)
  429264:	1612fff6 	bne	s0,s2,429240 <makePatterns+0x50>
  429268:	26310020 	addiu	s1,s1,32
  42926c:	8fbf0024 	lw	ra,36(sp)
  429270:	8fb00014 	lw	s0,20(sp)
  429274:	8fb10018 	lw	s1,24(sp)
  429278:	8fb2001c 	lw	s2,28(sp)
  42927c:	03e00008 	jr	ra
  429280:	27bd0028 	addiu	sp,sp,40
