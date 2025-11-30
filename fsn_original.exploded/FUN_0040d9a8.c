/**
 * FUN_0040d9a8
 *
 * Extracted from fsn.c lines 50749-50757
 * Ghidra address: 0x0040d9a8
 * Category: Other
 */

void FUN_0040d9a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(short *)(curcontext + 0xe) = (short)*(undefined4 *)(param_3 + 8);
  FUN_0040c0cc();
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
