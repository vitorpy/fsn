# Function: FAMNextEvent
# Address: 0x0043aa0c - 0x0043ab50
# Size: 0x144 (324 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043aa0c <FAMNextEvent>:
  43aa0c:	3c1c0fbe 	lui	gp,0xfbe
  43aa10:	279c3124 	addiu	gp,gp,12580
  43aa14:	0399e021 	addu	gp,gp,t9
  43aa18:	27bdf398 	addiu	sp,sp,-3176
  43aa1c:	8f99810c 	lw	t9,-32500(gp)
  43aa20:	afbf001c 	sw	ra,28(sp)
  43aa24:	afa40c68 	sw	a0,3176(sp)
  43aa28:	afa50c6c 	sw	a1,3180(sp)
  43aa2c:	afbc0018 	sw	gp,24(sp)
  43aa30:	24050080 	li	a1,128
  43aa34:	0320f809 	jalr	t9
  43aa38:	27a40be8 	addiu	a0,sp,3048
  43aa3c:	8fa80c68 	lw	t0,3176(sp)
  43aa40:	27b80be8 	addiu	t8,sp,3048
  43aa44:	8d030000 	lw	v1,0(t0)
  43aa48:	240a0001 	li	t2,1
  43aa4c:	00037142 	srl	t6,v1,0x5
  43aa50:	000e7880 	sll	t7,t6,0x2
  43aa54:	01f81021 	addu	v0,t7,t8
  43aa58:	8c590000 	lw	t9,0(v0)
  43aa5c:	3069001f 	andi	t1,v1,0x1f
  43aa60:	012a5804 	sllv	t3,t2,t1
  43aa64:	8fbc0018 	lw	gp,24(sp)
  43aa68:	032b6025 	or	t4,t9,t3
  43aa6c:	ac4c0000 	sw	t4,0(v0)
  43aa70:	8d040004 	lw	a0,4(t0)
  43aa74:	00000000 	nop
  43aa78:	8c850000 	lw	a1,0(a0)
  43aa7c:	00000000 	nop
  43aa80:	8cad000c 	lw	t5,12(a1)
  43aa84:	00000000 	nop
  43aa88:	15a0001a 	bnez	t5,43aaf4 <FAMNextEvent+0xe8>
  43aa8c:	00000000 	nop
  43aa90:	8f998904 	lw	t9,-30460(gp)
  43aa94:	afa4002c 	sw	a0,44(sp)
  43aa98:	0320f809 	jalr	t9
  43aa9c:	00000000 	nop
  43aaa0:	8fbc0018 	lw	gp,24(sp)
  43aaa4:	8fa4002c 	lw	a0,44(sp)
  43aaa8:	2401ffff 	li	at,-1
  43aaac:	14410003 	bne	v0,at,43aabc <FAMNextEvent+0xb0>
  43aab0:	00000000 	nop
  43aab4:	10000022 	b	43ab40 <FAMNextEvent+0x134>
  43aab8:	2402ffff 	li	v0,-1
  43aabc:	8c850000 	lw	a1,0(a0)
  43aac0:	00000000 	nop
  43aac4:	8cae179c 	lw	t6,6044(a1)
  43aac8:	00000000 	nop
  43aacc:	11c00003 	beqz	t6,43aadc <FAMNextEvent+0xd0>
  43aad0:	00000000 	nop
  43aad4:	1000001a 	b	43ab40 <FAMNextEvent+0x134>
  43aad8:	2402ffff 	li	v0,-1
  43aadc:	8caf000c 	lw	t7,12(a1)
  43aae0:	8fa80c68 	lw	t0,3176(sp)
  43aae4:	15e00003 	bnez	t7,43aaf4 <FAMNextEvent+0xe8>
  43aae8:	00000000 	nop
  43aaec:	10000014 	b	43ab40 <FAMNextEvent+0x134>
  43aaf0:	00001025 	move	v0,zero
  43aaf4:	8f998908 	lw	t9,-30456(gp)
  43aaf8:	8d050000 	lw	a1,0(t0)
  43aafc:	27a60030 	addiu	a2,sp,48
  43ab00:	0320f809 	jalr	t9
  43ab04:	24070400 	li	a3,1024
  43ab08:	8fbc0018 	lw	gp,24(sp)
  43ab0c:	2401ffff 	li	at,-1
  43ab10:	14410003 	bne	v0,at,43ab20 <FAMNextEvent+0x114>
  43ab14:	00000000 	nop
  43ab18:	10000009 	b	43ab40 <FAMNextEvent+0x134>
  43ab1c:	2402ffff 	li	v0,-1
  43ab20:	8f998024 	lw	t9,-32732(gp)
  43ab24:	8fa40c68 	lw	a0,3176(sp)
  43ab28:	8fa60c6c 	lw	a2,3180(sp)
  43ab2c:	2739a664 	addiu	t9,t9,-22940
  43ab30:	0320f809 	jalr	t9
  43ab34:	27a50030 	addiu	a1,sp,48
  43ab38:	8fbc0018 	lw	gp,24(sp)
  43ab3c:	24020001 	li	v0,1
  43ab40:	8fbf001c 	lw	ra,28(sp)
  43ab44:	27bd0c68 	addiu	sp,sp,3176
  43ab48:	03e00008 	jr	ra
  43ab4c:	00000000 	nop
