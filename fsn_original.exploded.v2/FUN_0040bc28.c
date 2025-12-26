/**
 * FUN_0040bc28
 *
 * Extracted from fsn.c lines 50074-50084
 * Ghidra address: 0x0040bc28
 * Category: Other
 */

void FUN_0040bc28(void)

{
  int unaff_gp;
  
  /* TODO: GP:-0x7d0c */ (**(code **)(unaff_gp + -0x7d0c) /* -> EXTERNAL_0x0f14c31c */)
            (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,
             *(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 4));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bc28):
     * Function: FUN_0040bc28
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Loads a global pointer, dereferences it to get a structure, extracts field at offset +4, then calls a function with two arguments: another dereferenced global and that field value.
     * **2. C pseudocode:**
     * ```c
     * void FUN_0040bc28(void) {
     * // GP-0x7684 (-30332) = likely curcontext or similar struct pointer
     * // GP-0x75fc (-30204) = likely a widget/window global
     * // GP-0x7d0c (-32012) = function pointer (probably an X/Motif callback)
     * void **struct_ptr = *(void**)GP[-30332];  // t6 = *global1
     * void *widget = *(void**)GP[-30204];        // a0 = *global2
     * void *param = struct_ptr[1];               // a1 = struct_ptr->field_4
     * ((void(*)(void*, void*))GP[-32012])(widget, param);
     * }
     * ```
     * **Likely actual function (based on FSN patterns):**
     * ```c
     * void FUN_0040bc28(void) {
     * // Calls something like XtSetValues or widget update
     * // with curcontext->some_field as parameter
     * some_xt_function(*widget_global, (*curcontext)->field_4);
     * }
     * ```
     * To identify the actual globals, run:
     * ```
     * python3 analysis/resolve_got.py
     * ```
     * with offsets: -30332, -30204, -32012
     */
halt_baddata();
}
