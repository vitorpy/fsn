# Function: __ct__11ConvertInfoFv
# Address: 0x00435510 - 0x0043556c
# Size: 0x5c (92 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435510 <__ct__11ConvertInfoFv>:
  435510:	3c1c0fbf 	lui	gp,0xfbf
  435514:	279c8620 	addiu	gp,gp,-31200
  435518:	0399e021 	addu	gp,gp,t9
  43551c:	27bdffe0 	addiu	sp,sp,-32
  435520:	afbf001c 	sw	ra,28(sp)
  435524:	14800008 	bnez	a0,435548 <__ct__11ConvertInfoFv+0x38>
  435528:	afbc0018 	sw	gp,24(sp)
  43552c:	8f9984a4 	lw	t9,-31580(gp)
  435530:	24040014 	li	a0,20
  435534:	0320f809 	jalr	t9
  435538:	00000000 	nop
  43553c:	8fbc0018 	lw	gp,24(sp)
  435540:	10400006 	beqz	v0,43555c <__ct__11ConvertInfoFv+0x4c>
  435544:	00402025 	move	a0,v0
  435548:	ac800000 	sw	zero,0(a0)
  43554c:	ac800004 	sw	zero,4(a0)
  435550:	ac800008 	sw	zero,8(a0)
  435554:	ac80000c 	sw	zero,12(a0)
  435558:	ac800010 	sw	zero,16(a0)
  43555c:	8fbf001c 	lw	ra,28(sp)
  435560:	27bd0020 	addiu	sp,sp,32
  435564:	03e00008 	jr	ra
  435568:	00801025 	move	v0,a0
