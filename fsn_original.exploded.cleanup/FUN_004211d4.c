/**
 * FUN_004211d4
 *
 * Extracted from fsn.c lines 61078-61113
 * Ghidra address: 0x004211d4
 * Category: Filesystem
 */

void FUN_004211d4(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(curcontext + 0x3c) == 0) {
    iVar4 = *(int *)(param_2 + 0x20);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (window_width <= iVar4) {
      iVar4 = window_width + -1;
    }
    iVar3 = (window_height - *(int *)(param_2 + 0x24)) + -1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (window_height <= iVar3) {
      iVar3 = window_height + -1;
    }
    fVar1 = ((float)iVar4 / (float)window_width) * (maxx - minx) + minx;
    fVar2 = ((float)iVar3 / (float)window_height) * (maxy - miny) + miny;
    save_matrix_state();
    set_camera_lookat((double)fVar1 +
                 (double)*(float *)(curcontext + 0x14) * (double)*(float *)(curcontext + 0x20) *
                 (double)*(float *)(curcontext + 8),
                 (double)fVar2 +
                 (double)*(float *)(curcontext + 0x18) * (double)*(float *)(curcontext + 0x20) *
                 (double)*(float *)(curcontext + 8));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
