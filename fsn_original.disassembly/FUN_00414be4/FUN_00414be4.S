# Function: FUN_00414be4
# Address: 0x00414be4 - 0x00414cf0
# Size: 0x10c (268 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00414be4 <findDirByFullName+0x1550>:
  414be4:	3c1c0fc1 	lui	gp,0xfc1
  414be8:	279c8f4c 	addiu	gp,gp,-28852
  414bec:	0399e021 	addu	gp,gp,t9
  414bf0:	8f8e809c 	lw	t6,-32612(gp)
  414bf4:	27bdffa0 	addiu	sp,sp,-96
  414bf8:	8dce0000 	lw	t6,0(t6)
  414bfc:	afb00014 	sw	s0,20(sp)
  414c00:	00808025 	move	s0,a0
  414c04:	afbf001c 	sw	ra,28(sp)
  414c08:	11c00008 	beqz	t6,414c2c <findDirByFullName+0x1598>
  414c0c:	afbc0018 	sw	gp,24(sp)
  414c10:	8f998284 	lw	t9,-32124(gp)
  414c14:	24040005 	li	a0,5
  414c18:	0320f809 	jalr	t9
  414c1c:	02002825 	move	a1,s0
  414c20:	8fbc0018 	lw	gp,24(sp)
  414c24:	10000014 	b	414c78 <findDirByFullName+0x15e4>
  414c28:	00000000 	nop
  414c2c:	8e0f0000 	lw	t7,0(s0)
  414c30:	00000000 	nop
  414c34:	25f8ffff 	addiu	t8,t7,-1
  414c38:	07010008 	bgez	t8,414c5c <findDirByFullName+0x15c8>
  414c3c:	ae180000 	sw	t8,0(s0)
  414c40:	8f998288 	lw	t9,-32120(gp)
  414c44:	24040005 	li	a0,5
  414c48:	0320f809 	jalr	t9
  414c4c:	02002825 	move	a1,s0
  414c50:	8fbc0018 	lw	gp,24(sp)
  414c54:	10000008 	b	414c78 <findDirByFullName+0x15e4>
  414c58:	00000000 	nop
  414c5c:	8e090004 	lw	t1,4(s0)
  414c60:	24080005 	li	t0,5
  414c64:	a1280000 	sb	t0,0(t1)
  414c68:	8e0a0004 	lw	t2,4(s0)
  414c6c:	00000000 	nop
  414c70:	254b0001 	addiu	t3,t2,1
  414c74:	ae0b0004 	sw	t3,4(s0)
  414c78:	8f8c898c 	lw	t4,-30324(gp)
  414c7c:	8f8d897c 	lw	t5,-30340(gp)
  414c80:	8d8c0000 	lw	t4,0(t4)
  414c84:	8dad0000 	lw	t5,0(t5)
  414c88:	a7ac005c 	sh	t4,92(sp)
  414c8c:	8f99828c 	lw	t9,-32116(gp)
  414c90:	91ae0c51 	lbu	t6,3153(t5)
  414c94:	27a4005c 	addiu	a0,sp,92
  414c98:	24050004 	li	a1,4
  414c9c:	24060001 	li	a2,1
  414ca0:	02003825 	move	a3,s0
  414ca4:	0320f809 	jalr	t9
  414ca8:	a3ae005e 	sb	t6,94(sp)
  414cac:	8fbc0018 	lw	gp,24(sp)
  414cb0:	27a40024 	addiu	a0,sp,36
  414cb4:	8f9987b4 	lw	t9,-30796(gp)
  414cb8:	00000000 	nop
  414cbc:	0320f809 	jalr	t9
  414cc0:	00000000 	nop
  414cc4:	8fbc0018 	lw	gp,24(sp)
  414cc8:	27a40024 	addiu	a0,sp,36
  414ccc:	8f9987d0 	lw	t9,-30768(gp)
  414cd0:	02002825 	move	a1,s0
  414cd4:	0320f809 	jalr	t9
  414cd8:	00000000 	nop
  414cdc:	8fbf001c 	lw	ra,28(sp)
  414ce0:	8fbc0018 	lw	gp,24(sp)
  414ce4:	8fb00014 	lw	s0,20(sp)
  414ce8:	03e00008 	jr	ra
  414cec:	27bd0060 	addiu	sp,sp,96
