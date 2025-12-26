# Function: scheduleDatabaseDumpTimeout
# Address: 0x00415544 - 0x0041558c
# Size: 0x48 (72 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00415544 <scheduleDatabaseDumpTimeout>:
  415544:	3c1c0fc1 	lui	gp,0xfc1
  415548:	279c85ec 	addiu	gp,gp,-31252
  41554c:	0399e021 	addu	gp,gp,t9
  415550:	8f848a00 	lw	a0,-30208(gp)
  415554:	8f99816c 	lw	t9,-32404(gp)
  415558:	27bdffe0 	addiu	sp,sp,-32
  41555c:	afbf001c 	sw	ra,28(sp)
  415560:	3c05000d 	lui	a1,0xd
  415564:	8f8685b4 	lw	a2,-31308(gp)
  415568:	8c840000 	lw	a0,0(a0)
  41556c:	afbc0018 	sw	gp,24(sp)
  415570:	34a5bba0 	ori	a1,a1,0xbba0
  415574:	0320f809 	jalr	t9
  415578:	00003825 	move	a3,zero
  41557c:	8fbf001c 	lw	ra,28(sp)
  415580:	8fbc0018 	lw	gp,24(sp)
  415584:	03e00008 	jr	ra
  415588:	27bd0020 	addiu	sp,sp,32
