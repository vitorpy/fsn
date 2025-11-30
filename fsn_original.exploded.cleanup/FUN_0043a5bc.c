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
  
  uVar1 = (**(code **)(unaff_gp + -0x7cec) /* -> EXTERNAL_0x0fad3e88 */)();
  uVar2 = (**(code **)(unaff_gp + -0x7c30) /* -> EXTERNAL_0x0fad49b0 */)();
  (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)
            (auStack_bb8,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x60ec,*param_2,uVar1,uVar2);
  iVar3 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(auStack_bb8);
  (**(code **)(unaff_gp + -0x7700) /* -> FUN_0043b318 */)(param_1[1],*param_1,auStack_bb8,iVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
