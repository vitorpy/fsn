/**
 * makePatterns
 *
 * Extracted from fsn.c lines 65539-65555
 * Category: Other
 */

void makePatterns(void)

{
  int iVar1;
  undefined *puVar2;
  
  defpattern(1,0x10,&DAT_10007908);
  iVar1 = 0;
  puVar2 = &DAT_10007928;
  do {
    defpattern((iVar1 + 2) * 0x10000 >> 0x10,0x10,puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x20;
  } while (iVar1 != 3);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004291f0):
     * Function: makePatterns
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls `defpattern(1, 16, pattern_data)` once, then loops 3 times calling `defpattern(i+2, 16, pattern_data + i*32)` for i=0,1,2. This defines 4 IrisGL stipple patterns (IDs 1-4) from pre-defined 16x16 bitmap data.
     * 2. **C pseudocode:**
     * ```c
     * void makePatterns(void) {
     * extern short pattern_data[];  /* at gp-32664 + 31016 = DAT_10007928 */
     * defpattern(1, 16, pattern_data);  /* first pattern at offset 30984 */
     * for (int i = 0; i < 3; i++) {
     * defpattern(i + 2, 16, pattern_data + i * 16);  /* +32 bytes = +16 shorts per iteration */
     * }
     * }
     * ```
     * The `sll/sra` sequence at 0x429248-42924c sign-extends the loop counter to 16-bit (short), typical for IrisGL pattern index arguments. Pattern data appears to be 4 consecutive 16x16 stipple bitmaps (32 bytes each = 16 shorts × 2 bytes).
     */
halt_baddata();
}
