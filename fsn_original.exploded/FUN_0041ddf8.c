/**
 * FUN_0041ddf8
 *
 * Extracted from fsn.c lines 59366-59382
 * Ghidra address: 0x0041ddf8
 * Category: Other
 */

void FUN_0041ddf8(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
    }
    check_unmonitor_dp(param_1);
  }
  else {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x10;
    FUN_00427e30();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
