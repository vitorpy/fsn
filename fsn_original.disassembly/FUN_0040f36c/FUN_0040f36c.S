# Function: FUN_0040f36c
# Address: 0x0040f36c - 0x0040f42c
# Size: 0xc0 (192 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f36c <activeWorkProc+0x188>:
  40f36c:	3c1c0fc1 	lui	gp,0xfc1
  40f370:	279ce7c4 	addiu	gp,gp,-6204
  40f374:	0399e021 	addu	gp,gp,t9
  40f378:	27bdffe0 	addiu	sp,sp,-32
  40f37c:	8f998018 	lw	t9,-32744(gp)
  40f380:	afbf001c 	sw	ra,28(sp)
  40f384:	afa40020 	sw	a0,32(sp)
  40f388:	afa50024 	sw	a1,36(sp)
  40f38c:	2739f150 	addiu	t9,t9,-3760
  40f390:	afbc0018 	sw	gp,24(sp)
  40f394:	afa60028 	sw	a2,40(sp)
  40f398:	afa7002c 	sw	a3,44(sp)
  40f39c:	00002825 	move	a1,zero
  40f3a0:	0320f809 	jalr	t9
  40f3a4:	00002025 	move	a0,zero
  40f3a8:	8fbc0018 	lw	gp,24(sp)
  40f3ac:	00000000 	nop
  40f3b0:	8f998520 	lw	t9,-31456(gp)
  40f3b4:	00000000 	nop
  40f3b8:	0320f809 	jalr	t9
  40f3bc:	00000000 	nop
  40f3c0:	8fbc0018 	lw	gp,24(sp)
  40f3c4:	00002025 	move	a0,zero
  40f3c8:	8f998304 	lw	t9,-31996(gp)
  40f3cc:	00000000 	nop
  40f3d0:	0320f809 	jalr	t9
  40f3d4:	00000000 	nop
  40f3d8:	8fbc0018 	lw	gp,24(sp)
  40f3dc:	00000000 	nop
  40f3e0:	8f998308 	lw	t9,-31992(gp)
  40f3e4:	00000000 	nop
  40f3e8:	0320f809 	jalr	t9
  40f3ec:	00000000 	nop
  40f3f0:	8fbc0018 	lw	gp,24(sp)
  40f3f4:	00000000 	nop
  40f3f8:	8f998750 	lw	t9,-30896(gp)
  40f3fc:	00000000 	nop
  40f400:	0320f809 	jalr	t9
  40f404:	00000000 	nop
  40f408:	8fbc0018 	lw	gp,24(sp)
  40f40c:	44800000 	mtc1	zero,$f0
  40f410:	8f818068 	lw	at,-32664(gp)
  40f414:	8fbf001c 	lw	ra,28(sp)
  40f418:	e4200158 	swc1	$f0,344(at)
  40f41c:	8f818068 	lw	at,-32664(gp)
  40f420:	27bd0020 	addiu	sp,sp,32
  40f424:	03e00008 	jr	ra
  40f428:	e420015c 	swc1	$f0,348(at)
