/**
 * FUN_0043a5bc
 *
 * Extracted from fsn.c lines 77750-77767
 * Ghidra address: 0x0043a5bc
 * Category: Other
 */

void FUN_0043a5bc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  undefined1 auStack_bb8 [3000];
  
  uVar1 = (**(code **)(unaff_gp + -0x7cec))();
  uVar2 = (**(code **)(unaff_gp + -0x7c30))();
  (**(code **)(unaff_gp + -0x7c1c))
            (auStack_bb8,*(int *)(unaff_gp + -0x7f94) + -0x60ec,*param_2,uVar1,uVar2);
  iVar3 = (**(code **)(unaff_gp + -0x7c20))(auStack_bb8);
  (**(code **)(unaff_gp + -0x7700))(param_1[1],*param_1,auStack_bb8,iVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
