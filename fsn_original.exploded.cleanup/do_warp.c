/**
 * do_warp
 *
 * Extracted from fsn.c lines 51818-51841
 * Category: Filesystem
 */

void do_warp(int param_1)

{
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  set_main_gl_window();
  save_matrix_state();
  if (param_1 == 0) {
    if (*(int *)(curcontext + 0x3c) == 0) {
      set_camera_lookat((double)view_init_x,(double)view_init_y,0,&local_4);
    }
    else {
      FUN_00426e34(*(int *)(curcontext + 0x3c),&local_4,&local_8,local_c);
      set_camera_lookat((double)local_4,(double)local_8);
    }
  }
  else {
    set_camera_lookat((double)DAT_100174bc,(double)DAT_100174c0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
