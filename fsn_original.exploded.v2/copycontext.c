/**
 * copycontext
 *
 * Extracted from fsn.c lines 66631-66652
 * Category: Other
 */

void copycontext(void)

{
  pointer_____offset_0x10017720___ puVar1;
  pointer_____offset_0x10018374___ puVar2;
  pointer_____offset_0x10017720___ puVar3;
  pointer_____offset_0x10017720___ puVar4;
  
  puVar1 = curcontext + 0xc54;
  puVar2 = altcontext;
  puVar3 = curcontext;
  do {
    puVar4 = puVar3 + 0xc;
    *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar3 + 8);
    puVar2 = puVar2 + 0xc;
    puVar3 = puVar4;
  } while (puVar4 != puVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a88c):
     * Function: copycontext
     *
     * ## Analysis
     * **What it does:**
     * Copies 3156 bytes (263 × 12-byte chunks) from the context pointed to by one global pointer to the context pointed to by another global pointer. This is a loop-unrolled memcpy copying 3 words (12 bytes) per iteration.
     * **GP offset resolution:**
     * - gp-30340 (0x897c) → likely `curcontext` or source context pointer
     * - gp-30336 (0x8980) → likely destination context pointer
     * **C pseudocode:**
     * ```c
     * void copycontext(void) {
     * int *src = *source_context_ptr;   // gp[-30340]
     * int *dst = *dest_context_ptr;     // gp[-30336]
     * int *end = src + 789;             // 3156 bytes = 789 ints
     * do {
     * dst[0] = src[0];
     * dst[1] = src[1];
     * dst[2] = src[2];
     * src += 3;
     * dst += 3;
     * } while (src != end);
     * }
     * ```
     * Or simply: `memcpy(*dest_context_ptr, *source_context_ptr, 3156);`
     */
halt_baddata();
}
