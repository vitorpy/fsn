/**
 * getlong__FPc
 *
 * Extracted from fsn.c lines 73604-73609
 * Category: Other
 */

void getlong__FPc(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004355a8):
     * Function: getlong__FPc
     *
     * **What it does:**
     * Reads 4 bytes from a char pointer and assembles them into a big-endian 32-bit integer by loading each byte, shifting left by 8, and ORing with the next byte.
     * **C equivalent:**
     * ```c
     * int getlong(char *p) {
     * return (((((p[0] << 8) | p[1]) << 8) | p[2]) << 8) | p[3];
     * }
     * ```
     * Or more clearly:
     * ```c
     * int getlong(char *p) {
     * unsigned char *up = (unsigned char *)p;
     * return (up[0] << 24) | (up[1] << 16) | (up[2] << 8) | up[3];
     * }
     * ```
     * This is a classic big-endian byte-to-int32 conversion, typical for MIPS/IRIX which is big-endian. The assembly unrolls the loop for performance.
     */
halt_baddata();
}
