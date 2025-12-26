/**
 * FUN_0041bd0c
 *
 * Extracted from fsn.c lines 58026-58050
 * Ghidra address: 0x0041bd0c
 * Category: Other
 */

void FUN_0041bd0c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  undefined1 auStack_50 [80];
  
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e30,auStack_50,0);
  iVar2 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b8c) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1368,0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b8c),0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b8c));
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e1c,auStack_50,0);
  iVar2 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b90) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1180,0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b90),0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b90));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041bd0c):
     * Function: FUN_0041bd0c
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Stores a widget pointer to a global location (DAT_10006b90), calls XtVaCreateManagedWidget to create a widget with string/resource args, then calls XtManageChild and XtRealizeWidget on the stored widget.
     * **2. C pseudocode:**
     * ```c
     * // v0 contains widget from previous call
     * DAT_10006b90 = v0;  // Store widget pointer
     * // XtVaCreateManagedWidget(widget, "string_at_gp+4683", resource_at_gp-4480, NULL)
     * XtVaCreateManagedWidget(v0, some_widget_name, some_widget_class, NULL);
     * // Manage and realize the stored widget
     * XtManageChild(DAT_10006b90);
     * XtRealizeWidget(DAT_10006b90);
     * // Function epilogue - restore ra, gp, deallocate 120 bytes stack
     * ```
     * GP offset mapping (you'll need to verify with your GP_MAPPING.md):
     * - gp-31828 (0x83ac) → XtVaCreateManagedWidget
     * - gp-31976 (0x8318) → XtManageChild
     * - gp-31864 (0x8388) → XtRealizeWidget
     * - gp-32660+27536 → DAT_10006b90 (widget storage global)
     */
halt_baddata();
}
