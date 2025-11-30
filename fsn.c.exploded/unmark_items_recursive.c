/**
 * unmark_items_recursive
 *
 * Extracted from fsn.c lines 45563-45607
 * Category: Other
 */

void unmark_items_recursive(int param_1)

{
  char *__dest;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x74) << 0xc < 0) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar3 = 0;
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3);
        if ((int)(puVar2[10] << 9) < 0) {
          __dest = (char *)build_path_string(0,param_1);
          strcat(__dest,(char *)*puVar2);
          iVar1 = unlink(__dest);
          if (iVar1 < 0) {
            show_error_dialog("cannot delete",__dest);
            *(byte *)((int)puVar2 + 0x29) = *(byte *)((int)puVar2 + 0x29) & 0xbf;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0xc));
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      refresh_directory_view(param_1);
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      unmark_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
