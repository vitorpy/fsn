# Function: FAMMonitorDirectory
# Address: 0x00439ee0 - 0x00439fb8
# Size: 0xd8 (216 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439ee0 <FAMMonitorDirectory>:
  439ee0:	3c1c0fbe 	lui	gp,0xfbe
  439ee4:	279c3c50 	addiu	gp,gp,15440
  439ee8:	0399e021 	addu	gp,gp,t9
  439eec:	27bdffd8 	addiu	sp,sp,-40
  439ef0:	8f998024 	lw	t9,-32732(gp)
  439ef4:	afbf0024 	sw	ra,36(sp)
  439ef8:	2739ade8 	addiu	t9,t9,-21016
  439efc:	afbc0020 	sw	gp,32(sp)
  439f00:	afa40028 	sw	a0,40(sp)
  439f04:	afa5002c 	sw	a1,44(sp)
  439f08:	afa60030 	sw	a2,48(sp)
  439f0c:	0320f809 	jalr	t9
  439f10:	afa70034 	sw	a3,52(sp)
  439f14:	8fbc0020 	lw	gp,32(sp)
  439f18:	2401ffff 	li	at,-1
  439f1c:	14410003 	bne	v0,at,439f2c <FAMMonitorDirectory+0x4c>
  439f20:	00401825 	move	v1,v0
  439f24:	10000020 	b	439fa8 <FAMMonitorDirectory+0xc8>
  439f28:	2402ffff 	li	v0,-1
  439f2c:	8fae0030 	lw	t6,48(sp)
  439f30:	00000000 	nop
  439f34:	adc30000 	sw	v1,0(t6)
  439f38:	8f9983e0 	lw	t9,-31776(gp)
  439f3c:	8fa4002c 	lw	a0,44(sp)
  439f40:	0320f809 	jalr	t9
  439f44:	00000000 	nop
  439f48:	8fbc0020 	lw	gp,32(sp)
  439f4c:	2c410401 	sltiu	at,v0,1025
  439f50:	1420000c 	bnez	at,439f84 <FAMMonitorDirectory+0xa4>
  439f54:	2418004d 	li	t8,77
  439f58:	8f85806c 	lw	a1,-32660(gp)
  439f5c:	8f9983c8 	lw	t9,-31800(gp)
  439f60:	24040001 	li	a0,1
  439f64:	0320f809 	jalr	t9
  439f68:	24a59e84 	addiu	a1,a1,-24956
  439f6c:	8fbc0020 	lw	gp,32(sp)
  439f70:	240f004e 	li	t7,78
  439f74:	8f818090 	lw	at,-32624(gp)
  439f78:	2402ffff 	li	v0,-1
  439f7c:	1000000a 	b	439fa8 <FAMMonitorDirectory+0xc8>
  439f80:	ac2f0000 	sw	t7,0(at)
  439f84:	8f9988e4 	lw	t9,-30492(gp)
  439f88:	8fa40028 	lw	a0,40(sp)
  439f8c:	8fa5002c 	lw	a1,44(sp)
  439f90:	8fa60030 	lw	a2,48(sp)
  439f94:	8fa70034 	lw	a3,52(sp)
  439f98:	0320f809 	jalr	t9
  439f9c:	afb80010 	sw	t8,16(sp)
  439fa0:	8fbc0020 	lw	gp,32(sp)
  439fa4:	00001025 	move	v0,zero
  439fa8:	8fbf0024 	lw	ra,36(sp)
  439fac:	27bd0028 	addiu	sp,sp,40
  439fb0:	03e00008 	jr	ra
  439fb4:	00000000 	nop
