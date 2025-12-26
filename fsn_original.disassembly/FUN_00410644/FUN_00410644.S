# Function: FUN_00410644
# Address: 0x00410644 - 0x0041069c
# Size: 0x58 (88 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410644 <zoomto+0x3ec>:
  410644:	3c1c0fc1 	lui	gp,0xfc1
  410648:	279cd4ec 	addiu	gp,gp,-11028
  41064c:	0399e021 	addu	gp,gp,t9
  410650:	27bdffe0 	addiu	sp,sp,-32
  410654:	8f998778 	lw	t9,-30856(gp)
  410658:	afbf001c 	sw	ra,28(sp)
  41065c:	afa50024 	sw	a1,36(sp)
  410660:	afbc0018 	sw	gp,24(sp)
  410664:	afa60028 	sw	a2,40(sp)
  410668:	afa7002c 	sw	a3,44(sp)
  41066c:	0320f809 	jalr	t9
  410670:	00002825 	move	a1,zero
  410674:	8fbc0018 	lw	gp,24(sp)
  410678:	00000000 	nop
  41067c:	8f998550 	lw	t9,-31408(gp)
  410680:	00000000 	nop
  410684:	0320f809 	jalr	t9
  410688:	00000000 	nop
  41068c:	8fbf001c 	lw	ra,28(sp)
  410690:	8fbc0018 	lw	gp,24(sp)
  410694:	03e00008 	jr	ra
  410698:	27bd0020 	addiu	sp,sp,32
