# Function: FUN_0043ace4
# Address: 0x0043ace4 - 0x0043ade8
# Size: 0x104 (260 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043ace4 <FAMDebugLevel+0xc4>:
  43ace4:	3c1c0fbe 	lui	gp,0xfbe
  43ace8:	279c2e4c 	addiu	gp,gp,11852
  43acec:	0399e021 	addu	gp,gp,t9
  43acf0:	8f8e806c 	lw	t6,-32660(gp)
  43acf4:	27bdffe0 	addiu	sp,sp,-32
  43acf8:	8dce9f40 	lw	t6,-24768(t6)
  43acfc:	afbf001c 	sw	ra,28(sp)
  43ad00:	afbc0018 	sw	gp,24(sp)
  43ad04:	11c00034 	beqz	t6,43add8 <FAMDebugLevel+0x1b8>
  43ad08:	afb00014 	sw	s0,20(sp)
  43ad0c:	8f90806c 	lw	s0,-32660(gp)
  43ad10:	8f9983b8 	lw	t9,-31816(gp)
  43ad14:	26109e40 	addiu	s0,s0,-25024
  43ad18:	8e040000 	lw	a0,0(s0)
  43ad1c:	00000000 	nop
  43ad20:	00047880 	sll	t7,a0,0x2
  43ad24:	0320f809 	jalr	t9
  43ad28:	01e02025 	move	a0,t7
  43ad2c:	8fbc0018 	lw	gp,24(sp)
  43ad30:	00000000 	nop
  43ad34:	8f81806c 	lw	at,-32660(gp)
  43ad38:	8f9983b8 	lw	t9,-31816(gp)
  43ad3c:	ac227410 	sw	v0,29712(at)
  43ad40:	8e040000 	lw	a0,0(s0)
  43ad44:	00000000 	nop
  43ad48:	0004c080 	sll	t8,a0,0x2
  43ad4c:	0320f809 	jalr	t9
  43ad50:	03002025 	move	a0,t8
  43ad54:	8fbc0018 	lw	gp,24(sp)
  43ad58:	8e040000 	lw	a0,0(s0)
  43ad5c:	8f85806c 	lw	a1,-32660(gp)
  43ad60:	0004c880 	sll	t9,a0,0x2
  43ad64:	24a57414 	addiu	a1,a1,29716
  43ad68:	aca20000 	sw	v0,0(a1)
  43ad6c:	03202025 	move	a0,t9
  43ad70:	8f9983b8 	lw	t9,-31816(gp)
  43ad74:	00000000 	nop
  43ad78:	0320f809 	jalr	t9
  43ad7c:	00000000 	nop
  43ad80:	8fbc0018 	lw	gp,24(sp)
  43ad84:	00001825 	move	v1,zero
  43ad88:	8f81806c 	lw	at,-32660(gp)
  43ad8c:	8f85806c 	lw	a1,-32660(gp)
  43ad90:	ac227418 	sw	v0,29720(at)
  43ad94:	8e080000 	lw	t0,0(s0)
  43ad98:	00001025 	move	v0,zero
  43ad9c:	1900000b 	blez	t0,43adcc <FAMDebugLevel+0x1ac>
  43ada0:	24a57414 	addiu	a1,a1,29716
  43ada4:	2404ffff 	li	a0,-1
  43ada8:	8ca90000 	lw	t1,0(a1)
  43adac:	24630001 	addiu	v1,v1,1
  43adb0:	01225021 	addu	t2,t1,v0
  43adb4:	ad440000 	sw	a0,0(t2)
  43adb8:	8e0b0000 	lw	t3,0(s0)
  43adbc:	24420004 	addiu	v0,v0,4
  43adc0:	006b082a 	slt	at,v1,t3
  43adc4:	1420fff8 	bnez	at,43ada8 <FAMDebugLevel+0x188>
  43adc8:	00000000 	nop
  43adcc:	8f81806c 	lw	at,-32660(gp)
  43add0:	00000000 	nop
  43add4:	ac209f40 	sw	zero,-24768(at)
  43add8:	8fbf001c 	lw	ra,28(sp)
  43addc:	8fb00014 	lw	s0,20(sp)
  43ade0:	03e00008 	jr	ra
  43ade4:	27bd0020 	addiu	sp,sp,32
