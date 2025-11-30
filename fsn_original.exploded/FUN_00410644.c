/**
 * FUN_00410644
 *
 * Extracted from fsn.c lines 51793-51800
 * Ghidra address: 0x00410644
 * Category: Other
 */

void FUN_00410644(undefined4 param_1)

{
  set_gl_context(param_1,0);
  FUN_00410088();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
