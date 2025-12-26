# Function: FUN_00416834
# Address: 0x00416834 - 0x0041692c
# Size: 0xf8 (248 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00416834 <rescanDatabase+0x1138>:
  416834:	3c1c0fc0 	lui	gp,0xfc0
  416838:	279c72fc 	addiu	gp,gp,29436
  41683c:	0399e021 	addu	gp,gp,t9
  416840:	8f87806c 	lw	a3,-32660(gp)
  416844:	8f9982cc 	lw	t9,-32052(gp)
  416848:	27bdffd8 	addiu	sp,sp,-40
  41684c:	afbf001c 	sw	ra,28(sp)
  416850:	8ce76690 	lw	a3,26256(a3)
  416854:	afbc0018 	sw	gp,24(sp)
  416858:	27a40024 	addiu	a0,sp,36
  41685c:	24050002 	li	a1,2
  416860:	0320f809 	jalr	t9
  416864:	24060001 	li	a2,1
  416868:	8fbc0018 	lw	gp,24(sp)
  41686c:	24030001 	li	v1,1
  416870:	10430010 	beq	v0,v1,4168b4 <rescanDatabase+0x11b8>
  416874:	87a20024 	lh	v0,36(sp)
  416878:	8f848098 	lw	a0,-32616(gp)
  41687c:	8f85805c 	lw	a1,-32676(gp)
  416880:	8f9983f8 	lw	t9,-31752(gp)
  416884:	24840020 	addiu	a0,a0,32
  416888:	0320f809 	jalr	t9
  41688c:	24a5ab74 	addiu	a1,a1,-21644
  416890:	8fbc0018 	lw	gp,24(sp)
  416894:	24040001 	li	a0,1
  416898:	8f9983a0 	lw	t9,-31840(gp)
  41689c:	00000000 	nop
  4168a0:	0320f809 	jalr	t9
  4168a4:	00000000 	nop
  4168a8:	8fbc0018 	lw	gp,24(sp)
  4168ac:	24030001 	li	v1,1
  4168b0:	87a20024 	lh	v0,36(sp)
  4168b4:	00000000 	nop
  4168b8:	304e0001 	andi	t6,v0,0x1
  4168bc:	11c00004 	beqz	t6,4168d0 <rescanDatabase+0x11d4>
  4168c0:	304f0002 	andi	t7,v0,0x2
  4168c4:	8f81891c 	lw	at,-30436(gp)
  4168c8:	10000004 	b	4168dc <rescanDatabase+0x11e0>
  4168cc:	a0230000 	sb	v1,0(at)
  4168d0:	8f81891c 	lw	at,-30436(gp)
  4168d4:	00000000 	nop
  4168d8:	a0200000 	sb	zero,0(at)
  4168dc:	11e00004 	beqz	t7,4168f0 <rescanDatabase+0x11f4>
  4168e0:	30580004 	andi	t8,v0,0x4
  4168e4:	8f818918 	lw	at,-30440(gp)
  4168e8:	10000004 	b	4168fc <rescanDatabase+0x1200>
  4168ec:	a0230000 	sb	v1,0(at)
  4168f0:	8f818918 	lw	at,-30440(gp)
  4168f4:	00000000 	nop
  4168f8:	a0200000 	sb	zero,0(at)
  4168fc:	13000004 	beqz	t8,416910 <rescanDatabase+0x1214>
  416900:	00000000 	nop
  416904:	8f818920 	lw	at,-30432(gp)
  416908:	10000004 	b	41691c <rescanDatabase+0x1220>
  41690c:	a0230000 	sb	v1,0(at)
  416910:	8f818920 	lw	at,-30432(gp)
  416914:	00000000 	nop
  416918:	a0200000 	sb	zero,0(at)
  41691c:	8fbf001c 	lw	ra,28(sp)
  416920:	27bd0028 	addiu	sp,sp,40
  416924:	03e00008 	jr	ra
  416928:	00000000 	nop
