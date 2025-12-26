/**
 * FUN_0042b0c4
 *
 * Extracted from fsn.c lines 67255-67311
 * Ghidra address: 0x0042b0c4
 * Category: Other
 */

void FUN_0042b0c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  local_2c = 0;
  (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,0,&local_28,&local_2c) /* =FUN_00432094 */;
  uVar1 = /* TODO: GP:-0x7bcc */ (**(code **)(unaff_gp + -0x7bcc) /* -> EXTERNAL_0x0e2e51b8 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c80,&local_28,local_2c);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1e96,*(undefined4 *)(unaff_gp + -0x7950) /* -> overlayMenuMappedCB */,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x28d0,*(undefined4 *)(unaff_gp + -0x7954) /* -> overlayMenuUnmappedCB */,0);
  local_2c = 0;
  uVar2 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c8c,&local_28,0)
  ;
  iVar3 = FUN_00430000 /* was: *(int *)(unaff_gp + -0x7fe0) */ /* -> FUN_00430000 */ + -0x4c0c;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7660) /* -> topHelp */);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_2c = 0;
  uVar2 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c98,&local_28,0)
  ;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x4a54,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_2c = 0;
  uVar2 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1ca8,&local_28,0)
  ;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7668) /* -> modeHelp */);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_2c = 0;
  uVar2 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1cb4,&local_28,0)
  ;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x766c) /* -> versionHelp */);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x26c9;
  local_2c = 1;
  local_24 = uVar1;
  uVar1 = /* TODO: GP:-0x7bf8 */ (**(code **)(unaff_gp + -0x7bf8) /* -> EXTERNAL_0x0e25ea68 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1cc4,&local_28,1);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  local_2c = 1;
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1f37;
  local_24 = uVar1;
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(param_1,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b0c4):
     * Function: FUN_0042b0c4
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls a function via GP-31864 with the result of a previous call (s0=v0), then sets up stack arguments (1 at sp+60, string at sp+64, result at sp+68) and calls another function via GP-31936 with args (a0=stack[104], a1=s2, a2=1). Finally restores registers and returns.
     * **C pseudocode:**
     * ```c
     * s0 = func1(a0, string + 7364, s2, 1);  // jalr t9 at 42b324
     * func_gp31864(s0);                       // likely XtManageChild or similar
     * // Setup for XtVaSetValues or similar varargs call:
     * // sp[60] = 1 (XmNvalue or similar resource)
     * // sp[64] = string_gp80a0 + 7991  // resource string
     * // sp[68] = s0                     // widget
     * func_gp31936(arg_from_stack, s2, 1);   // final call before return
     * return;
     * ```
     * **GP offset resolution (from your GP_MAPPING.md pattern):**
     * - GP-31864 (0x8388) = likely XtManageChild or XtRealizeWidget
     * - GP-31936 (0x8340) = likely XtVaSetValues or XtVaCreateManagedWidget
     * - GP-32608 (0x80a0) = string table base (adding 7991 = resource name like "XmNvalue")
     * This is Motif/Xt widget setup code - creating/configuring a widget and setting a string resource value.
     */
halt_baddata();
}
