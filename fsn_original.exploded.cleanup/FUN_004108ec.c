/**
 * FUN_004108ec
 *
 * Extracted from fsn.c lines 51872-51920
 * Ghidra address: 0x004108ec
 * Category: Filesystem
 */

void FUN_004108ec(undefined4 param_1,int param_2)

{
  int iVar1;
  char local_16;
  char local_15;
  int local_14;
  undefined1 local_10 [2];
  undefined1 local_e [2];
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  set_gl_context(param_1,0);
  set_main_gl_window();
  save_matrix_state();
  if ((uint)(*(int *)(param_2 + 0x1c) - DAT_10016624) < 300) {
    FUN_0041f118((*(uint *)(param_2 + 0x30) & 8) != 0);
  }
  else {
    iVar1 = FUN_00426d1c(&local_4,&local_8,local_c,local_e,local_10,&local_14,&local_15,&local_16);
    if (iVar1 == 0) {
      redraw_gl_scene();
    }
    else {
      if (local_16 == '\0') {
        curcontext[0xc50] = 0;
      }
      if (local_15 == '\0') {
        if (local_14 == *(int *)(curcontext + 0x3c)) {
          if (local_16 == '\0') {
            set_camera_lookat((double)local_4,(double)local_8);
          }
          else {
            set_camera_lookat((double)local_4,(double)local_8);
          }
        }
        else {
          set_camera_lookat((double)local_4,(double)local_8);
        }
      }
      else {
        do_warp(local_14);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
