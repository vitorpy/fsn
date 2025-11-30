/**
 * FUN_0042ef04
 *
 * Extracted from fsn.c lines 69301-69372
 * Ghidra address: 0x0042ef04
 * Category: Other
 */

void FUN_0042ef04(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_gp;
  
  piVar8 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6adc);
  piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ad8);
  iVar1 = *piVar4;
  iVar3 = *piVar8;
  if (iVar3 == iVar1) {
    if (iVar1 == 0) {
      *piVar4 = 8;
      uVar2 = (**(code **)(unaff_gp + -0x7b40))(0x200);
      iVar1 = *(int *)(unaff_gp + -0x7f94);
      puVar9 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
      *puVar9 = uVar2;
      piVar4 = (int *)(iVar1 + -0x6ad8);
    }
    else {
      iVar3 = *(int *)(unaff_gp + -0x7f94);
      *piVar4 = iVar1 + 8;
      puVar9 = (undefined4 *)(iVar3 + -0x6ae0);
    }
    uVar2 = (**(code **)(unaff_gp + -0x7ea4))(*puVar9,*piVar4 << 6);
    iVar3 = *piVar8;
    *puVar9 = uVar2;
  }
  piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
  puVar9 = (undefined4 *)(*piVar4 + iVar3 * 0x40);
  puVar7 = param_2;
  do {
    puVar6 = puVar7;
    puVar5 = puVar9;
    puVar7 = puVar6 + 3;
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar9 = puVar5 + 3;
  } while (puVar7 != param_2 + 0xc);
  puVar5[3] = *puVar7;
  puVar5[4] = puVar6[4];
  if (param_1 == 0) {
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = 0;
  }
  else {
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(param_1);
    uVar2 = (**(code **)(unaff_gp + -0x7b40))(iVar1 + 1);
    uVar2 = (**(code **)(unaff_gp + -0x7ecc))(uVar2,param_1);
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = uVar2;
  }
  uVar2 = (**(code **)(unaff_gp + -0x7e90))(param_1);
  *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c) = uVar2;
  (**(code **)(unaff_gp + -0x7ea0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec4),
             *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c),0);
  iVar1 = *piVar8;
  *piVar8 = iVar1 + 1;
  if (iVar1 + 1 == 1) {
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec0),1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
