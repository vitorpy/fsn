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
  
  if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0) {
    XtSetSensitive(menu_file_cascade,0);
    XtSetSensitive(popup_menu_widget,0);
    *(byte *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x28) =
         *(byte *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x28) & 0xef;
    curcontext->current_file /* was: *(undefined4 *)(curcontext + 0x48) */ = 0;
    FUN_0041c720();
    uStack_28 = 0;
    uStack_2c = 0xe3f48f1;
    XtSetValues(menu_delete_file_1,&uStack_2c,1);
    XtSetValues(menu_delete_file_2,&uStack_2c,1);
    FUN_0041c9e8();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d914):
     * Function: unselect_file
     *
     * Looking at the GP offsets and the assembly pattern:
     * **1. What it does:**
     * Sets up a string argument (base + 9609 offset = likely "selectedName" or similar XmString), then calls XtSetValues twice on two different widgets (at curcontext offsets 0x6b84 and 0x6b88), and finally calls a cleanup/redraw function.
     * **2. C pseudocode:**
     * ```c
     * Arg args[1];
     * args[0].value = 0;  // sw zero,48(sp) - clearing a value
     * char *resource_name = some_base + 9609;  // "selectedName" or XmN resource string
     * Widget w1 = ((Widget*)curcontext)[0x6b84/4];  // offset 27524
     * Widget w2 = ((Widget*)curcontext)[0x6b88/4];  // offset 27528
     * XtSetValues(w1, resource_name, 1);  // GP offset -31936 = XtSetValues
     * XtSetValues(w2, resource_name, 1);
     * redraw_or_update();  // GP offset -31184, likely schedule_redraw or similar
     * ```
     * Note: The `addiu t2,t2,9609` suggests building a pointer to a string constant. GP offset -32608 is likely a string table base, and 9609 is the offset to something like "selectedName". The two widgets at curcontext+0x6b84 and +0x6b88 are probably selection display labels being cleared.
     */
halt_baddata();
}
