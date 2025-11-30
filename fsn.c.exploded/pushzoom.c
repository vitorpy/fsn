/**
 * pushzoom
 *
 * Extracted from fsn.c lines 38264-38301
 * Category: Other
 */

void pushzoom(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_38 [12];
  undefined4 auStack_8 [2];
  
  get_view_position(auStack_38);
  iVar2 = equalPositions(auStack_38,
                         *(int *)(curcontextwindows + 0x34) + *(int *)(curcontext + 0x40) * 0x38);
  if (iVar2 == 0) {
    *(int *)(curcontext + 0x40) = *(int *)(curcontext + 0x40) + 1;
    iVar2 = *(int *)(curcontext + 0x40);
    if (9 < iVar2) {
      *(undefined4 *)(curcontext + 0x40) = 0;
      iVar2 = *(int *)(curcontext + 0x40);
    }
    puVar1 = (undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 * 0x38);
    puVar5 = auStack_38;
    do {
      puVar4 = puVar5;
      puVar3 = puVar1;
      puVar5 = puVar4 + 3;
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar1 = puVar3 + 3;
    } while (puVar5 != auStack_8);
    puVar3[3] = *puVar5;
    puVar3[4] = puVar4[4];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
