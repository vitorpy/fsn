# Disassembly of FUN_004294cc
# Address: 0x004294cc
# End: 0x00429578
# Size: 0xac (172 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004294cc <locateClear+0xc>:
  4294cc:	8f8e8068 	lw	t6,-32664(gp)  # small
  4294d0:	27bdffe0 	addiu	sp,sp,-32
  4294d4:	8dce7990 	lw	t6,31120(t6)
  4294d8:	afbf001c 	sw	ra,28(sp)
  4294dc:	11c00022 	beqz	t6,429568 <locateClear+0xa8>
  4294e0:	afbc0018 	sw	gp,24(sp)
  4294e4:	8f998020 	lw	t9,-32736(gp)  # FUN_00430000
  4294e8:	00000000 	nop
  4294ec:	27399464 	addiu	t9,t9,-27548
  4294f0:	0320f809 	jalr	t9  # call FUN_00430000
  4294f4:	00000000 	nop
  4294f8:	8fbc0018 	lw	gp,24(sp)
  4294fc:	00000000 	nop
  429500:	8f998520 	lw	t9,-31456(gp)  # FUN_0040bc28
  429504:	00000000 	nop
  429508:	0320f809 	jalr	t9  # call FUN_0040bc28
  42950c:	00000000 	nop
  429510:	8fbc0018 	lw	gp,24(sp)
  429514:	00002025 	move	a0,zero
  429518:	8f998304 	lw	t9,-31996(gp)
  42951c:	00000000 	nop
  429520:	0320f809 	jalr	t9
  429524:	00000000 	nop
  429528:	8fbc0018 	lw	gp,24(sp)
  42952c:	00000000 	nop
  429530:	8f998308 	lw	t9,-31992(gp)
  429534:	00000000 	nop
  429538:	0320f809 	jalr	t9
  42953c:	00000000 	nop
  429540:	8fbc0018 	lw	gp,24(sp)
  429544:	00000000 	nop
  429548:	8f818068 	lw	at,-32664(gp)  # small
  42954c:	8f99867c 	lw	t9,-31108(gp)  # FUN_00420b70
  429550:	ac207990 	sw	zero,31120(at)
  429554:	8f818068 	lw	at,-32664(gp)  # small
  429558:	0320f809 	jalr	t9  # call FUN_00420b70
  42955c:	ac207994 	sw	zero,31124(at)
  429560:	8fbc0018 	lw	gp,24(sp)
  429564:	00000000 	nop
  429568:	8fbf001c 	lw	ra,28(sp)
  42956c:	27bd0020 	addiu	sp,sp,32
  429570:	03e00008 	jr	ra
  429574:	00000000 	nop


======================================================================
ANALYSIS SUMMARY: FUN_004294cc
======================================================================

FUNCTION CALLS:
----------------------------------------
  FUN_0040bc28
  FUN_00420b70
  FUN_00430000

GP SYMBOL REFERENCES:
----------------------------------------
  FUN_0040bc28
  FUN_00420b70
  FUN_00430000
  small

======================================================================