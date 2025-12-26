/**
 * SG_getOverlay4Args
 *
 * Extracted from fsn.c lines 71072-71099
 * Category: Other
 */

void SG_getOverlay4Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00432370(param_1,param_2,4,&DAT_10009660,3);
  if (iVar1 < 0) {
    FUN_00431dfc(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = FUN_00431354(param_1,param_2);
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
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431f3c):
     * Function: SG_getOverlay4Args
     *
     * Looking at this assembly:
     * **What it does:**
     * Stores overlay menu entries into an array at s1 (indexed by counter at s0). Each entry is 8 bytes: [pointer, type]. Stores 3 entries: t5 with type t6, a GP-relative pointer+104 with type 4, and that same pointer with type from a2. Increments counter twice.
     * **C pseudocode:**
     * ```c
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
     * ```
     * Note: gp-0x8080 likely resolves to a menu/widget structure. The +104 offset (0x68) suggests accessing a specific field. The array entries are 8-byte structs {void* ptr, int type}.
     */
halt_baddata();
}
