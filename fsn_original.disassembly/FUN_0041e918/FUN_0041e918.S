# Function: FUN_0041e918
# Address: 0x0041e918 - 0x0041e988
# Size: 0x70 (112 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041e918 <editCB+0x7f4>:
  41e918:	3c1c0fc0 	lui	gp,0xfc0
  41e91c:	279cf218 	addiu	gp,gp,-3560
  41e920:	0399e021 	addu	gp,gp,t9
  41e924:	27bdffd8 	addiu	sp,sp,-40
  41e928:	8f82897c 	lw	v0,-30340(gp)
  41e92c:	afbf0024 	sw	ra,36(sp)
  41e930:	8c420000 	lw	v0,0(v0)
  41e934:	afbc0020 	sw	gp,32(sp)
  41e938:	afa40028 	sw	a0,40(sp)
  41e93c:	afa5002c 	sw	a1,44(sp)
  41e940:	afa60030 	sw	a2,48(sp)
  41e944:	8f8e805c 	lw	t6,-32676(gp)
  41e948:	8f8f805c 	lw	t7,-32676(gp)
  41e94c:	8f99801c 	lw	t9,-32740(gp)
  41e950:	8c450048 	lw	a1,72(v0)
  41e954:	8c440044 	lw	a0,68(v0)
  41e958:	25ceb47c 	addiu	t6,t6,-19332
  41e95c:	25efb484 	addiu	t7,t7,-19324
  41e960:	2739e260 	addiu	t9,t9,-7584
  41e964:	afaf0014 	sw	t7,20(sp)
  41e968:	afae0010 	sw	t6,16(sp)
  41e96c:	24060006 	li	a2,6
  41e970:	0320f809 	jalr	t9
  41e974:	00003825 	move	a3,zero
  41e978:	8fbf0024 	lw	ra,36(sp)
  41e97c:	8fbc0020 	lw	gp,32(sp)
  41e980:	03e00008 	jr	ra
  41e984:	27bd0028 	addiu	sp,sp,40
