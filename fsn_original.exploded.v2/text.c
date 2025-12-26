/**
 * text
 *
 * Extracted from fsn.c lines 56137-56196
 * Category: Other
 */

void text(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *param_1;
  do {
    uVar5 = (uint)bVar1;
    if (uVar5 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x004189a4):
     * Function: text
     *
     * ## Analysis
     * **1. What it does:**
     * Calculates array index as `s1 * 54` (via shift sequence: `s1*8 - s1 = s1*7`, then `*4 = s1*28`, then `-s1 = s1*27`, then `*8 = s1*216`, but divided by 4 for word indexing = 54 ints). Loads next command from font table at `chrtbl[char_index][cmd_index]`, loops until command type is 0 (end of char), then advances to next character in string.
     * **2. C pseudocode:**
     * ```c
     * // Inner loop continuation - advance to next command in character
     * s2 += 12;                           // sizeof(FontCommand) = 3 ints = 12 bytes
     * s0 += 12;
     * cmd_type = chrtbl[s1 * 54 + s2/4 + 3];  // s1*54 = char offset (216 bytes / 4)
     * if (cmd_type != 0) goto inner_loop;     // continue drawing this character
     * // Outer loop - advance to next character in string
     * s1 = *++s3;                         // next char from string
     * if (s1 != 0) goto outer_loop;       // continue if not null terminator
     * // Epilogue - restore saved registers and return
     * ```
     * The magic number 54 = 216/4 matches the font table layout: 128 characters × 54 int32s each (216 bytes per character, storing {type, x, y} triplets).
     */
halt_baddata();
    }
    iVar3 = *(int *)(&chrtbl + uVar5 * 0xd8);
    if ((iVar3 != 0) && (iVar3 != 0)) {
      iVar6 = 0;
      do {
        if (iVar3 == 1) {
          iVar3 = iVar6 + uVar5 * 0xd8;
          translate((float)*(int *)(&chrtbl + iVar3 + 4),(float)*(int *)(&chrtbl + iVar3 + 8));
          uVar5 = (uint)*param_1;
          puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
LAB_00418bcc:
          iVar3 = *(int *)(puVar4 + 0xc);
        }
        else {
          if (iVar3 == 2) {
            bgnline();
            v2i((uint)*param_1 * 0xd8 + iVar6 + 0x10000218);
            uVar5 = (uint)*param_1;
            puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
            goto LAB_00418bcc;
          }
          iVar2 = iVar6 + uVar5 * 0xd8;
          if (iVar3 == 3) {
            v2i(&chrtbl + iVar2 + 4);
            uVar5 = (uint)*param_1;
            puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
            goto LAB_00418bcc;
          }
          if (iVar3 == 4) {
            v2i(&chrtbl + iVar2 + 4);
            endline();
            uVar5 = (uint)*param_1;
            puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
            goto LAB_00418bcc;
          }
          iVar3 = *(int *)(&chrtbl + iVar2 + 0xc);
        }
        iVar6 = iVar6 + 0xc;
      } while (iVar3 != 0);
    }
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}
