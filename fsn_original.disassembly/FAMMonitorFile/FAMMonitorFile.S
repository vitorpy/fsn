# Function: FAMMonitorFile
# Address: 0x00439ff8 - 0x0043a0d0
# Size: 0xd8 (216 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439ff8 <FAMMonitorFile>:
  439ff8:	3c1c0fbe 	lui	gp,0xfbe
  439ffc:	279c3b38 	addiu	gp,gp,15160
  43a000:	0399e021 	addu	gp,gp,t9
  43a004:	27bdffd8 	addiu	sp,sp,-40
  43a008:	8f998024 	lw	t9,-32732(gp)
  43a00c:	afbf0024 	sw	ra,36(sp)
  43a010:	2739ade8 	addiu	t9,t9,-21016
  43a014:	afbc0020 	sw	gp,32(sp)
  43a018:	afa40028 	sw	a0,40(sp)
  43a01c:	afa5002c 	sw	a1,44(sp)
  43a020:	afa60030 	sw	a2,48(sp)
  43a024:	0320f809 	jalr	t9
  43a028:	afa70034 	sw	a3,52(sp)
  43a02c:	8fbc0020 	lw	gp,32(sp)
  43a030:	2401ffff 	li	at,-1
  43a034:	14410003 	bne	v0,at,43a044 <FAMMonitorFile+0x4c>
  43a038:	00401825 	move	v1,v0
  43a03c:	10000020 	b	43a0c0 <FAMMonitorFile+0xc8>
  43a040:	2402ffff 	li	v0,-1
  43a044:	8fae0030 	lw	t6,48(sp)
  43a048:	00000000 	nop
  43a04c:	adc30000 	sw	v1,0(t6)
  43a050:	8f9983e0 	lw	t9,-31776(gp)
  43a054:	8fa4002c 	lw	a0,44(sp)
  43a058:	0320f809 	jalr	t9
  43a05c:	00000000 	nop
  43a060:	8fbc0020 	lw	gp,32(sp)
  43a064:	2c410401 	sltiu	at,v0,1025
  43a068:	1420000c 	bnez	at,43a09c <FAMMonitorFile+0xa4>
  43a06c:	24180057 	li	t8,87
  43a070:	8f85806c 	lw	a1,-32660(gp)
  43a074:	8f9983c8 	lw	t9,-31800(gp)
  43a078:	24040001 	li	a0,1
  43a07c:	0320f809 	jalr	t9
  43a080:	24a59e94 	addiu	a1,a1,-24940
  43a084:	8fbc0020 	lw	gp,32(sp)
  43a088:	240f004e 	li	t7,78
  43a08c:	8f818090 	lw	at,-32624(gp)
  43a090:	2402ffff 	li	v0,-1
  43a094:	1000000a 	b	43a0c0 <FAMMonitorFile+0xc8>
  43a098:	ac2f0000 	sw	t7,0(at)
  43a09c:	8f9988e4 	lw	t9,-30492(gp)
  43a0a0:	8fa40028 	lw	a0,40(sp)
  43a0a4:	8fa5002c 	lw	a1,44(sp)
  43a0a8:	8fa60030 	lw	a2,48(sp)
  43a0ac:	8fa70034 	lw	a3,52(sp)
  43a0b0:	0320f809 	jalr	t9
  43a0b4:	afb80010 	sw	t8,16(sp)
  43a0b8:	8fbc0020 	lw	gp,32(sp)
  43a0bc:	00001025 	move	v0,zero
  43a0c0:	8fbf0024 	lw	ra,36(sp)
  43a0c4:	27bd0028 	addiu	sp,sp,40
  43a0c8:	03e00008 	jr	ra
  43a0cc:	00000000 	nop
