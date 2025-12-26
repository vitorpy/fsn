/**
 * FUN_00429fd4
 *
 * Extracted from fsn.c lines 66282-66342
 * Ghidra address: 0x00429fd4
 * Category: Other
 */

void FUN_00429fd4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_8c [48];
  int local_5c;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c,param_1) /* =FUN_00411b30 */;
  /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c,*param_2);
  iVar1 = /* TODO: GP:-0x7e30 */ (**(code **)(unaff_gp + -0x7e30) /* -> EXTERNAL_0x0fac6694 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c,auStack_8c);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x7a8c) /* -> FUN_00411094 */)
              (*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16b0,**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c) /* =FUN_00411094 */;
  }
  else {
    local_4 = /* TODO: GP:-0x7b40 */ (**(code **)(unaff_gp + -0x7b40) /* -> EXTERNAL_0x0f66b118 */)(local_5c + 1);
    iVar1 = /* TODO: GP:-0x7e34 */ (**(code **)(unaff_gp + -0x7e34) /* -> EXTERNAL_0x0facad64 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c,0);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7a8c) /* -> FUN_00411094 */)
                (*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x16a4,**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c) /* =FUN_00411094 */;
    }
    else {
      iVar2 = /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(iVar1,local_4,local_5c);
      if (iVar2 == local_5c) {
        *(undefined1 *)(local_4 + local_5c) = 0;
        /* TODO: GP:-0x7da4 */ (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(iVar1);
        /* TODO: GP:-0x7eec */ (**(code **)(unaff_gp + -0x7eec) /* -> EXTERNAL_0x0e320f68 */)
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x14),local_4);
        /* TODO: GP:-0x7e8c */ (**(code **)(unaff_gp + -0x7e8c) /* -> EXTERNAL_0x0f66b628 */)(local_4);
        iVar1 = /* TODO: GP:-0x7e28 */ (**(code **)(unaff_gp + -0x7e28) /* -> EXTERNAL_0x0facadb4 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c,2);
        if (iVar1 < 0) {
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x18),0);
          /* TODO: GP:-0x7f38 */ (**(code **)(unaff_gp + -0x7f38) /* -> EXTERNAL_0x0e321e14 */)
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x14),0);
        }
        else {
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x18),1);
          /* TODO: GP:-0x7f38 */ (**(code **)(unaff_gp + -0x7f38) /* -> EXTERNAL_0x0e321e14 */)
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x14),1);
        }
        /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x10));
        uVar3 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)
                          (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x10));
        /* TODO: GP:-0x7e84 */ (**(code **)(unaff_gp + -0x7e84) /* -> EXTERNAL_0x0f54f768 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,uVar3);
      }
      else {
        (**(code **)(unaff_gp + -0x7a8c) /* -> FUN_00411094 */)
                  (*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x1698,**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x84c) /* =FUN_00411094 */;
        /* TODO: GP:-0x7da4 */ (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(iVar1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429fd4):
     * Function: FUN_00429fd4
     *
     * Looking at the GP offsets and call patterns:
     * **1. What it does:**
     * Loads curcontext, gets widget at offset 16 (contextwindows[4]), calls XtWidth() on it, then XtHeight() on the same widget, then calls a function with (some_global, height) - likely setting dimensions.
     * **2. C pseudocode:**
     * ```c
     * // GP-30332 = curcontext, GP-31864 = XtWidth, GP-31896 = XtHeight, GP-30204 = some_widget/global, GP-32388 = setter function
     * Widget w = ((Widget*)(*curcontext))[4];  // offset 16 = index 4
     * int width = XtWidth(w);   // result unused
     * int height = XtHeight(w);
     * some_setter_function(some_global, height);
     * return;
     * ```
     * The width call result is discarded (v0 overwritten), only height is used as second argument (a1). First argument (a0) comes from another global. This looks like setting a height value on some object based on a context widget's dimensions.
     */
halt_baddata();
}
