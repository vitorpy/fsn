/**
 * traverse_directories
 *
 * Extracted from fsn.c lines 48802-48824
 * Category: Filesystem
 */

void traverse_directories(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    if ((*(int *)(param_1 + 0x74) << 2 < 0) || ((*(ushort *)(param_1 + 0x74) & 1) != 0)) {
      render_tree_level(param_1);
    }
    iVar1 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        traverse_directories(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
