/**
 * FUN_00411b84
 *
 * Extracted from fsn.c lines 52539-52550
 * Ghidra address: 0x00411b84
 * Category: Memory
 */

void FUN_00411b84(void)

{
  void *pvVar1;
  
  if ((DAT_100001f0 == 0) || (DAT_10016b10 <= DAT_100001f0)) {
    pvVar1 = calloc(100,0x2c);
    DAT_10016b10 = (int)pvVar1 + 0x1130;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411b84):
     * Function: FUN_00411b84
     *
     * Looking at the assembly:
     * 1. **What it does**: Allocates from a pre-allocated pool of 44-byte structs. If pool is exhausted (current >= end), allocates new 100×44=4400 byte block via calloc. Returns current slot, advances pointer by 44.
     * 2. **C pseudocode**:
     * ```c
     * void* alloc_44byte_struct(void) {
     * void* current = pool_current;  // GP[-32664]->offset_496
     * void* pool_end = pool_limit;   // GP[-32660]->offset_27408
     * if (current == NULL || current >= pool_end) {
     * current = calloc(100, 44);  // GP[-32376] = calloc
     * pool_limit = current + 4400;
     * }
     * pool_current = current + 44;
     * return current;
     * }
     * ```
     * This is a simple bump allocator for fixed-size 44-byte objects (likely a DirNode or similar struct), allocating 100 at a time.
     */
halt_baddata();
}
