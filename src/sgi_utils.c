/**
 * sgi_utils.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "sgi_utils.h"
#include "fsn_types.h"
#include "fsn_state.h"

void SG_getDefaultDepth(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) &&
      (((iVar1 = get_bytecode_context(0, 0), param_3 != (int *)0x0 &&
        (iVar2 = *(int *)(iVar1 + 0x24), *param_3 != *(int *)(iVar1 + iVar2 * 4 + 0x3c))) ||
       ((param_4 != 0 && (iVar2 = *(int *)(iVar1 + 0x24), param_4 != iVar2)))))) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3)) &&
       ((param_3 == (int *)0x0 || (*param_3 != 3)))) ||
      ((((param_4 != 0 || (iVar2 != 2)) && (param_4 != 2)) ||
       ((*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3 || (iVar2 != 2)))))))) {
    read_data_section();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004314d4):
     * Function: SG_getDefaultDepth
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares values to find a matching visual format. If `*a2 == t1` and either `a3 == 0` with `v1 == 2`, or `a3 == 2` with matching array lookup, returns 8. Otherwise calls a function via GP indirect (likely error/fallback).
     * 2. **C pseudocode:**
     * // c
     * if (*a2 == t1) {
     * if (a3 == 0 && v1 == 2) {
     * goto check_array;
     * }
     * if (a3 == 2) {
     * check_array:
     * if (base[v1].field_0x3c == t1 && v1 == 2) {
     * return 8;
     * }
     * }
     * }
     * // fall through to GP indirect call (error handler or next check)
     * t9 = *(gp - 30720);  // likely XtAppError or similar
     * t9();
     *
     * The pattern suggests this is part of X11 visual/depth matching - checking if a visual class matches expected criteria, returning depth 8 (8-bit) on match, or calling an error/fallback function.
     */
  return;
}

void SG_getMatchingVisual(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = get_bytecode_context(param_1,param_2);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == 0) || (param_3 == *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 4))) &&
            ((param_4 == (int *)0x0 ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_4)))) &&
           ((param_6 == 0 || (param_6 == *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc))))) {
          if (param_5 == 0) {
            /*
             * BADDATA ANALYSIS (from binary @ 0x004318b8):
             * Function: SG_getMatchingVisual
             *
             * ## Analysis of SG_getMatchingVisual (0x4318b8 - 0x431a0c)
             * **What it does:**
             * Gets a matching X11 Visual for OpenGL rendering. If display is NULL, returns -2. If screen is 0, gets it from display+132 (default screen). Calls glXChooseVisual (at gp-32736 + 9724), then iterates through returned visuals (count at offset 24) checking each 40-byte entry against criteria.
             * **C pseudocode:**
             * int SG_getMatchingVisual(Display *dpy, int screen, XVisualInfo **result_out,
             * int attrib1, int attrib2, int attrib3) {
             * if (dpy == NULL)
             * return -2;
             * if (screen == 0)
             * screen = dpy->default_screen;  // offset 132
             * XVisualInfo *visuals = glXChooseVisual(dpy, screen, // attribs);
             * int count = visuals->count;  // offset 24
             * if (count <= 0)
             * return // -1 or error;
             * // Iterate visuals (each 40 bytes), match against attrib1/attrib2/attrib3
             * for (int i = 0; i < count; i++) {
             * // Check visual properties against requested attributes
             * // If match found, store in *result_out
             * }
             * return // status;
             * }
             * **Key observations:**
             * - gp-32736 + 9724 = glXChooseVisual or similar GLX function
             * - Visual entries are 40 bytes each (li a0,40 at 431928)
             * - s0 (a2 param) is the output pointer for matched visual
             * - Stack offsets 44-52 hold additional visual attribute requirements passed as args 4-6
             */
            return;
          }
          if (param_5 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4)) {
            /*
             * BADDATA ANALYSIS (from binary @ 0x004318b8):
             * Function: SG_getMatchingVisual
             *
             * Looking at this assembly:
             * 1. **What it does:** Iterates through an array of 40-byte visual info structures, comparing fields at offsets +4 (visual id), +16 (depth), and +12 (class) against parameters s0, a3[0], and a1 respectively. If any comparison fails, jumps to 0x4319e4 (next iteration/failure path).
             * 2. **C pseudocode:**
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
             * Structure offsets: +0=unknown, +4=visualid, +12=class, +16=depth (matches XVisualInfo).
             */
            return;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
  /*
   * BADDATA ANALYSIS (from binary @ 0x004318b8):
   * Function: SG_getMatchingVisual
   *
   * ## Analysis
   * **What it does:**
   * Loop searching for a visual matching depth (a1) and optional class (a2). When found, returns pointer to visual entry (base + index * stride). Returns -4 if no match found.
   * **C pseudocode:**
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
   * **Register usage:**
   * - t0 = context/state struct
   * - t9 = current XVisualInfo pointer
   * - v0 = visual list structure (offset 32 = class array)
   * - v1 = loop index
   * - a0 = entry size/stride
   * - a1 = requested depth
   * - a2 = requested visual class (0 = don't care)
   */
  return;
}

void SG_getMaxDepth(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = get_bytecode_context(param_1,param_2);
    iVar4 = 0;
    if (param_4 == 0) {
      param_4 = *(int *)(iVar1 + 0x24);
    }
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == (int *)0x0) ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_3)) &&
            (param_4 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4))) &&
           (iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc), iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431a0c):
     * Function: SG_getMaxDepth
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Iterates through entries (index in v1, max in a3), checking if entry matches criteria (t9+16 == t2 AND array[v0+32][v1] == s0). If match found, gets depth value from structure at offset 0x0c and tracks maximum depth in t0. Returns max depth found.
     * **C pseudocode:**
     * int max_depth = t0;  // initial value from earlier code
     * for (int i = v1; i < count; i++) {
     * Entry *entry = &entries[i];  // t9 points to current entry
     * if (entry->field_10 == target_type &&
     * node->children[i] == target_node) {
     * int depth = node->depth_array[i].depth;  // offset 0x0c in sized struct
     * if (depth > max_depth)
     * max_depth = depth;
     * }
     * }
     * return max_depth;
     * Key offsets: v0+0x20 = children array, v0+0x14 = depth/entry array base, entry stride = a1, depth at entry+0x0c.
     */
  return;
}

void SG_getNormalArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,2);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,2);
  if (-1 < iVar2) {
    uVar3 = eval_bytecode_instruction(param_1,param_2,0,0,0);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getOverlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,3);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,3);
  if (iVar2 < 0) {
    setup_menu_resources((Display *)param_1,param_2,(void *)param_3,(void *)param_4);
  }
  else {
    uVar3 = eval_bytecode_instruction(param_1,param_2,0,0,0);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431c80):
     * Function: SG_getOverlayArgs
     *
     * Looking at this assembly:
     * **What it does:**
     * Appends two entries to an array at s1 (likely an Arg/resource list). Each entry is 8 bytes (hence sll by 3 = multiply by 8). Entry 1: stores t6 and v1. Entry 2: stores (gp-32640)+104 and a2. s0 holds the running index counter, incremented after each entry.
     * **C pseudocode:**
     * // s0 = &n (argument count pointer)
     * // s1 = args (XtArgVal array base)
     * // t6 = resource_name_1, v1 = value_1
     * // a2 = value_2
     * // gp-32640 offset 104 = likely XmNvisual or similar Xt resource string
     * int i = *n;
     * args[i].name = resource_name_1;      // t6
     * args[i].value = value_1;             // v1
     * i++;
     * args[i].name = (XtPointer)(DAT_gp_8080 + 104);  // XmN* resource string
     * args[i].value = value_2;             // a2
     * i++;
     * *n = i;
     * return value_1;  // v0 = v1
     * The `sll reg,0x3` pattern (shift left 3 = multiply by 8) confirms this is indexing into an array of 8-byte Arg structures (name + value pointers). The gp-relative load at 0x8080+104 is fetching a string constant, likely an Xt/Motif resource name like `XmNvisual` or `XmNcolormap`.
     */
  return;
}

void SG_getOverlay2Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = read_bytecode_value(param_1,param_2,2,&temp_data_buffer,3);
  if (iVar1 < 0) {
    setup_menu_resources((Display *)param_1,param_2,(void *)param_3,(void *)param_4);
  }
  else {
    uVar2 = eval_bytecode_instruction(param_1,param_2,0,0,0);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431df0):
     * Function: SG_getOverlay2Args
     *
     * Looking at this assembly:
     * 1. **What it does:** Builds an argument array by storing values and type codes at array[index*8] and array[index*8+4], incrementing the index counter after each pair. Uses a GP-relative pointer (gp-32640 + 104) for one of the values.
     * 2. **C pseudocode:**
     * // s0 = &argcount, s1 = argarray base, t8 from GP = some global struct
     * int idx = *argcount;
     * argarray[idx].value = some_value;      // sw t5,0(s0) context differs
     * argarray[idx].type = 2;
     * idx++;
     * *argcount = idx;
     * argarray[idx].value = (global_ptr + 104);  // gp-relative: likely a widget or string
     * argarray[idx].type = param_a2;             // a2 passed in
     * idx++;
     * *argcount = idx;
     * return 2;
     *
     * The structure appears to be 8-byte arg entries: `{void* value, int type}`. The GP load at -32640 offset +104 is likely accessing a field in a global structure (possibly topLevelShell+104 or similar widget offset). Return value 2 in v0.
     */
  return;
}

void SG_getOverlay4Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = read_bytecode_value(param_1,param_2,4,&temp_data_buffer,3);
  if (iVar1 < 0) {
    process_data_recursive(param_1,param_2,param_3,(int)param_4);
  }
  else {
    uVar2 = eval_bytecode_instruction(param_1,param_2,0,0,0);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 4;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
  /*
   * BADDATA ANALYSIS (from binary @ 0x00431f3c):
   * Function: SG_getOverlay4Args
   *
   * Looking at this assembly:
   * **What it does:**
   * Stores overlay menu entries into an array at s1 (indexed by counter at s0). Each entry is 8 bytes: [pointer, type]. Stores 3 entries: t5 with type t6, a GP-relative pointer+104 with type 4, and that same pointer with type from a2. Increments counter twice.
   * **C pseudocode:**
   * 
   * int idx = *counter;
   * overlay_array[idx].ptr = t5_value;
   * overlay_array[idx].type = t6_value;
   * overlay_array[idx].type = 4;  // overwrites previous type
   * idx = ++(*counter);
   * overlay_array[idx].ptr = (SomeStruct*)gp_8080 + 104;  // offset into structure
   * overlay_array[idx].type = 4;
   * idx = ++(*counter);
   * overlay_array[idx].ptr = (SomeStruct*)gp_8080 + 104;
   * overlay_array[idx].type = param_a2;
   * ++(*counter);
   * return 4;
   * 
   * Note: gp-0x8080 likely resolves to a menu/widget structure. The +104 offset (0x68) suggests accessing a specific field. The array entries are 8-byte structs {void* ptr, int type}.
   */
  return;
}

void SG_getPopupArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,4);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,4);
  if (iVar2 < 0) {
    process_data_section(param_1,param_2,param_3,(int)param_4);
  }
  else {
    uVar1 = eval_bytecode_instruction(param_1,param_2,0,0,0);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00432088):
     * Function: SG_getPopupArgs
     *
     * Looking at this assembly:
     * **What it does:**
     * Builds an Xt/Motif argument list (Arg array). Each entry is 8 bytes (resource name pointer + value). Stores XmNuserData resource at `gp[-32640]+104` with value from `a2`, increments the arg count stored at `*s0`, then returns the count from stack offset 56.
     * **C pseudocode:**
     * // s0 = &argcount, s1 = arglist base, a2 = userData value
     * int idx = *argcount;
     * arglist[idx].name = XmNuserData;  // gp[-32640]+104 = string "userData"
     * arglist[idx].value = 2;           // XmNuserData resource type
     * idx++;
     * *argcount = idx;
     * arglist[idx].name = XmNuserData;  // redundant store pattern
     * arglist[idx].value = userData;    // a2 parameter
     * idx++;
     * *argcount = idx;
     * return sp[56];  // return final arg count
     *
     * Actually, looking closer at the 8-byte stride pattern (`sll by 3` = multiply by 8), this is standard `XtSetArg()` macro expansion where `Arg` struct is `{String name, XtArgVal value}`. The `gp[-32640]+104` resolves to a resource string constant (likely `XmNuserData`).
     */
  return;
}

void SG_getUnderlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,1);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,1);
  if (iVar2 < 0) {
    process_data_section(param_1,param_2,param_3,(int)param_4);
  }
  else {
    uVar3 = eval_bytecode_instruction(param_1,param_2,0,0,0);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getVisualArgs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = read_bytecode_value(0, 0, 0, NULL, 0);
  uVar2 = eval_bytecode_instruction(param_1,param_2,uVar1,param_4,param_5);
  *(undefined4 *)(param_6 + *param_7 * 8) = 0xf6615ba;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = uVar2;
  iVar3 = *param_7;
  *param_7 = iVar3 + 1;
  *(undefined4 *)(param_6 + (iVar3 + 1) * 8) = 0xf6615c3;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = param_3;
  iVar3 = *param_7;
  *param_7 = iVar3 + 1;
  *(undefined4 *)(param_6 + (iVar3 + 1) * 8) = 0xf661fe4;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = uVar1;
  *param_7 = *param_7 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004324ec):
     * Function: SG_getVisualArgs
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * This builds an X11/Xt argument list (ArgList). It appends two attribute-value pairs to an array at `a0`, using `v1` as the count pointer. The attributes come from GP-relative data (visual-related Xt resources), values from `a1` and stack. Returns `a1` (the visual).
     * **2. C pseudocode:**
     * // a0 = args array, v1 = &argc, a1 = visual, a2 = depth (from earlier)
     * // t5 from stack offset 40 = colormap
     * int idx = *argc;
     * args[idx].name = XtNvisual;      // or similar resource constant
     * args[idx].value = visual;
     * *argc = idx + 1;
     * idx = *argc;
     * args[idx].name = DAT_gp[-32640] + 104;  // XtNcolormap or XtNdepth
     * args[idx].value = colormap;             // from sp+40
     * *argc = idx + 1;
     * return visual;  // move v0,a1
     * The pattern `sll reg,0x3` (shift left 3 = multiply by 8) confirms this is indexing into an `Arg` struct array (each Arg is 8 bytes: name + value pointers). The GP-relative load at offset -32640 + 104 is likely accessing an Xt resource string constant like `XtNcolormap`.
     */
  return;
}
