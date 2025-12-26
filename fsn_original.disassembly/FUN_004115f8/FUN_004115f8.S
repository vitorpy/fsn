# Function: FUN_004115f8
# Address: 0x004115f8 - 0x00411674
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004115f8 <fileerror+0x570>:
  4115f8:	3c1c0fc1 	lui	gp,0xfc1
  4115fc:	279cc538 	addiu	gp,gp,-15048
  411600:	0399e021 	addu	gp,gp,t9
  411604:	27bdffe0 	addiu	sp,sp,-32
  411608:	afbf001c 	sw	ra,28(sp)
  41160c:	afbc0018 	sw	gp,24(sp)
  411610:	afa40020 	sw	a0,32(sp)
  411614:	afa50024 	sw	a1,36(sp)
  411618:	8cce0008 	lw	t6,8(a2)
  41161c:	00000000 	nop
  411620:	11c00009 	beqz	t6,411648 <fileerror+0x5c0>
  411624:	00000000 	nop
  411628:	8f998018 	lw	t9,-32744(gp)
  41162c:	00000000 	nop
  411630:	27391230 	addiu	t9,t9,4656
  411634:	0320f809 	jalr	t9
  411638:	00000000 	nop
  41163c:	8fbc0018 	lw	gp,24(sp)
  411640:	10000009 	b	411668 <fileerror+0x5e0>
  411644:	8fbf001c 	lw	ra,28(sp)
  411648:	8f998018 	lw	t9,-32744(gp)
  41164c:	00000000 	nop
  411650:	27391578 	addiu	t9,t9,5496
  411654:	0320f809 	jalr	t9
  411658:	00000000 	nop
  41165c:	8fbc0018 	lw	gp,24(sp)
  411660:	00000000 	nop
  411664:	8fbf001c 	lw	ra,28(sp)
  411668:	27bd0020 	addiu	sp,sp,32
  41166c:	03e00008 	jr	ra
  411670:	00000000 	nop
