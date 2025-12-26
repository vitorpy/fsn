/**
 * FUN_0042ef04
 *
 * Extracted from fsn.c lines 69301-69372
 * Ghidra address: 0x0042ef04
 * Category: Other
 */

void FUN_0042ef04(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_gp;
  
  piVar8 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x6adc);
  piVar4 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x6ad8);
  iVar1 = *piVar4;
  iVar3 = *piVar8;
  if (iVar3 == iVar1) {
    if (iVar1 == 0) {
      *piVar4 = 8;
      uVar2 = /* TODO: GP:-0x7b40 */ (**(code **)(unaff_gp + -0x7b40) /* -> EXTERNAL_0x0f66b118 */)(0x200);
      iVar1 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
      puVar9 = (undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x6ae0);
      *puVar9 = uVar2;
      piVar4 = (int *)(iVar1 + -0x6ad8);
    }
    else {
      iVar3 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
      *piVar4 = iVar1 + 8;
      puVar9 = (undefined4 *)(iVar3 + -0x6ae0);
    }
    uVar2 = /* TODO: GP:-0x7ea4 */ (**(code **)(unaff_gp + -0x7ea4) /* -> EXTERNAL_0x0f6785f4 */)(*puVar9,*piVar4 << 6);
    iVar3 = *piVar8;
    *puVar9 = uVar2;
  }
  piVar4 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x6ae0);
  puVar9 = (undefined4 *)(*piVar4 + iVar3 * 0x40);
  puVar7 = param_2;
  do {
    puVar6 = puVar7;
    puVar5 = puVar9;
    puVar7 = puVar6 + 3;
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar9 = puVar5 + 3;
  } while (puVar7 != param_2 + 0xc);
  puVar5[3] = *puVar7;
  puVar5[4] = puVar6[4];
  if (param_1 == 0) {
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = 0;
  }
  else {
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_1);
    uVar2 = /* TODO: GP:-0x7b40 */ (**(code **)(unaff_gp + -0x7b40) /* -> EXTERNAL_0x0f66b118 */)(iVar1 + 1);
    uVar2 = /* TODO: GP:-0x7ecc */ (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(uVar2,param_1);
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = uVar2;
  }
  uVar2 = /* TODO: GP:-0x7e90 */ (**(code **)(unaff_gp + -0x7e90) /* -> EXTERNAL_0x0e35c908 */)(param_1);
  *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c) = uVar2;
  /* TODO: GP:-0x7ea0 */ (**(code **)(unaff_gp + -0x7ea0) /* -> EXTERNAL_0x0e2afacc */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ec4),
             *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c),0);
  iVar1 = *piVar8;
  *piVar8 = iVar1 + 1;
  if (iVar1 + 1 == 1) {
    /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ec0),1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042ef04):
     * Function: FUN_0042ef04
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Stores a value at offset 60 of an array element (index from t2+t8)
     * 2. Loads another array element, calls a function via GP (likely XtSetSensitive or similar widget call)
     * 3. Increments a counter; if counter becomes 1, calls another widget function with arg=1
     * **C pseudocode:**
     * ```c
     * // Store into array at offset 60
     * ((int*)((char*)array_base + index))[15] = value;  // offset 60 = 15 ints
     * // Get element from marks array, call widget function
     * mark_entry = marks_array[*counter_ptr];  // index << 6 = multiply by 64
     * widget = curcontext->some_widget;        // offset 0x6ec4 = 28356
     * XtSetSensitive(widget, mark_entry->field_60, False);
     * // Increment counter
     * (*counter_ptr)++;
     * if (*counter_ptr == 1) {
     * // First mark added - enable the marks menu/button
     * other_widget = curcontext->marks_menu;  // offset 0x6ec0 = 28352
     * XtSetSensitive(other_widget, True);
     * }
     * ```
     * **GP offsets identified:**
     * - gp-32660 (0x806c): curcontext pointer
     * - gp-32416 (0x8160): XtSetSensitive or similar
     * - gp-31976 (0x8318): XtSetSensitive (second call)
     * This is mark/selection management code - when adding a mark, it updates widget sensitivity, and enables the marks menu when the first mark is added.
     */
halt_baddata();
}
