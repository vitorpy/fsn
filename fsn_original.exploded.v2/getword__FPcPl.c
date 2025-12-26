/**
 * getword__FPcPl
 *
 * Extracted from fsn.c lines 78612-78620
 * Category: Other
 */

void getword__FPcPl(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b70c):
     * Function: getword__FPcPl
     *
     * ## Analysis
     * **What it does:**
     * Copies 4 bytes from source pointer (a0) to destination (a1), reading one byte at a time in big-endian order. Essentially reads a 32-bit word byte-by-byte into memory. The function name "getword" and parameter "Pl" (pointer to long) confirms this copies a 4-byte word.
     * **C equivalent:**
     * ```c
     * char *getword(char *src, long *dest) {
     * unsigned char *d = (unsigned char *)dest;
     * d[0] = *src++;
     * d[1] = *src++;
     * d[2] = *src++;
     * d[3] = *src++;
     * return src;
     * }
     * ```
     * Or more idiomatically for big-endian word extraction:
     * ```c
     * char *getword(char *src, long *dest) {
     * *dest = ((long)src[0] << 24) | ((long)src[1] << 16) |
     * ((long)src[2] << 8) | (long)src[3];
     * return src + 4;
     * }
     * ```
     * Note: Returns pointer advanced past the 4 bytes read (a0 after 4 increments).
     */
halt_baddata();
}
