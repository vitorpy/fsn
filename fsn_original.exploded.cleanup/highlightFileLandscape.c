/**
 * highlightFileLandscape
 *
 * Extracted from fsn.c lines 64329-64346
 * Category: Filesystem
 */

void highlightFileLandscape(int param_1,int param_2)

{
  pushmatrix();
  translate(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  scale(*(undefined4 *)(param_1 + 0x58));
  FUN_00427300(param_2);
  translate(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
  if (((curcontext[0xc50] == '\0') || (DAT_10017495 == '\0')) ||
     (param_1 != *(int *)(curcontext + 0x44))) {
    scale(view_offset_x,view_offset_x);
  }
  else {
    scale(view_offset_x,view_offset_x);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
