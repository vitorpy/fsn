/**
 * putword__FPcPl
 *
 * Extracted from fsn.c lines 78626-78634
 * Category: Other
 */

void putword__FPcPl(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b748):
     * Function: putword__FPcPl
     *
     * ## Analysis
     * **1. What it does:**
     * Copies 4 bytes from source (a1) to destination (a0), byte-by-byte in big-endian order. This writes a 32-bit word to a potentially unaligned destination buffer. Returns pointer to start of written data.
     * **2. C pseudocode:**
     * ```c
     * char *putword(char *dest, long *src) {
     * unsigned char *s = (unsigned char *)src;
     * dest[0] = s[0];
     * dest[1] = s[1];
     * dest[2] = s[2];
     * dest[3] = s[3];
     * return dest;
     * }
     * ```
     * Or more idiomatically:
     * ```c
     * char *putword(char *dest, long *val) {
     * // Write 32-bit value as big-endian bytes to unaligned buffer
     * memcpy(dest, val, 4);
     * return dest;
     * }
     * ```
     * Note: The function name `putword__FPcPl` is C++ mangled: `putword(char*, long*)`. The byte-by-byte copy handles unaligned writes that direct 32-bit stores couldn't do on MIPS.
     */
halt_baddata();
}
