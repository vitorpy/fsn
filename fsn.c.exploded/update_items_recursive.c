/**
 * update_items_recursive
 *
 * Extracted from fsn.c lines 45414-45432
 * Category: Other
 */

void update_items_recursive(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  set_items_flag();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      update_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2),param_2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
