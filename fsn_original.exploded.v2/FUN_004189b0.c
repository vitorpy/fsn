/**
 * FUN_004189b0
 *
 * Extracted from fsn.c lines 56202-56262
 * Ghidra address: 0x004189b0
 * Category: Other
 */

void FUN_004189b0(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    iVar5 = chrtbl /* was: *(int *)(unaff_gp + -0x76cc) */ /* -> chrtbl */;
    do {
      iVar1 = *(int *)(iVar5 + uVar3 * 0xd8);
      if ((iVar1 != 0) && (iVar1 != 0)) {
        iVar4 = 0;
        do {
          if (iVar1 == 1) {
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
            /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)((float)*(int *)(iVar1 + 4),(float)*(int *)(iVar1 + 8))
            ;
            uVar3 = (uint)*param_1;
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
LAB_00418bcc:
            iVar1 = iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */;
          }
          else {
            if (iVar1 == 2) {
              /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
              /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(iVar5 + (uint)*param_1 * 0xd8 + iVar4 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar2 = iVar5 + uVar3 * 0xd8 + iVar4;
            if (iVar1 == 3) {
              /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(iVar2 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            if (iVar1 == 4) {
              /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(iVar2 + 4);
              /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar1 = iVar2->file_count /* was: *(int *)(iVar2 + 0xc) */;
          }
          iVar4 = iVar4 + 0xc;
        } while (iVar1 != 0);
      }
      uVar3 = (uint)param_1[1];
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004189b0):
     * Function: FUN_004189b0
     *
     * ## Analysis
     * **1. What it does:**
     * This is an inner loop that iterates through font stroke data for text rendering. It calculates `s1 * 55 * 4` (s1 * 220) as an index into a character table (chrtbl), processes stroke commands at 12-byte intervals, then advances to the next character in the string.
     * **2. C pseudocode:**
     * ```c
     * // s1 = current character code, s4 = chrtbl base, s2 = stroke offset, s3 = string pointer
     * do {
     * // Calculate: t3 = s1 * 55 (font entry size in int32s)
     * // (s1<<3 - s1)<<2 - s1)<<3 = s1*7*4*8 - s1*8 = s1*224 - s1*8 = s1*216...
     * // Actually: ((s1*8-s1)*4-s1)*8 = (s1*7*4-s1)*8 = (s1*27)*8 = s1*216
     * // Wait, let me recalc: (s1<<3)=s1*8, -s1=s1*7, <<2=s1*28, -s1=s1*27, <<3=s1*216
     * int offset = s1 * 216;  // 216 bytes per character (54 int32s * 4)
     * int *stroke_ptr = (int*)(chrtbl + offset + stroke_offset);
     * // Process strokes at 12-byte intervals until command==0
     * while (stroke_ptr[0] != 0) {  // stroke_ptr[0] is command type at offset 12
     * stroke_offset += 12;
     * stroke_ptr += 3;  // advance by 12 bytes (3 ints)
     * }
     * // Next character in string
     * current_char = *++string_ptr;
     * } while (current_char != 0);
     * // Epilogue: restore registers and return
     * ```
     * **Corrected multiplier:** `(s1*8-s1)*4-s1)*8` = `(7*4-1)*8` = `27*8` = **216** bytes per character, which matches the 54 int32s (216 bytes) per character in the vector font table.
     */
halt_baddata();
}
