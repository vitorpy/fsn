/**
 * markAllVisible
 *
 * Extracted from fsn.c lines 48494-48514
 * Category: Other
 */

void markAllVisible(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x74) =
       (byte)((*(uint *)(param_1 + 0x74) >> 0x1e | curcontextflag) << 6) |
       *(byte *)(param_1 + 0x74) & 0x3f;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      draw_directory_tree(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
