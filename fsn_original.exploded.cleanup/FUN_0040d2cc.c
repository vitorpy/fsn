/**
 * FUN_0040d2cc
 *
 * Extracted from fsn.c lines 50615-50627
 * Ghidra address: 0x0040d2cc
 * Category: Filesystem
 */

void FUN_0040d2cc(void)

{
  save_matrix_state();
  if (*(int *)(curcontext + 0x3c) == 0) {
    set_camera_lookat((double)view_init_x,(double)view_init_y);
  }
  else {
    set_camera_lookat((double)DAT_100174bc,(double)DAT_100174c0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
