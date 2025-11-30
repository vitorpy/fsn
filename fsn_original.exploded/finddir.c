/**
 * finddir
 *
 * Extracted from fsn.c lines 53265-53278
 * Category: Filesystem
 */

void finddir(int param_1,undefined4 param_2)

{
  undefined4 auStack_80 [30];
  undefined4 *apuStack_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    apuStack_8[0] = auStack_80;
    auStack_80[0] = param_2;
    bsearch(apuStack_8,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x14),4,compare_dirs);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
