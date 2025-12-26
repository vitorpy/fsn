/**
 * FUN_0042cf60
 *
 * Extracted from fsn.c lines 67972-68048
 * Ghidra address: 0x0042cf60
 * Category: Memory
 */

void FUN_0042cf60(undefined4 param_1,char param_2)

{
  undefined **ppuVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  FILE *local_18;
  
  pcVar2 = (char *)XmTextFieldGetString(DAT_10016e48);
  if (pcVar2 != (char *)0x0) {
    local_18 = fopen(pcVar2,"a");
    XtFree(pcVar2);
  }
  if (local_18 == (FILE *)0x0) {
    FUN_00410f74("Could not open save file");
  }
  else {
    ppuVar5 = &PTR_s_shrinkOnZoom_10008950;
    puVar4 = PTR_s_shrinkOnZoom_10008950;
    while (puVar4 != (undefined *)0x0) {
      if ((param_2 != '\0') || (*(char *)(ppuVar5 + 3) != *ppuVar5[1])) {
        if (*ppuVar5[1] == '\0') {
          pcVar2 = "FALSE";
        }
        else {
          pcVar2 = "TRUE";
        }
        fprintf(local_18,"Fsn*%s: %s\n",*ppuVar5,pcVar2);
        *(undefined *)(ppuVar5 + 3) = *ppuVar5[1];
      }
      ppuVar1 = ppuVar5 + 5;
      ppuVar5 = ppuVar5 + 5;
      puVar4 = *ppuVar1;
    }
    ppuVar5 = &PTR_s_monitorTimeout_100089f0;
    puVar4 = PTR_s_monitorTimeout_100089f0;
    while (puVar4 != (undefined *)0x0) {
      if ((param_2 != '\0') || (ppuVar5[5] != *(undefined **)ppuVar5[1])) {
        fprintf(local_18,"Fsn*%s: %d\n",*ppuVar5,*(undefined4 *)ppuVar5[1]);
        ppuVar5[5] = *(undefined **)ppuVar5[1];
      }
      ppuVar1 = ppuVar5 + 7;
      ppuVar5 = ppuVar5 + 7;
      puVar4 = *ppuVar1;
    }
    ppuVar5 = &PTR_s_mouseSpeed_10008b5c;
    puVar4 = PTR_s_mouseSpeed_10008b5c;
    while (puVar4 != (undefined *)0x0) {
      if (param_2 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x0042cf60):
     * Function: FUN_0042cf60
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Extracts a byte from arg2 (mask 0xff), calls a function via GP offset -32252 with `curcontext[0x6e48/4]` as arg, then if result non-null, calls XtNameToWidget (GP -32156) with a string at offset 14968, then calls another function (GP -32396) on the original result.
     * **2. C pseudocode:**
     * ```c
     * void FUN_0042cf60(int param1, int param2, int param3) {
     * int masked = param2 & 0xff;
     * Widget w = some_lookup_func(curcontext[0x1b92]);  // offset 0x6e48/4 = 7066
     * if (w != NULL) {
     * Widget child = XtNameToWidget(w, some_string);  // string at rodata+14968
     * some_cleanup_func(w);
     * // continues with child widget...
     * }
     * }
     * ```
     * **GP offsets to resolve:**
     * - GP-32660 (0x806c): likely `curcontext` pointer
     * - GP-32252 (0x8204): lookup function (returns widget)
     * - GP-32156 (0x8264): XtNameToWidget
     * - GP-32396 (0x8174): cleanup/unmap function
     * - GP-32676 + 14968: string constant (widget name like "preferencesForm")
     * The `s2 = param2 & 0xff` suggests this takes a flags/mode byte argument. Pattern matches preference panel show/hide logic.
     */
halt_baddata();
      }
      fprintf(local_18,"Fsn*%s: %f\n",*ppuVar5);
      puVar4 = ppuVar5[8];
      ppuVar5[6] = *(undefined **)ppuVar5[1];
      ppuVar5 = ppuVar5 + 8;
    }
    ppuVar5 = &PTR_s_groundColor_1000935c;
    puVar4 = PTR_s_groundColor_1000935c;
    while (puVar4 != (undefined *)0x0) {
      if ((param_2 != '\0') || (ppuVar5[2] != *(undefined **)ppuVar5[1])) {
        uVar3 = *(uint *)ppuVar5[1];
        fprintf(local_18,"Fsn*%s: #%02x%02x%02x\n",*ppuVar5,uVar3 & 0xff,(int)uVar3 >> 8 & 0xff,
                (int)uVar3 >> 0x10 & 0xff);
        ppuVar5[2] = *(undefined **)ppuVar5[1];
      }
      ppuVar1 = ppuVar5 + 4;
      ppuVar5 = ppuVar5 + 4;
      puVar4 = *ppuVar1;
    }
    fclose(local_18);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042cf60):
     * Function: FUN_0042cf60
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * 1. Iterates through a linked list (28-byte node stride), calling printf with format string at gp[-32676]+15028 and node data
     * 2. After the loop, loads a global array base at gp[-32660]-29860 and iterates through another structure
     * 3. Second loop does float-to-double conversions, likely for printf %f arguments
     * **C pseudocode:**
     * ```c
     * // First loop (linked list traversal at offset +28)
     * while (node != NULL) {
     * printf(format_string, node->field0, node->field4->value);  // jalr to printf
     * node->field20 = node->field4->value;  // store back
     * node = node->field28;  // next pointer at offset 28
     * }
     * // Second loop (array iteration)
     * struct_base = &global_array[-29860/sizeof];  // DAT_10008b5c likely
     * while (struct_base->field0 != 0) {
     * if (s2 == 0) {
     * float f1 = struct_base->field24;
     * float f2 = struct_base->field4->value;
     * double d1 = (double)f1;
     * double d2 = (double)f2;
     * // continues with printf or similar...
     * }
     * // ...
     * }
     * ```
     * **Key observations:**
     * - gp[-31752] (offset -0x7c08 = 0x83f8) is printf or similar variadic function
     * - Node structure: field0 at +0, pointer at +4, field20 at +20, next at +28 (28-byte stride)
     * - The float conversions suggest preparing %f arguments for printf (MIPS ABI promotes floats to doubles for varargs)
     */
halt_baddata();
}
