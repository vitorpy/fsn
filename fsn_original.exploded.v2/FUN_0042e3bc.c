/**
 * FUN_0042e3bc
 *
 * Extracted from fsn.c lines 68685-68743
 * Ghidra address: 0x0042e3bc
 * Category: Other
 */

void FUN_0042e3bc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  short local_4;
  short local_2;
  
  (**(code **)(unaff_gp + -0x7844) /* -> FUN_0042dfb4 */)
            (param_1,&local_2,&local_4,&local_8,&local_c,&local_10,&local_14,&local_18,&local_1c,
             **(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc50) /* =FUN_0042dfb4 */;
  piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  puVar1 = (undefined4 *)*piVar3;
  if (local_2 != *(short *)(puVar1 + 3)) {
    *(short *)(puVar1 + 3) = local_2;
    (**(code **)(unaff_gp + -0x7ad8) /* -> FUN_0040bfec */)() /* =FUN_0040bfec */;
    piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    puVar1 = (undefined4 *)*piVar3;
  }
  if (local_4 != *(short *)((int)puVar1 + 0xe)) {
    *(short *)((int)puVar1 + 0xe) = local_4;
    (**(code **)(unaff_gp + -0x7ad4) /* -> FUN_0040c0cc */)() /* =FUN_0040c0cc */;
    piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    puVar1 = (undefined4 *)*piVar3;
  }
  *puVar1 = local_8;
  *(undefined4 *)(*piVar3 + 4) = local_c;
  *(undefined4 *)(*piVar3 + 8) = local_10;
  *(undefined4 *)(*piVar3 + 0x3c) = local_14;
  iVar2 = *piVar3;
  if (local_18 != iVar2->flags /* was: *(int *)(iVar2 + 0x44) */) {
    if (local_18 == 0) {
      (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)(0) /* =FUN_0041d54c */;
      iVar2 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    }
    else {
      (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)() /* =FUN_0041d69c */;
      iVar2 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    }
  }
  if (local_1c != iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */) {
    if (local_1c == 0) {
      (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)(0) /* =FUN_0041d920 */;
    }
    else {
      (**(code **)(unaff_gp + -0x79bc) /* -> FUN_0041da44 */)() /* =FUN_0041da44 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e3bc):
     * Function: FUN_0042e3bc
     *
     * Looking at the GP offsets and the function name `restorePosition`:
     * **What it does:**
     * Compares a local variable (t4 from stack offset 60) against `curcontext[18]` (offset 72 = 0x48). If different and non-NULL, calls `unhighlightNode(t4)`. If NULL, calls `highlightNode()`. Then returns.
     * **C pseudocode:**
     * ```c
     * // At end of restorePosition():
     * void *saved_node = local_3c;  // sp+60
     * void *current_highlighted = curcontext[18];  // offset 0x48
     * if (saved_node != current_highlighted) {
     * if (saved_node != NULL) {
     * unhighlightNode(saved_node);  // GP-31164 = 0x8644
     * } else {
     * highlightNode();              // GP-31168 = 0x8640
     * }
     * }
     * return;
     * ```
     * **GP offset resolution:**
     * - `gp-30340 (0x897c)` → curcontext pointer
     * - `gp-31164 (0x8644)` → unhighlightNode
     * - `gp-31168 (0x8640)` → highlightNode
     */
halt_baddata();
}
