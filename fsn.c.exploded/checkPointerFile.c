/**
 * checkPointerFile
 *
 * Extracted from fsn.c lines 49528-49557
 * Category: Filesystem
 */

void checkPointerFile(int param_1,undefined4 param_2)

{
  if (param_1 == selected_id_1) {
    pushmatrix();
    translate(*(float *)(selected_id_2 + 0x14) - (view_offset_x + view_offset_adjustment),
              *(undefined4 *)(selected_id_2 + 0x18),&fsn_resources,param_2,0);
    scale(view_offset_x,view_offset_x);
    bgnclosedline();
    v2f(&matrix_buffer_3);
    v2f(&current_matrix_ptr);
    v2f(&projection_matrix_ptr);
    endclosedline();
    popmatrix();
  }
  else if (param_1 == selected_id_2) {
    pushmatrix();
    translate(*(float *)(selected_id_1 + 0x14) + view_offset_x + view_offset_adjustment,
              *(undefined4 *)(selected_id_1 + 0x18),&fsn_resources,param_2,0);
    scale(view_offset_x,view_offset_x);
    bgnclosedline();
    v2f(&matrix_buffer_0);
    v2f(&matrix_buffer_1);
    v2f(&matrix_buffer_2);
    endclosedline();
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
