/**
 * FUN_0042a898
 *
 * Extracted from fsn.c lines 66658-66680
 * Ghidra address: 0x0042a898
 * Category: Other
 */

void FUN_0042a898(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_gp;
  
  puVar2 = (undefined4 *)*curcontext /* was: *(undefined4 **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  puVar1 = (undefined4 *)*altcontext /* was: *(undefined4 **)(unaff_gp + -0x7680) */ /* -> altcontext */;
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 3;
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1 = puVar1 + 3;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x315);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a898):
     * Function: FUN_0042a898
     *
     * Looking at this assembly:
     * 1. **What it does:** Copies 3156 bytes (0xC54) from one context structure to another, 12 bytes at a time (unrolled loop copying 3 words per iteration). Sources from `*curcontext` to `*destcontext` (or similar global pointers at GP-0x897c and GP-0x8980).
     * 2. **C pseudocode:**
     * ```c
     * void copycontext(void) {
     * int *src = (int *)curcontext;
     * int *dst = (int *)destcontext;
     * int *end = src + (3156 / 4);  // 789 ints = 3156 bytes
     * while (src < end) {
     * dst[0] = src[0];
     * dst[1] = src[1];
     * dst[2] = src[2];
     * src += 3;
     * dst += 3;
     * }
     * }
     * ```
     * Or more simply: `memcpy(destcontext, curcontext, 3156);`
     * **Note:** The 3156-byte size (0xC54) tells us the context structure is exactly 3156 bytes. GP offset -30340 (0x897c) likely points to `curcontext`, and -30336 (0x8980) to the destination context pointer.
     */
halt_baddata();
}
