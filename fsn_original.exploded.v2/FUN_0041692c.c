/**
 * FUN_0041692c
 *
 * Extracted from fsn.c lines 54784-54799
 * Ghidra address: 0x0041692c
 * Category: Other
 */

void FUN_0041692c(void)

{
  size_t sVar1;
  undefined4 local_8 [2];
  
  sVar1 = fread(local_8,8,1,current_file);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading display info from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  displayHeight = local_8[0];
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041692c):
     * Function: FUN_0041692c
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls a function with args (?, 8, 1). If return value != 1, shows an error message (XmMessageBoxGetChild + string) and calls another function with arg 1. Then stores two values from stack to globals and returns.
     * **C pseudocode:**
     * ```c
     * result = some_func(arg0, 8, 1);
     * if (result != 1) {
     * XmMessageBoxGetChild(dialog + 32, error_string);  // or similar Motif call
     * some_exit_func(1);
     * }
     * DAT_XXXX = saved_val1;  // gp offset -30428
     * DAT_YYYY = saved_val2;  // gp offset -30424
     * return;
     * ```
     * The GP offsets suggest: -32616 is likely a dialog widget, -32676 points to an error string in .rodata (-21592 offset), -31840 is probably an exit/cleanup function, and the final two stores (-30428, -30424) are restoring global state variables before return.
     */
halt_baddata();
}
