/**
 * FUN_0041e988
 *
 * Extracted from fsn.c lines 59587-59615
 * Ghidra address: 0x0041e988
 * Category: Other
 */

void FUN_0041e988(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_2c;
  uint local_28;
  
  iVar1 = *(int *)(curcontext + 0x48);
  if ((iVar1 != 0) && (*(int *)(curcontext + 0x44) != 0)) {
    if (*(int *)(param_3 + 8) == 0) {
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xbf;
    }
    else {
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x40;
      *(byte *)(*(int *)(curcontext + 0x44) + 0x75) =
           *(byte *)(*(int *)(curcontext + 0x44) + 0x75) | 8;
      XtSetSensitive(menu_process_deletes,1);
      XtSetSensitive(menu_undo_deletes,1);
    }
    redraw_gl_scene();
    FUN_0042a8e4();
    local_2c = 0xe3f48f1;
    local_28 = (uint)(*(int *)(*(int *)(curcontext + 0x48) + 0x28) << 9) >> 0x1f;
    XtSetValues(menu_delete_file_1,&local_2c,1);
    XtSetValues(menu_delete_file_2,&local_2c,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
