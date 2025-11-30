/**
 * FUN_0041fbb4
 *
 * Extracted from fsn.c lines 60138-60153
 * Ghidra address: 0x0041fbb4
 * Category: Other
 */

void FUN_0041fbb4(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  if (*(int *)(iVar1 + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x78fc) /* -> FUN_00427870 */)(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
  else {
    (**(code **)(unaff_gp + -0x79e4) /* -> FUN_0041aeec */)(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
