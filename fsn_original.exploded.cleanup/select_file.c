/**
 * select_file
 *
 * Extracted from fsn.c lines 59213-59238
 * Category: Filesystem
 */

void select_file(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar1 = *(int *)(curcontext + 0x48);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
  }
  XtSetSensitive(menu_file_cascade,1);
  XtSetSensitive(popup_menu_widget,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined4 **)(curcontext + 0x48) = param_1;
  strcpy(curcontext + 0x44c,curcontext + 0x4c);
  strcat(curcontext + 0x44c,(char *)*param_1);
  FUN_0041c720();
  uStack_30 = 0xe3f48f1;
  uStack_2c = (uint)(param_1[10] << 9) >> 0x1f;
  XtSetValues(menu_delete_file_1,&uStack_30,1);
  XtSetValues(menu_delete_file_2,&uStack_30,1);
  FUN_0041c9e8();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
