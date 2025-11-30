/**
 * FUN_0040d15c
 *
 * Extracted from fsn.c lines 50587-50609
 * Ghidra address: 0x0040d15c
 * Category: Filesystem
 */

void FUN_0040d15c(void)

{
  save_matrix_state();
  if (*(int *)(curcontext + 0x3c) == 0) {
    set_camera_lookat((double)*(float *)curcontext -
                 (double)*(float *)(curcontext + 0x14) * (double)*(float *)(curcontext + 0x20) *
                 (double)*(float *)(curcontext + 8),
                 (double)*(float *)(curcontext + 4) -
                 (double)*(float *)(curcontext + 0x18) * (double)*(float *)(curcontext + 0x20) *
                 (double)*(float *)(curcontext + 8));
  }
  else {
    set_camera_lookat((double)*(float *)curcontext -
                 (double)*(float *)(curcontext + 0x14) * (double)*(float *)(curcontext + 0x20) *
                 (double)*(float *)(curcontext + 8),
                 (double)*(float *)(curcontext + 4) -
                 (double)*(float *)(curcontext + 0x18) * (double)*(float *)(curcontext + 0x20) *
                 (double)*(float *)(curcontext + 8));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
