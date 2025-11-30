/**
 * unselect_file
 *
 * Extracted from fsn.c lines 59154-59175
 * Category: Filesystem
 */

void unselect_file(void)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(curcontext + 0x48) != 0) {
    XtSetSensitive(menu_file_cascade,0);
    XtSetSensitive(popup_menu_widget,0);
    *(byte *)(*(int *)(curcontext + 0x48) + 0x28) =
         *(byte *)(*(int *)(curcontext + 0x48) + 0x28) & 0xef;
    *(undefined4 *)(curcontext + 0x48) = 0;
    FUN_0041c720();
    uStack_28 = 0;
    uStack_2c = 0xe3f48f1;
    XtSetValues(menu_delete_file_1,&uStack_2c,1);
    XtSetValues(menu_delete_file_2,&uStack_2c,1);
    FUN_0041c9e8();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
