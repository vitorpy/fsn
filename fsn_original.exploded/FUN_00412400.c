/**
 * FUN_00412400
 *
 * Extracted from fsn.c lines 52890-52900
 * Ghidra address: 0x00412400
 * Category: Other
 */

void FUN_00412400(int param_1)

{
  int unaff_gp;
  undefined4 uVar1;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1804))();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
