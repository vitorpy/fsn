/**
 * FUN_0040c0cc
 *
 * Extracted from fsn.c lines 50258-50280
 * Ghidra address: 0x0040c0cc
 * Category: Other
 */

void FUN_0040c0cc(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xe) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x58d4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x58cc)));
  uVar1 = /* TODO: GP:-0x7ca4 */ (**(code **)(unaff_gp + -0x7ca4) /* -> EXTERNAL_0x0f895020 */)();
  *(undefined4 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x20) = uVar1;
  uVar1 = /* TODO: GP:-0x7ca0 */ (**(code **)(unaff_gp + -0x7ca0) /* -> EXTERNAL_0x0f895190 */)(fVar2);
  *(undefined4 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x24) = uVar1;
  uVar1 = /* TODO: GP:-0x7c90 */ (**(code **)(unaff_gp + -0x7c90) /* -> EXTERNAL_0x0f895660 */)(fVar2);
  *(undefined4 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x28) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040c0cc):
     * Function: FUN_0040c0cc
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Calls two math functions (at GP offsets -31904 and -31888, likely sin and cos) with the same float argument from sp+36, storing results to curcontext[8], curcontext[9], and curcontext[10] (offsets 32, 36, 40 from the pointer at GP-30340).
     * **2. C pseudocode:**
     * ```c
     * float angle = *(float*)(sp + 0x24);  // argument from stack
     * curcontext[8] = sinf(angle);   // store at offset 0x20
     * curcontext[9] = cosf(angle);   // store at offset 0x24
     * curcontext[10] = cosf(angle);  // store at offset 0x28
     * ```
     * Wait - let me re-read. The first jalr stores $f0 to t8+32, second jalr stores $f0 to t9+36, third stores to t0+40. GP offset -30340 (0x897c) is curcontext. So:
     * ```c
     * float angle = param;
     * *curcontext[8] = some_func1(angle);   // offset 0x20 = float field 8
     * *curcontext[9] = some_func2(angle);   // offset 0x24 = float field 9
     * *curcontext[10] = some_func2(angle);  // offset 0x28 = float field 10
     * ```
     * GP-31904 (0x8360) and GP-31888 (0x8370) are the two function pointers - check your GP_MAPPING.md for what sin/cos or other trig functions those resolve to.
     */
halt_baddata();
}
