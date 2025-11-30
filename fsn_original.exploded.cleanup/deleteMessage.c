/**
 * deleteMessage
 *
 * Extracted from fsn.c lines 51957-51987
 * Category: UI
 */

void deleteMessage(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = DAT_10000020;
  if (param_1 == DAT_10000020) {
    do {
      DAT_10000020 = (undefined4 *)puVar1[1];
      XmStringFree(*puVar1);
      XtFree(puVar1);
      if (DAT_10000020 == (undefined4 *)0x0) break;
      puVar1 = DAT_10000020;
    } while (*(char *)(DAT_10000020 + 2) != '\0');
    if (DAT_10000020 == (undefined4 *)0x0) {
      local_8 = blankXmString;
    }
    else {
      local_8 = *DAT_10000020;
    }
    local_c = 0xe3f40b5;
    XtSetValues(message_widget,&local_c,1);
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
