/**
 * fileerror
 *
 * Extracted from fsn.c lines 52185-52196
 * Category: Filesystem
 */

void fileerror(char *param_1,char *param_2)

{
  char acStack_434 [1076];
  
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  FUN_00410f74(acStack_434);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411088):
     * Function: fileerror
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Builds an error message using sprintf-style calls: first formats something into a stack buffer (sp+36), then appends a string constant (likely ": "), then appends the second argument, and finally calls a display function (likely show_error_dialog or similar).
     * **2. C pseudocode:**
     * ```c
     * void fileerror(char *filename, char *error_msg) {
     * char buffer[1024];  // at sp+36, size ~1076 bytes
     * sprintf(buffer, "%s", filename);      // first jalr at 4110b0
     * strcat(buffer, ": ");                 // jalr at 4110cc, string at gp-22828
     * strcat(buffer, error_msg);            // jalr at 4110e4
     * show_error_dialog(buffer);            // jalr at 4110fc (gp offset -31376)
     * }
     * ```
     * The GP offset -31972 (0x831c) is used twice suggesting strcat, while -31376 (0x8570) is the final error display call. The ": " separator string is at a .rodata offset calculated from GP.
     */
halt_baddata();
}
