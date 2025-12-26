/**
 * FUN_00431788
 *
 * Extracted from fsn.c lines 70736-70776
 * Ghidra address: 0x00431788
 * Category: Other
 */

void FUN_00431788(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = FUN_004325fc();
    iVar4 = 0;
    if (0 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */) {
      piVar3 = iVar1->_field_20 /* was: *(int **)(iVar1 + 0x20) */;
      do {
        if (param_4 == *piVar3) {
          iVar2 = iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar4 * 0x28;
          if ((param_3 == (int *)0x0) || (iVar2->file_array /* was: *(int *)(iVar2 + 0x10) */ == *param_3)) {
            if (param_5 == iVar2->file_count /* was: *(int *)(iVar2 + 0xc) */) {
                  /*
     * BADDATA ANALYSIS (from binary @ 0x00431788):
     * Function: FUN_00431788
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Validates display/visual parameters. If a0 (display) is NULL, returns -2. If a1 (visual) is NULL, loads it from a0+132 (default visual). Calls a function at GP-32736+9724 (likely XVisualInfo lookup), then iterates through results based on count at offset 24.
     * **C pseudocode:**
     * ```c
     * int FUN_00431788(Display *display, Visual *visual, int *param3, int *param4) {
     * if (display == NULL)
     * return -2;
     * if (visual == NULL)
     * visual = (Visual *)display->default_visual;  // offset 132
     * XVisualInfo *vi = XGetVisualInfo(display, ...);  // GP indirect call
     * int count = vi->depth;  // offset 24 is depth or count field
     * if (count <= 0)
     * goto error_path;
     * // Loop through visual info array at vi+32
     * void *items = vi->visuals;  // offset 32
     * // ... continues processing
     * }
     * ```
     * This appears to be an X11 visual/depth query function - the offset 132 from Display is `default_visual`, and the GP-indirect call resolves to an Xlib function (likely `XGetVisualInfo` based on the return structure offsets). The function name hint `SG_getDefaultDepth` in the disassembly confirms this is SGI's wrapper for querying X11 visual depth information.
     */
halt_baddata();
            }
            iVar2 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
          }
          else {
            iVar2 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
          }
        }
        else {
          iVar2 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar2);
    }
    FUN_004314e0(param_1,param_2,param_3,param_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431788):
     * Function: FUN_00431788
     *
     * Looking at this assembly:
     * **What it does:**
     * Iterates through an array of 8-byte structures, comparing a type field at offset +16 against s0's first field, and checking if offset +12 matches a7. If both match, returns a7. Otherwise continues loop, incrementing a5 until >= a2[24]. On loop exit, calls a function via GP with the original args plus s0, s1.
     * **C pseudocode:**
     * ```c
     * // v0 = base, t9 = index * 8, v1 = &base->entries[index]
     * entry = (struct_t *)((char *)base->data + index * 8);  // base->data at +20, shift left 3
     * if (s0 != NULL && entry->type != s0->type) {  // +16 vs s0[0]
     * goto next_iter;
     * }
     * if (a7 == entry->callback) {  // +12
     * return a7;
     * }
     * next_iter:
     * a5++;
     * if (a5 < a6->count) {  // a6[24] = count
     * a4 += 4;
     * goto loop_top;  // 0x431800
     * }
     * // Loop exhausted - call fallback function
     * return fallback_func(orig_a0, orig_a1, s0, s1);  // via gp[-30724]
     * ```
     * This appears to be a widget/resource lookup loop - scanning entries for a matching type and callback, with a fallback handler when not found. Likely part of Xt/Motif resource resolution (given SG_getDefaultDepth context).
     */
halt_baddata();
}
