/**
 * FUN_0040da14
 *
 * Extracted from fsn.c lines 50763-50775
 * Ghidra address: 0x0040da14
 * Category: Other
 */

void FUN_0040da14(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  uint in_register_00001050;
  
  fVar1 = (float)((double)*(int *)(param_3 + 8) / (double)((ulonglong)in_register_00001050 << 0x20))
  ;
  *(float *)(curcontext + 8) = fVar1 * fVar1;
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
