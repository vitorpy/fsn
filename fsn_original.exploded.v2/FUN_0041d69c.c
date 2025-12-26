/**
 * FUN_0041d69c
 *
 * Extracted from fsn.c lines 59095-59148
 * Ghidra address: 0x0041d69c
 * Category: Other
 */

void FUN_0041d69c(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_28;
  uint local_24;
  
  iVar1 = *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44);
  if (param_1 == iVar1) {
    (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
    if (*(char *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e24) != '\0') {
      (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)() /* =FUN_0041c720 */;
    }
  }
  else {
    if (iVar1 != 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x2be8))();
      iVar1 = *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44);
      iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ & 0xdf;
      (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
      *(undefined1 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc50) = 0;
    }
    /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b98),1);
    piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ | 0x20;
    *(int *)(*piVar2 + 0x44) = param_1;
    (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(*piVar2 + 0x4c,param_1) /* =FUN_00411b30 */;
    (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)() /* =FUN_0041c720 */;
    (**(code **)(unaff_gp + -0x798c) /* -> FUN_004207b4 */)() /* =FUN_004207b4 */;
    local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2589;
    local_24 = (uint)(param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xb) >> 0x1f;
    /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b54),&local_28,1);
    local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2589;
    local_24 = (uint)(param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) >> 0x1f;
    /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b58),&local_28,1);
    /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b54),
               -1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd);
    (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)() /* =FUN_0041c9e8 */;
    if (*(int *)(param_1 + 100) != 0) {
      /* TODO: GP:-0x7db4 */ (**(code **)(unaff_gp + -0x7db4) /* -> EXTERNAL_0x0f690b3c */)();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10) {
      (**(code **)(unaff_gp + -0x78ec) /* -> FUN_00427e30 */)(param_1) /* =FUN_00427e30 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d69c):
     * Function: FUN_0041d69c
     *
     * Looking at the assembly:
     * 1. **What it does:**
     * Calls a function via GP-0x31184, then if s0->field_0x64 is non-null, calls free (GP-0x32180) on it and clears the field. Then checks bit 21 of s0->field_0x74; if clear, calls a function (GP-0x30956) with s0 as argument before returning.
     * 2. **C pseudocode:**
     * ```c
     * some_function();  // GP-0x31184
     * if (s0->field_0x64 != NULL) {
     * free(s0->field_0x64);  // GP-0x32180 = free
     * s0->field_0x64 = NULL;
     * }
     * if (!(s0->field_0x74 & 0x00200000)) {  // bit 21 check via sll 10, srl 31
     * some_other_function(s0);  // GP-0x30956
     * }
     * return;
     * ```
     * The bit extraction `sll 10, srl 31` isolates bit 21: shifting left by 10 puts bit 21 into the sign position, then shifting right by 31 extracts just that bit.
     */
halt_baddata();
}
