/**
 * FUN_0042b844
 *
 * Extracted from fsn.c lines 67503-67547
 * Ghidra address: 0x0042b844
 * Category: Other
 */

void FUN_0042b844(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_gp;
  
  /* TODO: GP:-0x7e5c */ (**(code **)(unaff_gp + -0x7e5c) /* -> EXTERNAL_0x0f698dc4 */)
            (**(undefined4 **)(unaff_gp + -0x7600) /* -> app_context */,*(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x705,
             *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x2c2c,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x4908,0,0);
  /* TODO: GP:-0x7e54 */ (**(code **)(unaff_gp + -0x7e54) /* -> EXTERNAL_0x0f68759c */)
            (param_1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e20,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x76e8,1,
             0,0);
  iVar3 = *(int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6e20);
  if (iVar3 == 0) {
    iVar3 = /* TODO: GP:-0x7cbc */ (**(code **)(unaff_gp + -0x7cbc) /* -> EXTERNAL_0x0f1207cc */)(9);
    piVar2 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6e20);
    if (iVar3 < 4) {
      iVar3 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + 0x2c34;
      *piVar2 = iVar3;
    }
    else {
      iVar3 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + 0x2c3c;
      *piVar2 = iVar3;
    }
  }
  if (iVar3 == 0) {
    /* TODO: GP:-0x7e54 */ (**(code **)(unaff_gp + -0x7e54) /* -> EXTERNAL_0x0f68759c */)
              (param_1,*(undefined4 *)(unaff_gp + -0x75dc) /* -> fsn_resources */,*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7c30,
               0x76,0,0);
  }
  else {
    uVar1 = /* TODO: GP:-0x7c64 */ (**(code **)(unaff_gp + -0x7c64) /* -> EXTERNAL_0x0f67f938 */)
                      (iVar3,**(undefined4 **)(unaff_gp + -0x7f7c) /* -> EXTERNAL_0x0f6d07d4 */,param_1,0,0);
    /* TODO: GP:-0x7e54 */ (**(code **)(unaff_gp + -0x7e54) /* -> EXTERNAL_0x0f68759c */)
              (uVar1,*(undefined4 *)(unaff_gp + -0x75dc) /* -> fsn_resources */,*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7c30,0x76,
               0,0);
    /* TODO: GP:-0x7ec8 */ (**(code **)(unaff_gp + -0x7ec8) /* -> EXTERNAL_0x0f68e850 */)(uVar1);
  }
  (**(code **)(unaff_gp + -0x77f0) /* -> FUN_00433904 */)
            (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x2c44,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x2c4c) /* =FUN_00433904 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b844):
     * Function: FUN_0042b844
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
