/**
 * FUN_00434be4
 *
 * Extracted from fsn.c lines 73024-73050
 * Ghidra address: 0x00434be4
 * Category: Other
 */

void FUN_00434be4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar3 = *(int *)(unaff_gp + -0x7614);
  iVar2 = *param_1;
  (**(code **)(unaff_gp + -0x7764))(iVar3);
  while( true ) {
    if (iVar2 == 0) {
      (**(code **)(unaff_gp + -0x7760))(iVar3);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if ((((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar3 + 0x240) == *(int *)(iVar2 + 0x34))) &&
        (*(int *)(iVar3 + 0x230) != 0)) &&
       (iVar1 = (**(code **)(unaff_gp + -0x7754))
                          (iVar3,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                           *(undefined4 *)(iVar2 + 0x10)), iVar1 != 0)) break;
    iVar2 = *(int *)(iVar2 + 0x68);
  }
  (**(code **)(unaff_gp + -0x7760))(iVar3);
  halt_baddata();
}
