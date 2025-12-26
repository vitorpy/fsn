# Function: setcolorsys
# Address: 0x004396ec - 0x0043982c
# Size: 0x140 (320 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004396ec <setcolorsys>:
  4396ec:	3c1c0fbe 	lui	gp,0xfbe
  4396f0:	279c4444 	addiu	gp,gp,17476
  4396f4:	0399e021 	addu	gp,gp,t9
  4396f8:	248effff 	addiu	t6,a0,-1
  4396fc:	27bdffe0 	addiu	sp,sp,-32
  439700:	2dc10005 	sltiu	at,t6,5
  439704:	afbf001c 	sw	ra,28(sp)
  439708:	afbc0018 	sw	gp,24(sp)
  43970c:	1020003b 	beqz	at,4397fc <setcolorsys+0x110>
  439710:	00803025 	move	a2,a0
  439714:	8f81805c 	lw	at,-32676(gp)
  439718:	000e7080 	sll	t6,t6,0x2
  43971c:	002e0821 	addu	at,at,t6
  439720:	8c2e5b28 	lw	t6,23336(at)
  439724:	00000000 	nop
  439728:	01dc7021 	addu	t6,t6,gp
  43972c:	01c00008 	jr	t6
  439730:	00000000 	nop
  439734:	8f8288c4 	lw	v0,-30524(gp)
  439738:	8f81806c 	lw	at,-32660(gp)
  43973c:	00000000 	nop
  439740:	ac229e30 	sw	v0,-25040(at)
  439744:	8f81806c 	lw	at,-32660(gp)
  439748:	00000000 	nop
  43974c:	ac229e34 	sw	v0,-25036(at)
  439750:	8f81806c 	lw	at,-32660(gp)
  439754:	10000031 	b	43981c <setcolorsys+0x130>
  439758:	ac269e38 	sw	a2,-25032(at)
  43975c:	8f8f88b4 	lw	t7,-30540(gp)
  439760:	8f81806c 	lw	at,-32660(gp)
  439764:	8f9888c8 	lw	t8,-30520(gp)
  439768:	ac2f9e30 	sw	t7,-25040(at)
  43976c:	8f81806c 	lw	at,-32660(gp)
  439770:	00000000 	nop
  439774:	ac389e34 	sw	t8,-25036(at)
  439778:	8f81806c 	lw	at,-32660(gp)
  43977c:	10000027 	b	43981c <setcolorsys+0x130>
  439780:	ac269e38 	sw	a2,-25032(at)
  439784:	8f9988bc 	lw	t9,-30532(gp)
  439788:	8f81806c 	lw	at,-32660(gp)
  43978c:	8f8888d0 	lw	t0,-30512(gp)
  439790:	ac399e30 	sw	t9,-25040(at)
  439794:	8f81806c 	lw	at,-32660(gp)
  439798:	00000000 	nop
  43979c:	ac289e34 	sw	t0,-25036(at)
  4397a0:	8f81806c 	lw	at,-32660(gp)
  4397a4:	1000001d 	b	43981c <setcolorsys+0x130>
  4397a8:	ac269e38 	sw	a2,-25032(at)
  4397ac:	8f8988b8 	lw	t1,-30536(gp)
  4397b0:	8f81806c 	lw	at,-32660(gp)
  4397b4:	8f8a88cc 	lw	t2,-30516(gp)
  4397b8:	ac299e30 	sw	t1,-25040(at)
  4397bc:	8f81806c 	lw	at,-32660(gp)
  4397c0:	00000000 	nop
  4397c4:	ac2a9e34 	sw	t2,-25036(at)
  4397c8:	8f81806c 	lw	at,-32660(gp)
  4397cc:	10000013 	b	43981c <setcolorsys+0x130>
  4397d0:	ac269e38 	sw	a2,-25032(at)
  4397d4:	8f8b88c0 	lw	t3,-30528(gp)
  4397d8:	8f81806c 	lw	at,-32660(gp)
  4397dc:	8f8c88d4 	lw	t4,-30508(gp)
  4397e0:	ac2b9e30 	sw	t3,-25040(at)
  4397e4:	8f81806c 	lw	at,-32660(gp)
  4397e8:	00000000 	nop
  4397ec:	ac2c9e34 	sw	t4,-25036(at)
  4397f0:	8f81806c 	lw	at,-32660(gp)
  4397f4:	10000009 	b	43981c <setcolorsys+0x130>
  4397f8:	ac269e38 	sw	a2,-25032(at)
  4397fc:	8f848098 	lw	a0,-32616(gp)
  439800:	8f85805c 	lw	a1,-32676(gp)
  439804:	8f9983f8 	lw	t9,-31752(gp)
  439808:	24840020 	addiu	a0,a0,32
  43980c:	0320f809 	jalr	t9
  439810:	24a55a40 	addiu	a1,a1,23104
  439814:	8fbc0018 	lw	gp,24(sp)
  439818:	00000000 	nop
  43981c:	8fbf001c 	lw	ra,28(sp)
  439820:	27bd0020 	addiu	sp,sp,32
  439824:	03e00008 	jr	ra
  439828:	00000000 	nop
