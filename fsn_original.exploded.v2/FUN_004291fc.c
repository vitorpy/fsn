/**
 * FUN_004291fc
 *
 * Extracted from fsn.c lines 65561-65578
 * Ghidra address: 0x004291fc
 * Category: Other
 */

void FUN_004291fc(void)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  /* TODO: GP:-0x7ee4 */ (**(code **)(unaff_gp + -0x7ee4) /* -> EXTERNAL_0x0f123db8 */)(1,0x10,*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7908);
  iVar1 = 0;
  iVar2 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7928;
  do {
    /* TODO: GP:-0x7ee4 */ (**(code **)(unaff_gp + -0x7ee4) /* -> EXTERNAL_0x0f123db8 */)((iVar1 + 2) * 0x10000 >> 0x10,0x10,iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x20;
  } while (iVar1 != 3);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004291fc):
     * Function: FUN_004291fc
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls a function (via t9, likely `defpattern`) 4 times total - once with args (1, 16, pattern_data+30984), then loops 3 times with args (2/3/4, 16, pattern_data+31016/+32/+32), creating 4 pattern definitions.
     * 2. **C pseudocode:**
     * ```c
     * void makePatterns(void) {
     * defpattern(1, 16, pattern_data + 30984);  // First pattern at offset 0x7908
     * short *ptr = pattern_data + 31016;        // Offset 0x7928
     * for (int i = 0; i < 3; i++) {
     * defpattern((short)(i + 2), 16, ptr);  // Patterns 2, 3, 4
     * ptr += 16;                             // 32 bytes = 16 shorts
     * }
     * }
     * ```
     * The GP-relative loads at -32664 (0x8068) and -32484 (0x811c) resolve to pattern_data base and defpattern function pointer respectively. The `(short)(i+2)` cast comes from the sll/sra sequence that sign-extends to 16-bit.
     */
halt_baddata();
}
