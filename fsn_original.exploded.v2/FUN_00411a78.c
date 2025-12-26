/**
 * FUN_00411a78
 *
 * Extracted from fsn.c lines 52478-52495
 * Ghidra address: 0x00411a78
 * Category: Other
 */

void FUN_00411a78(char *param_1,undefined4 *param_2)

{
  size_t sVar1;
  
  if (param_2[10] != 0) {
    FUN_00411a78(param_1,param_2[10]);
  }
  strcat(param_1,(char *)*param_2);
  sVar1 = strlen(param_1);
  param_1 = param_1 + sVar1;
  if (param_1[-1] != '/') {
    *param_1 = '/';
    param_1[1] = '\0';
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411a78):
     * Function: FUN_00411a78
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Calls two string functions via GP (likely strcpy at -31972 and strlen at -31776), then checks if the string ends with '/'. If not, appends '/' and null-terminates.
     * **2. C pseudocode:**
     * ```c
     * // a0 = dest buffer (sp+32), a3 = source struct, a3[0] = string pointer
     * strcpy(dest, src->name);           // GP[-31972] = strcpy
     * int len = strlen(dest);            // GP[-31776] = strlen
     * if (dest[len-1] != '/') {
     * dest[len] = '/';
     * dest[len+1] = '\0';
     * }
     * ```
     * This is a "copy path and ensure trailing slash" pattern - common for directory path handling in file browsers.
     */
halt_baddata();
}
