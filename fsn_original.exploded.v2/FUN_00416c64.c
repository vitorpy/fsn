/**
 * FUN_00416c64
 *
 * Extracted from fsn.c lines 54894-54925
 * Ghidra address: 0x00416c64
 * Category: Other
 */

void FUN_00416c64(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [3];
  undefined1 uStack_5;
  
  iVar1 = fscanf(current_file,"f %d %s %o %d %d %s\n",local_8,param_1,&local_c,&local_10,&local_14,
                 param_2);
  if (iVar1 == 5) {
    *param_2 = '\0';
  }
  else if (iVar1 != 6) {
    fprintf((FILE *)0xfb52904,"fsscanf error, returned %d.  Name may be %s\n",iVar1,param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166d0 = local_10;
  DAT_100166d4 = local_14;
  DAT_100166d8 = local_c;
  sVar2 = strlen(param_1);
  DAT_100166dc = (undefined2)sVar2;
  sVar2 = strlen(param_2);
  DAT_100166de = (short)sVar2;
  DAT_100166e0 = uStack_5;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00416c64):
     * Function: FUN_00416c64
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores 3 int32s from stack (sp+56,52,60) to a global struct at gp-32660+26320, calls a function twice (via gp-31776) with args from sp+72 and sp+76, stores the two int16 results, stores a byte from sp+64, then returns pointer to the struct.
     * 2. **C pseudocode:**
     * ```c
     * // Global at gp[-32660] + 26320 = some struct base
     * struct result_t {
     * int field0;      // +0 (26320)
     * int field4;      // +4 (26324)
     * int field8;      // +8 (26328)
     * short fieldC;    // +12 (26332)
     * short fieldE;    // +14 (26334)
     * char field10;    // +16 (26336)
     * };
     * struct result_t *base = (struct result_t *)((char *)DAT_gp_806c + 0x66d0);
     * base->field0 = param_56;   // from sp+56
     * base->field4 = param_52;   // from sp+52
     * base->field8 = param_60;   // from sp+60
     * base->fieldC = (short)some_func(param_72);  // gp-31776 = likely getcolor() or similar
     * base->fieldE = (short)some_func(param_76);
     * base->field10 = (char)param_64;
     * return base;  // v0 = &base (address of struct at offset 0x66d0)
     * ```
     * The function via gp-31776 is called twice and returns int16-sized values (colors?). The function returns a pointer to a static/global result struct - classic "return struct by pointer to static buffer" pattern common in old C code.
     */
halt_baddata();
}
