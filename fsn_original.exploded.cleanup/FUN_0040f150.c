/**
 * FUN_0040f150
 *
 * Extracted from fsn.c lines 51213-51225
 * Ghidra address: 0x0040f150
 * Category: Other
 */

void FUN_0040f150(int param_1,undefined4 param_2)

{
  if (DAT_10000154 != 0) {
    XtRemoveWorkProc(DAT_10000154);
    DAT_10000154 = 0;
  }
  if (param_1 != 0) {
    DAT_10000154 = XtAppAddWorkProc(app_context,param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
