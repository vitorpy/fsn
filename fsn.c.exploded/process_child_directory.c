/**
 * process_child_directory
 *
 * Extracted from fsn.c lines 40373-40511
 * Category: Filesystem
 */

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
