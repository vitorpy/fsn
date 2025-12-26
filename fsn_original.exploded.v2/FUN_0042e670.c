/**
 * FUN_0042e670
 *
 * Extracted from fsn.c lines 68834-68882
 * Ghidra address: 0x0042e670
 * Category: Other
 */

void FUN_0042e670(undefined4 param_1)

{
  int iVar1;
  int unaff_gp;
  char local_1d;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  undefined1 local_4 [2];
  undefined1 local_2 [2];
  
  iVar1 = (**(code **)(unaff_gp + -0x7844) /* -> FUN_0042dfb4 */)
                    (param_1,local_2,local_4,&local_8,&local_c,local_10,local_14,&local_18,&local_1c
                     ,&local_1d) /* =FUN_0042dfb4 */;
  if (iVar1 != 0) {
    iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    if (local_18 != iVar1->flags /* was: *(int *)(iVar1 + 0x44) */) {
      if (local_18 == 0) {
        (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)(0) /* =FUN_0041d54c */;
        iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
      }
      else {
        (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)() /* =FUN_0041d69c */;
        iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
      }
    }
    if (local_1c != iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */) {
      if (local_1c == 0) {
        (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)(0) /* =FUN_0041d920 */;
      }
      else {
        (**(code **)(unaff_gp + -0x79bc) /* -> FUN_0041da44 */)() /* =FUN_0041da44 */;
      }
    }
    if (local_1d == '\0') {
      *(undefined1 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc50) = 0;
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)((double)local_8,(double)local_c) /* =FUN_00410264 */;
    }
    else {
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)((double)local_8,(double)local_c) /* =FUN_00410264 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e670):
     * Function: FUN_0042e670
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
