/**
 * free_child_nodes
 *
 * Extracted from fsn.c lines 40328-40367
 * Category: Memory
 */

void free_child_nodes(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xef;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfb;
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x10));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      free_child_nodes(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = *(int *)(param_1 + 0x14);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x18));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
