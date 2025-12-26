/**
 * FUN_00427f5c
 *
 * Extracted from fsn.c lines 64807-64823
 * Ghidra address: 0x00427f5c
 * Category: Other
 */

void FUN_00427f5c(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((*fsn_resources /* was: *(char **)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ == '\0') &&
     (*(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x78b0) == 0)) {
    uVar1 = /* TODO: GP:-0x7f30 */ (**(code **)(unaff_gp + -0x7f30) /* -> EXTERNAL_0x0f6924a8 */)
                      (**(undefined4 **)(unaff_gp + -0x7600) /* -> app_context */,
                       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c70),1,
                       *(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x7fbc,0);
    *(undefined4 *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x78b0) = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427f5c):
     * Function: FUN_00427f5c
     *
     * Looking at this assembly:
     * **What it does:**
     * Checks if a global flag is set; if not, checks if a work proc is already registered. If neither, registers an X11 work proc callback (XtAppAddWorkProc) and stores the returned ID.
     * **C pseudocode:**
     * ```c
     * void dirfamMonitor(void) {
     * if (*some_flag_8a24 != 0)
     * return;
     * if (curcontext->workproc_id != 0)  // offset 0x78b0
     * return;
     * curcontext->workproc_id = XtAppAddWorkProc(
     * app_context,           // gp[-30208] dereferenced
     * curcontext->callback,  // offset 0x6c70
     * 1,                     // removeOnce = true
     * some_client_data_8020 + (-32700),  // offset calculation
     * NULL                   // last arg = 0
     * );
     * }
     * ```
     * GP offsets: -30172 (flag), -32664 (curcontext base), -30208 (app_context ptr), -32660 (another context), -32736 (data ptr), -32560 (XtAppAddWorkProc)
     */
halt_baddata();
}
