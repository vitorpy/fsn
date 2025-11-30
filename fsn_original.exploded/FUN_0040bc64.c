/**
 * FUN_0040bc64
 *
 * Extracted from fsn.c lines 50090-50099
 * Ghidra address: 0x0040bc64
 * Category: Filesystem
 */

void FUN_0040bc64(undefined4 param_1)

{
  gl_push_state();
  set_gl_context(param_1,1);
  redraw_gl_scene();
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
