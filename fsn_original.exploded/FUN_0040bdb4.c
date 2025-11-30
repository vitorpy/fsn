/**
 * FUN_0040bdb4
 *
 * Extracted from fsn.c lines 50123-50146
 * Ghidra address: 0x0040bdb4
 * Category: Filesystem
 */

void FUN_0040bdb4(undefined4 param_1,undefined4 param_2,int param_3)

{
  set_main_gl_window();
  gl_push_state();
  set_gl_context(param_1,1);
  *(uint *)(curcontext + 0x2c) = (uint)*(ushort *)(param_3 + 0x10);
  *(uint *)(curcontext + 0x30) = (uint)*(ushort *)(param_3 + 0x12);
  *(float *)(curcontext + 0x34) =
       (float)*(int *)(curcontext + 0x2c) / (float)*(int *)(curcontext + 0x30);
  FUN_0040bfa0();
  FUN_0040bc28();
  viewport(0,(*(short *)(param_3 + 0x10) + -1) * 0x10000 >> 0x10,0,
           (*(short *)(param_3 + 0x12) + -1) * 0x10000 >> 0x10);
  color(0);
  clear();
  set_main_gl_window();
  viewport(0,(*(short *)(param_3 + 0x10) + -1) * 0x10000 >> 0x10,0,
           (*(short *)(param_3 + 0x12) + -1) * 0x10000 >> 0x10);
  redraw_gl_scene();
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
