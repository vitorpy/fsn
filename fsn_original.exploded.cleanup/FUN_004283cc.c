/**
 * FUN_004283cc
 *
 * Extracted from fsn.c lines 65012-65090
 * Ghidra address: 0x004283cc
 * Category: Other
 */

void FUN_004283cc(uint param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int unaff_gp;
  uint in_fcsr;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  (**(code **)(unaff_gp + -0x7730) /* -> rgb_to_hsv */)((double)(param_1 & 0xff),(double)((int)param_1 >> 8 & 0xff));
  param_2[1] = param_1;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)local_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(local_1c);
  }
  else {
    fVar1 = FLOOR(local_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(local_20);
  }
  else {
    fVar2 = FLOOR(local_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(local_24);
  }
  else {
    fVar3 = FLOOR(local_24);
  }
  *param_2 = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)local_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(local_1c);
  }
  else {
    fVar1 = FLOOR(local_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(local_20);
  }
  else {
    fVar2 = FLOOR(local_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(local_24);
  }
  else {
    fVar3 = FLOOR(local_24);
  }
  param_2[3] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)local_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(local_1c);
  }
  else {
    fVar1 = FLOOR(local_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(local_20);
  }
  else {
    fVar2 = FLOOR(local_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(local_24);
  }
  else {
    fVar3 = FLOOR(local_24);
  }
  param_2[2] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
