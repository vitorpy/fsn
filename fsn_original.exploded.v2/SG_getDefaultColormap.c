/**
 * SG_getDefaultColormap
 *
 * Extracted from fsn.c lines 70535-70575
 * Category: Other
 */

void SG_getDefaultColormap(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x28);
    }
    param_2 = param_2 * 0x50;
    if (param_3 != *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28)) {
      iVar1 = FUN_004325fc(param_1);
      iVar4 = 0;
      if (0 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */) {
        piVar3 = iVar1->child_count /* was: *(int **)(iVar1 + 0x14) */;
        do {
          if (param_3 == *piVar3) {
            if (*(int *)(iVar1->_field_1c /* was: *(int *)(iVar1 + 0x1c) */ + iVar4 * 4) != 0) {
                  /*
     * BADDATA ANALYSIS (from binary @ 0x00431348):
     * Function: SG_getDefaultColormap
     *
     * Looking at this assembly:
     * 1. **What it does:** Gets default colormap for a screen. If widget (a0) is NULL, returns -2. If screen_num (a1) is 0, gets it from widget+132. If colormap (a2) is 0, computes it from screen_info array at widget+140 using index screen_num*5*16+40.
     * 2. **C pseudocode:**
     * ```c
     * int SG_getDefaultColormap(Widget *widget, int screen_num, Colormap colormap) {
     * if (widget == NULL) return -2;
     * if (screen_num == 0) screen_num = widget->screen;  // offset 132
     * if (colormap == 0) {
     * // screen_info at offset 140, entry size = 5*16 = 80 bytes
     * ScreenInfo *screens = widget->screen_info;  // offset 140
     * colormap = screens[screen_num].default_colormap;  // offset 40 in entry
     * }
     * // continues to use screens[screen_num] at offset 40...
     * }
     * ```
     * The index calculation `(a1*4 + a1)*16 = a1*80` gives 80-byte stride per screen entry. Offset 40 within that entry is the default colormap field.
     */
halt_baddata();
            }
            uVar2 = XCreateColormap(param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),
                                    param_3,0);
            *(undefined4 *)(iVar1->_field_1c /* was: *(int *)(iVar1 + 0x1c) */ + iVar4 * 4) = uVar2;
                /*
     * BADDATA ANALYSIS (from binary @ 0x00431348):
     * Function: SG_getDefaultColormap
     *
     * Looking at this assembly:
     * 1. **What it does**: Calls a function at gp-32736+9724 (likely XtScreenDatabase or similar X11 call), gets a result struct, then iterates through an array at offset 0x14 of the result, searching for an entry matching `a2` (visual/colormap ID). When found, returns the corresponding value from offset 0x1c array.
     * 2. **C pseudocode**:
     * ```c
     * XStandardColormap *result = XtScreenDatabase(screen); // or similar
     * int count = result->count;        // offset 0x18
     * int *visuals = result->visuals;   // offset 0x14
     * Colormap *cmaps = result->cmaps;  // offset 0x1c
     * for (int i = 0; i < count; i++) {
     * if (visuals[i] == target_visual) {
     * return cmaps[i];
     * }
     * }
     * return default_value;
     * ```
     * The gp-32736+9724 resolves to an X11 function that returns standard colormap info. The loop searches for a matching visual ID and returns the associated colormap.
     */
halt_baddata();
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */);
      }
      XCreateColormap(param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),param_3,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431348):
     * Function: SG_getDefaultColormap
     *
     * Looking at this assembly:
     * **What it does:**
     * This is a loop that searches through an array of 40-byte structures (stride 0x28=40). For each entry, it calls a function via GP-32072 with parameters from the structure. When found (or loop exhausted), it stores the result and returns. The loop index is in v1, compared against a limit in a1.
     * **C pseudocode:**
     * ```c
     * // Inside SG_getDefaultColormap, after halt_baddata section
     * // t0 = some context pointer, t9 = function pointer at gp[-32072]
     * // v1 = offset (increments by 40 each iteration)
     * // a1 = limit from structure at offset 8
     * result = func_gp_32072(s0, entry->field_8);  // jalr at 43145c
     * base = t0->field_1c;  // offset 0x1c
     * *(base + offset) = result;  // store result
     * return *(base + offset);  // return stored value
     * // Loop continuation at 431494:
     * while (a0 < a1) {
     * offset += 40;  // 0x28 stride
     * }
     * // Fallthrough: call func_gp_32072(s0, entry->field_8, 0) with a3=0
     * result = func_gp_32072(s0, s0->field_8c[index]->field_8, 0);
     * return result;
     * ```
     * **Key observations:**
     * - GP offset -32072 (0x82b8) = likely `XDefaultColormapOfScreen` or similar X11 colormap function
     * - Structure stride of 40 bytes suggests iterating through Screen/Visual info structures
     * - The `a3=zero` in the fallthrough path suggests a "create new" vs "lookup existing" flag
     */
halt_baddata();
}
