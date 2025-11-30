/**
 * FUN_0041dea4
 *
 * Extracted from fsn.c lines 59388-59399
 * Ghidra address: 0x0041dea4
 * Category: Other
 */

void FUN_0041dea4(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(curcontext + 0x44) != 0) {
    FUN_0041ddf8(*(int *)(curcontext + 0x44),*(undefined4 *)(param_3 + 8));
    FUN_0041c3e4();
    redraw_gl_scene();
    FUN_0042a8e4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
