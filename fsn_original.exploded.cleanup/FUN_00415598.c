/**
 * FUN_00415598
 *
 * Extracted from fsn.c lines 54315-54342
 * Ghidra address: 0x00415598
 * Category: Other
 */

void FUN_00415598(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  undefined1 local_400 [1024];
  
  local_400[0] = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(local_400);
  }
  iVar1 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(local_400);
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x38e8))(param_1,local_400,local_400 + iVar1,1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(unaff_gp + -0x7a98) /* -> FUN_00410da4 */)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5804,0);
    (**(code **)(unaff_gp + -0x7a88) /* -> FUN_00411998 */)();
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x44ec))(param_1);
    (**(code **)(unaff_gp + -0x7a9c) /* -> deleteMessage */)(uVar2);
    (**(code **)(unaff_gp + -0x7a78) /* -> FUN_00411ea4 */)();
  }
  (**(code **)(unaff_gp + -0x79b8) /* -> FUN_0041dba0 */)();
  (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)();
  (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)();
  (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x4da4))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
