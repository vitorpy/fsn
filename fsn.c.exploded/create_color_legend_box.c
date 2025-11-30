/**
 * create_color_legend_box
 *
 * Extracted from fsn.c lines 50438-50526
 * Category: UI
 */

void create_color_legend_box(uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int unaff_gp;
  float fVar6;
  float fVar7;
  float fVar8;
  uint in_fcsr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar5 = (int)param_1 >> 8 & 0xff;
  fVar8 = (float)((int)param_1 >> 0x10 & 0xff);
  fVar6 = (float)(param_1 & 0xff);
  fVar7 = (float)uVar5;
  (**(code **)(unaff_gp + -0x7730))((double)(param_1 & 0xff),(double)uVar5);
  iVar4 = *(int *)(unaff_gp + -0x75dc);
  (**(code **)(unaff_gp + -0x7744))((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x138)))
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar6);
  }
  else {
    fVar1 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar7);
  }
  else {
    fVar2 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar8);
  }
  else {
    fVar3 = FLOOR(fVar8);
  }
  (**(code **)(unaff_gp + -0x78dc))
            ((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2 + 0x10);
  (**(code **)(unaff_gp + -0x7744))((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x130)))
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar6);
  }
  else {
    fVar1 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar7);
  }
  else {
    fVar2 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar8);
  }
  else {
    fVar3 = FLOOR(fVar8);
  }
  (**(code **)(unaff_gp + -0x78dc))((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2);
  (**(code **)(unaff_gp + -0x7744))((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x140)))
  ;
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
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar8 = ROUND(fVar8);
  }
  else {
    fVar8 = FLOOR(fVar8);
  }
  *(int *)(param_2 + 0x20) = (int)fVar6 + (int)fVar7 * 0x100 + (int)fVar8 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
