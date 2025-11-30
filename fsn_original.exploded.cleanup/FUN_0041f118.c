/**
 * FUN_0041f118
 *
 * Extracted from fsn.c lines 59818-59842
 * Ghidra address: 0x0041f118
 * Category: Other
 */

void FUN_0041f118(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  if (*(int *)(iVar1 + 0x48) == 0) {
    if ((*(int *)(iVar1 + 0x44) != 0) && (*(int *)(iVar1 + 0x3c) != *(int *)(iVar1 + 0x44))) {
      (**(code **)(unaff_gp + -0x7aa4) /* -> do_warp */)();
    }
  }
  else {
    uVar2 = 4;
    if (param_1 != '\0') {
      uVar2 = 5;
    }
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1da0))
              (*(undefined4 *)(iVar1 + 0x44),*(int *)(iVar1 + 0x48),uVar2,param_1 == '\0',
               *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4b60,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4b58);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
