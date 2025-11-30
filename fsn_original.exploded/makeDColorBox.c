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
  *(int *)(param_2 + 0x20) = (int)fVar5 + (int)fVar6 * 0x100 + (int)fVar7 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
