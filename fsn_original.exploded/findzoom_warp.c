/**
 * findzoom_warp
 *
 * Extracted from fsn.c lines 57153-57209
 * Category: Other
 */

void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  float fVar1;
  undefined1 auStack_c [4];
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  FUN_0041a358(&iStack_4,&iStack_8,auStack_c);
  if (iStack_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (iStack_8 == 0) {
    if (iStack_4 == *(int *)(curcontext + 0x3c)) {
      FUN_0041d920();
      *param_1 = DAT_100174bc;
      *param_2 = DAT_100174c0;
      *param_3 = DAT_100174c4;
      *param_4 = (short)DAT_100174c8;
      *param_6 = *(int *)(curcontext + 0x3c);
    }
    else {
      *param_7 = 1;
      *param_6 = iStack_4;
    }
  }
  else if (iStack_4 == *(int *)(curcontext + 0x3c)) {
    FUN_0041da44(iStack_8);
    fVar1 = *(float *)(iStack_8 + 0x14);
    *param_1 = (float)((double)fVar1 - (double)*(float *)(curcontext + 0x14) * (double)DAT_10017530)
    ;
    *param_2 = (float)(((double)*(float *)(iStack_8 + 0x18) +
                       (double)*(float *)(iStack_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar1 & 0xffffffff00000000)) -
                      (double)*(float *)(curcontext + 0x18) * (double)DAT_10017530);
    if (DAT_10017495 == '\0') {
      *param_3 = DAT_1001752c + *(float *)(iStack_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = DAT_10017520 + DAT_10017510;
    }
    *param_4 = (short)DAT_10017534;
    *param_6 = *(int *)(curcontext + 0x3c);
    *param_8 = 1;
  }
  else {
    fprintf((FILE *)0xfb52904,"found file in another dir\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
