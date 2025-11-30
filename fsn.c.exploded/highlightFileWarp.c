/**
 * highlightFileWarp
 *
 * Extracted from fsn.c lines 43489-43511
 * Category: Filesystem
 */

void highlightFileWarp(int param_1,int param_2)

{
  uint in_register_00001040;
  
  if (param_1 == *(int *)(curcontext + 0x3c)) {
    pushmatrix();
    translate(0,(float)((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)in_register_00001040 << 0x20)));
    draw_entry(param_2);
    translate(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    if ((curcontext[0xc50] == '\0') || (overlay_mode_flag == '\0')) {
      scale(view_offset_x,view_offset_x);
    }
    else {
      scale(view_offset_x,view_offset_x);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
