/**
 * sqrtf
 *
 * Extracted from fsn.c lines 49025-49059
 * Category: Other
 */

float sqrtf(float __x)

{
  undefined4 in_a3;
  int unaff_gp;
  float fVar1;
  int iStackX_0;
  undefined1 auStackX_4 [4];
  undefined1 auStackX_8 [8];
  undefined1 *puVar2;
  undefined4 uVar3;
  
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  __Argv = auStackX_4;
  _DAT_0fb52740 = auStackX_8 + iStackX_0 * 4;
  __Argc = iStackX_0;
  puVar2 = &_mips_gp0_value;
  uVar3 = 0;
  __istart();
  (**(code **)(puVar2 + -0x7c5c))();
  uVar3 = (**(code **)(puVar2 + -0x7ae8))
                    (**(undefined4 **)(puVar2 + -0x760c),**(undefined4 **)(puVar2 + -0x7608),
                     **(undefined4 **)(puVar2 + -0x7f48),in_a3,puVar2,uVar3);
  fVar1 = (float)(**(code **)(puVar2 + -0x7c60))(uVar3);
  return fVar1;
}
