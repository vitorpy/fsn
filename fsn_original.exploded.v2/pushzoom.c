/**
 * pushzoom
 *
 * Extracted from fsn.c lines 51465-51502
 * Category: Other
 */

void pushzoom(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_38 [12];
  undefined4 auStack_8 [2];
  
  FUN_0042dc64(auStack_38);
  iVar2 = equalPositions(auStack_38,
                         *(int *)(curcontextwindows + 0x34) + curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ * 0x38);
  if (iVar2 == 0) {
    curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ + 1;
    iVar2 = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */;
    if (9 < iVar2) {
      curcontext->_field_40 /* was: *(undefined4 *)(curcontext + 0x40) */ = 0;
      iVar2 = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */;
    }
    puVar1 = (undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 * 0x38);
    puVar5 = auStack_38;
    do {
      puVar4 = puVar5;
      puVar3 = puVar1;
      puVar5 = puVar4 + 3;
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar1 = puVar3 + 3;
    } while (puVar5 != auStack_8);
    puVar3[3] = *puVar5;
    puVar3[4] = puVar4[4];
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040ff58):
     * Function: pushzoom
     *
     * Looking at this assembly:
     * 1. **What it does:** Copies a 56-byte structure from source (t9) to destination (t8). The destination is calculated as `context->field_0x34[zoom_level * 7]` where zoom_level comes from another context's offset 0x40. Uses an unrolled loop copying 12 bytes per iteration (5 iterations = 60 bytes, then 8 more = 68 total, but the math suggests 56 bytes for 7 floats).
     * 2. **C pseudocode:**
     * ```c
     * // t9 = source pointer (set earlier, likely curcontext->someField)
     * // t3 = *(gp-30332) i.e. some global context
     * int zoom_level = t3->field_0x40;           // offset 64
     * // t4 = *(gp-30332) again, same context
     * float *dest = t4->field_0x34;              // offset 52 - zoom stack base
     * dest += zoom_level * 7;                    // each entry is 7 floats (28 bytes? or 56 with padding)
     * // Copy 7 floats (loop copies 12 bytes/iter, 5 times = 60, plus 8 = 68... but index math says 7 elements)
     * memcpy(dest, source, 7 * sizeof(float));   // or could be 14 floats given the byte math
     * ```
     * **Refined interpretation:** The `sll 3, sub, sll 3` sequence computes `(n*8 - n)*8 = n*56`, so each zoom stack entry is 56 bytes (14 floats or 7 doubles). This pushes current view state onto a zoom stack at index stored in field 0x40.
     */
halt_baddata();
}
