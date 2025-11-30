/**
 * findfile
 *
 * Extracted from fsn.c lines 53224-53237
 * Category: Filesystem
 */

void findfile(int param_1,undefined4 param_2)

{
  undefined4 auStack_34 [11];
  undefined4 *apuStack_8 [2];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    apuStack_8[0] = auStack_34;
    auStack_34[0] = param_2;
    bsearch(apuStack_8,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0xc),4,compare_files);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
