/**
 * FUN_00421cdc
 *
 * Extracted from fsn.c lines 61500-61514
 * Ghidra address: 0x00421cdc
 * Category: Other
 */

void FUN_00421cdc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  
  piVar2 = *(int **)(unaff_gp + -0x76bc);
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6c10) = param_1;
  *piVar2 = iVar1 + 1;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0x1c14))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
