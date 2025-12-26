# Function: FUN_00411774
# Address: 0x00411774 - 0x00411804
# Size: 0x90 (144 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411774 <fileerror+0x6ec>:
  411774:	3c1c0fc1 	lui	gp,0xfc1
  411778:	279cc3bc 	addiu	gp,gp,-15428
  41177c:	0399e021 	addu	gp,gp,t9
  411780:	8f828924 	lw	v0,-30428(gp)
  411784:	27bdffe0 	addiu	sp,sp,-32
  411788:	8c420000 	lw	v0,0(v0)
  41178c:	afbf001c 	sw	ra,28(sp)
  411790:	10400009 	beqz	v0,4117b8 <fileerror+0x730>
  411794:	afbc0018 	sw	gp,24(sp)
  411798:	24010001 	li	at,1
  41179c:	10410009 	beq	v0,at,4117c4 <fileerror+0x73c>
  4117a0:	24010002 	li	at,2
  4117a4:	1041000a 	beq	v0,at,4117d0 <fileerror+0x748>
  4117a8:	00000000 	nop
  4117ac:	44844000 	mtc1	a0,$f8
  4117b0:	10000010 	b	4117f4 <fileerror+0x76c>
  4117b4:	46804020 	cvt.s.w	$f0,$f8
  4117b8:	44800000 	mtc1	zero,$f0
  4117bc:	1000000e 	b	4117f8 <fileerror+0x770>
  4117c0:	8fbf001c 	lw	ra,28(sp)
  4117c4:	44842000 	mtc1	a0,$f4
  4117c8:	1000000a 	b	4117f4 <fileerror+0x76c>
  4117cc:	46802020 	cvt.s.w	$f0,$f4
  4117d0:	8f818a24 	lw	at,-30172(gp)
  4117d4:	44843000 	mtc1	a0,$f6
  4117d8:	8f99849c 	lw	t9,-31588(gp)
  4117dc:	c42e0064 	lwc1	$f14,100(at)
  4117e0:	0320f809 	jalr	t9
  4117e4:	46803320 	cvt.s.w	$f12,$f6
  4117e8:	8fbc0018 	lw	gp,24(sp)
  4117ec:	10000002 	b	4117f8 <fileerror+0x770>
  4117f0:	8fbf001c 	lw	ra,28(sp)
  4117f4:	8fbf001c 	lw	ra,28(sp)
  4117f8:	27bd0020 	addiu	sp,sp,32
  4117fc:	03e00008 	jr	ra
  411800:	00000000 	nop
