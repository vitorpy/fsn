/**
 * FUN_0041d54c
 *
 * Extracted from fsn.c lines 59010-59039
 * Ghidra address: 0x0041d54c
 * Category: Other
 */

void FUN_0041d54c(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44) != 0) {
    iVar2 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */;
    *(undefined1 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc50) = 0;
    (*(code *)(iVar2 + -0x2be8))();
    /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b98),0);
    (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
    piVar1 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) = *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(*piVar1 + 0x44) = 0;
    *(undefined1 *)(*piVar1 + 0x4c) = 0;
    (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)() /* =FUN_0041c720 */;
    local_24 = *blankXmString /* was: *(undefined4 **)(unaff_gp + -0x75f8) */ /* -> blankXmString */;
    local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
    /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x20),&local_28,1);
    (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)() /* =FUN_0041c9e8 */;
    (**(code **)(unaff_gp + -0x798c) /* -> FUN_004207b4 */)() /* =FUN_004207b4 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d54c):
     * Function: FUN_0041d54c
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
