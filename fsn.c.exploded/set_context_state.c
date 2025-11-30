/**
 * set_context_state
 *
 * Extracted from fsn.c lines 51582-51649
 * Category: Filesystem
 */

void set_context_state(uint param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int unaff_gp;
  
  puVar6 = *(uint **)(unaff_gp + -0x7674);
  if (param_1 != *puVar6) {
    piVar7 = *(int **)(unaff_gp + -0x7684);
    iVar5 = *piVar7;
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x74) = *(byte *)(iVar2 + 0x74) & 0xdf;
      iVar5 = *piVar7;
    }
    iVar2 = *(int *)(iVar5 + 0x48);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) & 0xef;
    }
    iVar2 = *(int *)(unaff_gp + -0x75a8);
    iVar5 = *(int *)(unaff_gp + -0x75a4);
    piVar1 = *(int **)(unaff_gp + -0x767c);
    *piVar7 = iVar2 + param_1 * 0xc54;
    *piVar1 = iVar5 + param_1 * 0x38;
    **(int **)(unaff_gp + -0x7680) = iVar2 + (1 - param_1) * 0xc54;
    piVar8 = *(int **)(unaff_gp + -0x7678);
    piVar1 = *(int **)(unaff_gp + -0x7670);
    *puVar6 = param_1;
    *piVar8 = iVar5 + (1 - param_1) * 0x38;
    *piVar1 = 1 << (param_1 & 0x1f);
    iVar5 = *piVar7;
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x74) = *(byte *)(iVar2 + 0x74) | 0x20;
      iVar5 = *piVar7;
    }
    iVar2 = *(int *)(iVar5 + 0x48);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x10;
    }
    if (param_2 == '\0') {
      uVar3 = (**(code **)(unaff_gp + -0x7c04))(*(undefined4 *)(*piVar8 + 0x28));
      uVar4 = (**(code **)(unaff_gp + -0x7c98))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) + 0x28));
      (**(code **)(unaff_gp + -0x7ebc))(uVar3,uVar4);
      uVar3 = (**(code **)(unaff_gp + -0x7c04))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x28));
      uVar4 = (**(code **)(unaff_gp + -0x7c98))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x28));
      (**(code **)(unaff_gp + -0x7e50))(uVar3,uVar4);
      (**(code **)(unaff_gp + -0x79d0))();
      (**(code **)(unaff_gp + -0x798c))();
      piVar7 = *(int **)(unaff_gp + -0x7680);
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc53) = 0;
      *(undefined1 *)(*piVar7 + 0xc53) = 1;
      (**(code **)(unaff_gp + -0x7abc))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
