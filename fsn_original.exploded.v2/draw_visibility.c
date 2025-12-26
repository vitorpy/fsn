/**
 * draw_visibility
 *
 * Extracted from fsn.c lines 63251-63300
 * Category: Graphics
 */

void draw_visibility(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined8 in_f4;
  short asStack_1000 [2048];
  
  uVar7 = (uint)((ulonglong)in_f4 >> 0x20);
  if (topdir != 0) {
    initnames();
    gselect(asStack_1000,0x800);
    scale((float)((double)((ulonglong)uVar7 << 0x20) / (double)curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */));
    rotate((int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
    rotate((int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */,0x7a);
    fVar6 = powf(DAT_10017594,
                 (*(float *)(curcontext + 4) -
                 curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 *(float *)(curcontext + 8)) / DAT_10017598);
    scale(fVar6);
    translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
    FUN_004259dc(topdir);
    iVar1 = endselect(asStack_1000);
    if (iVar1 < 0) {
      FUN_00425bd8(topdir);
    }
    iVar3 = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = (int)asStack_1000[iVar3];
        if (iVar4 == 1) {
          iVar2 = FUN_00411e68((int)asStack_1000[iVar3 + 1]);
          iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ =
               (byte)((iVar2->render_flags /* was: *(uint *)(iVar2 + 0x74) */ >> 0x1e | curcontextflag) << 6) |
               iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ & 0x3f;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 1 + iVar4;
      } while (iVar5 != iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425c74):
     * Function: draw_visibility
     *
     * ## Analysis
     * **What it does:**
     * Loop epilogue that updates a node's visibility flags at offset 0x74. It extracts bits 31-30 from one field, ORs with another value, shifts left 6, then merges with masked original byte (clearing bits 6-7). Standard bit-field manipulation for visibility state.
     * **C pseudocode:**
     * ```c
     * // At end of inner loop (s1 == s3 case):
     * v0 += 2;  // advance pointer
     * if (s1 == s3) {
     * short arg = *(short*)v0;
     * some_func(arg);  // jalr via gp-31356
     * // Update visibility flags at node+0x74
     * uint32_t field74 = *(uint32_t*)(v0 + 0x74);
     * uint32_t other = *s4;  // visibility mask from parent?
     * uint8_t old_byte = *(uint8_t*)(v0 + 0x74);
     * uint8_t new_val = ((((field74 >> 30) | other) << 6) | (old_byte & 0xff3f));
     * *(uint8_t*)(v0 + 0x74) = new_val;
     * }
     * s2++;
     * s0 += s1;
     * // loop continues until s2 == s5
     * ```
     * **Key insight:** The 0xff3f mask clears bits 6-7, then `(bits_30_31 | parent_vis) << 6` sets new values for those bits. This propagates visibility from parent nodes down to children, storing 2-bit visibility state in bits 6-7 of the flags byte at offset 0x74.
     */
halt_baddata();
}
