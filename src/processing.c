/**
 * processing.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "processing.h"
#include "fsn_types.h"
#include "fsn_state.h"

void process_search_results(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x180));
  (**(code **)(unaff_gp + -0x7cf8))();
  (**(code **)(unaff_gp + -0x7b54))();
  (**(code **)(unaff_gp + -0x7cd0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_directory_data(int param_1)

{
  if (((displayHeight != 0) && (displayHeight != 1)) && (displayHeight == 2)) {
    powf((float)param_1,display_height_exponent);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_child_directory(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
      sVar7 = *(size_t *)(param_1 + 0xc);
      bVar2 = false;
      iVar11 = 0;
      if (0 < (int)sVar7) {
        piVar6 = *(int **)(param_1 + 0x10);
        iVar12 = 0;
        do {
          iVar4 = *piVar6;
          if (iVar11 < (int)sVar7) {
            bVar1 = *(byte *)(iVar4 + 0x28);
            iVar10 = iVar11 + 1;
            if ((bVar1 & 1) != 0) {
              bVar2 = true;
              do {
                *(byte *)(iVar4 + 0x28) = bVar1 & 0xfb;
                iVar8 = *(int *)(param_1 + 0xc);
                iVar3 = iVar10 * 4;
                iVar4 = iVar10;
                if (iVar10 < iVar8) {
                  do {
                    iVar4 = iVar4 + 1;
                    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3);
                    iVar3 = iVar3 + 4;
                    puVar5[-1] = *puVar5;
                    iVar8 = *(int *)(param_1 + 0xc);
                  } while (iVar4 < iVar8);
                }
                sVar7 = iVar8 - 1;
                *(size_t *)(param_1 + 0xc) = sVar7;
                piVar6 = (int *)(*(int *)(param_1 + 0x10) + iVar12);
                iVar4 = *piVar6;
              } while ((iVar11 < (int)sVar7) && (bVar1 = *(byte *)(iVar4 + 0x28), (bVar1 & 1) != 0))
              ;
            }
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          piVar6 = piVar6 + 1;
        } while (iVar11 < (int)sVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x10);
      if (bVar2) {
        if (sVar7 == 0) {
          free(pvVar9);
          sVar7 = *(size_t *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0x10) = 0;
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,sVar7 << 2);
          sVar7 = *(size_t *)(param_1 + 0xc);
          *(void **)(param_1 + 0x10) = pvVar9;
        }
      }
      qsort(pvVar9,sVar7,4,compare_files);
    }
    if (*(char *)(param_1 + 0x75) < '\0') {
      sVar7 = *(size_t *)(param_1 + 0x14);
      bVar2 = false;
      iVar11 = 0;
      if (0 < (int)sVar7) {
        piVar6 = *(int **)(param_1 + 0x18);
        iVar12 = 0;
        do {
          if ((iVar11 < (int)sVar7) && (iVar4 = iVar11 + 1, *(int *)(*piVar6 + 0x74) << 5 < 0)) {
            bVar2 = true;
            do {
              free_child_nodes();
              iVar8 = *(int *)(param_1 + 0x14);
              iVar3 = iVar4 * 4;
              iVar10 = iVar4;
              if (iVar4 < iVar8) {
                do {
                  iVar10 = iVar10 + 1;
                  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar3);
                  iVar3 = iVar3 + 4;
                  puVar5[-1] = *puVar5;
                  iVar8 = *(int *)(param_1 + 0x14);
                } while (iVar10 < iVar8);
              }
              sVar7 = iVar8 - 1;
              *(size_t *)(param_1 + 0x14) = sVar7;
              piVar6 = (int *)(*(int *)(param_1 + 0x18) + iVar12);
            } while ((iVar11 < (int)sVar7) && (*(int *)(*piVar6 + 0x74) << 5 < 0));
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          piVar6 = piVar6 + 1;
        } while (iVar11 < (int)sVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      if (bVar2) {
        if (sVar7 == 0) {
          free(pvVar9);
          sVar7 = *(size_t *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0x18) = 0;
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,sVar7 << 2);
          sVar7 = *(size_t *)(param_1 + 0x14);
          *(void **)(param_1 + 0x18) = pvVar9;
        }
      }
      qsort(pvVar9,sVar7,4,compare_dirs);
    }
    if (*(int *)(param_1 + 0x74) << 9 < 0) {
      iVar11 = 0;
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          process_child_directory(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar12));
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < *(int *)(param_1 + 0x14));
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void process_data_section(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7804))
                    (param_1,param_2,*(int *)(unaff_gp + -0x7f94) + -0x69a0,2);
  iVar2 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x2370))
                    (param_1,param_2,uVar1,*(int *)(unaff_gp + -0x7f94) + -0x69a0,2);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(unaff_gp + -0x7808))(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
    iVar5 = *(int *)(unaff_gp + -0x7f5c);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(int *)(param_3 + (iVar4 + 1) * 8) = iVar5 + 0xa3;
    iVar5 = *(int *)(unaff_gp + -0x7f80);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(int *)(param_3 + (iVar4 + 1) * 8) = iVar5 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_data_recursive(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x2370))
                    (param_1,param_2,2,*(int *)(unaff_gp + -0x7f94) + -0x69a0,3);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x77f4))(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = (**(code **)(unaff_gp + -0x7808))(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
    iVar4 = *(int *)(unaff_gp + -0x7f5c);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0xa3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    iVar4 = *(int *)(unaff_gp + -0x7f80);
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_file_data(int param_1,undefined4 param_2)

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
    piVar1 = string_buffer;
    do {
      if (*piVar1 == -1) {
        *piVar1 = param_1;
        *(undefined4 *)((int)buffer_pointer_array + iVar3) = param_2;
        *(undefined1 *)((int)path_buffer + iVar2) = 0;
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      piVar1 = piVar1 + 1;
    } while (iVar2 < buffer_size);
  }
  buffer_size = buffer_size + _buffer_growth_factor;
  dVar4 = (double)_buffer_growth_factor * (double)((ulonglong)in_register_00001040 << 0x20);
  iVar3 = iVar2 * 4;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar4 = ROUND(dVar4);
  }
  else {
    dVar4 = FLOOR(dVar4);
  }
  _buffer_growth_factor = (int)dVar4;
  buffer_pointer_array = realloc(buffer_pointer_array,buffer_size * 4);
  string_buffer = (int *)realloc(string_buffer,buffer_size << 2);
  path_buffer = realloc(path_buffer,buffer_size << 2);
  string_buffer[iVar2] = param_1;
  *(undefined4 *)((int)buffer_pointer_array + iVar3) = param_2;
  *(undefined1 *)((int)path_buffer + iVar2) = 0;
  iVar2 = iVar2 + 1;
  if (iVar2 < buffer_size) {
    do {
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)((int)string_buffer + iVar3) = 0xffffffff;
    } while (iVar2 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
