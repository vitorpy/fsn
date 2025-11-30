/**
 * FUN_0041c9e8
 *
 * Extracted from fsn.c lines 58674-58917
 * Ghidra address: 0x0041c9e8
 * Category: Other
 */

void FUN_0041c9e8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b98),
             *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44) != 0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),
             *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48) != 0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
             *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48) != 0);
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x36d8))(1);
  cVar1 = *(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44);
    if (iVar2 != 0) {
      iVar3 = 0;
      if (cVar1 != '\0') {
        iVar3 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x44);
      }
      if (iVar3 != iVar2) {
        if (*(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48) != 0) {
          local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
          local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b34);
          (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),&local_28,1);
          (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),&local_28,1);
          iVar2 = **(int **)(unaff_gp + -0x7680) /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),bVar4);
          iVar2 = **(int **)(unaff_gp + -0x7680) /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),bVar4);
          local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b40);
          local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
          (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),&local_28,1);
          (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),&local_28,1);
          iVar2 = **(int **)(unaff_gp + -0x7680) /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),bVar4);
          iVar2 = **(int **)(unaff_gp + -0x7680) /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),bVar4);
          local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b4c);
          local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
          (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),&local_28,1);
          (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),&local_28,1);
          iVar2 = **(int **)(unaff_gp + -0x7680) /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),bVar4);
          iVar2 = **(int **)(unaff_gp + -0x7680) /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),bVar4);
          halt_baddata();
        }
        if (iVar2 == 0) {
          halt_baddata();
        }
        local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b38);
        local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
        (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),&local_28,1);
        (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),&local_28,1);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),iVar2 != 0);
        local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
        local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b44);
        (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),&local_28,1);
        (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),&local_28,1);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),iVar2 != 0);
        local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b50);
        local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
        (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),&local_28,1);
        (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),&local_28,1);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),iVar2 != 0);
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),1);
        (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),1);
        (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x36d8))(0);
        halt_baddata();
      }
    }
  }
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b30);
  local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),&local_28,1);
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),&local_28,1);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),0);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b3c);
  local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),&local_28,1);
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),&local_28,1);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),0);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b48);
  local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),&local_28,1);
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),&local_28,1);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
