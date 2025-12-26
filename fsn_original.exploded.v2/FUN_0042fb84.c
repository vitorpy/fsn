/**
 * FUN_0042fb84
 *
 * Extracted from fsn.c lines 69794-69833
 * Ghidra address: 0x0042fb84
 * Category: Other
 */

void FUN_0042fb84(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int unaff_gp;
  undefined4 local_20 [3];
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x69d0) == 0) {
    uVar1 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)();
    puVar3 = display /* was: *(undefined4 **)(unaff_gp + -0x75fc) */ /* -> display */;
    local_4 = /* TODO: GP:-0x7bb0 */ (**(code **)(unaff_gp + -0x7bb0) /* -> EXTERNAL_0x0f547d40 */)
                        (*puVar3,uVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6ad0,0x20,0x20);
    uVar1 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)(param_1);
    local_8 = /* TODO: GP:-0x7bb0 */ (**(code **)(unaff_gp + -0x7bb0) /* -> EXTERNAL_0x0f547d40 */)
                        (*puVar3,uVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6a50,0x20,0x20);
    iVar2 = /* TODO: GP:-0x7bb4 */ (**(code **)(unaff_gp + -0x7bb4) /* -> EXTERNAL_0x0f6968fc */)(param_1);
    local_20[0] = iVar2->pos_y /* was: *(undefined4 *)(iVar2 + 0x38) */;
    iVar2 = /* TODO: GP:-0x7bb4 */ (**(code **)(unaff_gp + -0x7bb4) /* -> EXTERNAL_0x0f6968fc */)(param_1);
    local_14[0] = iVar2->pos_x /* was: *(undefined4 *)(iVar2 + 0x34) */;
    iVar2 = /* TODO: GP:-0x7bb4 */ (**(code **)(unaff_gp + -0x7bb4) /* -> EXTERNAL_0x0f6968fc */)(param_1);
    /* TODO: GP:-0x7b74 */ (**(code **)(unaff_gp + -0x7b74) /* -> EXTERNAL_0x0f54f258 */)(*puVar3,iVar2->child_right /* was: *(undefined4 *)(iVar2 + 0x30) */,local_20,2);
    uVar1 = /* TODO: GP:-0x7b84 */ (**(code **)(unaff_gp + -0x7b84) /* -> EXTERNAL_0x0f5603e4 */)(*puVar3,local_4,local_8,local_20,local_14,0xf,0xf);
    pcVar4 = /* TODO: GP:-0x7b8c */ *(code **)(unaff_gp + -0x7b8c) /* -> EXTERNAL_0x0f54a21c */;
    *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x69d0) = uVar1;
    (*pcVar4)(*puVar3,local_4);
    /* TODO: GP:-0x7b8c */ (**(code **)(unaff_gp + -0x7b8c) /* -> EXTERNAL_0x0f54a21c */)(*puVar3,local_8);
  }
  puVar3 = display /* was: *(undefined4 **)(unaff_gp + -0x75fc) */ /* -> display */;
  uVar1 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)(param_1);
  /* TODO: GP:-0x7b90 */ (**(code **)(unaff_gp + -0x7b90) /* -> EXTERNAL_0x0f561aec */)
            (*puVar3,uVar1,*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69d0));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042fb84):
     * Function: FUN_0042fb84
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls XtSetArg twice on widget from s0 (setting a resource), calls XtFree on s1, then calls XtSetValues on the widget with the arg list. Standard Xt resource-setting pattern.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets: -31628 = XtSetArg, -31896 = XtFree, -31632 = XtSetValues
     * // s0 = pointer to widget, s1 = string to free, sp+88 = resource value
     * Widget w = *s0;
     * Arg args[1];
     * XtSetArg(args[0], resource_name, sp_0x58_value);  // First XtSetArg at 42fcd8
     * XtSetArg(args[0], resource_name, sp_0x58_value);  // Second XtSetArg at 42fcf0 (likely setting name,value pair)
     * XtFree(s1);                                        // Free old string at 42fd08
     * XtSetValues(w, args, 1);                          // Apply to widget at 42fd24
     * ```
     * More likely the two XtSetArg calls are building an Arg array (index 0 for name, reusing for value), then XtSetValues applies it. The -27088(a2) load retrieves a stored value (likely XmNlabelString or similar resource constant).
     */
halt_baddata();
}
