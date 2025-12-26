/**
 * FUN_0042aed4
 *
 * Extracted from fsn.c lines 67080-67110
 * Ghidra address: 0x0042aed4
 * Category: Other
 */

void FUN_0042aed4(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  piVar1 = (int *)(param_2 + param_3 * 8);
  iVar5 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *piVar1 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x19b3;
  piVar1[1] = 0;
  piVar1 = (int *)(param_2 + (param_3 + 1) * 8);
  iVar3 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
  iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */;
  *piVar1 = iVar5 + 0x19aa;
  piVar1[1] = 0;
  piVar1 = (int *)(param_2 + (param_3 + 2) * 8);
  piVar1[1] = iVar4 + 0x79c4;
  *piVar1 = iVar3 + 0x35b;
  uVar2 = /* TODO: GP:-0x7f44 */ (**(code **)(unaff_gp + -0x7f44) /* -> EXTERNAL_0x0e320a38 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c74,param_2,param_3 + 3);
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6e10) = uVar2;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  uVar2 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e10));
  /* TODO: GP:-0x7e84 */ (**(code **)(unaff_gp + -0x7e84) /* -> EXTERNAL_0x0f54f768 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042aed4):
     * Function: FUN_0042aed4
     *
     * Looking at the GP offsets and the call sequence:
     * **1. What it does:**
     * Calls a widget creation function, stores result in a global (offset 0x6e10 from data base), calls XtRealizeWidget on it, gets its window via XtWindow, then calls XDefineCursor on curcontext's window with that cursor.
     * **2. C pseudocode:**
     * ```c
     * Widget w = XtCreateWidget(..., 7284);  // jalr at 42af50, arg a1+7284
     * DAT_10006e10 = w;                       // store at gp[-32660]+28176
     * XtRealizeWidget(w);                     // gp[-31864] = XtRealizeWidget
     * Window win = XtWindow(DAT_10006e10);    // gp[-31896] = XtWindow
     * XDefineCursor(curcontext[0], win);      // gp[-32388]=XDefineCursor, gp[-30204]=curcontext
     * return;
     * ```
     * GP offset resolution:
     * - gp[-32660]+28176 = data base + 0x6e10 = DAT_10006e10 (some widget storage)
     * - gp[-31864] = XtRealizeWidget
     * - gp[-31896] = XtWindow
     * - gp[-32388] = XDefineCursor
     * - gp[-30204] = curcontext pointer
     */
halt_baddata();
}
