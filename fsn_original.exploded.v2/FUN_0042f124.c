/**
 * FUN_0042f124
 *
 * Extracted from fsn.c lines 69378-69417
 * Ghidra address: 0x0042f124
 * Category: Memory
 */

void FUN_0042f124(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  XmListDeletePos(mark_selector_list,param_1 + 1);
  XtFree(*(undefined4 *)(selection_buffer + param_1 * 0x40 + 0x38));
  XmStringFree(*(undefined4 *)(selection_buffer + param_1 * 0x40 + 0x3c));
  selection_count = selection_count + -1;
  if (param_1 < selection_count) {
    iVar2 = param_1 << 6;
    do {
      puVar4 = (undefined4 *)(selection_buffer + iVar2);
      puVar1 = puVar4;
      puVar5 = puVar4;
      do {
        puVar3 = puVar1;
        *puVar5 = puVar3[0x10];
        puVar6 = puVar5 + 3;
        puVar5[1] = puVar3[0x11];
        puVar5[2] = puVar3[0x12];
        puVar1 = puVar3 + 3;
        puVar5 = puVar6;
      } while (puVar3 + 3 != puVar4 + 0xf);
      param_1 = param_1 + 1;
      *puVar6 = puVar3[0x13];
      iVar2 = iVar2 + 0x40;
    } while (param_1 < selection_count);
  }
  if (selection_count == 0) {
    XtSetSensitive(mark_selector_dialog,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f124):
     * Function: FUN_0042f124
     *
     * ## Analysis
     * **1. What it does:**
     * Unrolled memcpy loop copying 12 bytes (3 words) per iteration from source (t6) to dest (t7). After copying each 64-byte block, increments counter (v1) and continues while v1 < count at (a2). If count was 0, calls a function via GP (likely XtSetValues or similar with NULL/0 args).
     * **2. C pseudocode:**
     * ```c
     * // Inner loop: copy 12 bytes per iteration (words at offsets +64, +56, +60)
     * do {
     * dest[0] = src[64/4];      // offset 64
     * dest[-2] = src[56/4];     // offset 56
     * dest[-1] = src[60/4];     // offset 60
     * src += 3;                 // 12 bytes
     * dest += 3;
     * } while (src != src_end);
     * // Copy final word
     * dest[0] = src[64/4];
     * // Outer loop
     * count++;
     * a0 += 64;                     // advance to next 64-byte block
     * if (count < *(int*)a2) goto outer_loop;
     * // Epilogue
     * if (*(int*)a2 == 0) {
     * // GP-32660 = curcontext, GP-31976 = XtSetValues or similar
     * XtSetValues(curcontext->widget_28352, NULL);  // 28352 = 0x6ec0
     * }
     * return;
     * ```
     * **Context:** This is part of `addMark()` - the loop copies mark/selection data structures (64-byte blocks containing 3D coordinates/metadata). The memcpy is unrolled 4x for performance (typical SGI optimization). The final branch handles the edge case of zero marks by updating a widget.
     */
halt_baddata();
}
