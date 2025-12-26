/**
 * FUN_0041919c
 *
 * Extracted from fsn.c lines 56481-56522
 * Ghidra address: 0x0041919c
 * Category: Graphics
 */

void FUN_0041919c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_f5;
  undefined4 uVar3;
  undefined4 in_f11;
  uint unaff_000010c0;
  
  pushmatrix();
  translate(0,(float)((double)-param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                     (double)((ulonglong)unaff_000010c0 << 0x20)));
  uVar3 = 0x3fe00000;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    do {
      FUN_00418f50(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
  popmatrix();
  if (param_1->child_center /* was: *(int *)(param_1 + 0x28) */ != 0) {
    FUN_00418c30(param_1->child_center /* was: *(int *)(param_1 + 0x28) */,&DAT_1000ae90,0,0,in_f11,
                 SUB84((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)DAT_1001756c,0));
  }
  if (param_1->child_left /* was: *(int *)(param_1 + 0x2c) */ != 0) {
    FUN_00418c30(param_1->child_left /* was: *(int *)(param_1 + 0x2c) */,&DAT_1000ae94,in_f5,SUB84((double)-DAT_10017570,0),in_f5,
                 SUB84((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)DAT_1001756c,0));
  }
  if (param_1->child_right /* was: *(int *)(param_1 + 0x30) */ != 0) {
    FUN_00418c30(param_1->child_right /* was: *(int *)(param_1 + 0x30) */,&DAT_1000ae98,uVar3,SUB84((double)DAT_10017570,0),uVar3,
                 SUB84((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)DAT_1001756c,0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041919c):
     * Function: FUN_0041919c
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes a double-precision division result plus an offset from s4+220, passes the result (as double converted from the division) along with a format string to printf, then restores callee-saved registers and returns.
     * 2. **C pseudocode:**
     * ```c
     * // $f10/$f24 was computed earlier (some_value / divisor)
     * double result = (double)(some_float_value) / divisor_d;
     * double offset = (double)(*(float*)(s4 + 220));  // s4->field_0xdc
     * double final = result + offset;
     * printf(format_string, (double)some_val, final);  // t9 = printf via GOT
     * // epilogue: restore $f20-$f25 pairs, s0-s4, ra, return
     * ```
     * **GP offsets:**
     * - `gp-32676 (0x805c)` → likely rodata string pointer base
     * - `gp-31236 (0x85fc)` → printf GOT entry
     * - `s4+220 (0xdc)` → float field in structure pointed to by s4
     * The double is split across $f6/$f7 for the printf varargs (MIPS O32 ABI passes doubles in register pairs a2/a3 for varargs after the format string in a1).
     */
halt_baddata();
}
