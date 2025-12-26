# Function: FUN_00426244
# Address: 0x00426244 - 0x00426310
# Size: 0xcc (204 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00426244 <draw_second_pick+0x36c>:
  426244:	3c1c0fbf 	lui	gp,0xfbf
  426248:	279c78ec 	addiu	gp,gp,30956
  42624c:	0399e021 	addu	gp,gp,t9
  426250:	27bdffd8 	addiu	sp,sp,-40
  426254:	afbf0024 	sw	ra,36(sp)
  426258:	afbc0020 	sw	gp,32(sp)
  42625c:	afb2001c 	sw	s2,28(sp)
  426260:	afb10018 	sw	s1,24(sp)
  426264:	afb00014 	sw	s0,20(sp)
  426268:	8c820074 	lw	v0,116(a0)
  42626c:	00809025 	move	s2,a0
  426270:	000278c0 	sll	t7,v0,0x3
  426274:	05e10020 	bgez	t7,4262f8 <draw_second_pick+0x420>
  426278:	0002c080 	sll	t8,v0,0x2
  42627c:	0018cfc2 	srl	t9,t8,0x1f
  426280:	17200006 	bnez	t9,42629c <draw_second_pick+0x3c4>
  426284:	00000000 	nop
  426288:	94880074 	lhu	t0,116(a0)
  42628c:	00000000 	nop
  426290:	31090001 	andi	t1,t0,0x1
  426294:	11200007 	beqz	t1,4262b4 <draw_second_pick+0x3dc>
  426298:	00000000 	nop
  42629c:	8f9986d8 	lw	t9,-31016(gp)
  4262a0:	02402025 	move	a0,s2
  4262a4:	0320f809 	jalr	t9
  4262a8:	00000000 	nop
  4262ac:	8fbc0020 	lw	gp,32(sp)
  4262b0:	00000000 	nop
  4262b4:	8e4a0014 	lw	t2,20(s2)
  4262b8:	00008025 	move	s0,zero
  4262bc:	1940000e 	blez	t2,4262f8 <draw_second_pick+0x420>
  4262c0:	00008825 	move	s1,zero
  4262c4:	8e4b0018 	lw	t3,24(s2)
  4262c8:	8f99801c 	lw	t9,-32740(gp)
  4262cc:	01716021 	addu	t4,t3,s1
  4262d0:	8d840000 	lw	a0,0(t4)
  4262d4:	27396244 	addiu	t9,t9,25156
  4262d8:	0320f809 	jalr	t9
  4262dc:	00000000 	nop
  4262e0:	8e4d0014 	lw	t5,20(s2)
  4262e4:	26100001 	addiu	s0,s0,1
  4262e8:	8fbc0020 	lw	gp,32(sp)
  4262ec:	020d082a 	slt	at,s0,t5
  4262f0:	1420fff4 	bnez	at,4262c4 <draw_second_pick+0x3ec>
  4262f4:	26310004 	addiu	s1,s1,4
  4262f8:	8fbf0024 	lw	ra,36(sp)
  4262fc:	8fb00014 	lw	s0,20(sp)
  426300:	8fb10018 	lw	s1,24(sp)
  426304:	8fb2001c 	lw	s2,28(sp)
  426308:	03e00008 	jr	ra
  42630c:	27bd0028 	addiu	sp,sp,40
