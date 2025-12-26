# Function: overlayMenuUnmappedCB
# Address: 0x004221c8 - 0x00422218
# Size: 0x50 (80 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004221c8 <overlayMenuUnmappedCB>:
  4221c8:	3c1c0fc0 	lui	gp,0xfc0
  4221cc:	279cb968 	addiu	gp,gp,-18072
  4221d0:	0399e021 	addu	gp,gp,t9
  4221d4:	27bdffe0 	addiu	sp,sp,-32
  4221d8:	8f998368 	lw	t9,-31896(gp)
  4221dc:	afbf001c 	sw	ra,28(sp)
  4221e0:	afbc0018 	sw	gp,24(sp)
  4221e4:	afa50024 	sw	a1,36(sp)
  4221e8:	0320f809 	jalr	t9
  4221ec:	afa60028 	sw	a2,40(sp)
  4221f0:	8fbc0018 	lw	gp,24(sp)
  4221f4:	00402025 	move	a0,v0
  4221f8:	8f99869c 	lw	t9,-31076(gp)
  4221fc:	00000000 	nop
  422200:	0320f809 	jalr	t9
  422204:	00000000 	nop
  422208:	8fbf001c 	lw	ra,28(sp)
  42220c:	8fbc0018 	lw	gp,24(sp)
  422210:	03e00008 	jr	ra
  422214:	27bd0020 	addiu	sp,sp,32
