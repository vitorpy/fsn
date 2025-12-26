# Function: preExit
# Address: 0x00418920 - 0x004189a4
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00418920 <preExit>:
  418920:	3c1c0fc0 	lui	gp,0xfc0
  418924:	279c5210 	addiu	gp,gp,21008
  418928:	0399e021 	addu	gp,gp,t9
  41892c:	8f8e8a24 	lw	t6,-30172(gp)
  418930:	27bdffe0 	addiu	sp,sp,-32
  418934:	91ce0000 	lbu	t6,0(t6)
  418938:	afbf001c 	sw	ra,28(sp)
  41893c:	15c00015 	bnez	t6,418994 <preExit+0x74>
  418940:	afbc0018 	sw	gp,24(sp)
  418944:	8f848a10 	lw	a0,-30192(gp)
  418948:	8f9987e8 	lw	t9,-30744(gp)
  41894c:	8c840000 	lw	a0,0(a0)
  418950:	0320f809 	jalr	t9
  418954:	00000000 	nop
  418958:	8fbc0018 	lw	gp,24(sp)
  41895c:	00000000 	nop
  418960:	8f998710 	lw	t9,-30960(gp)
  418964:	00000000 	nop
  418968:	0320f809 	jalr	t9
  41896c:	00000000 	nop
  418970:	8fbc0018 	lw	gp,24(sp)
  418974:	00000000 	nop
  418978:	8f998018 	lw	t9,-32744(gp)
  41897c:	00000000 	nop
  418980:	27394da4 	addiu	t9,t9,19876
  418984:	0320f809 	jalr	t9
  418988:	00000000 	nop
  41898c:	8fbc0018 	lw	gp,24(sp)
  418990:	00000000 	nop
  418994:	8fbf001c 	lw	ra,28(sp)
  418998:	27bd0020 	addiu	sp,sp,32
  41899c:	03e00008 	jr	ra
  4189a0:	00000000 	nop
