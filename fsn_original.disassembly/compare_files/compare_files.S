# Function: compare_files
# Address: 0x004134ec - 0x00413530
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004134ec <compare_files>:
  4134ec:	3c1c0fc1 	lui	gp,0xfc1
  4134f0:	279ca644 	addiu	gp,gp,-22972
  4134f4:	0399e021 	addu	gp,gp,t9
  4134f8:	27bdffe0 	addiu	sp,sp,-32
  4134fc:	afbf001c 	sw	ra,28(sp)
  413500:	afbc0018 	sw	gp,24(sp)
  413504:	8caf0000 	lw	t7,0(a1)
  413508:	8c8e0000 	lw	t6,0(a0)
  41350c:	8f9980cc 	lw	t9,-32564(gp)
  413510:	8de50000 	lw	a1,0(t7)
  413514:	8dc40000 	lw	a0,0(t6)
  413518:	0320f809 	jalr	t9
  41351c:	00000000 	nop
  413520:	8fbf001c 	lw	ra,28(sp)
  413524:	8fbc0018 	lw	gp,24(sp)
  413528:	03e00008 	jr	ra
  41352c:	27bd0020 	addiu	sp,sp,32
