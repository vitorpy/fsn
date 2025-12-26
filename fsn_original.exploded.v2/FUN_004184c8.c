/**
 * FUN_004184c8
 *
 * Extracted from fsn.c lines 55851-55872
 * Ghidra address: 0x004184c8
 * Category: Other
 */

void FUN_004184c8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    piVar2 = param_1->file_array /* was: *(int **)(param_1 + 0x10) */;
    do {
      iVar1 = iVar1 + 1;
      if (*(int *)(*piVar2 + 0x28) << 0xc < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x004184c8):
     * Function: FUN_004184c8
     *
     * Looking at this assembly:
     * 1. **What it does:** Iterates through an array at offset 16 of the struct (count at offset 20). For each element, checks bit 19 of a field at offset 40 of a sub-struct. If that bit is set, ORs 0x2 into the byte at offset 117 of the input struct and returns.
     * 2. **C pseudocode:**
     * ```c
     * int count = param->count;        // offset 20
     * void **items = param->items;     // offset 16
     * for (int i = 0; i < count; i++) {
     * void *item = items[i];       // load first element (offset 0)
     * uint32_t flags = item->flags; // offset 40
     * if ((flags >> 19) & 1) {     // bit 19 check (sll 12 then srl 31)
     * param->state |= 0x2;     // offset 117 (byte)
     * return;
     * }
     * }
     * ```
     * The bit extraction `(sll 12, srl 31)` isolates bit 19: shifting left by 12 moves bit 19 to bit 31, then logical right shift by 31 extracts just that bit.
     */
halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004184c8):
     * Function: FUN_004184c8
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Extracts bit 19 from register t7 (via shift left 12, then unsigned shift right 31 to get sign bit). If bit 19 is set, sets bit 1 of byte at offset 117 in the structure pointed to by a0.
     * 2. **C pseudocode:**
     * ```c
     * if (t7 & 0x80000) {  // bit 19 set?
     * a0->flags_0x75 |= 0x02;  // set bit 1 at offset 117
     * }
     * return;
     * ```
     * Note: The `slt at,v0,v1` at 4184ec appears to be from previous code (result in `at` is unused here). The actual logic starts with the t7 bit extraction at 4184f0.
     */
halt_baddata();
}
