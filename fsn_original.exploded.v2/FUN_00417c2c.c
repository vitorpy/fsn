/**
 * FUN_00417c2c
 *
 * Extracted from fsn.c lines 55458-55507
 * Ghidra address: 0x00417c2c
 * Category: Other
 */

void FUN_00417c2c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  undefined4 uVar4;
  undefined1 auStack_90 [20];
  int local_7c;
  int local_60;
  int local_50;
  undefined4 local_8;
  
  iVar1 = (**(code **)(unaff_gp + -0x7a5c) /* -> FUN_00413580 */)() /* =FUN_00413580 */;
  if (iVar1 != 0) {
    local_8 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1) /* =FUN_00411b30 */;
    /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(local_8,param_2);
    iVar2 = /* TODO: GP:-0x7ee0 */ (**(code **)(unaff_gp + -0x7ee0) /* -> EXTERNAL_0x0facbb68 */)(local_8,auStack_90);
    if (-1 < iVar2) {
      if (((local_7c != *(int *)(iVar1 + 8)) || (local_60 != iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */)) ||
         (local_50 != iVar1->file_array /* was: *(int *)(iVar1 + 0x10) */)) {
        iVar2 = FUN_00410000 /* was: *(int *)(unaff_gp + -0x7fe8) */ /* -> FUN_00410000 */;
        param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ = (param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ + local_60) - iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */;
        uVar4 = (*(code *)(iVar2 + 0x18b0))(param_1);
        param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar4;
        *(int *)(iVar1 + 8) = local_7c;
        iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */ = local_60;
        iVar1->file_array /* was: *(int *)(iVar1 + 0x10) */ = local_50;
        uVar4 = (**(code **)(unaff_gp + -0x77e8) /* -> FUN_00433b44 */)(local_8) /* =FUN_00433b44 */;
        iVar1->_field_20 /* was: *(undefined4 *)(iVar1 + 0x20) */ = uVar4;
        piVar3 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x184);
        if (*piVar3 < iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */) {
          *piVar3 = iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */;
        }
        piVar3 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x18c);
        if (*piVar3 < param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */) {
          *piVar3 = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */;
        }
        (**(code **)(unaff_gp + -0x7a74) /* -> FUN_00412400 */)(iVar1) /* =FUN_00412400 */;
        (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x2234))(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00417c2c):
     * Function: FUN_00417c2c
     *
     * Looking at the GP offsets and call sequence:
     * 1. **What it does:**
     * Calls stat() on a path, then if successful, calls makepath(0, path) to create a tree node, then calls something like stat() again on that result with the event parameter, storing the stat buffer at sp+48.
     * 2. **C pseudocode:**
     * ```c
     * struct stat statbuf;
     * void *node;
     * void *pathobj;
     * if (stat(a0_path) == NULL)  // GP-31324: likely stat or access check
     * return;
     * pathobj = makepath(0, a0_path);      // GP-31364: makepath
     * somefunc(pathobj, a1_event);         // GP-31972: unknown - maybe event handler
     * stat(pathobj, &statbuf);             // GP-32480: stat
     * ```
     * **GP offset resolution needed:**
     * - GP-31324 (0x857c area): likely `stat` or `access`
     * - GP-31364 (0x857c): `makepath`
     * - GP-31972 (0x831c): unknown event/callback function
     * - GP-32480 (0x8120): `stat`
     * The function appears to be a file-change handler that stats a path, creates a path object, processes an event, and gets file status. The `a3a0002f sb zero,47(sp)` clears a local flag byte before the first call.
     */
halt_baddata();
      }
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x80;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00417c2c):
     * Function: FUN_00417c2c
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores values at s0+12 and s0+16, calls a function via GP-30696 with arg from sp+184, stores result at s0+32. Then updates two global max values (at GP-32664+388 and +396) if current values exceed them, setting a flag if the first max is updated.
     * 2. **C pseudocode:**
     * ```c
     * s0->field_0c = t8_value;           // sw t8,12(s0)
     * s0->field_10 = stack_var_70;       // sw t9,16(s0)
     * s0->field_20 = some_func(arg_b8);  // jalr via GP-30696, store result
     * // Update global max width if exceeded
     * int *max_width = &curcontext[0x184/4];  // GP-32664 + 388
     * if (*max_width < s0->field_0c) {
     * *max_width = s0->field_0c;
     * local_flag = 1;
     * }
     * // Update global max height if exceeded
     * int *max_height = &curcontext[0x18c/4];  // GP-32664 + 396
     * if (*max_height < s1->field_1c) {
     * *max_height = s1->field_1c;
     * }
     * ```
     * GP-30696 likely resolves to a string width/measurement function (XmStringWidth or similar). The code is tracking maximum label dimensions for layout purposes.
     */
halt_baddata();
}
