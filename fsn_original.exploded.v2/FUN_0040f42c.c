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
  translate((float)param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */,
            (float)(*(int *)(curcontext + 0x30) - param_2->_field_24 /* was: *(int *)(param_2 + 0x24) */));
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f42c):
     * Function: FUN_0040f42c
     *
     * Looking at the GP offsets and the calling pattern:
     * **1. What the assembly does:**
     * Calls XtDestroyWidget twice on curcontext+360 and curcontext+364 (two widget pointers), then calls popmatrix() and swapbuffers() before returning.
     * **2. C pseudocode:**
     * ```c
     * XtDestroyWidget(((Widget*)curcontext)[90]);   /* offset 360 = index 90 on 32-bit */
     * XtDestroyWidget(((Widget*)curcontext)[91]);   /* offset 364 = index 91 on 32-bit */
     * popmatrix();
     * swapbuffers();
     * ```
     * GP offset mapping (from your GP_MAPPING.md):
     * - -32664 (0x8068) = curcontext
     * - -31616 (0x8480) = XtDestroyWidget
     * - -31636 (0x846c) = popmatrix
     * - -31528 (0x84d8) = swapbuffers
     */
halt_baddata();
}
