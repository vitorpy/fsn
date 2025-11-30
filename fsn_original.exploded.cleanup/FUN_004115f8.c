/**
 * FUN_004115f8
 *
 * Extracted from fsn.c lines 52322-52333
 * Ghidra address: 0x004115f8
 * Category: Other
 */

void FUN_004115f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 8) == 0) {
    FUN_00411578();
  }
  else {
    FUN_00411230();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
