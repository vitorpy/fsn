/**
 * warpZoomToFile
 *
 * Extracted from fsn.c lines 57531-57552
 * Category: Filesystem
 */

void warpZoomToFile(int param_1,int param_2)

{
  uint uVar1;
  undefined8 in_f18;
  
  uVar1 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(curcontext + 0x3c)) {
      do_warp();
    }
    if (param_2 != 0) {
      set_camera_lookat((double)*(float *)(param_2 + 0x14) -
                   (double)*(float *)(curcontext + 0x14) * (double)DAT_10017530,
                   ((double)*(float *)(param_2 + 0x18) +
                   (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar1 << 0x20)) -
                   (double)*(float *)(curcontext + 0x18) * (double)DAT_10017530);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
