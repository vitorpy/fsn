/**
 * FUN_00421780
 *
 * Extracted from fsn.c lines 61299-61344
 * Ghidra address: 0x00421780
 * Category: Other
 */

void FUN_00421780(void)

{
  float fVar1;
  int unaff_gp;
  byte in_fcsr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  if (*overviewActive /* was: *(char **)(unaff_gp + -0x76c4) */ /* -> overviewActive */ != '\0') {
    local_48 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0xea;
    fVar1 = (*maxx /* was: *(float **)(unaff_gp + -0x75d0) */ /* -> maxx */ - *minx /* was: *(float **)(unaff_gp + -0x75d4) */ /* -> minx */) *
            *(float *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6bf0);
    local_50 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x368;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    local_4c = (int)fVar1;
    fVar1 = (*maxy /* was: *(float **)(unaff_gp + -0x75c8) */ /* -> maxy */ - *miny /* was: *(float **)(unaff_gp + -0x75cc) */ /* -> miny */) *
            *(float *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6bf4);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    local_44 = (int)fVar1;
    /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c),&local_50,2);
    (**(code **)(unaff_gp + -0x79a0) /* -> FUN_0041fd70 */)() /* =FUN_0041fd70 */;
    /* TODO: GP:-0x7b78 */ (**(code **)(unaff_gp + -0x7b78) /* -> EXTERNAL_0x0f123238 */)
              (**(undefined4 **)(unaff_gp + -0x75d4) /* -> minx */,**(undefined4 **)(unaff_gp + -0x75d0) /* -> maxx */);
    (**(code **)(unaff_gp + -0x798c) /* -> FUN_004207b4 */)() /* =FUN_004207b4 */;
    (**(code **)(unaff_gp + -0x799c) /* -> FUN_0041fdb0 */)() /* =FUN_0041fdb0 */;
    /* TODO: GP:-0x7b78 */ (**(code **)(unaff_gp + -0x7b78) /* -> EXTERNAL_0x0f123238 */)
              (**(undefined4 **)(unaff_gp + -0x75d4) /* -> minx */,**(undefined4 **)(unaff_gp + -0x75d0) /* -> maxx */);
    (**(code **)(unaff_gp + -0x7984) /* -> FUN_00420b70 */)() /* =FUN_00420b70 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421780):
     * Function: FUN_00421780
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
