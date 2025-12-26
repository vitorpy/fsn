/**
 * FUN_00416ac4
 *
 * Extracted from fsn.c lines 54835-54888
 * Ghidra address: 0x00416ac4
 * Category: Other
 */

void FUN_00416ac4(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char local_20;
  char local_1f [11];
  undefined4 local_14;
  undefined1 local_10 [2];
  undefined2 uStack_e;
  undefined1 local_c [2];
  undefined2 uStack_a;
  undefined1 local_8 [3];
  undefined1 uStack_5;
  
  iVar1 = fscanf(current_file,"d %d %s %o %d %d %s\n",local_8,param_1,&local_14,local_c,local_10,
                 &local_20);
  if (iVar1 == 5) {
    local_20 = '\0';
  }
  else if (iVar1 != 6) {
    fprintf((FILE *)0xfb52904,"fscanf error, returned %d.  Name may be %s\n",iVar1,param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166c0 = local_14;
  sVar2 = strlen(param_1);
  DAT_100166c4 = (short)sVar2;
  DAT_100166c6 = uStack_e;
  DAT_100166c8 = uStack_a;
  pcVar3 = &local_20;
  DAT_100166ca = uStack_5;
  DAT_100166cb = 0;
  do {
    if (local_20 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00416ac4):
     * Function: FUN_00416ac4
     *
     * Looking at this MIPS assembly:
     * **1. What it does:**
     * Parses a string character by character. If char is 'm' (109), sets bit 0x02 at offset 26315 of a global struct. If char is 'p' (112), sets bit 0x01. Loops until null terminator. Returns pointer to offset 26304 of the global.
     * **2. C pseudocode:**
     * ```c
     * // GP offset -32660 (0x806c) = some global struct pointer
     * // Offset 26315 (0x66cb) = flags byte
     * // Offset 26304 (0x66c0) = return value base
     * char *parse_mode_string(char *str) {
     * extern struct_type *global_ptr;  // at GP-32660
     * char c = *str;
     * while (c != '\0') {
     * if (c == 'm') {
     * global_ptr->flags |= 0x02;  // flags at offset 26315
     * } else if (c == 'p') {
     * global_ptr->flags |= 0x01;
     * }
     * str++;
     * c = *str;
     * }
     * return (char *)global_ptr + 26304;  // return offset 0x66c0
     * }
     * ```
     * The 'm' and 'p' characters likely stand for mode flags - possibly "move" (0x02) and "paste/put" (0x01) for file operations, given this is in rescanDatabase context.
     */
halt_baddata();
    }
    if (local_20 == 'm') {
      DAT_100166cb = DAT_100166cb | 2;
LAB_00416c40:
      local_20 = pcVar3[1];
    }
    else {
      if (local_20 == 'p') {
        DAT_100166cb = DAT_100166cb | 1;
        goto LAB_00416c40;
      }
      local_20 = pcVar3[1];
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}
