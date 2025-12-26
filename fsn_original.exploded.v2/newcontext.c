/**
 * newcontext
 *
 * Extracted from fsn.c lines 66400-66446
 * Category: Other
 */

void newcontext(uint param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != curcontextid) {
    iVar1 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
    if (iVar1 != 0) {
      iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ & 0xdf;
    }
    iVar1 = curcontext->current_file /* was: *(int *)(curcontext + 0x48) */;
    if (iVar1 != 0) {
      iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ & 0xef;
    }
    curcontext = context + param_1 * 0xc54;
    curcontextwindows = contextwindows + param_1 * 0x38;
    altcontext = context + (1 - param_1) * 0xc54;
    altcontextwindows = contextwindows + (1 - param_1) * 0x38;
    curcontextflag = 1 << (param_1 & 0x1f);
    iVar1 = *(int *)(context + param_1 * 0xc54 + 0x44);
    curcontextid = param_1;
    if (iVar1 != 0) {
      iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ | 0x20;
    }
    iVar1 = curcontext->current_file /* was: *(int *)(curcontext + 0x48) */;
    if (iVar1 != 0) {
      iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ | 0x10;
    }
    if (param_2 == '\0') {
      uVar2 = XtDisplay(*(undefined4 *)(altcontextwindows + 0x28));
      uVar3 = XtWindow(*(undefined4 *)(altcontextwindows + 0x28));
      XMapWindow(uVar2,uVar3);
      uVar2 = XtDisplay(*(undefined4 *)(curcontextwindows + 0x28));
      uVar3 = XtWindow(*(undefined4 *)(curcontextwindows + 0x28));
      XUnmapWindow(uVar2,uVar3);
      FUN_0041c9e8();
      FUN_004207b4();
      curcontext[0xc53] = 0;
      altcontext[0xc53] = 1;
      FUN_0040d804();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a4c8):
     * Function: newcontext
     *
     * Looking at the GP offsets and the assembly:
     * **1. What it does:**
     * Calls two functions (GP-0x8630 and GP-0x8674), then sets `prevcontext->field_0xc53 = 0` and `curcontext->field_0xc53 = 1`, then calls a third function (GP-0x8544). This marks the previous context as inactive and current context as active.
     * **2. C pseudocode:**
     * ```c
     * func_at_gp_minus_8630();           // GP-0x8630
     * func_at_gp_minus_8674();           // GP-0x8674
     * prevcontext[0]->byte_c53 = 0;      // GP-0x897c -> prevcontext, clear active flag
     * curcontext[0]->byte_c53 = 1;       // GP-0x8980 -> curcontext, set active flag
     * func_at_gp_minus_8544();           // GP-0x8544
     * ```
     * To get the actual function names, check GP_MAPPING.md for offsets 0x8630, 0x8674, 0x8544, 0x897c, and 0x8980. The 0xc53 offset (3155 decimal) is a flag byte in the context structure indicating whether that context is currently active/focused.
     */
halt_baddata();
}
