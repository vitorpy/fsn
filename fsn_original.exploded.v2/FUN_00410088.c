/**
 * FUN_00410088
 *
 * Extracted from fsn.c lines 51591-51623
 * Ghidra address: 0x00410088
 * Category: Other
 */

void FUN_00410088(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_gp;
  
  piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  piVar4 = curcontextwindows /* was: *(int **)(unaff_gp + -0x767c) */ /* -> curcontextwindows */;
  iVar2 = 0;
  iVar1 = (**(code **)(unaff_gp + -0x7838) /* -> FUN_0042e670 */)
                    (*(int *)(*piVar4 + 0x34) + *(int *)(*piVar3 + 0x40) * 0x38) /* =FUN_0042e670 */;
  if (iVar1 == 0) {
    do {
      *(int *)(*piVar3 + 0x40) = *(int *)(*piVar3 + 0x40) + -1;
      iVar1 = *(int *)(*piVar3 + 0x40);
      if (iVar1 < 0) {
        *(undefined4 *)(*piVar3 + 0x40) = 9;
        iVar1 = *(int *)(*piVar3 + 0x40);
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(unaff_gp + -0x7838) /* -> FUN_0042e670 */)(*(int *)(*piVar4 + 0x34) + iVar1 * 0x38) /* =FUN_0042e670 */;
    } while ((iVar1 == 0) && (iVar2 != 10));
  }
  *(int *)(*piVar3 + 0x40) = *(int *)(*piVar3 + 0x40) + -1;
  if (*(int *)(*piVar3 + 0x40) < 0) {
    *(undefined4 *)(*piVar3 + 0x40) = 9;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410088):
     * Function: FUN_00410088
     *
     * ## Assembly Analysis
     * **What it does:**
     * After a function call via t9 (jalr), if result is zero AND s0 != s2, loop back to 0x410104. Otherwise, decrement a counter at offset 0x40 in a structure, clamping it to 9 if it goes negative. Then restore saved registers and return.
     * **C pseudocode:**
     * ```c
     * result = (*callback)(t5 + t6);  // jalr t9
     * if (result == 0 && s0 != s2) {
     * goto loop_start;  // back to 0x410104
     * }
     * struct_ptr = *s1_ptr;           // lw v0,0(s1)
     * struct_ptr->field_0x40--;       // decrement counter at offset 64
     * if (struct_ptr->field_0x40 < 0) {
     * struct_ptr->field_0x40 = 9; // clamp minimum to 9
     * }
     * // epilogue: restore s0-s5, ra from stack and return
     * ```
     * **Context:** This appears to be the end of `popzoom` - the field at offset 0x40 is likely `zoom_level` or `animation_frame`, clamped to range [0..9] (or reset to 9 when exhausted). The loop iterates through something (s0/s2 comparison) calling a callback until it succeeds or iteration completes.
     */
halt_baddata();
}
