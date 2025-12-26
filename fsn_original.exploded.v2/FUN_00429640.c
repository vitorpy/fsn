/**
 * FUN_00429640
 *
 * Extracted from fsn.c lines 65881-65957
 * Ghidra address: 0x00429640
 * Category: Other
 */

void FUN_00429640(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  int unaff_gp;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_f4;
  
  uVar4 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  piVar1 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7994);
  if ((param_2 != (undefined4 *)*piVar1) ||
     (param_1 != *(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7990))) {
    *(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7990) = param_1;
    *piVar1 = (int)param_2;
    (**(code **)(unaff_gp + -0x7ae0) /* -> FUN_0040bc28 */)() /* =FUN_0040bc28 */;
    /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
    /* TODO: GP:-0x7cf8 */ (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) /* -> overlayHighlightColor */ + 2));
    /* TODO: GP:-0x7e0c */ (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)((int)*(short *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x26));
    /* TODO: GP:-0x7ccc */ (**(code **)(unaff_gp + -0x7ccc) /* -> EXTERNAL_0x0f1282d0 */)(0);
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
              ((float)((double)((ulonglong)uVar4 << 0x20) /
                      (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x34)));
    /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78);
    /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc),0x7a);
    pfVar2 = (float *)*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    if (pfVar2[0xf] == 0.0) {
      uVar3 = /* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                        (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                         (pfVar2[1] - pfVar2[6] * pfVar2[8] * pfVar2[2]) /
                         *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108));
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar3);
      pfVar2 = (float *)*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    }
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(-*pfVar2,-pfVar2[1]);
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        (**(code **)(unaff_gp + -0x790c) /* -> FUN_0042728c */)(param_1) /* =FUN_0042728c */;
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7900) /* -> FUN_004277fc */)(param_1,param_2) /* =FUN_004277fc */;
    }
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    /* TODO: GP:-0x7e0c */ (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(1);
    if (param_1 == 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6b9c))();
    }
    else {
      uVar3 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0) /* =FUN_00411b30 */;
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 2) {
          (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6c18))(uVar3);
        }
      }
      else {
        /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(uVar3,*param_2);
        (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6c18))(uVar3);
      }
    }
    /* TODO: GP:-0x7ccc */ (**(code **)(unaff_gp + -0x7ccc) /* -> EXTERNAL_0x0f1282d0 */)(1);
    if (param_1 == 0) {
      (**(code **)(unaff_gp + -0x7984) /* -> FUN_00420b70 */)() /* =FUN_00420b70 */;
    }
    else {
      (**(code **)(unaff_gp + -0x7974) /* -> FUN_0042194c */)() /* =FUN_0042194c */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429640):
     * Function: FUN_00429640
     *
     * Looking at the GP-relative function calls and the branch logic:
     * **1. What it does:**
     * Calls a function at GP-0x6BCC (offset -27548), then calls mswapbuffers (GP-0x8334). If param at sp+40 is non-zero, calls function at GP-0x868C, otherwise calls function at GP-0x867C. Then returns.
     * **2. C pseudocode:**
     * ```c
     * some_function();           // GP-0x6BCC - likely swapbuffers or
     * mswapbuffers(1);           // GP-0x8334 = mswapbuffers, param=1
     * if (saved_param != 0) {    // param from sp+40
     * highlight_on();        // GP-0x868C - likely displayHourglass or highlight func
     * } else {
     * highlight_off();       // GP-0x867C - likely undisplayHourglass or unhighlight
     * }
     * return;
     * ```
     * To identify the exact functions, run:
     * ```
     * python3 analysis/resolve_got.py <<< "-31948 -31092 -31108"
     * ```
     * The pattern suggests this is the epilogue of baseLocateHighlight - it swaps GL buffers, then either enables or disables some highlight/hourglass state based on whether a pointer was found, then cleans up stack and returns.
     */
halt_baddata();
}
