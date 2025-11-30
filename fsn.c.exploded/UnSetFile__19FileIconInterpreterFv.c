/**
 * UnSetFile__19FileIconInterpreterFv
 *
 * Extracted from fsn.c lines 58178-58193
 * Category: Filesystem
 */

void UnSetFile__19FileIconInterpreterFv(int param_1)

{
  if (*(int *)(param_1 + 0x23c) != 0) {
    close(*(int *)(param_1 + 0x238));
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
