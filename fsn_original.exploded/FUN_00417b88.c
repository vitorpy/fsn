/**
 * FUN_00417b88
 *
 * Extracted from fsn.c lines 55387-55403
 * Ghidra address: 0x00417b88
 * Category: Other
 */

void FUN_00417b88(int param_1)

{
  int iVar1;
  int unaff_gp;
  undefined1 auStack_400 [1024];
  
  (**(code **)(unaff_gp + -0x7a84))(auStack_400,*(undefined4 *)(param_1 + 0x28));
  iVar1 = (**(code **)(unaff_gp + -0x7c20))(auStack_400);
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x38e8))
                    (param_1,auStack_400,auStack_400 + iVar1,0);
  if (iVar1 != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x44ec))(param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
