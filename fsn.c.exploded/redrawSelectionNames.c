/**
 * redrawSelectionNames
 *
 * Extracted from fsn.c lines 44385-44415
 * Category: Graphics
 */

void redrawSelectionNames(void)

{
  size_t sVar1;
  
  if ((curcontext[0xc51] != '\0') && (curcontext[0xc52] != '\0')) {
    mark_menu_widget = 0;
    if (*(int *)(curcontext + 0x48) == 0) {
      if (*(int *)(curcontext + 0x44) == 0) {
        XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),"No file");
      }
      else {
        XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),(int)curcontext + 0x4c);
        sVar1 = strlen(curcontext + 0x4c);
        XmTextFieldShowPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
        sVar1 = strlen(curcontext + 0x4c);
        XmTextFieldSetInsertionPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
      }
    }
    else {
      XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),(int)curcontext + 0x44c);
      sVar1 = strlen(curcontext + 0x44c);
      XmTextFieldShowPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
      sVar1 = strlen(curcontext + 0x44c);
      XmTextFieldSetInsertionPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
    }
    prepare_draw_frame();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
