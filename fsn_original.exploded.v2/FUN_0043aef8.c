/**
 * FUN_0043aef8
 *
 * Extracted from fsn.c lines 78095-78147
 * Ghidra address: 0x0043aef8
 * Category: Other
 */

void FUN_0043aef8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint in_register_00001040;
  double dVar4;
  byte in_fcsr;
  
  iVar2 = 0;
  if (0 < buffer_size) {
    iVar3 = 0;
    piVar1 = DAT_10017414;
    do {
      if (*piVar1 == -1) {
        *piVar1 = param_1;
        *(undefined4 *)((int)DAT_10017410 + iVar3) = param_2;
        *(undefined1 *)((int)DAT_10017418 + iVar2) = 0;
            /*
     * BADDATA ANALYSIS (from binary @ 0x0043aef8):
     * Function: FUN_0043aef8
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches an array of slots (at GP offset -25024 from DAT_1000806c) for a free entry (marked with -1). When found, stores the two arguments (a0, a1) into parallel arrays at offsets 29716 and 29712 from the GP base. Returns the slot index or -1 if full.
     * 2. **C pseudocode:**
     * ```c
     * int FUN_0043aef8(int param1, int param2) {
     * int *slot_array = &DAT_10009e40;  // GP[-32660] + (-25024) = 0x10009e40
     * int count = slot_array[0];        // max slots
     * int *keys = DAT_10007414;         // array of keys (GP offset 29716)
     * int *values = DAT_10007410;       // array of values (GP offset 29712)
     * for (int i = 0; i < count; i++) {
     * if (keys[i] == -1) {          // -1 marks free slot
     * keys[i] = param1;
     * values[i] = param2;
     * return i;
     * }
     * }
     * return -1;  // no free slot
     * }
     * ```
     * This is a simple slot allocator / registration function - likely registering a callback or resource handle pair. The -1 sentinel indicates an unused slot.
     */
halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      piVar1 = piVar1 + 1;
    } while (iVar2 < buffer_size);
  }
  buffer_size = buffer_size + _DAT_10009e44;
  dVar4 = (double)_DAT_10009e44 * (double)((ulonglong)in_register_00001040 << 0x20);
  iVar3 = iVar2 * 4;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar4 = ROUND(dVar4);
  }
  else {
    dVar4 = FLOOR(dVar4);
  }
  _DAT_10009e44 = (int)dVar4;
  DAT_10017410 = realloc(DAT_10017410,buffer_size * 4);
  DAT_10017414 = (int *)realloc(DAT_10017414,buffer_size << 2);
  DAT_10017418 = realloc(DAT_10017418,buffer_size << 2);
  DAT_10017414[iVar2] = param_1;
  *(undefined4 *)((int)DAT_10017410 + iVar3) = param_2;
  *(undefined1 *)((int)DAT_10017418 + iVar2) = 0;
  iVar2 = iVar2 + 1;
  if (iVar2 < buffer_size) {
    do {
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)((int)DAT_10017414 + iVar3) = 0xffffffff;
    } while (iVar2 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043aef8):
     * Function: FUN_0043aef8
     *
     * Looking at this MIPS assembly:
     * 1. **What it does:**
     * Stores a function result to a global array at offset 29712, then makes two `realloc` calls (GP offset -32372 = 0x818c) to resize two arrays based on a count value from `*s0`, storing results at offsets 29716 and 29720.
     * 2. **C pseudocode:**
     * ```c
     * // GP base = DAT_1000xxxx (from -32660 offset)
     * DAT_10007410 = v0;                          // Store previous result
     * a1 = *s0 << 2;                              // count * sizeof(int)
     * DAT_10007414 = realloc(DAT_10007414, a1);   // Resize first array
     * a1 = *s0 << 2;
     * DAT_10007418 = realloc(DAT_10007418, a1);   // Resize second array
     * ```
     * **GP offset resolution:**
     * - GP-32660 (0x806c) → base pointer to globals around 0x10007410
     * - GP-32372 (0x818c) → `realloc` function pointer
     * - Offsets 29712/29716/29720 (0x7410/0x7414/0x7418) are consecutive array pointers being resized based on `*s0` element count
     */
halt_baddata();
}
