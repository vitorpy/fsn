/**
 * FUN_00434a88
 *
 * Extracted from fsn.c lines 72959-72990
 * Ghidra address: 0x00434a88
 * Category: Other
 */

void FUN_00434a88(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar3 = *(int *)(unaff_gp + -0x7614);
  iVar2 = *param_1;
  (**(code **)(unaff_gp + -0x7764))(iVar3);
  if ((*(int *)(iVar3 + 0x240) == 0) && (*(int *)(iVar3 + 0x23c) == 0)) {
    (**(code **)(unaff_gp + -0x7760))(iVar3);
    (**(code **)(unaff_gp + -0x77b0))(param_1,*(int *)(unaff_gp + -0x7f94) + -0x65e0);
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      if ((((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar3 + 0x240) == *(int *)(iVar2 + 0x34))) &&
          (*(int *)(iVar3 + 0x230) != 0)) &&
         (iVar1 = (**(code **)(unaff_gp + -0x7754))
                            (iVar3,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             *(undefined4 *)(iVar2 + 0x10)), iVar1 != 0)) {
        (**(code **)(unaff_gp + -0x7760))(iVar3);
        (**(code **)(unaff_gp + -0x779c))(0,iVar2);
        halt_baddata();
      }
    }
    (**(code **)(unaff_gp + -0x7760))(iVar3);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
