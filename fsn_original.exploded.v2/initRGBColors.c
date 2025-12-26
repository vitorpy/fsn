/**
 * initRGBColors
 *
 * Extracted from fsn.c lines 72153-72255
 * Category: Init
 */

void initRGBColors(void)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int *piVar14;
  int iVar15;
  
  uVar11 = 0;
  psVar10 = &DAT_10016f70;
  puVar12 = &DAT_10016f72;
  puVar13 = &DAT_10016f74;
  piVar14 = &DAT_10016fd0;
  do {
    getmcolor(uVar11 & 0xffff,psVar10,puVar12,puVar13);
    uVar11 = uVar11 + 1;
    *piVar14 = (int)*psVar10 + psVar10[1] * 0x100 + psVar10[2] * 0x10000;
    psVar10 = psVar10 + 3;
    puVar12 = puVar12 + 3;
    puVar13 = puVar13 + 3;
    piVar14 = piVar14 + 1;
  } while ((int)uVar11 < 0x10);
  psVar10 = &DAT_10016f70;
  piVar14 = &DAT_10017010;
  do {
    iVar3 = (int)*psVar10;
    iVar4 = (int)psVar10[1];
    iVar5 = (int)psVar10[2];
    psVar1 = &DAT_10016f70;
    piVar2 = piVar14;
    do {
      iVar7 = iVar3 + *psVar1;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      iVar15 = iVar4 + psVar1[1];
      if (iVar15 < 0) {
        iVar15 = iVar15 + 1;
      }
      iVar6 = iVar5 + psVar1[2];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar8 = iVar3 + psVar1[3];
      iVar9 = iVar4 + psVar1[4];
      *piVar2 = (iVar7 >> 1) + (iVar15 >> 1) * 0x100 + (iVar6 >> 1) * 0x10000;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar5 + psVar1[5];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      iVar15 = iVar3 + psVar1[6];
      iVar6 = iVar4 + psVar1[7];
      piVar2[1] = (iVar8 >> 1) + (iVar9 >> 1) * 0x100 + (iVar7 >> 1) * 0x10000;
      if (iVar15 < 0) {
        iVar15 = iVar15 + 1;
      }
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar5 + psVar1[8];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      iVar8 = iVar3 + psVar1[9];
      iVar9 = iVar4 + psVar1[10];
      piVar2[2] = (iVar15 >> 1) + (iVar6 >> 1) * 0x100 + (iVar7 >> 1) * 0x10000;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar5 + psVar1[0xb];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      psVar1 = psVar1 + 0xc;
      piVar2[3] = (iVar8 >> 1) + (iVar9 >> 1) * 0x100 + (iVar7 >> 1) * 0x10000;
      piVar2 = piVar2 + 4;
    } while (psVar1 != (short *)&DAT_10016fd0);
    piVar14 = piVar14 + 0x10;
    psVar10 = psVar10 + 3;
  } while (piVar14 != &DAT_10017410);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433f68):
     * Function: initRGBColors
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes an RGB color by interpolating R, G, B components from halfword offsets in a source array, packing them into a single 32-bit word (R | G<<8 | B<<16), and storing to a destination array. The `bgez`/`addiu`/`sra` pattern implements signed divide-by-2 with rounding toward zero.
     * 2. **C pseudocode:**
     * ```c
     * // Inner loop body (v0 = src ptr, v1 = dst ptr, a2/a1/a0 = base color components)
     * short r_delta = *(short*)(src + 18);  // offset 0x12
     * short g_delta = *(short*)(src + 20);  // offset 0x14
     * short b_delta = *(short*)(src + 22);  // offset 0x16
     * int r = (base_r + r_delta) / 2;  // signed div2 with round-toward-zero
     * int g = (base_g + g_delta) / 2;
     * int b = (base_b + b_delta) / 2;
     * *dst = r | (g << 8) | (b << 16);  // pack RGB into word at dst+12
     * src += 24;  // sizeof source entry
     * dst += 16;  // sizeof dest entry (4 words = 16 bytes)
     * ```
     * The outer loops increment by 64 (t0) and 6 (s0), suggesting iteration over a 2D color table structure.
     */
halt_baddata();
}
