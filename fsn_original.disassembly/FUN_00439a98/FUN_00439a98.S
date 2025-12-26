# Function: FUN_00439a98
# Address: 0x00439a98 - 0x00439bcc
# Size: 0x134 (308 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439a98 <FAMOpen2+0xc>:
  439a98:	8f998024 	lw	t9,-32732(gp)
  439a9c:	27bdff00 	addiu	sp,sp,-256
  439aa0:	afbf0024 	sw	ra,36(sp)
  439aa4:	2739ace4 	addiu	t9,t9,-21276
  439aa8:	afbc0020 	sw	gp,32(sp)
  439aac:	afa40100 	sw	a0,256(sp)
  439ab0:	0320f809 	jalr	t9
  439ab4:	afa50104 	sw	a1,260(sp)
  439ab8:	8fbc0020 	lw	gp,32(sp)
  439abc:	00002025 	move	a0,zero
  439ac0:	8f9988f8 	lw	t9,-30472(gp)
  439ac4:	00000000 	nop
  439ac8:	0320f809 	jalr	t9
  439acc:	00000000 	nop
  439ad0:	8fbc0020 	lw	gp,32(sp)
  439ad4:	8fae0100 	lw	t6,256(sp)
  439ad8:	afa200fc 	sw	v0,252(sp)
  439adc:	adc20004 	sw	v0,4(t6)
  439ae0:	8f9988fc 	lw	t9,-30468(gp)
  439ae4:	3c057f00 	lui	a1,0x7f00
  439ae8:	3c060005 	lui	a2,0x5
  439aec:	34c6f75a 	ori	a2,a2,0xf75a
  439af0:	34a50001 	ori	a1,a1,0x1
  439af4:	00402025 	move	a0,v0
  439af8:	0320f809 	jalr	t9
  439afc:	24070001 	li	a3,1
  439b00:	8faf0100 	lw	t7,256(sp)
  439b04:	8fbc0020 	lw	gp,32(sp)
  439b08:	04410003 	bgez	v0,439b18 <FAMOpen2+0x8c>
  439b0c:	ade20000 	sw	v0,0(t7)
  439b10:	1000002a 	b	439bbc <FAMOpen2+0x130>
  439b14:	2402ffff 	li	v0,-1
  439b18:	8fb80104 	lw	t8,260(sp)
  439b1c:	00000000 	nop
  439b20:	13000026 	beqz	t8,439bbc <FAMOpen2+0x130>
  439b24:	00001025 	move	v0,zero
  439b28:	8f998314 	lw	t9,-31980(gp)
  439b2c:	00000000 	nop
  439b30:	0320f809 	jalr	t9
  439b34:	00000000 	nop
  439b38:	8fbc0020 	lw	gp,32(sp)
  439b3c:	afa20030 	sw	v0,48(sp)
  439b40:	8f9983d0 	lw	t9,-31792(gp)
  439b44:	00000000 	nop
  439b48:	0320f809 	jalr	t9
  439b4c:	00000000 	nop
  439b50:	8fbc0020 	lw	gp,32(sp)
  439b54:	8fb90104 	lw	t9,260(sp)
  439b58:	8f85806c 	lw	a1,-32660(gp)
  439b5c:	afb90010 	sw	t9,16(sp)
  439b60:	8f9983e4 	lw	t9,-31772(gp)
  439b64:	8fa60030 	lw	a2,48(sp)
  439b68:	27a40034 	addiu	a0,sp,52
  439b6c:	00403825 	move	a3,v0
  439b70:	0320f809 	jalr	t9
  439b74:	24a59e48 	addiu	a1,a1,-25016
  439b78:	8fbc0020 	lw	gp,32(sp)
  439b7c:	27a40034 	addiu	a0,sp,52
  439b80:	8f9983e0 	lw	t9,-31776(gp)
  439b84:	00000000 	nop
  439b88:	0320f809 	jalr	t9
  439b8c:	00000000 	nop
  439b90:	8fbc0020 	lw	gp,32(sp)
  439b94:	8fa80100 	lw	t0,256(sp)
  439b98:	8f998900 	lw	t9,-30464(gp)
  439b9c:	8fa400fc 	lw	a0,252(sp)
  439ba0:	8d050000 	lw	a1,0(t0)
  439ba4:	27a60034 	addiu	a2,sp,52
  439ba8:	0320f809 	jalr	t9
  439bac:	24470001 	addiu	a3,v0,1
  439bb0:	8fbc0020 	lw	gp,32(sp)
  439bb4:	00000000 	nop
  439bb8:	00001025 	move	v0,zero
  439bbc:	8fbf0024 	lw	ra,36(sp)
  439bc0:	27bd0100 	addiu	sp,sp,256
  439bc4:	03e00008 	jr	ra
  439bc8:	00000000 	nop
