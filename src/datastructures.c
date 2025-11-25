// datastructures.c - Tree and data structure management
// Extracted from fsn.c - Phase 4 Modularization
// NOTE: Initial extraction - more functions will be added as discovered

#include "../include/fsn.h"
#include "../include/datastructures.h"

// WARNING: Control flow encountered bad instruction data

void pruneSubTree(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
  FUN_00427ec8();
  iVar1 = *(int *)(param_1 + 0xc);
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
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_004186a0(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xef;
      iVar1 = *(int *)(param_1 + 0x14);
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void pruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 4;
  FUN_004186a0();
  FUN_0041dba0();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void unpruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  FUN_00417b88();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
