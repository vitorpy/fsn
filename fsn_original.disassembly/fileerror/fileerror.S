# Function: fileerror
# Address: 0x00411088 - 0x00411114
# Size: 0x8c (140 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411088 <fileerror>:
  411088:	3c1c0fc1 	lui	gp,0xfc1
  41108c:	279ccaa8 	addiu	gp,gp,-13656
  411090:	0399e021 	addu	gp,gp,t9
  411094:	27bdfba8 	addiu	sp,sp,-1112
  411098:	8f998134 	lw	t9,-32460(gp)
  41109c:	afa5045c 	sw	a1,1116(sp)
  4110a0:	00802825 	move	a1,a0
  4110a4:	afbf001c 	sw	ra,28(sp)
  4110a8:	afa40458 	sw	a0,1112(sp)
  4110ac:	afbc0018 	sw	gp,24(sp)
  4110b0:	0320f809 	jalr	t9
  4110b4:	27a40024 	addiu	a0,sp,36
  4110b8:	8fbc0018 	lw	gp,24(sp)
  4110bc:	27a40024 	addiu	a0,sp,36
  4110c0:	8f85805c 	lw	a1,-32676(gp)
  4110c4:	8f99831c 	lw	t9,-31972(gp)
  4110c8:	24a5a6d4 	addiu	a1,a1,-22828
  4110cc:	0320f809 	jalr	t9
  4110d0:	00000000 	nop
  4110d4:	8fbc0018 	lw	gp,24(sp)
  4110d8:	8fa5045c 	lw	a1,1116(sp)
  4110dc:	8f99831c 	lw	t9,-31972(gp)
  4110e0:	27a40024 	addiu	a0,sp,36
  4110e4:	0320f809 	jalr	t9
  4110e8:	00000000 	nop
  4110ec:	8fbc0018 	lw	gp,24(sp)
  4110f0:	27a40024 	addiu	a0,sp,36
  4110f4:	8f998570 	lw	t9,-31376(gp)
  4110f8:	00000000 	nop
  4110fc:	0320f809 	jalr	t9
  411100:	00000000 	nop
  411104:	8fbf001c 	lw	ra,28(sp)
  411108:	8fbc0018 	lw	gp,24(sp)
  41110c:	03e00008 	jr	ra
  411110:	27bd0458 	addiu	sp,sp,1112
