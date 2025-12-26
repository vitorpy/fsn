/**
 * FUN_00427300
 *
 * Extracted from fsn.c lines 64281-64323
 * Ghidra address: 0x00427300
 * Category: Other
 */

void FUN_00427300(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  undefined4 uVar3;
  
  if (param_1 == *(int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c60)) {
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    iVar2 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    iVar1 = *(int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c64);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (iVar1->child_count /* was: *(float *)(iVar1 + 0x14) */ - (iVar2->initial_val /* was: *(float *)(iVar2 + 0x70) */ + iVar2->render_flags /* was: *(float *)(iVar2 + 0x74) */),
               iVar1->child_array /* was: *(undefined4 *)(iVar1 + 0x18) */,iVar2,param_2,0);
    uVar3 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar3,uVar3);
    /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f28);
    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f30);
    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f38);
    /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
  else if (param_1 == *(int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c64)) {
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    iVar2 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    iVar1 = *(int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c60);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (iVar1->child_count /* was: *(float *)(iVar1 + 0x14) */ + iVar2->initial_val /* was: *(float *)(iVar2 + 0x70) */ + iVar2->render_flags /* was: *(float *)(iVar2 + 0x74) */,
               iVar1->child_array /* was: *(undefined4 *)(iVar1 + 0x18) */,iVar2,param_2,0);
    uVar3 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar3,uVar3);
    /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f10);
    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f18);
    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f20);
    /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427300):
     * Function: FUN_00427300
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * This is a function epilogue that makes 4 sequential function calls via GP-relative indirect jumps, then returns. The first two calls pass string pointers (base + 28440 and base + 28448), the last two take no arguments.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets: -32664 (0x8068) = string base, -32264 (0x81f8) = puts/printf
     * // -32032 (0x82e0) and -31528 (0x84d8) = two cleanup/exit functions
     * void FUN_00427300_epilogue(void) {
     * puts(string_base + 28440);  // 0x6f18 offset - likely error/status message
     * puts(string_base + 28448);  // 0x6f20 offset - likely continuation message
     * cleanup_func1();            // GP offset -32032
     * cleanup_func2();            // GP offset -31528
     * return;
     * }
     * ```
     * To get exact function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-32664 -32264 -32032 -31528"
     * ```
     * The string offsets 28440/28448 (0x6f18/0x6f20) from the .rodata base likely contain error messages - check with:
     * ```bash
     * strings -t x fsn.original | grep -A1 "$(printf '%x' $((0x43b7c0 + 28440)))"
     * ```
     */
halt_baddata();
}
