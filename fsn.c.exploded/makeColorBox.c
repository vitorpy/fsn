/**
 * makeColorBox
 *
 * Extracted from fsn.c lines 50184-50261
 * Category: Other
 */

void makeColorBox(uint param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_fcsr;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  
  rgb_to_hsv((double)(param_1 & 0xff),(double)((int)param_1 >> 8 & 0xff));
  param_2[1] = param_1;
  hsv_to_rgb((double)fStack_10,(double)fStack_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fStack_1c);
  }
  else {
    fVar1 = FLOOR(fStack_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fStack_20);
  }
  else {
    fVar2 = FLOOR(fStack_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fStack_24);
  }
  else {
    fVar3 = FLOOR(fStack_24);
  }
  *param_2 = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  hsv_to_rgb((double)fStack_10,(double)fStack_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fStack_1c);
  }
  else {
    fVar1 = FLOOR(fStack_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fStack_20);
  }
  else {
    fVar2 = FLOOR(fStack_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fStack_24);
  }
  else {
    fVar3 = FLOOR(fStack_24);
  }
  param_2[3] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  hsv_to_rgb((double)fStack_10,(double)fStack_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fStack_1c);
  }
  else {
    fVar1 = FLOOR(fStack_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fStack_20);
  }
  else {
    fVar2 = FLOOR(fStack_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fStack_24);
  }
  else {
    fVar3 = FLOOR(fStack_24);
  }
  param_2[2] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
