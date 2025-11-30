/**
 * __start
 *
 * Extracted from fsn.c lines 49373-49395
 * Category: Other
 */

void __start(void)

{
  undefined4 in_a3;
  int local_res0;
  undefined1 auStackX_4 [4];
  undefined1 auStackX_8 [8];
  undefined1 *puVar1;
  undefined4 uVar2;
  
  __Argv = auStackX_4;
  _DAT_0fb52740 = auStackX_8 + local_res0 * 4;
  __Argc = local_res0;
  puVar1 = &_mips_gp0_value;
  uVar2 = 0;
  __istart();
  (**(code **)(puVar1 + -0x7c5c))();
  uVar2 = (**(code **)(puVar1 + -0x7ae8))
                    (**(undefined4 **)(puVar1 + -0x760c),**(undefined4 **)(puVar1 + -0x7608),
                     **(undefined4 **)(puVar1 + -0x7f48),in_a3,puVar1,uVar2);
  (**(code **)(puVar1 + -0x7c60))(uVar2);
  return;
}
