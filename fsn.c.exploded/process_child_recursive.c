/**
 * process_child_recursive
 *
 * Extracted from fsn.c lines 54503-54593
 * Category: Filesystem
 */

void process_child_recursive(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)0x0;
  if ((int)(param_1[0x1d] << 3) < 0) {
    if ((pattern_match_enabled == 1) && (iVar1 = gmatch(*param_1,search_pattern_string), iVar1 != 0)) {
      *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) | 1;
      *(byte *)((int)param_1 + 0x76) = *(byte *)((int)param_1 + 0x76) | 0x80;
      state_change_counter = state_change_counter + 1;
      if (param_1 != lastSearchDir) {
        if (lastSearchDir != (undefined4 *)0x0) {
          lastSearchDir[0x1b] = param_1;
        }
        lastSearchDir = param_1;
        if (firstSearchDir == (undefined4 *)0x0) {
          firstSearchDir = param_1;
        }
      }
      iVar1 = param_1[3];
    }
    else {
      *(byte *)((int)param_1 + 0x76) = *(byte *)((int)param_1 + 0x76) & 0x7f;
      *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) & 0xfe;
      iVar1 = param_1[3];
    }
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = *(undefined4 **)(param_1[4] + iVar4);
        *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 8;
        if (((pattern_match_enabled & 1) != 0) && (iVar1 = gmatch(*puVar3,search_pattern_string), iVar1 == 0)) {
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
        }
        uVar2 = pattern_match_enabled & 4;
        if (((pattern_match_enabled & 2) != 0) &&
           (((search_age_mode != '\0' && (search_number_value <= (int)puVar3[3])) ||
            ((uVar2 = pattern_match_enabled & 4, search_age_mode == '\0' &&
             (uVar2 = pattern_match_enabled & 4, (int)puVar3[3] <= search_number_value)))))) {
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
          uVar2 = pattern_match_enabled & 4;
        }
        if ((uVar2 != 0) &&
           (((iVar1 = count_directory_items(puVar3[4]), search_size_mode != '\0' && (search_count_threshold <= iVar1)) ||
            ((search_size_mode == '\0' && (iVar1 <= search_count_threshold)))))) {
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
        }
        if ((int)(puVar3[10] << 4) < 0) {
          *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) & 0xfe | 1;
          state_change_counter = state_change_counter + 1;
          if (param_1 != lastSearchDir) {
            if (lastSearchDir != (undefined4 *)0x0) {
              lastSearchDir[0x1b] = param_1;
            }
            lastSearchDir = param_1;
            if (firstSearchDir == (undefined4 *)0x0) {
              firstSearchDir = param_1;
            }
          }
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[9] = puVar3;
          }
          puVar6 = puVar3;
          if (param_1[0x1c] == 0) {
            param_1[0x1c] = puVar3;
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < (int)param_1[3]);
    }
    iVar4 = 0;
    iVar1 = 0;
    if (0 < (int)param_1[5]) {
      do {
        process_child_recursive(*(undefined4 *)(param_1[6] + iVar1));
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < (int)param_1[5]);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
