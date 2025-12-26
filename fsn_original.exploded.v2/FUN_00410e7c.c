/**
 * FUN_00410e7c
 *
 * Extracted from fsn.c lines 52085-52107
 * Ghidra address: 0x00410e7c
 * Category: Other
 */

void FUN_00410e7c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int unaff_gp;
  undefined1 auStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  /* TODO: GP:-0x7ecc */ (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(auStack_434,param_1);
  /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(auStack_434,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5938);
  /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a98) /* -> FUN_00410da4 */)(auStack_434,param_3) /* =FUN_00410da4 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410e7c):
     * Function: FUN_00410e7c
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * This builds a string in a stack buffer (sp+36) by calling sprintf, then two strcat calls to append strings, then passes the result to a display function (likely set_status_message or similar).
     * **2. C pseudocode:**
     * ```c
     * char buf[1024];  // at sp+36, large stack frame (1112 bytes)
     * sprintf(buf, param1);           // gp-32460 = sprintf
     * strcat(buf, some_rodata_string); // gp-31972 = strcat, rodata at gp-32676 offset -22840
     * strcat(buf, param2);            // second strcat with saved param
     * display_message(buf, param3);   // gp-31384 = status/message display function
     * ```
     * The rodata offset (-22840 = 0xA6C8) likely points to a separator string like " - " or ": ". The function constructs a formatted file message by concatenating: formatted text + separator + additional info, then displays it.
     */
halt_baddata();
}
