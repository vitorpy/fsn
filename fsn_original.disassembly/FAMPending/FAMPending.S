# Function: FAMPending
# Address: 0x0043ab50 - 0x0043ac20
# Size: 0xd0 (208 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043ab50 <FAMPending>:
  43ab50:	3c1c0fbe 	lui	gp,0xfbe
  43ab54:	279c2fe0 	addiu	gp,gp,12256
  43ab58:	0399e021 	addu	gp,gp,t9
  43ab5c:	27bdff50 	addiu	sp,sp,-176
  43ab60:	8f99810c 	lw	t9,-32500(gp)
  43ab64:	afbf0024 	sw	ra,36(sp)
  43ab68:	afa400b0 	sw	a0,176(sp)
  43ab6c:	afbc0020 	sw	gp,32(sp)
  43ab70:	27a40030 	addiu	a0,sp,48
  43ab74:	0320f809 	jalr	t9
  43ab78:	24050080 	li	a1,128
  43ab7c:	8fa800b0 	lw	t0,176(sp)
  43ab80:	27a50030 	addiu	a1,sp,48
  43ab84:	8d030000 	lw	v1,0(t0)
  43ab88:	24090001 	li	t1,1
  43ab8c:	00037142 	srl	t6,v1,0x5
  43ab90:	000e7880 	sll	t7,t6,0x2
  43ab94:	00af1021 	addu	v0,a1,t7
  43ab98:	8c580000 	lw	t8,0(v0)
  43ab9c:	3079001f 	andi	t9,v1,0x1f
  43aba0:	8fbc0020 	lw	gp,32(sp)
  43aba4:	03295004 	sllv	t2,t1,t9
  43aba8:	030a5825 	or	t3,t8,t2
  43abac:	ac4b0000 	sw	t3,0(v0)
  43abb0:	8f8d806c 	lw	t5,-32660(gp)
  43abb4:	8d0c0004 	lw	t4,4(t0)
  43abb8:	8f998380 	lw	t9,-31872(gp)
  43abbc:	25ad9f34 	addiu	t5,t5,-24780
  43abc0:	afad0010 	sw	t5,16(sp)
  43abc4:	24040400 	li	a0,1024
  43abc8:	00003025 	move	a2,zero
  43abcc:	00003825 	move	a3,zero
  43abd0:	0320f809 	jalr	t9
  43abd4:	afac002c 	sw	t4,44(sp)
  43abd8:	8fbc0020 	lw	gp,32(sp)
  43abdc:	8fbf0024 	lw	ra,36(sp)
  43abe0:	18400004 	blez	v0,43abf4 <FAMPending+0xa4>
  43abe4:	8fae002c 	lw	t6,44(sp)
  43abe8:	1000000b 	b	43ac18 <FAMPending+0xc8>
  43abec:	24020001 	li	v0,1
  43abf0:	8fae002c 	lw	t6,44(sp)
  43abf4:	00001025 	move	v0,zero
  43abf8:	8dcf0000 	lw	t7,0(t6)
  43abfc:	00000000 	nop
  43ac00:	8de9000c 	lw	t1,12(t7)
  43ac04:	00000000 	nop
  43ac08:	11200003 	beqz	t1,43ac18 <FAMPending+0xc8>
  43ac0c:	00000000 	nop
  43ac10:	10000001 	b	43ac18 <FAMPending+0xc8>
  43ac14:	24020001 	li	v0,1
  43ac18:	03e00008 	jr	ra
  43ac1c:	27bd00b0 	addiu	sp,sp,176
