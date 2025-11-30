/**
 * fileStoppedExecuting
 *
 * Extracted from fsn.c lines 41945-41958
 * Category: Filesystem
 */

void fileStoppedExecuting(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = validate_directory_access();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    set_icon_flags(*(undefined4 *)(iVar1 + 0x20),0,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7;
  }
  update_item_state(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
