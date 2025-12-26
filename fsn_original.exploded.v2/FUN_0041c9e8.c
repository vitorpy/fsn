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
  
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b98),
             *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44) != 0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),
             *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48) != 0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
             *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48) != 0);
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x36d8))(1);
  cVar1 = *(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44);
    if (iVar2 != 0) {
      iVar3 = 0;
      if (cVar1 != '\0') {
        iVar3 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x44);
      }
      if (iVar3 != iVar2) {
        if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x48) != 0) {
          local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
          local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b34);
          /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),&local_28,1);
          /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),&local_28,1);
          iVar2 = *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ == 0;
            }
          }
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),bVar4);
          iVar2 = *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ == 0;
            }
          }
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),bVar4);
          local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b40);
          local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
          /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),&local_28,1);
          /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),&local_28,1);
          iVar2 = *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ == 0;
            }
          }
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),bVar4);
          iVar2 = *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ == 0;
            }
          }
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),bVar4);
          local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b4c);
          local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
          /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),&local_28,1);
          /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),&local_28,1);
          iVar2 = *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ == 0;
            }
          }
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),bVar4);
          iVar2 = *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ == 0;
            }
          }
          /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),bVar4);
              /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9e8):
     * Function: FUN_0041c9e8
     *
     * Looking at this assembly:
     * 1. **What it does:** Reads values from curcontext[17] (offset 68) and curcontext[18] (offset 72), converts each to boolean (non-zero → 1, zero → 0) via SLTU, then calls a function (likely XtSetSensitive) twice with different widgets from a global array at offsets 27544 and 27548.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041c9e8(void) {
     * Widget *widgets = (Widget *)DAT_1000806c;  // gp[-32660]
     * int *ctx = *curcontext;  // gp[-30340] dereferenced
     * // Set widget sensitivity based on context values
     * XtSetSensitive(widgets[6899], ctx[17] != 0);  // offset 27544 = index 6886, offset 68 = index 17
     * XtSetSensitive(widgets[6887], ctx[18] != 0);  // offset 27548, offset 72
     * // ... pattern likely continues
     * }
     * ```
     * The `sltu $t, $zero, $val` idiom is the MIPS way to compute `(val != 0) ? 1 : 0` - converting any non-zero value to boolean 1. This is setting UI widget sensitivity based on whether context fields are non-zero (likely enabling/disabling menu items or buttons based on selection state).
     */
halt_baddata();
        }
        if (iVar2 == 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9e8):
     * Function: FUN_0041c9e8
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls XmTextGetString on two text widgets (at curcontext offsets 0x6b80 and 0x6b7c), then calls XtFree(NULL) on both widget results to clean up. The first call passes a stack buffer at sp+72, the second two calls pass NULL (a1=zero).
     * **C pseudocode:**
     * ```c
     * char buffer[64];  /* at sp+72 */
     * Widget widget1 = ((Widget*)curcontext)[0x6b80/4];  /* offset 27520 */
     * Widget widget2 = ((Widget*)curcontext)[0x6b7c/4];  /* offset 27516 */
     * XmTextGetString(widget1, buffer, 1);  /* GP offset -31936 = XmTextGetString */
     * XtFree(NULL);                          /* GP offset -31976 = XtFree */
     * XtFree(NULL);                          /* called twice */
     * /* then branches to function exit */
     * ```
     * Note: GP offset -31936 (0x8340) resolves to XmTextGetString, and -31976 (0x8318) resolves to XtFree. The pattern of getting text then freeing suggests this is text field content extraction, possibly from source/destination path entry fields (given the offsets are near copy/move UI widgets).
     */
halt_baddata();
        }
        local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b38);
        local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
        /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),&local_28,1);
        /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),&local_28,1);
        iVar2 = 0;
        if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x48);
        }
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x48);
        }
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),iVar2 != 0);
        local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
        local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b44);
        /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),&local_28,1);
        /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),&local_28,1);
        iVar2 = 0;
        if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x48);
        }
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x48);
        }
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),iVar2 != 0);
        local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b50);
        local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
        /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),&local_28,1);
        /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),&local_28,1);
        iVar2 = 0;
        if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x48);
        }
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
          iVar2 = *(int *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0x48);
        }
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),iVar2 != 0);
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),1);
        /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),1);
        (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x36d8))(0);
            /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9e8):
     * Function: FUN_0041c9e8
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads curcontext, checks byte at offset 0xC51 (isMarked flag). If set, loads values from offsets 0x44 and 0x48 (markedCount and markedDirCount). Computes sensitivity boolean and calls XtSetSensitive on a widget.
     * 2. **C pseudocode**:
     * ```c
     * Context *ctx = curcontext;
     * int hasMarked = ctx->isMarked;  // offset 0xC51
     * int markedCount = 0;
     * int markedDirCount = 0;
     * if (hasMarked) {
     * markedCount = ctx->markedCount;      // offset 0x44
     * markedDirCount = ctx->markedDirCount; // offset 0x48
     * }
     * int sensitive = (markedCount > 0);
     * if (hasMarked && markedCount > 0) {
     * sensitive = (markedDirCount == 0);  // only files, no dirs
     * }
     * XtSetSensitive(someWidget, sensitive);
     * ```
     * The GP offsets: -30336 is curcontext, -32660 likely points to widget table, -31976 is XtSetSensitive. The logic enables a "Copy" button only when files (not directories) are marked.
     */
halt_baddata();
      }
    }
  }
  local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b30);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),&local_28,1);
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),&local_28,1);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c),0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70),0);
  local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b3c);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),&local_28,1);
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),&local_28,1);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74),0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78),0);
  local_24 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b48);
  local_28 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),&local_28,1);
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),&local_28,1);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c),0);
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80),0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9e8):
     * Function: FUN_0041c9e8
     *
     * Looking at this MIPS assembly snippet:
     * **What it does:**
     * 1. Conditionally loads a value from offset 72 of a structure (or uses zero)
     * 2. Calls XtSetSensitive on a widget with sensitivity = (value != 0)
     * 3. Calls XtVaSetValues on two more widgets with XmNuserData arguments
     * **C pseudocode:**
     * ```c
     * // Conditional: a2 = (t8 != 0) ? v1->field_48 : 0
     * int value = (condition) ? ptr->offset_72 : 0;
     * // GP[-32660] = curcontextwindows, offset 0x6b70 = widget at index ~109
     * XtSetSensitive(curcontextwindows->moveButton, value != 0);
     * // Build varargs: XmNuserData (0x1d4d offset into string table), then widget pointer
     * // GP[-31936] = XtVaSetValues
     * XtVaSetValues(curcontextwindows->copyButton, XmNuserData, curcontextwindows->someWidget, NULL);
     * XtVaSetValues(curcontextwindows->pasteButton, XmNuserData, ...);
     * ```
     * **Key GP offsets:**
     * - GP[-32660] (0x806c): curcontextwindows pointer
     * - GP[-31976] (0x8318): XtSetSensitive
     * - GP[-31936] (0x8340): XtVaSetValues
     * - GP[-32608] (0x80a0): rodata/string base (XmNuserData string at +0x1d4d)
     * **Widget offsets from curcontextwindows:**
     * - 0x6b70 (27504): moveButton
     * - 0x6b74 (27508): copyButton
     * - 0x6b78 (27512): pasteButton
     * - 0x6b44 (27460): related widget stored as XmNuserData
     */
halt_baddata();
}
