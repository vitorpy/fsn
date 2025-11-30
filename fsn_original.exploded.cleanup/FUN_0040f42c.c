/**
 * FUN_0040f42c
 *
 * Extracted from fsn.c lines 51287-51311
 * Ghidra address: 0x0040f42c
 * Category: Graphics
 */

void FUN_0040f42c(undefined4 param_1,int param_2)

{
  set_gl_context(param_1,0);
  save_matrix_state();
  FUN_0040f080(param_2,&DAT_10000158,&DAT_1000015c);
  FUN_004294cc();
  FUN_0040bc28();
  pushmatrix();
  ortho2(0,(float)*(int *)(curcontext + 0x2c));
  color(overlayHighlightColor._2_2_);
  translate((float)*(int *)(param_2 + 0x20),
            (float)(*(int *)(curcontext + 0x30) - *(int *)(param_2 + 0x24)));
  bgnline();
  v2s(&DAT_10000160);
  v2s(&DAT_10000164);
  endline();
  bgnline();
  v2s(&DAT_10000168);
  v2s(&DAT_1000016c);
  endline();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
