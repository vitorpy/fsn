/**
 * FUN_00414cf0
 *
 * Extracted from fsn.c lines 54053-54064
 * Ghidra address: 0x00414cf0
 * Category: Filesystem
 */

void FUN_00414cf0(undefined4 param_1)

{
  gl_push_state();
  FUN_0042a4d4(0,1);
  FUN_00414be4(param_1);
  FUN_0042a4d4(1,1);
  FUN_00414be4(param_1);
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
