/**
 * FUN_0041e8a8
 *
 * Extracted from fsn.c lines 59561-59568
 * Ghidra address: 0x0041e8a8
 * Category: Other
 */

void FUN_0041e8a8(void)

{
  FUN_0041e260(curcontext->current_dir /* was: *(undefined4 *)(curcontext + 0x44) */,curcontext->current_file /* was: *(undefined4 *)(curcontext + 0x48) */,4,0,
               &DAT_1000b46c,"opening");
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041e8a8):
     * Function: FUN_0041e8a8
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads `curcontext`, extracts two values at offsets +68 and +72 (likely width/height or x/y coordinates), then calls a function with those values plus two string pointers and the constant 4.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041e8a8(int param1, int param2, int param3) {
     * // curcontext at GP-30340 (0x897c)
     * void *ctx = curcontext;
     * int arg4 = *(int*)((char*)ctx + 68);  // offset 0x44
     * int arg5 = *(int*)((char*)ctx + 72);  // offset 0x48
     * // GP-32676 (0x805c) is likely a string table base
     * // Offsets -19348 (0xb46c) and -19340 (0xb474) are two strings
     * // GP-32740 (0x801c) offset -7584 (0xe260) is the target function
     * some_function(arg4, arg5, 4, 0, string1, string2);
     * }
     * ```
     * The function at GP-0x801c offset 0xe260 is likely `XtVaCreateManagedWidget` or similar Xt/Motif widget creation function, given:
     * - Two dimension arguments from context (+68, +72)
     * - Type constant (4)
     * - Two resource name strings
     * - Zero terminator for varargs
     */
halt_baddata();
}
