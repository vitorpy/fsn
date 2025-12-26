/**
 * FUN_0041d920
 *
 * Extracted from fsn.c lines 59181-59207
 * Ghidra address: 0x0041d920
 * Category: Other
 */

void FUN_0041d920(void)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_2c [11];
  
  if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x48) != 0) {
    /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),0);
    /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),0);
    piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    iVar1 = *(int *)(*piVar2 + 0x48);
    iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ & 0xef;
    *(undefined4 *)(*piVar2 + 0x48) = 0;
    (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)() /* =FUN_0041c720 */;
    local_2c[1] = 0;
    local_2c[0] = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2589;
    /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b84),local_2c,1);
    /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b88),local_2c,1);
    (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)() /* =FUN_0041c9e8 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d920):
     * Function: FUN_0041d920
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Stores string "helpCursor" (0x9609 offset into rodata) at sp+44, then calls XtVaSetValues twice on two widgets (curcontextwindows[0x6b84] and curcontextwindows[0x6b88]) to set the cursor resource, then calls a cleanup/flush function.
     * **2. C pseudocode:**
     * ```c
     * char *cursor_name = "helpCursor";
     * XtVaSetValues(curcontextwindows->widget_at_6b84, XmNcursor, cursor_name, NULL);
     * XtVaSetValues(curcontextwindows->widget_at_6b88, XmNcursor, cursor_name, NULL);
     * XFlush(display);  // or similar cleanup call at GP-31184
     * ```
     * GP offsets resolved:
     * - GP-32608 (0x80a0): rodata base, +9609 = "helpCursor" string
     * - GP-32660 (0x806c): curcontextwindows pointer
     * - GP-31936 (0x8340): XtVaSetValues
     * - GP-31184 (0x8630): likely XFlush or XSync
     */
halt_baddata();
}
