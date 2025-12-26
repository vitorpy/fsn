/**
 * FUN_00429c44
 *
 * Extracted from fsn.c lines 66131-66208
 * Ghidra address: 0x00429c44
 * Category: Other
 */

void FUN_00429c44(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int unaff_gp;
  
  uVar1 = /* TODO: GP:-0x7c84 */ (**(code **)(unaff_gp + -0x7c84) /* -> EXTERNAL_0x0e292660 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16f0,param_2,param_3);
  piVar7 = curcontextwindows /* was: *(int **)(unaff_gp + -0x767c) */ /* -> curcontextwindows */;
  uVar2 = viewerHelp /* was: *(undefined4 *)(unaff_gp + -0x7630) */ /* -> viewerHelp */;
  *(undefined4 *)(*piVar7 + 0x10) = uVar1;
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(*(undefined4 *)(*piVar7 + 0x10),uVar2) /* =FUN_0042b6c0 */;
  iVar8 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *param_2 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1399;
  param_2[1] = 1;
  param_2[2] = iVar8 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar3 + 0x2375;
  param_2[5] = 1;
  iVar3 = /* TODO: GP:-0x7af8 */ (**(code **)(unaff_gp + -0x7af8) /* -> EXTERNAL_0x0e2e4d04 */)
                    (*(undefined4 *)(*piVar7 + 0x10),*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16e8,param_2,
                     3);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(iVar3);
  /* TODO: GP:-0x7c74 */ (**(code **)(unaff_gp + -0x7c74) /* -> EXTERNAL_0x0f67c284 */)
            (iVar3,4,0,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x5bc0,*(undefined4 *)(*piVar7 + 8));
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(iVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16d8,param_2,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x60a0,
             *(undefined4 *)(*piVar7 + 8));
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(iVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16d0,param_2,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,*(undefined4 *)(unaff_gp + -0x79b4) /* -> editCB */,
             *(undefined4 *)(*piVar7 + 8));
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(iVar3,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16c8,param_2,0);
  *(undefined4 *)(*piVar7 + 0x18) = uVar1;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*piVar7 + 0x18));
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*(undefined4 *)(*piVar7 + 0x18),*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,
             *(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x5d28,*(undefined4 *)(*piVar7 + 8));
  iVar9 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar8 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar4 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar5 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar6 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *param_2 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x27b5;
  param_2[1] = 1;
  param_2[2] = iVar9 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar8 + 0x2375;
  param_2[5] = 1;
  param_2[6] = iVar4 + 0x1399;
  param_2[7] = 3;
  param_2[8] = iVar5 + 0x13eb;
  param_2[9] = iVar3;
  param_2[10] = iVar6 + 0x19aa;
  param_2[0xb] = 0;
  uVar1 = /* TODO: GP:-0x7ef0 */ (**(code **)(unaff_gp + -0x7ef0) /* -> EXTERNAL_0x0e32074c */)
                    (*(undefined4 *)(*piVar7 + 0x10),*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16bc,param_2,
                     6);
  *(undefined4 *)(*piVar7 + 0x14) = uVar1;
  /* TODO: GP:-0x7c74 */ (**(code **)(unaff_gp + -0x7c74) /* -> EXTERNAL_0x0f67c284 */)
            (*(undefined4 *)(*piVar7 + 0x14),4,0,*(undefined4 *)(unaff_gp + -0x787c) /* -> myContext */,
             *(undefined4 *)(*piVar7 + 8));
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*piVar7 + 0x14));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429c44):
     * Function: FUN_00429c44
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Calls a function (via t9) with args (a0=existing, a1=offset -5820, a2=s0, a3=6), stores result at struct[s1]+20
     * 2. Calls XtVaSetValues (GP offset -31860) on that widget with XmNcolumns=4, XmNvalue=0, plus struct[s1]+8 as stack arg
     * 3. Calls XmTextSetInsertionPosition (GP offset -31864) on the same widget, then returns
     * **C pseudocode:**
     * ```c
     * // First call creates a text widget (likely XmCreateTextField or similar)
     * widget = create_text_widget(parent, string_base - 5820, s0, 6);
     * (*s1)->text_field = widget;  // store at offset 20
     * // Configure the text widget
     * XtVaSetValues((*s1)->text_field,
     * XmNcolumns, 4,
     * XmNvalue, NULL,
     * (*s1)->some_value,  // offset 8, passed on stack at sp+16
     * NULL);
     * // Set cursor position to start
     * XmTextSetInsertionPosition((*s1)->text_field, 0);
     * // epilogue: restore s0-s3, ra, return
     * ```
     * The -5820 offset is likely a string resource name like "textField" from .rodata. The GP offsets -31860 and -31864 resolve to XtVaSetValues and XmTextSetInsertionPosition respectively.
     */
halt_baddata();
}
