/**
 * FUN_00421cdc
 *
 * Extracted from fsn.c lines 61500-61514
 * Ghidra address: 0x00421cdc
 * Category: Other
 */

void FUN_00421cdc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  
  piVar2 = numtop /* was: *(int **)(unaff_gp + -0x76bc) */ /* -> numtop */;
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c10) = param_1;
  *piVar2 = iVar1 + 1;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0x1c14))();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421cdc):
     * Function: FUN_00421cdc
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Appends argument `a0` to an array at a global base+0x6c10, using a counter at GP-30396 as the index, increments the counter, then calls a function at GP-32740+0x1c14.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00421cdc(void *item) {
     * // GP-30396 = counter, GP-32660+0x6c10 = array base
     * extern int *counter_ptr;      // GP offset -30396
     * extern void *array_base;      // GP offset -32660, then +0x6c10
     * int idx = *counter_ptr;
     * ((void **)((char *)array_base + 0x6c10))[idx] = item;
     * *counter_ptr = idx + 1;
     * // Call function at GP-32740+0x1c14 (likely a "flush" or "process" call)
     * some_function();
     * }
     * ```
     * This looks like an "add to pending list" function - pushing an item onto a queue/array and incrementing a count, then triggering processing. Common pattern for deferred operations like redraw lists or selection buffers.
     */
halt_baddata();
}
