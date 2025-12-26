/**
 * FUN_00427de0
 *
 * Extracted from fsn.c lines 64706-64716
 * Ghidra address: 0x00427de0
 * Category: Other
 */

void FUN_00427de0(void)

{
  int unaff_gp;
  
  if (*fsn_resources /* was: *(char **)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ == '\0') {
    (**(code **)(unaff_gp + -0x7720) /* -> FUN_00439c0c */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c70) /* =FUN_00439c0c */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427de0):
     * Function: FUN_00427de0
     *
     * Looking at the MIPS assembly:
     * 1. **What it does:**
     * Loads a global flag byte, checks if it's zero. If zero, calls a function (likely printf/puts) with a string from .rodata at offset 0x6c70. This is a "not implemented" or debug warning message.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00427de0(void) {
     * extern unsigned char *some_flag;  // gp-30172
     * extern char *rodata_base;         // gp-32660
     * extern void (*print_func)(char*); // gp-30496
     * if (*some_flag == 0) {
     * print_func(rodata_base + 0x6c70);  // prints warning string
     * }
     * }
     * ```
     * **GP offset resolution needed:**
     * - gp-30172 (0x8a24): pointer to flag byte
     * - gp-32660 (0x806c): .rodata base pointer
     * - gp-30496 (0x88e0): function pointer (printf/puts)
     * - String at rodata+0x6c70: check binary with `xxd -s $((0x3c000 + 0x6c70)) -l 64 fsn.original`
     * This pattern is typical for a stub/unimplemented feature warning in the original code.
     */
halt_baddata();
}
