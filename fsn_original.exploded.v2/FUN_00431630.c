/**
 * FUN_00431630
 *
 * Extracted from fsn.c lines 70679-70730
 * Ghidra address: 0x00431630
 * Category: Other
 */

void FUN_00431630(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = FUN_004325fc(param_1,param_2);
    iVar5 = 0;
    if (0 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */) {
      piVar6 = iVar1->_field_20 /* was: *(int **)(iVar1 + 0x20) */;
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        if (param_3 == *piVar6) {
          iVar2 = iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar5 * 0x28;
          if (param_4 == iVar2->file_count /* was: *(int *)(iVar2 + 0xc) */) {
            if ((param_5 != (int *)0x0) && (iVar2->file_array /* was: *(int *)(iVar2 + 0x10) */ == *param_5)) {
                  /*
     * BADDATA ANALYSIS (from binary @ 0x00431630):
     * Function: FUN_00431630
     *
     * Looking at this assembly:
     * 1. **What it does:** Validates args (returns -2 if a0==NULL), gets default arg from a0+132 if a1==NULL, calls a function via GP offset -32736+9724, then iterates over a list/array based on the returned structure's count field at offset 24.
     * 2. **C pseudocode:**
     * ```c
     * int FUN_00431630(void *a0, void *a1, int a2, int a3) {
     * if (a0 == NULL) return -2;
     * if (a1 == NULL) a1 = *(void**)((char*)a0 + 132);  // a0->field_84
     * void *result = some_lookup_func(a0, a1);  // GP[-32736]+9724
     * int count = *(int*)((char*)result + 24);  // result->field_18
     * if (count <= 0) goto end;
     * void *items = *(void**)((char*)result + 32);  // result->field_20
     * // iteration loop follows using count and items...
     * }
     * ```
     * The GP indirect call at -32736+9724 likely resolves to a lookup/search function (possibly `SG_findNode` or similar given the `SG_getDefaultDepth` symbol nearby). The structure returned has count at +24 and data pointer at +32, typical of an array/list container.
     */
halt_baddata();
            }
            iVar4 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
            iVar3 = *(int *)(iVar1 + iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */ * 4 + 0x3c);
            if (((iVar7 != iVar3) && (iVar2 = iVar2->file_array /* was: *(int *)(iVar2 + 0x10) */, iVar8 = iVar2, iVar7 == 3)) &&
               (iVar8 = iVar7, iVar2 == iVar3)) {
              iVar8 = iVar2;
            }
          }
          else {
            iVar4 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
          }
        }
        else {
          iVar4 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
        iVar7 = iVar8;
      } while (iVar5 < iVar4);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431630):
     * Function: FUN_00431630
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Traverses a linked list or array of visual/depth entries, comparing visual ID (offset +12) against target s1. When found, optionally validates against a secondary pointer (t3). Falls through to check depth class (offset +36, +60) with fallback matching logic.
     * **C pseudocode:**
     * ```c
     * // v1 = entry pointer (base + index*stride)
     * if (entry->visual_id == target_visual) {      // offset +12 vs s1
     * if (match_ptr != NULL) {                   // t3
     * candidate = *match_ptr;                // t3->value
     * if (entry->visual == candidate) {      // offset +16
     * return candidate;                  // found exact match
     * }
     * }
     * // Check depth class
     * idx = entry->depth_index;                  // offset +36
     * depth_class = entry->depths[idx];          // offset +60 (array at +60)
     * if (default_class == depth_class) {        // t2 comparison
     * // accept this entry
     * } else if (default_class == fallback && entry->visual == depth_class) {
     * // accept with fallback match
     * }
     * } else {
     * count++;                                   // a3 += 1
     * ptr = base->next;                          // offset +24, continue loop
     * }
     * ```
     * This appears to be X11 visual/depth matching logic - finding a GLX visual that matches requested depth class, consistent with `SG_getDefaultDepth` function name (SGI GL visual selection).
     */
halt_baddata();
}
