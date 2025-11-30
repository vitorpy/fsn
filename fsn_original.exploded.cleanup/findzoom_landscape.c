/**
 * findzoom_landscape
 *
 * Extracted from fsn.c lines 63795-63870
 * Category: Other
 */

void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8)

{
  uint extraout_var;
  uint extraout_var_00;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  FUN_0042631c(&iStack_4,&iStack_c,&iStack_8);
  if (iStack_c == 0) {
    if (iStack_4 == 0) {
      if (iStack_8 == 0) {
        FUN_0041d54c();
      }
      else {
        iStack_4 = iStack_8;
        if ((iStack_8 == *(int *)(curcontext + 0x44)) && (*(int *)(iStack_8 + 0x28) != 0)) {
          iStack_4 = *(int *)(iStack_8 + 0x28);
        }
        FUN_0041d69c(iStack_4);
        *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                          (double)*(float *)(curcontext + 0x14) *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)DAT_10017518));
        *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                          (double)*(float *)(curcontext + 0x18) *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)DAT_10017518));
        *param_3 = DAT_10017514 + *(float *)(iStack_4 + 0x24);
        *param_4 = (short)DAT_1001751c;
        *param_6 = 0;
      }
    }
    else {
      FUN_0041d920();
      FUN_0041d69c(iStack_4);
      *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                        (double)*(float *)(curcontext + 0x14) *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)DAT_10017518));
      *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                        (double)*(float *)(curcontext + 0x18) *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)DAT_10017518));
      *param_3 = DAT_10017514 + *(float *)(iStack_4 + 0x24);
      *param_4 = (short)DAT_1001751c;
      *param_6 = 0;
    }
  }
  else {
    FUN_0041d69c(iStack_4);
    FUN_0041da44(iStack_c);
    *param_1 = (*(float *)(iStack_4 + 0x34) +
               *(float *)(iStack_c + 0x14) * *(float *)(iStack_4 + 0x58)) -
               *(float *)(curcontext + 0x14) * DAT_10017524;
    *param_2 = (*(float *)(iStack_4 + 0x38) + *(float *)(iStack_c + 0x18)) -
               *(float *)(curcontext + 0x18) * DAT_10017524;
    if (DAT_10017495 == '\0') {
      *param_3 = DAT_10017520 + *(float *)(iStack_4 + 0x24) + *(float *)(iStack_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = DAT_10017520 + *(float *)(iStack_4 + 0x24) + DAT_10017510;
    }
    *param_6 = 0;
    *param_4 = (short)DAT_10017528;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
