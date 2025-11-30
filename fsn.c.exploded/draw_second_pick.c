/**
 * draw_second_pick
 *
 * Extracted from fsn.c lines 48667-48728
 * Category: Graphics
 */

void draw_second_pick(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint extraout_var;
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*(int *)(param_3 + 0x74) << 3 < 0) {
    loadname(2);
    pushname((int)*(short *)(param_3 + 0x5e));
    if (*(short *)(param_3 + 0x76) < 0) {
      dVar3 = (double)maxy * (double)((ulonglong)extraout_var << 0x20);
      draw_scaled_element(0,dVar3);
      uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    pushmatrix();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x38));
    translate(*(undefined4 *)(param_3 + 0x34),uVar4);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    scale(*(undefined4 *)(param_3 + 0x58));
    pushmatrix();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x3c));
    scale(*(undefined4 *)(param_3 + 0x3c),uVar4);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    draw_legend_color_box(0,0,0x1f);
    popmatrix();
    translate(0,(ulonglong)uVar2 << 0x20);
    draw_file_item(param_3,1,7,0x1f);
    popname();
    popmatrix();
    if (*(int *)(param_3 + 0x28) != 0) {
      loadname(1);
      pushname((int)*(short *)(param_3 + 0x5e));
      fStack_c = *(float *)(*(int *)(param_3 + 0x28) + 0x34) + *(float *)(param_3 + 0x4c);
      uStack_10 = 0xbd4ccccd;
      fStack_8 = (float)((double)*(float *)(*(int *)(param_3 + 0x28) + 0x38) +
                        (double)*(float *)(param_3 + 0x50));
      uStack_18 = *(undefined4 *)(param_3 + 0x34);
      fStack_14 = (float)((double)*(float *)(param_3 + 0x38) -
                         (double)*(float *)(param_3 + 0x3c) /
                         (double)((ulonglong)(double)*(float *)(param_3 + 0x50) & 0xffffffff00000000
                                 ));
      uStack_4 = uStack_10;
      bgnline();
      v3f(&fStack_c);
      v3f(&uStack_18);
      endline();
      popname();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
