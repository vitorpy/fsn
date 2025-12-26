/**
 * draw_visible_directory
 *
 * Extracted from fsn.c lines 63160-63172
 * Category: Graphics
 */

void draw_visible_directory(int param_1)

{
  if ((int)(param_1->render_flags /* was: *(uint *)(param_1 + 0x74) */ << 3) < 0) {
    param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ =
         (byte)((param_1->render_flags /* was: *(uint *)(param_1 + 0x74) */ >> 0x1e & ~curcontextflag) << 6) |
         param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004259d0):
     * Function: draw_visible_directory
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks if bit 28 of `dir->flags` (offset 116) is set. If not set, jumps to end. Otherwise, reads a global mask, inverts it, extracts bits 30-31 from flags, masks them, shifts left 6, and merges with bits 0-5 and 8-15 of the flags byte, storing result back.
     * 2. **C pseudocode**:
     * ```c
     * void draw_visible_directory(DirNode *dir) {
     * uint flags = dir->flags;  // offset 116
     * if (!(flags & 0x10000000))  // bit 28 check (sll 3, bgez)
     * goto end;
     * uint mask = ~(*global_visibility_mask);  // gp-30320, inverted
     * uint high_bits = (flags >> 30) & mask;   // extract bits 30-31, mask
     * uint8_t byte = dir->flags_byte;          // lbu offset 116
     * byte = (high_bits << 6) | (byte & 0xff3f);  // merge: clear bits 6-7, insert masked high bits
     * dir->flags_byte = byte;
     * float dir_z = dir->z;           // offset 56
     * float *ctx = *curcontext;       // gp-30340
     * double delta = ctx[1] - dir_z;  // subtract positions (converted to double)
     * // ... continues
     * ```
     * The bit manipulation at offset 116 appears to be updating visibility/rendering state bits based on a global mask, likely controlling which directories to draw.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004259d0):
     * Function: draw_visible_directory
     *
     * Looking at the GP offsets and call patterns:
     * **1. What it does:**
     * Calls endline(), then bgnpolygon(), then two translate() calls - first with s2[13],s2[14],0 coords, second with s2[22],1.0,a2 coords, then translate(s2[15],s2[15],s2[9]).
     * **2. C pseudocode:**
     * ```c
     * endline();           // GP offset -31560 (0x84b8)
     * bgnpolygon();        // implied from sequence
     * translate(s2[13], s2[14], 0.0f);           // GP -31584: s2 offsets 52,56
     * translate(s2[22], 1.0f, 1.0f);             // GP -31596: s2 offset 88, f14=0x3f800000=1.0
     * translate(s2[15], s2[15], s2[9]);          // GP -31596: s2 offsets 60,60,36
     * // a0 = 0 for next call
     * ```
     * Note: s2 appears to be a directory/node structure pointer. Offsets 52,56,60 are likely position coords (x,y,z at words 13,14,15). Offset 88 (word 22) and offset 36 (word 9) are additional geometry parameters. The 0x3f80 in lui is 1.0f in IEEE 754.
     */
halt_baddata();
}
