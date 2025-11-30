/**
 * set_items_flag
 *
 * Extracted from fsn.c lines 45387-45403
 * Category: Other
 */

void set_items_flag(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
    }
    check_unmonitor_dp(param_1);
  }
  else {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x10;
    add_directory_monitor();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
