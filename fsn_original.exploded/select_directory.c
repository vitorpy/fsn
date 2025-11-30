/**
 * select_directory
 *
 * Extracted from fsn.c lines 59045-59089
 * Category: Filesystem
 */

void select_directory(int param_1)

{
  undefined4 uStack_28;
  uint uStack_24;
  
  if (param_1 == *(int *)(curcontext + 0x44)) {
    FUN_0041d920();
    if (DAT_10006e24 != '\0') {
      FUN_0041c720();
    }
  }
  else {
    if (*(int *)(curcontext + 0x44) != 0) {
      FUN_0041d418();
      *(byte *)(*(int *)(curcontext + 0x44) + 0x74) =
           *(byte *)(*(int *)(curcontext + 0x44) + 0x74) & 0xdf;
      FUN_0041d920();
      curcontext[0xc50] = 0;
    }
    XtSetSensitive(menu_directory_cascade,1);
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x20;
    *(int *)(curcontext + 0x44) = param_1;
    build_path_string((int)curcontext + 0x4c,param_1);
    FUN_0041c720();
    FUN_004207b4();
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(*(int *)(param_1 + 0x74) << 0xb) >> 0x1f;
    XtSetValues(menu_monitor_directory,&uStack_28,1);
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(*(int *)(param_1 + 0x74) << 0xd) >> 0x1f;
    XtSetValues(DAT_10016b58,&uStack_28,1);
    XtSetSensitive(menu_monitor_directory,-1 < *(int *)(param_1 + 0x74) << 0xd);
    FUN_0041c9e8();
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      FUN_00427e30(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
