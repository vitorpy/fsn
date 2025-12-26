/**
 * FUN_00427fe0
 *
 * Extracted from fsn.c lines 64844-64856
 * Ghidra address: 0x00427fe0
 * Category: Other
 */

void FUN_00427fe0(void)

{
  int unaff_gp;
  
  if ((*fsn_resources /* was: *(char **)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ == '\0') &&
     (*(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x78b0) != 0)) {
    /* TODO: GP:-0x7f2c */ (**(code **)(unaff_gp + -0x7f2c) /* -> EXTERNAL_0x0f69ff68 */)();
    *(undefined4 *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x78b0) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427fe0):
     * Function: FUN_00427fe0
     *
     * Based on the assembly analysis:
     * **What it does:**
     * Unmonitors directory FAM (File Alteration Monitor). If fsn_resources flag is zero (not using static mode) and an input_id exists at curcontext+0x78b0, calls XtRemoveInput() to unregister the FAM callback, then clears the input_id.
     * **C pseudocode:**
     * ```c
     * void dirfamUnmonitor(void)
     * {
     * if (*fsn_resources == '\0') {
     * XtInputId input_id = curcontext->fam_input_id;  // offset 0x78b0
     * if (input_id != 0) {
     * XtRemoveInput(input_id);
     * curcontext->fam_input_id = 0;
     * }
     * }
     * }
     * ```
     * Key observations:
     * - GP-30172 (0x8a24) → fsn_resources pointer
     * - GP-32664 (0x8068) → curcontext pointer
     * - GP-32556 (0x80d4) → XtRemoveInput function pointer
     * - Offset 0x78b0 in curcontext = FAM input ID storage
     * - The function only acts when fsn_resources is zero (dynamic/live mode, not static demo mode)
     */
halt_baddata();
}
