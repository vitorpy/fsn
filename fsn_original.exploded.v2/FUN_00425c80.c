/**
 * FUN_00425c80
 *
 * Extracted from fsn.c lines 63306-63365
 * Ghidra address: 0x00425c80
 * Category: Other
 */

void FUN_00425c80(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int unaff_gp;
  undefined4 uVar9;
  uint uVar10;
  undefined8 in_f4;
  short local_1000 [2048];
  
  uVar10 = (uint)((ulonglong)in_f4 >> 0x20);
  piVar5 = topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */;
  if (*piVar5 != 0) {
    /* TODO: GP:-0x7de0 */ (**(code **)(unaff_gp + -0x7de0) /* -> EXTERNAL_0x0f12812c */)();
    /* TODO: GP:-0x7d70 */ (**(code **)(unaff_gp + -0x7d70) /* -> EXTERNAL_0x0f122378 */)(local_1000,0x800);
    piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
              ((float)((double)((ulonglong)uVar10 << 0x20) / (double)*(float *)(*piVar3 + 0x34)));
    /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(*piVar3 + 0xe),0x78);
    /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(*piVar3 + 0xc),0x7a);
    iVar1 = *piVar3;
    uVar9 = /* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                      (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                       (*(float *)(iVar1 + 4) -
                       iVar1->child_array /* was: *(float *)(iVar1 + 0x18) */ * iVar1->_field_20 /* was: *(float *)(iVar1 + 0x20) */ * *(float *)(iVar1 + 8))
                       / *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108));
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar9);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(-*(float *)*piVar3,-((float *)*piVar3)[1]);
    (**(code **)(unaff_gp + -0x7934) /* -> FUN_004259dc */)(*piVar5) /* =FUN_004259dc */;
    iVar1 = /* TODO: GP:-0x7d6c */ (**(code **)(unaff_gp + -0x7d6c) /* -> EXTERNAL_0x0f1213f8 */)(local_1000);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7930) /* -> FUN_00425bd8 */)(*piVar5) /* =FUN_00425bd8 */;
    }
    iVar4 = 0;
    iVar7 = 0;
    if (0 < iVar1) {
      puVar8 = curcontextflag /* was: *(uint **)(unaff_gp + -0x7670) */ /* -> curcontextflag */;
      do {
        iVar6 = (int)local_1000[iVar4];
        if (iVar6 == 1) {
          iVar2 = (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)((int)local_1000[iVar4 + 1]) /* =FUN_00411e68 */;
          iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ =
               (byte)((iVar2->render_flags /* was: *(uint *)(iVar2 + 0x74) */ >> 0x1e | *puVar8) << 6) |
               iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ & 0x3f;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1 + iVar6;
      } while (iVar7 != iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425c80):
     * Function: FUN_00425c80
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * This is the loop epilogue of draw_visibility. It calls a function via GP-31356 with a halfword argument, then performs bit manipulation on a byte at offset 116 of a structure - clearing bits 6-7 (mask 0xff3f) and OR'ing in a value derived from bits 30-31 of another field shifted left by 6.
     * **C pseudocode:**
     * ```c
     * v0 += 2;
     * if (s1 != s3) goto next_iter;
     * s0++;
     * // Call function at GP-31356 (likely endclosedline or similar)
     * func_gp_31356((short)*v0);
     * // Bit manipulation on visibility flags at offset 116
     * uint32_t field_74 = *(uint32_t*)(v0 + 116);  // word at +116
     * uint8_t byte_74 = *(uint8_t*)(v0 + 116);      // byte at +116
     * uint32_t high_bits = (field_74 >> 30) | *s4;  // extract top 2 bits, OR with s4
     * uint8_t new_val = ((high_bits << 6) & 0xc0) | (byte_74 & 0x3f);  // set bits 6-7
     * *(uint8_t*)(v0 + 116) = new_val;
     * next_iter:
     * s2++;
     * if (s2 != s5) continue;  // loop back to 425e54
     * s0 += s1;
     * // function epilogue - restore s0-s6, ra, return
     * ```
     * The bit manipulation appears to be updating visibility flags (bits 6-7 of byte at offset 116) based on some state from another structure. GP-31356 is likely `endclosedline` or `endpolygon` based on context.
     */
halt_baddata();
}
