/**
 * filemessage
 *
 * Extracted from fsn.c lines 52058-52079
 * Category: Filesystem
 */

void filemessage(char *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  char acStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  set_status_message(acStack_434,param_3);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410e70):
     * Function: filemessage
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Builds a formatted message string by calling sprintf/strcat multiple times. First sprintf formats into buffer at sp+36, then two strcat calls append additional strings, then a final call (likely strlen or display function) on the result.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets: -32460 = sprintf, -31972 = strcat, -32676 = rodata base, -31384 = strlen or set_status_message
     * char buffer[1024];  // at sp+36, size ~1076 bytes based on frame
     * char *format_str;   // from a1 (sp+1112)
     * char *extra1;       // from a3 (sp+1116)
     * char *extra2;       // from sp+1120
     * sprintf(buffer, format_str);           // 410ec0-410ed0
     * strcat(buffer, rodata_base - 22840);   // 410ee0-410eec: likely a separator like ": " or " - "
     * strcat(buffer, extra1);                // 410ef8-410f04
     * final_call(buffer, extra2);            // 410f10-410f1c: display or further processing
     * ```
     * The rodata offset -22840 (0xa6c8) likely points to a short separator string. The function concatenates multiple pieces into a status/error message.
     */
halt_baddata();
}
