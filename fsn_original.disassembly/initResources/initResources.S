# Function: initResources
# Address: 0x0042b838 - 0x0042b9e4
# Size: 0x1ac (428 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b838 <initResources>:
  42b838:	3c1c0fbf 	lui	gp,0xfbf
  42b83c:	279c22f8 	addiu	gp,gp,8952
  42b840:	0399e021 	addu	gp,gp,t9
  42b844:	27bdffd0 	addiu	sp,sp,-48
  42b848:	afa40030 	sw	a0,48(sp)
  42b84c:	8f848a00 	lw	a0,-30208(gp)
  42b850:	8f8580a4 	lw	a1,-32604(gp)
  42b854:	8f86805c 	lw	a2,-32676(gp)
  42b858:	8f878020 	lw	a3,-32736(gp)
  42b85c:	8f9981a4 	lw	t9,-32348(gp)
  42b860:	afbf0024 	sw	ra,36(sp)
  42b864:	8c840000 	lw	a0,0(a0)
  42b868:	afbc0020 	sw	gp,32(sp)
  42b86c:	afa00010 	sw	zero,16(sp)
  42b870:	afa00014 	sw	zero,20(sp)
  42b874:	24a50705 	addiu	a1,a1,1797
  42b878:	24c62c2c 	addiu	a2,a2,11308
  42b87c:	0320f809 	jalr	t9
  42b880:	24e7b6f8 	addiu	a3,a3,-18696
  42b884:	8fbc0020 	lw	gp,32(sp)
  42b888:	8fa40030 	lw	a0,48(sp)
  42b88c:	8f85806c 	lw	a1,-32660(gp)
  42b890:	8f86806c 	lw	a2,-32660(gp)
  42b894:	8f9981ac 	lw	t9,-32340(gp)
  42b898:	24070001 	li	a3,1
  42b89c:	afa00010 	sw	zero,16(sp)
  42b8a0:	afa00014 	sw	zero,20(sp)
  42b8a4:	24a56e20 	addiu	a1,a1,28192
  42b8a8:	0320f809 	jalr	t9
  42b8ac:	24c68918 	addiu	a2,a2,-30440
  42b8b0:	8fbc0020 	lw	gp,32(sp)
  42b8b4:	00000000 	nop
  42b8b8:	8f83806c 	lw	v1,-32660(gp)
  42b8bc:	00000000 	nop
  42b8c0:	24636e20 	addiu	v1,v1,28192
  42b8c4:	8c640000 	lw	a0,0(v1)
  42b8c8:	00000000 	nop
  42b8cc:	14800013 	bnez	a0,42b91c <initResources+0xe4>
  42b8d0:	00000000 	nop
  42b8d4:	8f998344 	lw	t9,-31932(gp)
  42b8d8:	24040009 	li	a0,9
  42b8dc:	0320f809 	jalr	t9
  42b8e0:	00000000 	nop
  42b8e4:	8fbc0020 	lw	gp,32(sp)
  42b8e8:	28410004 	slti	at,v0,4
  42b8ec:	8f83806c 	lw	v1,-32660(gp)
  42b8f0:	10200006 	beqz	at,42b90c <initResources+0xd4>
  42b8f4:	24636e20 	addiu	v1,v1,28192
  42b8f8:	8f8e805c 	lw	t6,-32676(gp)
  42b8fc:	00000000 	nop
  42b900:	25c42c34 	addiu	a0,t6,11316
  42b904:	10000005 	b	42b91c <initResources+0xe4>
  42b908:	ac640000 	sw	a0,0(v1)
  42b90c:	8f8f805c 	lw	t7,-32676(gp)
  42b910:	00000000 	nop
  42b914:	25e42c3c 	addiu	a0,t7,11324
  42b918:	ac640000 	sw	a0,0(v1)
  42b91c:	1080001c 	beqz	a0,42b990 <initResources+0x158>
  42b920:	24070076 	li	a3,118
  42b924:	8f858084 	lw	a1,-32636(gp)
  42b928:	8f99839c 	lw	t9,-31844(gp)
  42b92c:	8fa60030 	lw	a2,48(sp)
  42b930:	8ca50000 	lw	a1,0(a1)
  42b934:	00003825 	move	a3,zero
  42b938:	0320f809 	jalr	t9
  42b93c:	afa00010 	sw	zero,16(sp)
  42b940:	8fbc0020 	lw	gp,32(sp)
  42b944:	afa2002c 	sw	v0,44(sp)
  42b948:	8f868068 	lw	a2,-32664(gp)
  42b94c:	8f9981ac 	lw	t9,-32340(gp)
  42b950:	8f858a24 	lw	a1,-30172(gp)
  42b954:	00402025 	move	a0,v0
  42b958:	24070076 	li	a3,118
  42b95c:	afa00010 	sw	zero,16(sp)
  42b960:	afa00014 	sw	zero,20(sp)
  42b964:	0320f809 	jalr	t9
  42b968:	24c67c30 	addiu	a2,a2,31792
  42b96c:	8fbc0020 	lw	gp,32(sp)
  42b970:	8fa4002c 	lw	a0,44(sp)
  42b974:	8f998138 	lw	t9,-32456(gp)
  42b978:	00000000 	nop
  42b97c:	0320f809 	jalr	t9
  42b980:	00000000 	nop
  42b984:	8fbc0020 	lw	gp,32(sp)
  42b988:	1000000b 	b	42b9b8 <initResources+0x180>
  42b98c:	00000000 	nop
  42b990:	8f868068 	lw	a2,-32664(gp)
  42b994:	8f9981ac 	lw	t9,-32340(gp)
  42b998:	8fa40030 	lw	a0,48(sp)
  42b99c:	8f858a24 	lw	a1,-30172(gp)
  42b9a0:	afa00010 	sw	zero,16(sp)
  42b9a4:	afa00014 	sw	zero,20(sp)
  42b9a8:	0320f809 	jalr	t9
  42b9ac:	24c67c30 	addiu	a2,a2,31792
  42b9b0:	8fbc0020 	lw	gp,32(sp)
  42b9b4:	00000000 	nop
  42b9b8:	8f85805c 	lw	a1,-32676(gp)
  42b9bc:	8f86805c 	lw	a2,-32676(gp)
  42b9c0:	8f998810 	lw	t9,-30704(gp)
  42b9c4:	8fa40030 	lw	a0,48(sp)
  42b9c8:	24a52c44 	addiu	a1,a1,11332
  42b9cc:	0320f809 	jalr	t9
  42b9d0:	24c62c4c 	addiu	a2,a2,11340
  42b9d4:	8fbf0024 	lw	ra,36(sp)
  42b9d8:	8fbc0020 	lw	gp,32(sp)
  42b9dc:	03e00008 	jr	ra
  42b9e0:	27bd0030 	addiu	sp,sp,48
