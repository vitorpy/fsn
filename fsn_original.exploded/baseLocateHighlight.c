/**
 * baseLocateHighlight
 *
 * Extracted from fsn.c lines 65807-65875
 * Category: Graphics
 */

void baseLocateHighlight(int param_1,undefined4 *param_2,int param_3)

{
  char *__dest;
  float fVar1;
  uint uVar2;
  undefined8 in_f4;
  
  uVar2 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  if ((param_2 != DAT_10007994) || (param_1 != DAT_10007990)) {
    DAT_10007990 = param_1;
    DAT_10007994 = param_2;
    FUN_0040bc28();
    color(0);
    clear();
    color(overlayHighlightColor._2_2_);
    linewidth((int)DAT_100174b6);
    zbuffer(0);
    pushmatrix();
    scale((float)((double)((ulonglong)uVar2 << 0x20) / (double)*(float *)(curcontext + 0x34)));
    rotate((int)*(short *)(curcontext + 0xe),0x78);
    rotate((int)*(short *)(curcontext + 0xc),0x7a);
    if (*(int *)(curcontext + 0x3c) == 0) {
      fVar1 = powf(DAT_10017594,
                   (*(float *)(curcontext + 4) -
                   *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                   *(float *)(curcontext + 8)) / DAT_10017598);
      scale(fVar1);
    }
    translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        FUN_0042728c(param_1);
      }
    }
    else {
      FUN_004277fc(param_1,param_2);
    }
    popmatrix();
    linewidth(1);
    if (param_1 == 0) {
      FUN_00429464();
    }
    else {
      __dest = (char *)build_path_string(0);
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < *(int *)(param_1 + 0x74) << 2) {
          FUN_004293e8(__dest);
        }
      }
      else {
        strcat(__dest,(char *)*param_2);
        FUN_004293e8(__dest);
      }
    }
    zbuffer(1);
    if (param_1 == 0) {
      FUN_00420b70();
    }
    else {
      FUN_0042194c();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
