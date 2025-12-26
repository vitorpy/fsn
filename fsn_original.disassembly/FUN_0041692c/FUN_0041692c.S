# Function: FUN_0041692c
# Address: 0x0041692c - 0x004169cc
# Size: 0xa0 (160 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041692c <rescanDatabase+0x1230>:
  41692c:	3c1c0fc0 	lui	gp,0xfc0
  416930:	279c7204 	addiu	gp,gp,29188
  416934:	0399e021 	addu	gp,gp,t9
  416938:	8f87806c 	lw	a3,-32660(gp)
  41693c:	8f9982cc 	lw	t9,-32052(gp)
  416940:	27bdffd8 	addiu	sp,sp,-40
  416944:	afbf001c 	sw	ra,28(sp)
  416948:	8ce76690 	lw	a3,26256(a3)
  41694c:	afbc0018 	sw	gp,24(sp)
  416950:	27a40020 	addiu	a0,sp,32
  416954:	24050008 	li	a1,8
  416958:	0320f809 	jalr	t9
  41695c:	24060001 	li	a2,1
  416960:	8fbc0018 	lw	gp,24(sp)
  416964:	24010001 	li	at,1
  416968:	10410010 	beq	v0,at,4169ac <rescanDatabase+0x12b0>
  41696c:	8fae0020 	lw	t6,32(sp)
  416970:	8f848098 	lw	a0,-32616(gp)
  416974:	8f85805c 	lw	a1,-32676(gp)
  416978:	8f9983f8 	lw	t9,-31752(gp)
  41697c:	24840020 	addiu	a0,a0,32
  416980:	0320f809 	jalr	t9
  416984:	24a5aba8 	addiu	a1,a1,-21592
  416988:	8fbc0018 	lw	gp,24(sp)
  41698c:	24040001 	li	a0,1
  416990:	8f9983a0 	lw	t9,-31840(gp)
  416994:	00000000 	nop
  416998:	0320f809 	jalr	t9
  41699c:	00000000 	nop
  4169a0:	8fbc0018 	lw	gp,24(sp)
  4169a4:	00000000 	nop
  4169a8:	8fae0020 	lw	t6,32(sp)
  4169ac:	8f818924 	lw	at,-30428(gp)
  4169b0:	8faf0024 	lw	t7,36(sp)
  4169b4:	ac2e0000 	sw	t6,0(at)
  4169b8:	8f818928 	lw	at,-30424(gp)
  4169bc:	8fbf001c 	lw	ra,28(sp)
  4169c0:	27bd0028 	addiu	sp,sp,40
  4169c4:	03e00008 	jr	ra
  4169c8:	ac2f0000 	sw	t7,0(at)
