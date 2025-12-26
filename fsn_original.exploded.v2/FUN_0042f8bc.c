/**
 * FUN_0042f8bc
 *
 * Extracted from fsn.c lines 69675-69722
 * Ghidra address: 0x0042f8bc
 * Category: Other
 */

void FUN_0042f8bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int unaff_gp;
  short local_8 [4];
  
  piVar6 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x6adc);
  iVar3 = 0;
  if (0 < *piVar6) {
    piVar5 = /* TODO: GP:-0x7f64 */ *(int **)(unaff_gp + -0x7f64) /* -> EXTERNAL_0x0fb51f00 */;
    iVar2 = 0;
    piVar4 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + -0x6ae0);
    do {
      if (*piVar5 == 0) {
        iVar1 = *param_1;
        *param_1 = iVar1 + -1;
        if (iVar1 + -1 < 0) {
          /* TODO: GP:-0x7d78 */ (**(code **)(unaff_gp + -0x7d78) /* -> EXTERNAL_0x0fad42ac */)(7,param_1);
          iVar1 = *piVar4;
        }
        else {
          *(undefined1 *)param_1[1] = 7;
          param_1[1] = param_1[1] + 1;
          iVar1 = *piVar4;
        }
      }
      else {
        /* TODO: GP:-0x7d7c */ (**(code **)(unaff_gp + -0x7d7c) /* -> EXTERNAL_0x0fadf928 */)(7,param_1);
        iVar1 = *piVar4;
      }
      local_8[0] = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(*(undefined4 *)(iVar1 + iVar2 + 0x38));
      /* TODO: GP:-0x7d74 */ (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(local_8,2,1,param_1);
      /* TODO: GP:-0x7d74 */ (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)
                (*(undefined4 *)(*piVar4 + iVar2 + 0x38),1,(int)local_8[0],param_1);
      (**(code **)(unaff_gp + -0x7830) /* -> FUN_0042e9b4 */)(iVar3 * 0x40 + *piVar4,param_1) /* =FUN_0042e9b4 */;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *piVar6);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f8bc):
     * Function: FUN_0042f8bc
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Loop calls a function (via GP-30768) with args: (base + s2*64, s0). Increments s2, continues while s2 < count. Then restores s0-s7/ra and returns.
     * **2. C pseudocode:**
     * ```c
     * // continuing from loop body...
     * some_func(param->field56, 1, value_from_stack, s0);  // jalr t9 at 42f9e4
     * // GP-30768 is likely strcpy or memcpy based on offset
     * base = *s3;  // load base pointer
     * strcpy(base + s2 * 64, s0);  // copy string to array slot
     * s2++;
     * if (s2 < *s7) goto loop_start;  // branch back to 42f918
     * // epilogue - restore callee-saved registers and return
     * ```
     * The `sll t8,s2,0x6` (shift left 6) = multiply by 64, suggesting this iterates over an array of 64-byte structs/strings. GP offset -30768 (0x87d0) likely resolves to `strcpy` - copying s0 (a string pointer) into successive 64-byte slots.
     */
halt_baddata();
}
