/**
 * FUN_0041da44
 *
 * Extracted from fsn.c lines 59244-59275
 * Ghidra address: 0x0041da44
 * Category: Other
 */

void FUN_0041da44(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_30;
  uint local_2c;
  
  iVar1 = *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x48);
  if (iVar1 != 0) {
    iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ & 0xef;
  }
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),1);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),1);
  piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined4 **)(*piVar2 + 0x48) = param_1;
  iVar1 = *piVar2;
  /* TODO: GP:-0x7ecc */ (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(iVar1 + 0x44c,iVar1 + 0x4c);
  /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44c,*param_1);
  (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)() /* =FUN_0041c720 */;
  local_30 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2589;
  local_2c = (uint)(param_1[10] << 9) >> 0x1f;
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b84),&local_30,1);
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b88),&local_30,1);
  (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)() /* =FUN_0041c9e8 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041da44):
     * Function: FUN_0041da44
     *
     * Looking at the GP offsets and the assembly:
     * **What it does:**
     * Extracts a flag bit from s0[10] (offset 40), shifts it to get bit 22 (the sign bit after <<9 then >>31), then calls XtSetValues twice on two widgets with a boolean resource, followed by a final cleanup call.
     * **C pseudocode:**
     * ```c
     * // GP-32608 = string constant (likely XmN resource name like "XmNset")
     * // GP-32660 = curcontext or widget array base
     * // GP-31936 = XtSetValues
     * // GP-31184 = likely swapbuffers or
     * final cleanup func
     * char *resource_name = DAT_gp_80a0 + 9609;  // XmN resource string
     * int flags = s0->field_0x28;                 // offset 40 in struct
     * int bit_value = (flags << 9) >> 31;         // extract bit 22 as 0 or 1
     * Arg args[2];
     * args[0].name = resource_name;
     * args[0].value = bit_value;
     * XtSetValues(curcontext->widget_6b84, args, 1);  // offset 27524
     * XtSetValues(curcontext->widget_6b88, args, 1);  // offset 27528
     * some_cleanup_func();  // GP-31184
     * ```
     * The bit extraction `(x << 9) >> 31` isolates bit 22 of the flags field as a boolean (0 or 1), likely for a toggle button's XmNset resource.
     */
halt_baddata();
}
