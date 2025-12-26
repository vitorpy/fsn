/**
 * FUN_00418340
 *
 * Extracted from fsn.c lines 55805-55845
 * Ghidra address: 0x00418340
 * Category: Other
 */

void FUN_00418340(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int unaff_gp;
  undefined1 auStack_94 [136];
  undefined4 local_c;
  
  if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
    local_c = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1) /* =FUN_00411b30 */;
    /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(local_c,param_2);
    iVar1 = /* TODO: GP:-0x7ee0 */ (**(code **)(unaff_gp + -0x7ee0) /* -> EXTERNAL_0x0facbb68 */)(local_c,auStack_94);
    if (iVar1 < 0) {
      bVar2 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar2 & 0x7f;
      param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar2 & 0x3f;
      iVar1 = (**(code **)(unaff_gp + -0x7a5c) /* -> FUN_00413580 */)(param_1,param_2) /* =FUN_00413580 */;
      if (iVar1 == 0) {
        iVar1 = (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(param_1,param_2) /* =FUN_00413610 */;
        if (iVar1 != 0) {
          bVar2 = iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ & 0xfd;
          iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = bVar2;
          iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = bVar2 | 4;
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0x7f | 0x80;
        }
      }
      else {
        *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0x7f;
        iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ & 0xfe | 1;
        param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ | 1;
      }
      if (((param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
        (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x44ec))(param_1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418340):
     * Function: FUN_00418340
     *
     * Looking at this assembly:
     * 1. **What it does:** Sets bit 2 (0x4) in byte at offset 116 of a struct. Sets bit 7 (0x80) in byte at offset 117 (after clearing it first). If bit 0 of offset 116 is set OR bit 7 of offset 117 is set, calls a function via GP offset -32744+17644 and returns 1; otherwise returns 0.
     * 2. **C pseudocode:**
     * ```c
     * v0->flags_74 |= 0x04;           // offset 116: set bit 2
     * s0->flags_75 = (s0->flags_75 & 0x7F) | 0x80;  // offset 117: set bit 7
     * if ((s0->flags_74 & 0x01) || (s0->flags_75 & 0x80)) {
     * // GP[-32744] + 17644 = likely addToDeleteList or similar
     * someFunction(s0);
     * return 1;
     * }
     * return 0;
     * ```
     * Note: The GP indirect call at -32744 offset 17644 (0x44EC) needs resolution via `resolve_got.py` to identify the actual function being called. The bit manipulations suggest marking a file node as "deleted" (bit 2) and "pending action" (bit 7), then conditionally queuing it for processing.
     */
halt_baddata();
}
