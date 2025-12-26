/**
 * FUN_00430cb4
 *
 * Extracted from fsn.c lines 70412-70529
 * Ghidra address: 0x00430cb4
 * Category: Other
 */

void FUN_00430cb4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  uVar1 = /* TODO: GP:-0x7e90 */ (**(code **)(unaff_gp + -0x7e90) /* -> EXTERNAL_0x0e35c908 */)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d24);
  iVar5 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */;
  pcVar6 = /* TODO: GP:-0x7e90 */ *(code **)(unaff_gp + -0x7e90) /* -> EXTERNAL_0x0e35c908 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ed0) = uVar1;
  uVar1 = (*pcVar6)(iVar5 + 0x3d2c);
  iVar5 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */;
  pcVar6 = /* TODO: GP:-0x7e90 */ *(code **)(unaff_gp + -0x7e90) /* -> EXTERNAL_0x0e35c908 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ed4) = uVar1;
  uVar1 = (*pcVar6)(iVar5 + 0x3d30);
  iVar5 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */;
  pcVar6 = /* TODO: GP:-0x7ba4 */ *(code **)(unaff_gp + -0x7ba4) /* -> EXTERNAL_0x0e316b30 */;
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1795;
  local_24 = 1;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ed8) = uVar1;
  uVar1 = (*pcVar6)(param_1,iVar5 + 0x3d34,&local_28,1);
  uVar2 = /* TODO: GP:-0x7ba0 */ (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(uVar1,7);
  /* TODO: GP:-0x7b70 */ (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar2);
  uVar2 = /* TODO: GP:-0x7ba0 */ (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(uVar1,0xe);
  /* TODO: GP:-0x7b70 */ (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar2);
  uVar2 = /* TODO: GP:-0x7ba0 */ (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(uVar1,0xb);
  /* TODO: GP:-0x7b70 */ (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar2);
  uVar2 = /* TODO: GP:-0x7ba0 */ (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(uVar1,0xd);
  /* TODO: GP:-0x7b70 */ (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar2);
  uVar2 = /* TODO: GP:-0x7ba0 */ (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(uVar1,1);
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ef8) = uVar2;
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(uVar2,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ef8));
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x214e,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x448,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x12d9,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x8ec,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x14a5,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x7bc,0);
  local_24 = 1;
  local_28 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x1f9;
  uVar2 = /* TODO: GP:-0x7af8 */ (**(code **)(unaff_gp + -0x7af8) /* -> EXTERNAL_0x0e2e4d04 */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d3c,&local_28,1)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ed0);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  uVar3 = /* TODO: GP:-0x7c28 */ (**(code **)(unaff_gp + -0x7c28) /* -> EXTERNAL_0x0e29e814 */)(uVar2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d44,&local_28,1)
  ;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ee0) = uVar3;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar3);
  local_28 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x1f9;
  local_24 = 2;
  uVar3 = /* TODO: GP:-0x7af8 */ (**(code **)(unaff_gp + -0x7af8) /* -> EXTERNAL_0x0e2e4d04 */)(uVar2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d50,&local_28,1)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar3);
  uVar4 = /* TODO: GP:-0x7c28 */ (**(code **)(unaff_gp + -0x7c28) /* -> EXTERNAL_0x0e29e814 */)(uVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d5c,&local_28,0)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar4);
  uVar3 = /* TODO: GP:-0x7de4 */ (**(code **)(unaff_gp + -0x7de4) /* -> EXTERNAL_0x0e37bb60 */)(uVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d64,&local_28,0)
  ;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ee4) = uVar3;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar3);
  local_28 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x1f9;
  local_24 = 2;
  uVar3 = /* TODO: GP:-0x7af8 */ (**(code **)(unaff_gp + -0x7af8) /* -> EXTERNAL_0x0e2e4d04 */)(uVar2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d70,&local_28,1)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar3);
  uVar4 = /* TODO: GP:-0x7c28 */ (**(code **)(unaff_gp + -0x7c28) /* -> EXTERNAL_0x0e29e814 */)(uVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d7c,&local_28,0)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar4);
  local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ed8);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  uVar4 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3d84,&local_28,1)
  ;
  iVar5 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ef0) = uVar4;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar4,iVar5 + 0x124b,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0xb70,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ef0));
  iVar5 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */;
  pcVar6 = /* TODO: GP:-0x7de4 */ *(code **)(unaff_gp + -0x7de4) /* -> EXTERNAL_0x0e37bb60 */;
  *(undefined1 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6f04) = 0;
  uVar3 = (*pcVar6)(uVar3,iVar5 + 0x3d94,&local_28,0);
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ee8) = uVar3;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar3);
  local_24 = 2;
  local_28 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x1f9;
  uVar2 = /* TODO: GP:-0x7af8 */ (**(code **)(unaff_gp + -0x7af8) /* -> EXTERNAL_0x0e2e4d04 */)(uVar2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3da0,&local_28,1)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  uVar3 = /* TODO: GP:-0x7c28 */ (**(code **)(unaff_gp + -0x7c28) /* -> EXTERNAL_0x0e29e814 */)(uVar2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3dac,&local_28,0)
  ;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar3);
  local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ed8);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  uVar3 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3db0,&local_28,1)
  ;
  iVar5 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ef4) = uVar3;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar3,iVar5 + 0x124b,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0xc0c,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ef4));
  iVar5 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */;
  pcVar6 = /* TODO: GP:-0x7de4 */ *(code **)(unaff_gp + -0x7de4) /* -> EXTERNAL_0x0e37bb60 */;
  *(undefined1 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6f05) = 0;
  uVar2 = (*pcVar6)(uVar2,iVar5 + 0x3dc0,&local_28,0);
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6eec) = uVar2;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(uVar1,*(undefined4 *)(unaff_gp + -0x7640) /* -> searchHelp */) /* =FUN_0042b6c0 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00430cb4):
     * Function: FUN_00430cb4
     *
     * Looking at the GP-relative loads and the call sequence:
     * **1. What it does:**
     * Creates an application shell widget, stores it in a global, realizes it, then adds an event handler.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets resolved:
     * // gp-32660 (806c) -> base for globals (DAT_10006f05, shell storage at +0x6eec)
     * // gp-32676 (805c) -> string base, +15808 = app class name
     * // gp-32228 (821c) -> XtAppCreateShell
     * // gp-31864 (8388) -> XtRealizeWidget
     * // gp-30812 (87a4) -> XtAddEventHandler
     * // gp-30272 (89c0) -> event mask constant
     * extern char some_flag;           // DAT_10006f05
     * extern Widget app_shell;         // at base+0x6eec
     * extern char *app_class;          // "fsn" or similar
     * some_flag = 0;
     * app_shell = XtAppCreateShell(
     * param_1,           // a0 from sp+40: application name
     * app_class,         // a1: class name string
     * &widget_class,     // a2 from sp+56: widget class (local var)
     * NULL               // a3 = 0: arglist
     * );
     * XtRealizeWidget(app_shell);
     * XtAddEventHandler(
     * param_2,           // a0 from sp+48: widget
     * event_mask,        // a1: event mask constant
     * ...
     * );
     * ```
     * This is typical Xt/Motif application initialization - creates the top-level shell, realizes it, and sets up event handling.
     */
halt_baddata();
}
