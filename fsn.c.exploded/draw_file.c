/**
 * draw_file
 *
 * Extracted from fsn.c lines 47653-47754
 * Category: Graphics
 */

void draw_file(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
              undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  undefined *puVar5;
  uint extraout_var;
  undefined4 uVar6;
  undefined8 in_f4;
  double dVar7;
  char cStackX_f;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar6 = (undefined4)((ulonglong)in_f4 >> 0x20);
  iVar2 = param_2[10];
  if ((iVar2 << 5 < 0) && (-1 < iVar2 << 0xb)) {
    if (iVar2 << 10 < 0) {
      sVar4 = get_selection_string();
      setpattern((int)sVar4);
    }
    bVar1 = curcontext[0xc50] != '\0';
    if ((bVar1) && (bVar1 = *(int *)(param_1 + 0x74) << 2 < 0, bVar1)) {
      bVar1 = overlay_mode_flag != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    pushmatrix();
    translate(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_3 != '\0') {
      cpack(0);
      pushmatrix();
      iVar2 = param_2[1];
      if (max_scale_limit < (int)param_2[1]) {
        iVar2 = max_scale_limit;
      }
      dVar7 = (double)iVar2 * (double)CONCAT44(uVar6,0xeb851eb8);
      translate((float)dVar7,
                (float)((double)-view_offset_x /
                        (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                       (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x9999999a)),iVar2,
                &fsn_resources,0x3cf5c28f);
      rotate((int)-*(short *)(curcontext + 0xe),0x78);
      scale(0x3c23d70a,0x3c23d70a);
      if (max_scale_limit < (int)param_2[1]) {
        scale((float)max_scale_limit / (float)(int)param_2[1]);
      }
      draw_file_icon(*param_2);
      popmatrix();
    }
    if (cStackX_f != '\0') {
      zwritemask(0);
      pushmatrix();
      scale(view_offset_x,view_offset_x);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d] + 0x10;
      }
      else {
        puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d];
      }
      draw_legend_color_box(puVar5,param_5,0x10);
      popmatrix();
      pushmatrix();
      get_icon_bounds(param_2[8],&fStack_4,&fStack_8,&fStack_c,&fStack_10);
      scale(view_offset_x,view_offset_x);
      translate(0xbf000000,0xbf000000);
      scale((float)((double)((ulonglong)extraout_var << 0x20) /
                   ((double)fStack_c - (double)fStack_4)),
            (float)((double)((ulonglong)extraout_var << 0x20) /
                   ((double)fStack_10 - (double)fStack_8)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    scale(view_offset_x,view_offset_x);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d] + 0x10;
    }
    else {
      puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d];
    }
    draw_legend_color_box(puVar5,param_5,param_6);
    popmatrix();
    if ((int)(param_2[10] << 10) < 0) {
      setpattern(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
