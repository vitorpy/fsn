/**
 * FUN_004294cc
 *
 * Extracted from fsn.c lines 65765-65783
 * Ghidra address: 0x004294cc
 * Category: Other
 */

void FUN_004294cc(void)

{
  code *pcVar1;
  int unaff_gp;
  
  if (*(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7990) != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6b9c))();
    (**(code **)(unaff_gp + -0x7ae0) /* -> FUN_0040bc28 */)() /* =FUN_0040bc28 */;
    /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
    /* TODO: GP:-0x7cf8 */ (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    pcVar1 = FUN_00420b70 /* was: *(code **)(unaff_gp + -0x7984) */ /* -> FUN_00420b70 */;
    *(undefined4 *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7990) = 0;
    *(undefined4 *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7994) = 0;
    (*pcVar1)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004294cc):
     * Function: FUN_004294cc
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
