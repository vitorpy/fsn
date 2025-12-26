/**
 * makeDColorBox
 *
 * Extracted from fsn.c lines 65096-65177
 * Category: Other
 */

void makeDColorBox(uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint in_fcsr;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar4 = (int)param_1 >> 8 & 0xff;
  fVar7 = (float)((int)param_1 >> 0x10 & 0xff);
  fVar5 = (float)(param_1 & 0xff);
  fVar6 = (float)uVar4;
  rgb_to_hsv((double)(param_1 & 0xff),(double)uVar4);
  hsv_to_rgb((double)uStack_10,(double)(uStack_14 * DAT_100175c8));
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar5);
  }
  else {
    fVar1 = FLOOR(fVar5);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar6);
  }
  else {
    fVar2 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar7);
  }
  else {
    fVar3 = FLOOR(fVar7);
  }
  FUN_004283cc((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2 + 0x10);
  hsv_to_rgb((double)uStack_10,(double)(uStack_14 * DAT_100175c0));
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar5);
  }
  else {
    fVar1 = FLOOR(fVar5);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar6);
  }
  else {
    fVar2 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar7);
  }
  else {
    fVar3 = FLOOR(fVar7);
  }
  FUN_004283cc((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2);
  hsv_to_rgb((double)uStack_10,(double)(uStack_14 * DAT_100175d0));
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar5 = ROUND(fVar5);
  }
  else {
    fVar5 = FLOOR(fVar5);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar6 = ROUND(fVar6);
  }
  else {
    fVar6 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar7 = ROUND(fVar7);
  }
  else {
    fVar7 = FLOOR(fVar7);
  }
  param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */ = (int)fVar5 + (int)fVar6 * 0x100 + (int)fVar7 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004286ec):
     * Function: makeDColorBox
     *
     * Looking at this assembly:
     * 1. **What it does:** Performs two divisions with overflow/divide-by-zero trap checks (MIPS break instructions), extracts results via mflo, shifts them by 8 and 16 bits respectively, combines them into a packed value, and stores at offset 36 of s1. Also stores a stack value at offset 40, then returns.
     * 2. **C pseudocode:**
     * ```c
     * // t5 = t0 + t3 (from earlier)
     * // t4 = result of previous division (mflo)
     * int result1 = t4;           // mflo from div before 428ae8
     * int shifted1 = result1 << 8;
     * int combined = t7 + shifted1;  // t7 from earlier computation
     * int result2 = t5 / a0;      // division with trap checks
     * int shifted2 = result2 << 16;
     * combined += shifted2;
     * s1->field_0x24 = combined;  // sw t8,36(s1) - likely packed RGB
     * s1->field_0x28 = sp_0x68;   // sw t9,40(s1) - from stack arg
     * return;
     * ```
     * **Context:** This is packing RGB color components. Each division extracts a color channel (0-255), shifts it into position (R<<16, G<<8, B), and combines into a 32-bit packed color stored at offset 0x24. The break instructions are MIPS hardware traps for divide-by-zero (break 0x7) and signed overflow (break 0x6) - these triggered Ghidra's halt_baddata.
     */
halt_baddata();
}
