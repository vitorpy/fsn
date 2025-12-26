# Function: getnum__FiT1PvT1
# Address: 0x0043565c - 0x004356d0
# Size: 0x74 (116 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043565c <getnum__FiT1PvT1>:
  43565c:	3c1c0fbf 	lui	gp,0xfbf
  435660:	279c84d4 	addiu	gp,gp,-31532
  435664:	0399e021 	addu	gp,gp,t9
  435668:	27bdffe0 	addiu	sp,sp,-32
  43566c:	8f9984c8 	lw	t9,-31544(gp)
  435670:	afbf001c 	sw	ra,28(sp)
  435674:	afa60028 	sw	a2,40(sp)
  435678:	afbc0018 	sw	gp,24(sp)
  43567c:	afa40020 	sw	a0,32(sp)
  435680:	afa7002c 	sw	a3,44(sp)
  435684:	0320f809 	jalr	t9
  435688:	00003025 	move	a2,zero
  43568c:	8fbc0018 	lw	gp,24(sp)
  435690:	8fa40020 	lw	a0,32(sp)
  435694:	8f9981ec 	lw	t9,-32276(gp)
  435698:	8fa50028 	lw	a1,40(sp)
  43569c:	8fa6002c 	lw	a2,44(sp)
  4356a0:	0320f809 	jalr	t9
  4356a4:	00000000 	nop
  4356a8:	8fae002c 	lw	t6,44(sp)
  4356ac:	8fbc0018 	lw	gp,24(sp)
  4356b0:	8fbf001c 	lw	ra,28(sp)
  4356b4:	144e0004 	bne	v0,t6,4356c8 <getnum__FiT1PvT1+0x6c>
  4356b8:	24020001 	li	v0,1
  4356bc:	10000002 	b	4356c8 <getnum__FiT1PvT1+0x6c>
  4356c0:	00001025 	move	v0,zero
  4356c4:	24020001 	li	v0,1
  4356c8:	03e00008 	jr	ra
  4356cc:	27bd0020 	addiu	sp,sp,32
