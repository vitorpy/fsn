/**
 * extract_position_data
 *
 * Extracted from fsn.c lines 53222-53300
 * Category: Other
 */

void extract_position_data(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                 float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                 undefined1 *param_10)

{
  int iVar1;
  int unaff_gp;
  
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_10 = *(undefined1 *)(param_1 + 0x1a);
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 0) {
    *param_7 = 0;
    iVar1 = *(int *)(param_1 + 10);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x74) << 3 < 0) {
        *param_8 = iVar1;
        iVar1 = *(int *)(param_1 + 0x12);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x28) << 5 < 0) {
            *param_9 = iVar1;
            *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x14) *
                       *(float *)(*(int *)(param_1 + 10) + 0x58) + *(float *)(param_1 + 0x14);
            *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
            *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
        *param_9 = 0;
        *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) + *(float *)(param_1 + 0xc);
        *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) + *(float *)(param_1 + 0xe);
        *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) + *(float *)(param_1 + 0x10);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(param_1 + 4);
    *param_5 = *(float *)(param_1 + 6);
    *param_6 = *(float *)(param_1 + 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (-1 < *(int *)(iVar1 + 0x74) << 3) {
    *param_7 = 0;
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(iVar1 + 0x18);
    *param_5 = *(float *)(iVar1 + 0x1c);
    *param_6 = *(float *)(iVar1 + 0x20);
    *param_2 = 0;
    *param_3 = (short)*(undefined4 *)(iVar1 + 0x28);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_7 = iVar1;
  *param_8 = iVar1;
  iVar1 = *(int *)(param_1 + 0x12);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x28) << 5 < 0)) {
    *param_9 = iVar1;
    *param_4 = *(float *)(*(int *)(param_1 + 0x12) + 0x14) + *(float *)(param_1 + 0x14);
    *param_5 = *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
    *param_6 = *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_9 = 0;
  *param_4 = *(float *)(param_1 + 4);
  *param_5 = *(float *)(param_1 + 6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
