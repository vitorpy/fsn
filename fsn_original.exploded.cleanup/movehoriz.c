/**
 * movehoriz
 *
 * Extracted from fsn.c lines 50509-50532
 * Category: Other
 */

void movehoriz(undefined8 param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 in_register_00001010;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar1 = powf(DAT_10017594,*(float *)(curcontext + 4) / DAT_10017598);
  *(float *)curcontext =
       (float)((double)*(float *)curcontext +
              ((double)*(float *)(curcontext + 0x14) *
               (double)CONCAT44(in_register_00001010,(int)param_1) +
              (double)*(float *)(curcontext + 0x18) * (double)CONCAT44(uVar2,param_2)) /
              (double)fVar1);
  *(float *)(curcontext + 4) =
       (float)((double)*(float *)(curcontext + 4) +
              (double)-*(float *)(curcontext + 0x14) * (double)CONCAT44(uVar2,param_2) +
              (double)*(float *)(curcontext + 0x18) *
              (double)CONCAT44(in_register_00001010,(int)param_1));
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
