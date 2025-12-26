# Function: setMatrix__13ByteCodedIconFRA4_A4_Cf
# Address: 0x0043535c - 0x004353a0
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043535c <setMatrix__13ByteCodedIconFRA4_A4_Cf>:
  43535c:	3c1c0fbf 	lui	gp,0xfbf
  435360:	279c87d4 	addiu	gp,gp,-30764
  435364:	0399e021 	addu	gp,gp,t9
  435368:	27bdffe0 	addiu	sp,sp,-32
  43536c:	afa40020 	sw	a0,32(sp)
  435370:	00a02025 	move	a0,a1
  435374:	8fa50020 	lw	a1,32(sp)
  435378:	8f99819c 	lw	t9,-32356(gp)
  43537c:	afbf001c 	sw	ra,28(sp)
  435380:	afbc0018 	sw	gp,24(sp)
  435384:	24060040 	li	a2,64
  435388:	0320f809 	jalr	t9
  43538c:	24a50020 	addiu	a1,a1,32
  435390:	8fbf001c 	lw	ra,28(sp)
  435394:	8fbc0018 	lw	gp,24(sp)
  435398:	03e00008 	jr	ra
  43539c:	27bd0020 	addiu	sp,sp,32
