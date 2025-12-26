# Function: FUN_00433904
# Address: 0x00433904 - 0x00433ae8
# Size: 0x1e4 (484 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433904 <LoadIntlResources+0xc>:
  433904:	27bdffc0 	addiu	sp,sp,-64
  433908:	8f9983b8 	lw	t9,-31816(gp)
  43390c:	afbf002c 	sw	ra,44(sp)
  433910:	afa40040 	sw	a0,64(sp)
  433914:	240c0074 	li	t4,116
  433918:	afbc0028 	sw	gp,40(sp)
  43391c:	afa50044 	sw	a1,68(sp)
  433920:	afa60048 	sw	a2,72(sp)
  433924:	afac0030 	sw	t4,48(sp)
  433928:	0320f809 	jalr	t9
  43392c:	24040cb0 	li	a0,3248
  433930:	8fbc0028 	lw	gp,40(sp)
  433934:	8fac0030 	lw	t4,48(sp)
  433938:	00406825 	move	t5,v0
  43393c:	00401825 	move	v1,v0
  433940:	1000001b 	b	4339b0 <LoadIntlResources+0xb8>
  433944:	00005025 	move	t2,zero
  433948:	8f8f806c 	lw	t7,-32660(gp)
  43394c:	8f8480a4 	lw	a0,-32604(gp)
  433950:	000070c0 	sll	t6,zero,0x3
  433954:	25ef9670 	addiu	t7,t7,-27024
  433958:	01cf1021 	addu	v0,t6,t7
  43395c:	00003825 	move	a3,zero
  433960:	00002880 	sll	a1,zero,0x2
  433964:	24060004 	li	a2,4
  433968:	24840705 	addiu	a0,a0,1797
  43396c:	ac600004 	sw	zero,4(v1)
  433970:	ac640008 	sw	a0,8(v1)
  433974:	ac66000c 	sw	a2,12(v1)
  433978:	ac640014 	sw	a0,20(v1)
  43397c:	ac650010 	sw	a1,16(v1)
  433980:	8c580000 	lw	t8,0(v0)
  433984:	254a0001 	addiu	t2,t2,1
  433988:	ac780000 	sw	t8,0(v1)
  43398c:	8c590004 	lw	t9,4(v0)
  433990:	24a50004 	addiu	a1,a1,4
  433994:	24420008 	addiu	v0,v0,8
  433998:	2463001c 	addiu	v1,v1,28
  43399c:	14eafff3 	bne	a3,t2,43396c <LoadIntlResources+0x74>
  4339a0:	ac79fffc 	sw	t9,-4(v1)
  4339a4:	24010074 	li	at,116
  4339a8:	11410039 	beq	t2,at,433a90 <LoadIntlResources+0x198>
  4339ac:	00000000 	nop
  4339b0:	8f8f806c 	lw	t7,-32660(gp)
  4339b4:	000a2880 	sll	a1,t2,0x2
  4339b8:	8f8480a4 	lw	a0,-32604(gp)
  4339bc:	000a70c0 	sll	t6,t2,0x3
  4339c0:	000c5880 	sll	t3,t4,0x2
  4339c4:	25ef9670 	addiu	t7,t7,-27024
  4339c8:	01cf1021 	addu	v0,t6,t7
  4339cc:	256b000c 	addiu	t3,t3,12
  4339d0:	24a80004 	addiu	t0,a1,4
  4339d4:	24a90008 	addiu	t1,a1,8
  4339d8:	24a7000c 	addiu	a3,a1,12
  4339dc:	24060004 	li	a2,4
  4339e0:	24840705 	addiu	a0,a0,1797
  4339e4:	ac600004 	sw	zero,4(v1)
  4339e8:	ac640008 	sw	a0,8(v1)
  4339ec:	ac66000c 	sw	a2,12(v1)
  4339f0:	ac640014 	sw	a0,20(v1)
  4339f4:	ac650010 	sw	a1,16(v1)
  4339f8:	8c580000 	lw	t8,0(v0)
  4339fc:	24a50010 	addiu	a1,a1,16
  433a00:	ac780000 	sw	t8,0(v1)
  433a04:	8c590004 	lw	t9,4(v0)
  433a08:	ac68002c 	sw	t0,44(v1)
  433a0c:	ac640030 	sw	a0,48(v1)
  433a10:	ac660028 	sw	a2,40(v1)
  433a14:	ac640024 	sw	a0,36(v1)
  433a18:	ac600020 	sw	zero,32(v1)
  433a1c:	ac790018 	sw	t9,24(v1)
  433a20:	8c4e0008 	lw	t6,8(v0)
  433a24:	25080010 	addiu	t0,t0,16
  433a28:	ac6e001c 	sw	t6,28(v1)
  433a2c:	8c4f000c 	lw	t7,12(v0)
  433a30:	ac690048 	sw	t1,72(v1)
  433a34:	ac64004c 	sw	a0,76(v1)
  433a38:	ac660044 	sw	a2,68(v1)
  433a3c:	ac640040 	sw	a0,64(v1)
  433a40:	ac60003c 	sw	zero,60(v1)
  433a44:	ac6f0034 	sw	t7,52(v1)
  433a48:	8c580010 	lw	t8,16(v0)
  433a4c:	25290010 	addiu	t1,t1,16
  433a50:	ac780038 	sw	t8,56(v1)
  433a54:	8c590014 	lw	t9,20(v0)
  433a58:	ac670064 	sw	a3,100(v1)
  433a5c:	ac640068 	sw	a0,104(v1)
  433a60:	ac660060 	sw	a2,96(v1)
  433a64:	ac64005c 	sw	a0,92(v1)
  433a68:	ac600058 	sw	zero,88(v1)
  433a6c:	ac790050 	sw	t9,80(v1)
  433a70:	8c4e0018 	lw	t6,24(v0)
  433a74:	24e70010 	addiu	a3,a3,16
  433a78:	ac6e0054 	sw	t6,84(v1)
  433a7c:	8c4f001c 	lw	t7,28(v0)
  433a80:	24420020 	addiu	v0,v0,32
  433a84:	24630070 	addiu	v1,v1,112
  433a88:	14ebffd6 	bne	a3,t3,4339e4 <LoadIntlResources+0xec>
  433a8c:	ac6ffffc 	sw	t7,-4(v1)
  433a90:	8f99850c 	lw	t9,-31476(gp)
  433a94:	8fa40040 	lw	a0,64(sp)
  433a98:	8f858a68 	lw	a1,-30104(gp)
  433a9c:	8fa60044 	lw	a2,68(sp)
  433aa0:	8fa70048 	lw	a3,72(sp)
  433aa4:	24180074 	li	t8,116
  433aa8:	afb80014 	sw	t8,20(sp)
  433aac:	afad0010 	sw	t5,16(sp)
  433ab0:	afa00018 	sw	zero,24(sp)
  433ab4:	afa0001c 	sw	zero,28(sp)
  433ab8:	0320f809 	jalr	t9
  433abc:	afad0038 	sw	t5,56(sp)
  433ac0:	8fbc0028 	lw	gp,40(sp)
  433ac4:	8fa40038 	lw	a0,56(sp)
  433ac8:	8f9980c0 	lw	t9,-32576(gp)
  433acc:	00000000 	nop
  433ad0:	0320f809 	jalr	t9
  433ad4:	00000000 	nop
  433ad8:	8fbf002c 	lw	ra,44(sp)
  433adc:	8fbc0028 	lw	gp,40(sp)
  433ae0:	03e00008 	jr	ra
  433ae4:	27bd0040 	addiu	sp,sp,64
