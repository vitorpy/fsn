/**
 * draw_dir
 *
 * Extracted from fsn.c lines 42416-42449
 * Category: Graphics
 */

void draw_dir(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             char param_5)

{
  undefined4 uVar1;
  undefined8 in_f4;
  
  uVar1 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    loadname((int)*(short *)((int)param_1 + 0x5e));
    pushmatrix();
    translate((float)(double)CONCAT44(uVar1,param_4));
    uVar1 = directory_color_normal;
    if ((int)(param_1[0x1d] << 0xd) < 0) {
      uVar1 = directory_color_active;
    }
    cpack(uVar1);
    pushmatrix();
    rotate(0xfffffc7c,0x7a);
    translate(0x3f333333,0xbde66666);
    if (param_5 == '\0') {
      rect(0xbca3d70a,0xbca3d70a);
      scale(0x3ccccccd,0x3ccccccd);
      draw_file_icon(*param_1);
    }
    else {
      rectf(0xbca3d70a,0xbca3d70a);
    }
    popmatrix();
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
