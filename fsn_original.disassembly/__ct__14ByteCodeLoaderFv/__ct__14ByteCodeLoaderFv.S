# Function: __ct__14ByteCodeLoaderFv
# Address: 0x004342b8 - 0x00434318
# Size: 0x60 (96 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004342b8 <__ct__14ByteCodeLoaderFv>:
  4342b8:	3c1c0fbf 	lui	gp,0xfbf
  4342bc:	279c9878 	addiu	gp,gp,-26504
  4342c0:	0399e021 	addu	gp,gp,t9
  4342c4:	27bdffe0 	addiu	sp,sp,-32
  4342c8:	afbf001c 	sw	ra,28(sp)
  4342cc:	14800008 	bnez	a0,4342f0 <__ct__14ByteCodeLoaderFv+0x38>
  4342d0:	afbc0018 	sw	gp,24(sp)
  4342d4:	8f9984a4 	lw	t9,-31580(gp)
  4342d8:	24040018 	li	a0,24
  4342dc:	0320f809 	jalr	t9
  4342e0:	00000000 	nop
  4342e4:	8fbc0018 	lw	gp,24(sp)
  4342e8:	10400007 	beqz	v0,434308 <__ct__14ByteCodeLoaderFv+0x50>
  4342ec:	00402025 	move	a0,v0
  4342f0:	ac800000 	sw	zero,0(a0)
  4342f4:	ac800004 	sw	zero,4(a0)
  4342f8:	ac800008 	sw	zero,8(a0)
  4342fc:	ac80000c 	sw	zero,12(a0)
  434300:	ac800014 	sw	zero,20(a0)
  434304:	ac800010 	sw	zero,16(a0)
  434308:	8fbf001c 	lw	ra,28(sp)
  43430c:	27bd0020 	addiu	sp,sp,32
  434310:	03e00008 	jr	ra
  434314:	00801025 	move	v0,a0
