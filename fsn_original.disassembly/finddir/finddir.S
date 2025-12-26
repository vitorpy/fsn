# Function: finddir
# Address: 0x00413604 - 0x00413694
# Size: 0x90 (144 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00413604 <finddir>:
  413604:	3c1c0fc1 	lui	gp,0xfc1
  413608:	279ca52c 	addiu	gp,gp,-23252
  41360c:	0399e021 	addu	gp,gp,t9
  413610:	27bdff50 	addiu	sp,sp,-176
  413614:	afbf0024 	sw	ra,36(sp)
  413618:	afbc0020 	sw	gp,32(sp)
  41361c:	afa400b0 	sw	a0,176(sp)
  413620:	afa500b4 	sw	a1,180(sp)
  413624:	8c8f0014 	lw	t7,20(a0)
  413628:	8fb800b4 	lw	t8,180(sp)
  41362c:	15e00003 	bnez	t7,41363c <finddir+0x38>
  413630:	27a400a8 	addiu	a0,sp,168
  413634:	10000013 	b	413684 <finddir+0x80>
  413638:	00001025 	move	v0,zero
  41363c:	27b90030 	addiu	t9,sp,48
  413640:	8fa800b0 	lw	t0,176(sp)
  413644:	afb900a8 	sw	t9,168(sp)
  413648:	afb80030 	sw	t8,48(sp)
  41364c:	8f9980f8 	lw	t9,-32520(gp)
  413650:	8f8985a0 	lw	t1,-31328(gp)
  413654:	8d060014 	lw	a2,20(t0)
  413658:	8d050018 	lw	a1,24(t0)
  41365c:	24070004 	li	a3,4
  413660:	0320f809 	jalr	t9
  413664:	afa90010 	sw	t1,16(sp)
  413668:	8fbc0020 	lw	gp,32(sp)
  41366c:	10400004 	beqz	v0,413680 <finddir+0x7c>
  413670:	00001825 	move	v1,zero
  413674:	8c430000 	lw	v1,0(v0)
  413678:	10000002 	b	413684 <finddir+0x80>
  41367c:	00601025 	move	v0,v1
  413680:	00601025 	move	v0,v1
  413684:	8fbf0024 	lw	ra,36(sp)
  413688:	27bd00b0 	addiu	sp,sp,176
  41368c:	03e00008 	jr	ra
  413690:	00000000 	nop
