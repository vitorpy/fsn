/**
 * highlightFileLandscape
 *
 * Extracted from fsn.c lines 64329-64346
 * Category: Filesystem
 */

void highlightFileLandscape(int param_1,int param_2)

{
  pushmatrix();
  translate(param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */,param_1->pos_y /* was: *(undefined4 *)(param_1 + 0x38) */);
  scale(param_1->scale /* was: *(undefined4 *)(param_1 + 0x58) */);
  FUN_00427300(param_2);
  translate(param_2->child_count /* was: *(undefined4 *)(param_2 + 0x14) */,param_2->child_array /* was: *(undefined4 *)(param_2 + 0x18) */);
  if (((curcontext[0xc50] == '\0') || (DAT_10017495 == '\0')) ||
     (param_1 != curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */)) {
    scale(view_offset_x,view_offset_x);
  }
  else {
    scale(view_offset_x,view_offset_x);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427570):
     * Function: highlightFileLandscape
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes bounding box flags by comparing a value (f4 converted to double in f12) against low bound (f2-f0) and high bound (f2+f0). Sets bit 0x1 if value >= low, bit 0x8 if value <= high. Then calls two functions with the flags.
     * 2. **C pseudocode:**
     * ```c
     * double low = f2 - f0;
     * double high = f2 + f0;
     * double val = (double)f4;
     * int flags = s0;
     * if (val >= low) flags |= 0x1;
     * if (val <= high) flags |= 0x8;
     * func_at_gp_minus_31052(???, 1, flags);  // likely lmcolor or similar
     * func_at_gp_minus_31528();                // likely popmatrix or endpoly
     * ```
     * The GP offsets need resolution - check `fsn_original.exploded.cleanup/GP_MAPPING.md` for -31052 (0x86b4) and -31528 (0x84d8) to get actual function names. This appears to be setting visibility/culling flags for the highlight geometry.
     */
halt_baddata();
}
