/**
 * FUN_0042ccac
 *
 * Extracted from fsn.c lines 67912-67966
 * Ghidra address: 0x0042ccac
 * Category: Other
 */

void FUN_0042ccac(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined4 local_18;
  uint local_14;
  
  ppuVar3 = &PTR_s_shrinkOnZoom_10008950;
  if (PTR_s_shrinkOnZoom_10008950 != (undefined *)0x0) {
    do {
      if (*(char *)(ppuVar3 + 3) != *ppuVar3[1]) {
        *ppuVar3[1] = *(char *)(ppuVar3 + 3);
        local_14 = (uint)(byte)*ppuVar3[1];
        local_18 = 0xe3f48f1;
        XtSetValues(ppuVar3[4],&local_18,1);
      }
      ppuVar1 = ppuVar3 + 5;
      ppuVar3 = ppuVar3 + 5;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  ppuVar3 = &PTR_s_monitorTimeout_100089f0;
  if (PTR_s_monitorTimeout_100089f0 != (undefined *)0x0) {
    do {
      if (ppuVar3[5] != *(undefined **)ppuVar3[1]) {
        *(undefined **)ppuVar3[1] = ppuVar3[5];
        local_14 = *(uint *)ppuVar3[1];
        local_18 = 0xf66187b;
        XtSetValues(ppuVar3[6],&local_18,1);
      }
      ppuVar1 = ppuVar3 + 7;
      ppuVar3 = ppuVar3 + 7;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  if (PTR_s_mouseSpeed_10008b5c == (undefined *)0x0) {
    ppuVar3 = &PTR_s_groundColor_1000935c;
    puVar2 = PTR_s_groundColor_1000935c;
    while (puVar2 != (undefined *)0x0) {
      if (ppuVar3[2] != *(undefined **)ppuVar3[1]) {
        *(undefined **)ppuVar3[1] = ppuVar3[2];
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
      puVar2 = *ppuVar1;
    }
    FUN_0042d618();
    FUN_0042d6f0();
    FUN_0042c970(0xffffffff);
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ccac):
     * Function: FUN_0042ccac
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a global pointer (gp-32660, offset -30384 = curcontext), checks if it's NULL. If not NULL, loads s1 with a string constant (gp-32608 + 9609), sets s2 to point to stack buffer at sp+56, then compares byte at offset 12 of curcontext with first byte of the string at curcontext[4]. If they differ, stores the byte and prepares string pointer on stack.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042ccac(int a0, int a1, int a2) {
     * void *ctx = curcontext;  // gp-32660, adjusted by -30384
     * if (ctx == NULL) {
     * goto early_exit;  // jump to 42cd60
     * }
     * char *some_string = "...";  // gp-32608 + 9609 - likely an XmString or resource name
     * char buffer[24];            // sp+56, s2 points here
     * char *str_ptr = ((char **)ctx)[1];  // ctx+4
     * unsigned char current_val = ((unsigned char *)ctx)[12];
     * unsigned char first_char = str_ptr[0];
     * if (current_val != first_char) {
     * str_ptr[0] = current_val;  // update cached value
     * // continues with XtVaSetValues or similar using buffer...
     * }
     * // ...
     * }
     * ```
     * This looks like a **preference/settings synchronization function** - it's checking if a cached value (byte at offset 12) differs from what's stored in a string pointer (offset 4), and if so, updates it. The stack buffer setup (s2=sp+56) combined with loading a string constant suggests preparation for an Xt varargs call like `XtVaSetValues(widget, XmNsomething, value, NULL)`.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042ccac):
     * Function: FUN_0042ccac
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares a float at offset 24 of a struct (s0+0x18) with a float pointed to by offset 4 (s0+4→float). If equal, skips update. Otherwise, stores the new value and calculates a scaled value using a lookup table indexed by s0+0x14, then calls a function via GP.
     * 2. **C pseudocode:**
     * ```c
     * float new_val = obj->field_0x18;
     * float *target = obj->ptr_0x4;
     * if (new_val != *target) {
     * *target = new_val;
     * int idx = obj->field_0x14;
     * float scale = scale_table[idx];  // s1 points to table at gp-27408
     * float scaled = scale * (*target);
     * // ... continues with function call (rounding mode manipulation suggests ftoi or similar)
     * }
     * ```
     * The `cfc1/ori/xori/ctc1` sequence at the end sets FPU rounding mode to truncate (round toward zero), typically done before float-to-int conversion.
     */
halt_baddata();
}
