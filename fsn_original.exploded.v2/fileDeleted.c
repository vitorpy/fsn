/**
 * fileDeleted
 *
 * Extracted from fsn.c lines 55760-55799
 * Category: Filesystem
 */

void fileDeleted(int param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  stat sStack_94;
  char *pcStack_c;
  
  if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
    pcStack_c = (char *)build_path_string(0,param_1);
    strcat(pcStack_c,param_2);
    iVar1 = lstat(pcStack_c,&sStack_94);
    if (iVar1 < 0) {
      bVar2 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar2 & 0x7f;
      param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar2 & 0x3f;
      iVar1 = FUN_00413580(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_00413610(param_1,param_2);
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
        FUN_004144ec(param_1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418334):
     * Function: fileDeleted
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Sets bit 2 (0x4) in node->flags[0] (offset 116), clears bit 7 and sets bit 7 in node->flags[1] (offset 117 - effectively ensures bit 7 is set), then checks if bit 0 of flags[0] is set OR bit 7 of flags[1] is set - if either condition is true, calls a function (likely queueNodeRedraw at gp-32744+17644) with the node and returns 1, otherwise returns 0.
     * **C pseudocode:**
     * ```c
     * node->flags[0] |= 0x04;                    /* mark as deleted */
     * node->flags[1] = (node->flags[1] & 0x7F) | 0x80;  /* set high bit */
     * if ((node->flags[0] & 0x01) || (node->flags[1] & 0x80)) {
     * queueNodeRedraw(node);  /* GP[-32744] + 17644 */
     * return 1;
     * }
     * return 0;
     * ```
     * Note: The flags[1] manipulation (clear bit 7 then set it) is likely ensuring a clean state transition. Offset 116-117 appear to be a 2-byte flags field where different bits track node state (bit 0 = visible/active, bit 2 = deleted, bit 7 of second byte = needs redraw).
     */
halt_baddata();
}
