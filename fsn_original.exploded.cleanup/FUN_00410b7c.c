/**
 * FUN_00410b7c
 *
 * Extracted from fsn.c lines 51926-51951
 * Ghidra address: 0x00410b7c
 * Category: Filesystem
 */

void FUN_00410b7c(undefined4 param_1,int param_2)

{
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [2];
  undefined1 auStack_e [2];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  set_gl_context(param_1,0);
  set_main_gl_window();
  save_matrix_state();
  if ((uint)(*(int *)(param_2 + 0x1c) - DAT_10016628) < 300) {
    FUN_0041f118((*(uint *)(param_2 + 0x30) & 8) != 0);
  }
  else {
    FUN_00426d1c(auStack_4,auStack_8,auStack_c,auStack_e,auStack_10,auStack_14,&uStack_15,&uStack_16
                );
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
