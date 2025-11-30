/**
 * unselect_directory
 *
 * Extracted from fsn.c lines 58980-59004
 * Category: Filesystem
 */

void unselect_directory(void)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(curcontext + 0x44) != 0) {
    curcontext[0xc50] = 0;
    FUN_0041d418();
    XtSetSensitive(menu_directory_cascade,0);
    FUN_0041d920();
    *(byte *)(*(int *)(curcontext + 0x44) + 0x74) =
         *(byte *)(*(int *)(curcontext + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(curcontext + 0x44) = 0;
    curcontext[0x4c] = 0;
    FUN_0041c720();
    uStack_24 = blankXmString;
    uStack_28 = 0xe3f40b5;
    XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&uStack_28,1);
    FUN_0041c9e8();
    FUN_004207b4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
