/**
 * landscapeZoomToFile
 *
 * Extracted from fsn.c lines 64419-64451
 * Category: Filesystem
 */

void landscapeZoomToFile(int param_1,int param_2)

{
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)*(float *)(param_1 + 0x3c) / (double)(in_f4 & 0xffffffff00000000) +
              (double)DAT_10017518;
      set_camera_lookat((double)*(float *)(param_1 + 0x34) -
                   (double)*(float *)(curcontext + 0x14) * dVar1,
                   (double)*(float *)(param_1 + 0x38) -
                   (double)*(float *)(curcontext + 0x18) * dVar1);
    }
    else {
      if (DAT_10017495 == '\0') {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      else {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      set_camera_lookat(((double)*(float *)(param_1 + 0x34) +
                   (double)fVar2 * (double)*(float *)(param_1 + 0x58)) -
                   (double)*(float *)(curcontext + 0x14) * (double)DAT_10017524,
                   ((double)*(float *)(param_1 + 0x38) + (double)*(float *)(param_2 + 0x18)) -
                   (double)*(float *)(curcontext + 0x18) * (double)DAT_10017524);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
