# Function: compare_dirs
# Address: 0x00413530 - 0x00413574
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00413530 <compare_dirs>:
  413530:	3c1c0fc1 	lui	gp,0xfc1
  413534:	279ca600 	addiu	gp,gp,-23040
  413538:	0399e021 	addu	gp,gp,t9
  41353c:	27bdffe0 	addiu	sp,sp,-32
  413540:	afbf001c 	sw	ra,28(sp)
  413544:	afbc0018 	sw	gp,24(sp)
  413548:	8caf0000 	lw	t7,0(a1)
  41354c:	8c8e0000 	lw	t6,0(a0)
  413550:	8f9980cc 	lw	t9,-32564(gp)
  413554:	8de50000 	lw	a1,0(t7)
  413558:	8dc40000 	lw	a0,0(t6)
  41355c:	0320f809 	jalr	t9
  413560:	00000000 	nop
  413564:	8fbf001c 	lw	ra,28(sp)
  413568:	8fbc0018 	lw	gp,24(sp)
  41356c:	03e00008 	jr	ra
  413570:	27bd0020 	addiu	sp,sp,32
