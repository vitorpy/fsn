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
  
  if (param_1 == curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */) {
    FUN_0041d920();
    if (DAT_10006e24 != '\0') {
      FUN_0041c720();
    }
  }
  else {
    if (curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) {
      FUN_0041d418();
      *(byte *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x74) =
           *(byte *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x74) & 0xdf;
      FUN_0041d920();
      curcontext[0xc50] = 0;
    }
    XtSetSensitive(menu_directory_cascade,1);
    param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ | 0x20;
    curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ = param_1;
    build_path_string((int)curcontext + 0x4c,param_1);
    FUN_0041c720();
    FUN_004207b4();
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xb) >> 0x1f;
    XtSetValues(menu_monitor_directory,&uStack_28,1);
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) >> 0x1f;
    XtSetValues(DAT_10016b58,&uStack_28,1);
    XtSetSensitive(menu_monitor_directory,-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd);
    FUN_0041c9e8();
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10) {
      FUN_00427e30(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d690):
     * Function: select_directory
     *
     * Looking at the GP offsets and structure:
     * **What it does:**
     * 1. Calls a function via GP-31184 (likely a cleanup/state function)
     * 2. If s0->field_0x64 is non-null, calls GP-32180 (probably free/destroy) and clears it
     * 3. Checks bit 21 of s0->field_0x74 (flags); if NOT set, calls GP-30956 with s0 as arg
     * 4. Restores registers and returns
     * **C pseudocode:**
     * ```c
     * // After halt_baddata region in select_directory:
     * some_state_function();  // GP-31184
     * if (dir->field_0x64 != NULL) {
     * destroy_something(dir->field_0x64);  // GP-32180
     * dir->field_0x64 = NULL;
     * }
     * // Check bit 21 of flags (0x74 offset)
     * if ((dir->flags & 0x00200000) == 0) {
     * update_directory_state(dir);  // GP-30956
     * }
     * return;
     * ```
     * The bit extraction: `sll 0xa` then `srl 0x1f` isolates bit 21 (shift left 10, then right 31 leaves only original bit 21 in position 0).
     */
halt_baddata();
}
