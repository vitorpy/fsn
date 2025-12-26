/**
 * FUN_0041f118
 *
 * Extracted from fsn.c lines 59818-59842
 * Ghidra address: 0x0041f118
 * Category: Other
 */

void FUN_0041f118(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  if (iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */ == 0) {
    if ((iVar1->flags /* was: *(int *)(iVar1 + 0x44) */ != 0) && (iVar1->height /* was: *(int *)(iVar1 + 0x3c) */ != iVar1->flags /* was: *(int *)(iVar1 + 0x44) */)) {
      (**(code **)(unaff_gp + -0x7aa4) /* -> do_warp */)() /* =do_warp */;
    }
  }
  else {
    uVar2 = 4;
    if (param_1 != '\0') {
      uVar2 = 5;
    }
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1da0))
              (iVar1->flags /* was: *(undefined4 *)(iVar1 + 0x44) */,iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */,uVar2,param_1 == '\0',
               *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4b60,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4b58);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041f118):
     * Function: FUN_0041f118
     *
     * Looking at this assembly:
     * **What it does:**
     * 1. Calls a function via GP offset -32740 (likely XtAppAddWorkProc or similar Xt function), passing a callback at GP-32676 offset and a boolean flag (inverted from sp+43)
     * 2. Alternatively (from 0x41f190 branch): if v0->field_0x44 is non-null and differs from v0->field_0x3c, calls function at GP-31396
     * **C pseudocode:**
     * ```c
     * /* Path 1: from 0x41f160 */
     * char flag = *(char*)(sp + 43);
     * XtAppAddWorkProc(app_context, workproc_callback, (flag == 0));
     * return;
     * /* Path 2: from 0x41f190 (alternate branch) */
     * void *field_44 = node->field_0x44;  /* v0+68 */
     * if (field_44 != NULL) {
     * void *field_3c = node->field_0x3c;  /* v0+60 */
     * if (field_3c != field_44) {
     * some_function(field_44);  /* GP offset -31396 */
     * }
     * }
     * return;
     * ```
     * The two paths appear to be from different branches earlier in the function - path 1 sets up a work procedure callback with an inverted boolean, path 2 conditionally calls a function if two node fields differ (possibly a redraw or update when selection changed).
     */
halt_baddata();
}
