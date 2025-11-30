/**
 * checkPointerFile
 *
 * Extracted from fsn.c lines 64246-64275
 * Category: Filesystem
 */

void checkPointerFile(int param_1,undefined4 param_2)

{
  if (param_1 == selected_id_1) {
    pushmatrix();
    translate(*(float *)(selected_id_2 + 0x14) - (view_offset_x + DAT_10017504),
              *(undefined4 *)(selected_id_2 + 0x18),&fsn_resources,param_2,0);
    scale(view_offset_x,view_offset_x);
    bgnclosedline();
    v2f(&DAT_10006f28);
    v2f(&DAT_10006f30);
    v2f(&DAT_10006f38);
    endclosedline();
    popmatrix();
  }
  else if (param_1 == selected_id_2) {
    pushmatrix();
    translate(*(float *)(selected_id_1 + 0x14) + view_offset_x + DAT_10017504,
              *(undefined4 *)(selected_id_1 + 0x18),&fsn_resources,param_2,0);
    scale(view_offset_x,view_offset_x);
    bgnclosedline();
    v2f(&DAT_10006f10);
    v2f(&DAT_10006f18);
    v2f(&DAT_10006f20);
    endclosedline();
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
