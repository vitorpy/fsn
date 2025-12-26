# Function: FUN_0041e8a8
# Address: 0x0041e8a8 - 0x0041e918
# Size: 0x70 (112 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041e8a8 <editCB+0x784>:
  41e8a8:	3c1c0fc0 	lui	gp,0xfc0
  41e8ac:	279cf288 	addiu	gp,gp,-3448
  41e8b0:	0399e021 	addu	gp,gp,t9
  41e8b4:	27bdffd8 	addiu	sp,sp,-40
  41e8b8:	8f82897c 	lw	v0,-30340(gp)
  41e8bc:	afbf0024 	sw	ra,36(sp)
  41e8c0:	8c420000 	lw	v0,0(v0)
  41e8c4:	afbc0020 	sw	gp,32(sp)
  41e8c8:	afa40028 	sw	a0,40(sp)
  41e8cc:	afa5002c 	sw	a1,44(sp)
  41e8d0:	afa60030 	sw	a2,48(sp)
  41e8d4:	8f8e805c 	lw	t6,-32676(gp)
  41e8d8:	8f8f805c 	lw	t7,-32676(gp)
  41e8dc:	8f99801c 	lw	t9,-32740(gp)
  41e8e0:	8c450048 	lw	a1,72(v0)
  41e8e4:	8c440044 	lw	a0,68(v0)
  41e8e8:	25ceb46c 	addiu	t6,t6,-19348
  41e8ec:	25efb474 	addiu	t7,t7,-19340
  41e8f0:	2739e260 	addiu	t9,t9,-7584
  41e8f4:	afaf0014 	sw	t7,20(sp)
  41e8f8:	afae0010 	sw	t6,16(sp)
  41e8fc:	24060004 	li	a2,4
  41e900:	0320f809 	jalr	t9
  41e904:	00003825 	move	a3,zero
  41e908:	8fbf0024 	lw	ra,36(sp)
  41e90c:	8fbc0020 	lw	gp,32(sp)
  41e910:	03e00008 	jr	ra
  41e914:	27bd0028 	addiu	sp,sp,40
