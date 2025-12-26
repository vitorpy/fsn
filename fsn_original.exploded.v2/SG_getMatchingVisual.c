/**
 * SG_getMatchingVisual
 *
 * Extracted from fsn.c lines 70782-70813
 * Category: Other
 */

void SG_getMatchingVisual(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = FUN_004325fc(param_1,param_2);
    iVar2 = 0;
    if (0 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */) {
      do {
        if ((((param_3 == 0) || (param_3 == *(int *)(iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar2 * 0x28 + 4))) &&
            ((param_4 == (int *)0x0 ||
             (*(int *)(iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar2 * 0x28 + 0x10) == *param_4)))) &&
           ((param_6 == 0 || (param_6 == *(int *)(iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar2 * 0x28 + 0xc))))) {
          if (param_5 == 0) {
                /*
     * BADDATA ANALYSIS (from binary @ 0x004318b8):
     * Function: SG_getMatchingVisual
     *
     * ## Analysis of SG_getMatchingVisual (0x4318b8 - 0x431a0c)
     * **What it does:**
     * Gets a matching X11 Visual for OpenGL rendering. If display is NULL, returns -2. If screen is 0, gets it from display+132 (default screen). Calls glXChooseVisual (at gp-32736 + 9724), then iterates through returned visuals (count at offset 24) checking each 40-byte entry against criteria.
     * **C pseudocode:**
     * ```c
     * int SG_getMatchingVisual(Display *dpy, int screen, XVisualInfo **result_out,
     * int attrib1, int attrib2, int attrib3) {
     * if (dpy == NULL)
     * return -2;
     * if (screen == 0)
     * screen = dpy->default_screen;  // offset 132
     * XVisualInfo *visuals = glXChooseVisual(dpy, screen, /* attribs */);
     * int count = visuals->count;  // offset 24
     * if (count <= 0)
     * return /* -1 or error */;
     * // Iterate visuals (each 40 bytes), match against attrib1/attrib2/attrib3
     * for (int i = 0; i < count; i++) {
     * // Check visual properties against requested attributes
     * // If match found, store in *result_out
     * }
     * return /* status */;
     * }
     * ```
     * **Key observations:**
     * - gp-32736 + 9724 = glXChooseVisual or similar GLX function
     * - Visual entries are 40 bytes each (li a0,40 at 431928)
     * - s0 (a2 param) is the output pointer for matched visual
     * - Stack offsets 44-52 hold additional visual attribute requirements passed as args 4-6
     */
halt_baddata();
          }
          if (param_5 == *(int *)(iVar1->_field_20 /* was: *(int *)(iVar1 + 0x20) */ + iVar2 * 4)) {
                /*
     * BADDATA ANALYSIS (from binary @ 0x004318b8):
     * Function: SG_getMatchingVisual
     *
     * Looking at this assembly:
     * 1. **What it does:** Iterates through an array of 40-byte visual info structures, comparing fields at offsets +4 (visual id), +16 (depth), and +12 (class) against parameters s0, a3[0], and a1 respectively. If any comparison fails, jumps to 0x4319e4 (next iteration/failure path).
     * 2. **C pseudocode:**
     * ```c
     * // v0 = display info, v1 = index, a0 = 40 (struct size)
     * // s0 = target_visual, a3 = depth_ptr, a1 = target_class
     * VisualInfo *list = (VisualInfo *)v0->visuals;  // offset 20
     * VisualInfo *entry = &list[index];
     * if (target_visual != 0 && entry->visualid != target_visual)
     * goto next_entry;
     * if (depth_ptr != NULL && entry->depth != *depth_ptr)
     * goto next_entry;
     * if (target_class != 0 && entry->class != target_class)
     * goto next_entry;
     * // match found - continue to return this visual
     * ```
     * Structure offsets: +0=unknown, +4=visualid, +12=class, +16=depth (matches XVisualInfo).
     */
halt_baddata();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004318b8):
     * Function: SG_getMatchingVisual
     *
     * ## Analysis
     * **What it does:**
     * Loop searching for a visual matching depth (a1) and optional class (a2). When found, returns pointer to visual entry (base + index * stride). Returns -4 if no match found.
     * **C pseudocode:**
     * ```c
     * // t9 = current visual info entry, v0 = visual list base, v1 = index (loop counter)
     * // a0 = entry stride, a1 = target depth, a2 = target class (0 = any), t0 = context struct
     * if (t9->depth == target_depth) {                    // offset 12
     * if (target_class == 0 || visual_list->classes[index] == target_class) {  // offset 32
     * return context->visual_base + (index * stride);  // offset 20
     * }
     * }
     * index++;
     * if (index < context->num_visuals) goto loop_start;  // offset 24
     * return -4;  // GLX_BAD_VISUAL
     * ```
     * **Register usage:**
     * - t0 = context/state struct
     * - t9 = current XVisualInfo pointer
     * - v0 = visual list structure (offset 32 = class array)
     * - v1 = loop index
     * - a0 = entry size/stride
     * - a1 = requested depth
     * - a2 = requested visual class (0 = don't care)
     */
halt_baddata();
}
