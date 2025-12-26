/**
 * findzoom_landscape
 *
 * Extracted from fsn.c lines 63795-63870
 * Category: Other
 */

void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8)

{
  uint extraout_var;
  uint extraout_var_00;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  FUN_0042631c(&iStack_4,&iStack_c,&iStack_8);
  if (iStack_c == 0) {
    if (iStack_4 == 0) {
      if (iStack_8 == 0) {
        FUN_0041d54c();
      }
      else {
        iStack_4 = iStack_8;
        if ((iStack_8 == curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */) && (*(int *)(iStack_8 + 0x28) != 0)) {
          iStack_4 = *(int *)(iStack_8 + 0x28);
        }
        FUN_0041d69c(iStack_4);
        *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                          (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)DAT_10017518));
        *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                          (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)DAT_10017518));
        *param_3 = DAT_10017514 + *(float *)(iStack_4 + 0x24);
        *param_4 = (short)DAT_1001751c;
        *param_6 = 0;
      }
    }
    else {
      FUN_0041d920();
      FUN_0041d69c(iStack_4);
      *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                        (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)DAT_10017518));
      *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                        (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)DAT_10017518));
      *param_3 = DAT_10017514 + *(float *)(iStack_4 + 0x24);
      *param_4 = (short)DAT_1001751c;
      *param_6 = 0;
    }
  }
  else {
    FUN_0041d69c(iStack_4);
    FUN_0041da44(iStack_c);
    *param_1 = (*(float *)(iStack_4 + 0x34) +
               *(float *)(iStack_c + 0x14) * *(float *)(iStack_4 + 0x58)) -
               curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * DAT_10017524;
    *param_2 = (*(float *)(iStack_4 + 0x38) + *(float *)(iStack_c + 0x18)) -
               curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * DAT_10017524;
    if (DAT_10017495 == '\0') {
      *param_3 = DAT_10017520 + *(float *)(iStack_4 + 0x24) + *(float *)(iStack_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = DAT_10017520 + *(float *)(iStack_4 + 0x24) + DAT_10017510;
    }
    *param_6 = 0;
    *param_4 = (short)DAT_10017528;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004268d4):
     * Function: findzoom_landscape
     *
     * ## Assembly Analysis
     * **What it does:**
     * Calculates output coordinates: `*outX = inX - (scale * offset)`, `*outY = node[9] + node[33]`, stores `node[35]` as short to output, and clears a final output pointer. Returns 0 on one path, or calls a function via GP and returns 0.
     * **C pseudocode:**
     * ```c
     * // At 426c98-426ca8: Calculate X coordinate
     * *out_x = (float)(node_f8 - (scale_factor * some_offset));  // t4 = outX ptr
     * // At 426cac-426cc8: Calculate Y coordinate
     * *out_y = node[9] + node[33];  // offset 36 + offset 132, t5 = outY ptr
     * // At 426ccc-426cd8: Store short value
     * *out_short = (short)node[35];  // offset 140, t1 = output short ptr
     * // At 426cdc-426ce4: Clear final output and return
     * *out_flag = 0;  // t9 from sp+68
     * return result;  // or falls through to return 0
     * // At 426ce8-426cfc: Alternate path - call function via GP[-31176] then return 0
     * ```
     * **Register mapping:**
     * - `t2` = source node pointer (offsets 36, 132, 140 accessed)
     * - `v1` = another structure pointer
     * - `t4, t5, t1, t9` = output pointers from stack (sp+0, sp+56, sp+60, sp+68)
     * - `gp-31176` = indirect function call (likely error handler or cleanup)
     */
halt_baddata();
}
