/**
 * setMoveAndCopyButtons
 *
 * Extracted from fsn.c lines 58473-58668
 * Category: UI
 */

void setMoveAndCopyButtons(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  XtSetSensitive(menu_directory_cascade,*(int *)(curcontext + 0x44) != 0);
  XtSetSensitive(menu_file_cascade,*(int *)(curcontext + 0x48) != 0);
  XtSetSensitive(popup_menu_widget,*(int *)(curcontext + 0x48) != 0);
  FUN_0041c928(1);
  if ((altcontext[0xc51] != '\0') && (iVar1 = *(int *)(curcontext + 0x44), iVar1 != 0)) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if (iVar2 != iVar1) {
      if (*(int *)(curcontext + 0x48) != 0) {
        uStack_28 = 0xe3f40b5;
        uStack_24 = DAT_10016b34;
        XtSetValues(menu_move_file_1,&uStack_28,1);
        XtSetValues(menu_move_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_move_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_move_file_2,bVar3);
        uStack_24 = DAT_10016b40;
        uStack_28 = 0xe3f40b5;
        XtSetValues(menu_copy_file_1,&uStack_28,1);
        XtSetValues(menu_copy_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_copy_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_copy_file_2,bVar3);
        uStack_24 = DAT_10016b4c;
        uStack_28 = 0xe3f40b5;
        XtSetValues(menu_link_file_1,&uStack_28,1);
        XtSetValues(menu_link_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_link_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_link_file_2,bVar3);
        halt_baddata();
      }
      if (iVar1 == 0) {
        halt_baddata();
      }
      uStack_24 = DAT_10016b38;
      uStack_28 = 0xe3f40b5;
      XtSetValues(menu_move_file_1,&uStack_28,1);
      XtSetValues(menu_move_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_move_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_move_file_2,iVar1 != 0);
      uStack_28 = 0xe3f40b5;
      uStack_24 = DAT_10016b44;
      XtSetValues(menu_copy_file_1,&uStack_28,1);
      XtSetValues(menu_copy_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_copy_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_copy_file_2,iVar1 != 0);
      uStack_24 = DAT_10016b50;
      uStack_28 = 0xe3f40b5;
      XtSetValues(menu_link_file_1,&uStack_28,1);
      XtSetValues(menu_link_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_link_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_link_file_2,iVar1 != 0);
      XtSetSensitive(menu_file_cascade,1);
      XtSetSensitive(popup_menu_widget,1);
      FUN_0041c928(0);
      halt_baddata();
    }
  }
  uStack_24 = DAT_10016b30;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_move_file_1,&uStack_28,1);
  XtSetValues(menu_move_file_2,&uStack_28,1);
  XtSetSensitive(menu_move_file_1,0);
  XtSetSensitive(menu_move_file_2,0);
  uStack_24 = DAT_10016b3c;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_copy_file_1,&uStack_28,1);
  XtSetValues(menu_copy_file_2,&uStack_28,1);
  XtSetSensitive(menu_copy_file_1,0);
  XtSetSensitive(menu_copy_file_2,0);
  uStack_24 = DAT_10016b48;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_link_file_1,&uStack_28,1);
  XtSetValues(menu_link_file_2,&uStack_28,1);
  XtSetSensitive(menu_link_file_1,0);
  XtSetSensitive(menu_link_file_2,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
