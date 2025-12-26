/**
 * FUN_0043ace4
 *
 * Extracted from fsn.c lines 78000-78023
 * Ghidra address: 0x0043ace4
 * Category: Memory
 */

void FUN_0043ace4(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_10009f40 != 0) {
    DAT_10017410 = malloc(buffer_size << 2);
    DAT_10017414 = malloc(buffer_size << 2);
    DAT_10017418 = malloc(buffer_size << 2);
    iVar2 = 0;
    iVar1 = 0;
    if (0 < buffer_size) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)((int)DAT_10017414 + iVar1) = 0xffffffff;
        iVar1 = iVar1 + 4;
      } while (iVar2 < buffer_size);
    }
    DAT_10009f40 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043ace4):
     * Function: FUN_0043ace4
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Calls a function via GP (likely malloc/calloc), stores result at GP[-32660]+29720, then loops from 0 to *s0, filling an array at GP[-32660]+29716 with -1 values (4 bytes each). Finally clears GP[-32660]-24768.
     * 2. **C pseudocode:**
     * ```c
     * // t9 = function at gp[-31816], likely allocator
     * void *result = ((void*(*)())gp[-31816])();
     * gp_base->field_7418 = result;  // offset 29720 = 0x7418
     * int *array = gp_base->field_7414;  // offset 29716 = 0x7414
     * int count = *s0;
     * for (int i = 0; i < count; i++) {
     * array[i] = -1;
     * }
     * gp_base->field_9f40 = 0;  // offset -24768 = 0x9f40 (negative = wraps to high offset)
     * ```
     * The -1 fill pattern suggests initializing an index/handle array to "invalid" or "unused" state. The GP offsets 0x7414/0x7418 are likely related data structures (array pointer and count, or array and associated metadata).
     */
halt_baddata();
}
