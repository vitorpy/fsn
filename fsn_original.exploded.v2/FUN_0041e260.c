/**
 * FUN_0041e260
 *
 * Extracted from fsn.c lines 59485-59555
 * Ghidra address: 0x0041e260
 * Category: Memory
 */

void FUN_0041e260(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char *pcVar1;
  char *__s1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_464 [1124];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    sprintf(acStack_464,"Don\'t know how to %s current selection",param_5);
    FUN_00410f74(acStack_464);
  }
  else {
    pcVar1 = (char *)build_path_string(0,param_1);
    strcat(pcVar1,(char *)*param_2);
    if (param_2[8] == 0) {
      sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
      FUN_00410f74(acStack_464);
    }
    else {
      __s1 = (char *)FUN_00433c08(param_2[8],param_3,param_5);
      if (__s1 == (char *)0x0) {
        sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
        FUN_00410f74(acStack_464);
      }
      else {
        if ((param_4 != '\0') && (DAT_10017496 != '\0')) {
          sVar2 = strlen("$WINEDITOR ");
          iVar3 = strncmp(__s1,"$WINEDITOR ",sVar2);
          if (iVar3 == 0) {
            FUN_00429fd4(param_1,param_2);
                /*
     * BADDATA ANALYSIS (from binary @ 0x0041e260):
     * Function: FUN_0041e260
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if first two args (a0, a1) are valid. If either is NULL, calls sprintf to format an error message using arg from stack offset 1200, then calls a display/error function, and exits early.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041e260(void *a0, void *a1, void *a2, void *a3, char *filename) {
     * char buffer[1024];
     * if (a0 == NULL || a1 == NULL) {
     * sprintf(buffer, "Error message format string", filename);  // GP[-32676] = format string
     * show_error_dialog(buffer);  // GP[-31376] = error display function
     * return;
     * }
     * // ... rest of function at 0x41e2d0 ...
     * }
     * ```
     * The GP offsets suggest:
     * - GP[-32676] (0x805c): points to a format string in .rodata (likely "Cannot open %s" or similar)
     * - GP[-31772] (0x83e4): sprintf
     * - GP[-31376] (0x8570): error dialog/message function (possibly `show_error_dialog`)
     * The 5th parameter at sp+1200 (0x4b0) is the filename passed to sprintf.
     */
halt_baddata();
          }
        }
        FUN_00410e7c(param_6,pcVar1,2000);
        if (DAT_10006e58 != '\0') {
          sVar2 = strlen("REST=");
          XtMalloc(sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x0041e260):
     * Function: FUN_0041e260
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Allocates a 6-byte buffer via malloc(v0+1), then copies a 6-character string from a GOT-relative address (gp-32676 offset -19496, likely a string constant like ".fsn\0\0") into the buffer using unaligned load/store (lwl/lwr/swl/swr for first 4 bytes, then 2 individual bytes), then calls another function with the buffer.
     * **2. C pseudocode:**
     * ```c
     * char *buf = malloc(len + 1);           // jalr at 41e48c (gp-31552 = malloc)
     * memcpy(buf, ".fsn\0", 6);              // unaligned copy from rodata at gp-32676-19496
     * result = some_func(buf);               // jalr at 41e4dc (gp-31768)
     * ```
     * The lwl/lwr + swl/swr sequence is the MIPS idiom for unaligned 4-byte copy (the string may not be word-aligned). The two lbu/sb pairs copy bytes 4 and 5 individually.
     */
halt_baddata();
        }
        sprintf(acStack_464,"LEADER=%s",pcVar1);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (DAT_10016bdc != (char *)0x0) {
          XtFree(DAT_10016bdc);
        }
        DAT_10016bdc = pcVar1;
        uVar4 = FUN_00433bdc(param_2[8]);
        sprintf(acStack_464,"LEADERTYPE=%s",uVar4);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (DAT_10016be0 != (char *)0x0) {
          XtFree(DAT_10016be0);
        }
        DAT_10016be0 = pcVar1;
        sprintf(acStack_464,"%s&",__s1);
        FUN_0042fda4(acStack_464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041e260):
     * Function: FUN_0041e260
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Copies 2 bytes from t2+5 and t2+6 to v0+5 and v0+6 (finishing a struct copy)
     * 2. Calls a function via GP-31768, then clears a flag at GP-32664 offset 0x6e58
     * 3. Calls sprintf(sp+60, GP-32676 + format_string, sp+56), then strlen on result, then malloc(strlen+1)
     * **C pseudocode:**
     * ```c
     * // Complete byte copy of struct field
     * dest->field[5] = src->field[5];
     * dest->field[6] = src->field[6];
     * some_function();  // GP offset -31768
     * global_flag_6e58 = 0;  // Clear a flag
     * sprintf(buffer, format_string, param);  // GP offset -31772 = sprintf
     * int len = strlen(buffer);               // GP offset -31776 = strlen
     * char *ptr = malloc(len + 1);            // GP offset -31552 = malloc
     * ```
     * The pattern is: byte-copy completion, function call, flag clear, then sprintf→strlen→malloc sequence (classic string duplication setup before strcpy).
     */
halt_baddata();
}
