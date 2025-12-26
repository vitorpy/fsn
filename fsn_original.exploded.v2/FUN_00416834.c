/**
 * FUN_00416834
 *
 * Extracted from fsn.c lines 54761-54778
 * Ghidra address: 0x00416834
 * Category: Other
 */

void FUN_00416834(void)

{
  size_t sVar1;
  ushort local_4 [2];
  
  sVar1 = fread(local_4,2,1,current_file);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading showing info from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  initialOverview = (local_4[0] & 1) != 0;
  initialLegend = (local_4[0] & 2) != 0;
  initialControls = (local_4[0] & 4) != 0;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00416834):
     * Function: FUN_00416834
     *
     * ## Analysis
     * **What it does:**
     * Tests bits 0, 1, 2 of v0 (flags register). For each bit, stores v1 (non-zero value) to a global if bit is set, or stores zero if bit is clear. Three separate flag globals are updated based on the bitmask.
     * **C pseudocode:**
     * ```c
     * // v0 = flags, v1 = value (likely 1)
     * // GP offsets: -30436 = flag1, -30440 = flag2, -30432 = flag3
     * if (flags & 0x1)
     * *flag1_ptr = value;
     * else
     * *flag1_ptr = 0;
     * if (flags & 0x2)
     * *flag2_ptr = value;
     * else
     * *flag2_ptr = 0;
     * if (flags & 0x4)
     * *flag3_ptr = value;
     * else
     * *flag3_ptr = 0;
     * return;
     * ```
     * **Compact form:**
     * ```c
     * flag1 = (flags & 1) ? val : 0;
     * flag2 = (flags & 2) ? val : 0;
     * flag3 = (flags & 4) ? val : 0;
     * ```
     * GP offsets likely resolve to global byte flags (char/bool) controlling display or behavior options, possibly related to rescanDatabase's "what changed" indicators.
     */
halt_baddata();
}
