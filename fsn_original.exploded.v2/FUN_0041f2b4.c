/**
 * FUN_0041f2b4
 *
 * Extracted from fsn.c lines 59870-60062
 * Ghidra address: 0x0041f2b4
 * Category: Filesystem
 */

void FUN_0041f2b4(undefined4 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  uint local_res4;
  bool local_14aa;
  stat sStack_14a8;
  size_t local_1420;
  undefined1 auStack_141c [4096];
  int local_41c;
  int local_418;
  char *local_414;
  char acStack_410 [1024];
  int local_10;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  local_10 = 0;
  bVar1 = (param_2 & 0x100) != 0;
  local_14aa = false;
  local_res4 = param_2;
  if (bVar1) {
    local_res4 = param_2 & 0xfffffeff;
  }
  iVar6 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
  if (iVar6 == 0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x0041f2b4):
     * Function: FUN_0041f2b4
     *
     * Looking at this assembly:
     * **What it does:**
     * 1. Checks if bit 8 (0x100) is set in the flags parameter (a1)
     * 2. If set: stores 1 at sp+61, clears bit 8 from flags, stores modified flags back
     * 3. If not set: stores 0 at sp+61
     * 4. Loads curcontext (via GP-relative addressing), checks if curcontext[17] (offset 0x44 = 68) is NULL, returns early if so
     * **C pseudocode:**
     * ```c
     * void FUN_0041f2b4(void *param1, int flags, void *param3) {
     * char local_flag;        // sp+61
     * int modified_flags;
     * if (flags & 0x100) {
     * local_flag = 1;
     * modified_flags = flags & ~0x100;  // clear bit 8
     * } else {
     * local_flag = 0;
     * modified_flags = flags;
     * }
     * int *ctx = *curcontext;
     * if (ctx[17] == NULL) {  // offset 0x44 = context field at index 17
     * return;
     * }
     * // ... continues
     * }
     * ```
     * The 0x100 flag appears to be a "special mode" indicator that gets stripped before further processing. The curcontext[17] (offset 0x44) is likely a widget or resource pointer that must exist for the function to proceed.
     */
halt_baddata();
  }
  iVar4 = 0;
  cVar2 = altcontext[0xc51];
  if (cVar2 != '\0') {
    iVar4 = *(int *)(altcontext + 0x44);
  }
  if (iVar4 == 0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x0041f2b4):
     * Function: FUN_0041f2b4
     *
     * Looking at this MIPS assembly:
     * 1. **What it does:**
     * Calls a function (at GP-31364, likely `strcat`) twice to build a path string, then calls another function (at GP-31972, likely `strcmp`) twice to compare strings. The branch at 41f49c checks a byte flag at sp+61 to decide flow.
     * 2. **C pseudocode:**
     * ```c
     * // Build path in buffer at sp+4312
     * strcat(path_buffer, sp_5348);           // append component
     * result = strcat(NULL, sp_5344);         // get string (odd usage - maybe strdup?)
     * stored_result = result;                 // save at sp+4308
     * // Compare strings
     * strcat(path_buffer, *ptr_5340);         // append from indirect
     * strcmp(stored_result, *ptr_5340);       // compare strings
     * // Check flag and branch
     * if (flag_byte != 0) {
     * goto label_41f4e4;  // take branch
     * }
     * v0 = *ptr_5340;  // load for next operation
     * ```
     * **GP offset resolution:**
     * - GP-31364 (0x857c): likely `strcat` or similar string function
     * - GP-31972 (0x831c): likely `strcmp`
     * The `strcat(NULL, ...)` pattern suggests this might actually be `strdup` or the GP offsets point to different functions than typical. Verify with `python3 analysis/resolve_got.py` using offsets -31364 and -31972.
     */
halt_baddata();
  }
  local_c = curcontext->current_file /* was: *(undefined4 **)(curcontext + 0x48) */;
  if (local_c != (undefined4 *)0x0) {
    iVar4 = 0;
    if (cVar2 != '\0') {
      iVar4 = *(int *)(altcontext + 0x48);
    }
    if (iVar4 == 0) {
      if (cVar2 == '\0') {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(altcontext + 0x44);
      }
      bVar3 = true;
      local_4 = iVar6;
      goto LAB_0041f400;
    }
  }
  iVar4 = 0;
  if (cVar2 != '\0') {
    iVar4 = *(int *)(altcontext + 0x48);
  }
  if (iVar4 == 0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x0041f2b4):
     * Function: FUN_0041f2b4
     *
     * Looking at the GP offsets and call patterns:
     * **1. What it does:**
     * Calls printf with a format string and value from sp+5340. If sp+5356 == 2, calls stat() on paths at sp+4312 and sp+64. If stat fails, sets flag at sp+62 to 1 and prints error message, then branches to 41f6c4.
     * **2. C pseudocode:**
     * ```c
     * // GP -32676 (0x805c) = format string base
     * // GP -31372 (0x8574) = printf
     * // GP -32304 (0x81d0) = stat
     * // GP -32308 (0x81cc) = next function after success
     * printf(format_string_base + (-19216), *(int *)(sp + 5340));
     * *(char *)(sp + 62) = some_flag;
     * if (*(int *)(sp + 5356) == 2) {
     * char *path1 = sp + 4312;  // 0x10d8
     * char *path2 = sp + 64;    // 0x40
     * if (stat(path1, path2) < 0) {
     * *(char *)(sp + 62) = 1;  // set error flag
     * printf(format_string_base + (-19204), path1);
     * goto label_41f6c4;
     * }
     * // continues to next call at 0x41f618
     * }
     * ```
     * This appears to be file operation validation - checking if a path exists before proceeding with a copy/move operation. The flag at sp+62 tracks whether an error occurred.
     */
halt_baddata();
  }
  if (local_c != (undefined4 *)0x0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x0041f2b4):
     * Function: FUN_0041f2b4
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Checks a flag at sp+63 (local boolean). If set, calls function at gp-30868 with arg 1 before AND after calling function at gp-31164. The gp-31164 function takes the widget/object pointer from sp+5336.
     * **2. C pseudocode:**
     * ```c
     * // v0 = some widget/object pointer stored at sp+5336
     * if (v0 != NULL) {
     * int flag = *(unsigned char*)(sp + 63);  // local bool variable
     * if (flag) {
     * func_gp_876c(1);  // gp-30868: likely XtSetSensitive or lock/unlock
     * }
     * func_gp_8644(v0);     // gp-31164: main operation on widget
     * if (flag) {
     * func_gp_876c(1);  // called again after main operation
     * }
     * }
     * t3 = *(sp + 5336);        // reload widget pointer
     * // continues with: if (t3->byte_offset_41 == 2) ...
     * ```
     * **GP offset resolution needed:**
     * - gp-30868 (0x876c): likely `XtSetSensitive` or similar widget state function
     * - gp-31164 (0x8644): main widget operation function
     * The pattern of calling the same function before/after suggests bracketing (lock/unlock, enable/disable sensitivity, or begin/end update).
     */
halt_baddata();
  }
  if (cVar2 == '\0') {
    local_4 = 0;
    local_c = (undefined4 *)0x0;
  }
  else {
    local_4 = *(int *)(altcontext + 0x44);
    local_c = *(undefined4 **)(altcontext + 0x48);
  }
  bVar3 = false;
  local_8 = iVar6;
LAB_0041f400:
  if (local_4 == local_8) {
    FUN_00410f74("source and destination are the same");
  }
  else {
    build_path_string(acStack_410,local_4);
    local_414 = (char *)build_path_string(0,local_8);
    strcat(acStack_410,(char *)*local_c);
    strcat(local_414,(char *)*local_c);
    if ((bVar1) || (iVar6 = access(local_414,0), iVar6 < 0)) {
      *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) | 0x20;
      FUN_004292c4();
      if (local_res4 == 1) {
        iVar6 = rename(acStack_410,local_414);
        if (-1 < iVar6) {
          *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) | 0x10;
        }
        else {
          show_error_dialog("can\'t move",*local_c);
        }
        local_14aa = -1 >= iVar6;
      }
      if ((local_res4 == 3) && (iVar6 = link(acStack_410,local_414), iVar6 < 0)) {
        local_14aa = true;
        show_error_dialog("can\'t link",*local_c);
      }
      if (local_res4 == 2) {
        iVar6 = stat(acStack_410,&sStack_14a8);
        if (iVar6 < 0) {
          show_error_dialog("cannot stat",acStack_410);
          local_14aa = true;
        }
        else {
          local_418 = open(acStack_410,0);
          if (local_418 < 0) {
            show_error_dialog("can\'t open",*local_c);
            local_14aa = true;
          }
          else {
            local_41c = open(local_414,0x301,sStack_14a8.st_nlink);
            if (local_41c < 0) {
              local_14aa = true;
              show_error_dialog("can\'t create",*local_c);
              close(local_418);
            }
          }
        }
      }
      if (!local_14aa) {
        FUN_00417e28(local_8,*local_c);
        update_display();
        local_10 = FUN_00413580(local_8,*local_c);
        if (local_10 != 0) {
          if (bVar3) {
            gl_swap_buffers(1);
          }
          FUN_0041da44(local_10);
          if (bVar3) {
            gl_swap_buffers(1);
          }
        }
        *(byte *)(local_10 + 0x29) = *(byte *)(local_10 + 0x29) | 0x20;
        if (local_res4 == 2) {
          sVar5 = read(local_418,auStack_141c,0x1000);
          while (0 < (int)sVar5) {
            local_1420 = sVar5;
            sVar5 = write(local_41c,auStack_141c,sVar5);
            if (sVar5 != local_1420) {
              show_error_dialog("write error",*local_c);
              unlink(local_414);
              sVar5 = 0;
              break;
            }
            FUN_00411998();
            sVar5 = read(local_418,auStack_141c,0x1000);
          }
          if ((int)sVar5 < 0) {
            show_error_dialog("read error",*local_c);
            unlink(local_414);
          }
          close(local_418);
          close(local_41c);
        }
      }
      FUN_0042935c();
      if (local_10 != 0) {
        *(byte *)(local_10 + 0x29) = *(byte *)(local_10 + 0x29) & 0xdf;
      }
      *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) & 0xdf;
      if (local_10 != 0) {
        if (bVar3) {
          gl_swap_buffers(1);
        }
        FUN_0041d920();
        if (bVar3) {
          gl_swap_buffers(1);
        }
      }
      if (local_res4 == 1) {
        FUN_00418340(local_4,*local_c);
        *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) & 0xef;
        update_display();
      }
      redraw_gl_scene();
      FUN_0042a8e4();
    }
    else {
      FUN_0041f1d8(local_res4);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041f2b4):
     * Function: FUN_0041f2b4
     *
     * Looking at the GP offsets and the pattern:
     * **1. What it does:**
     * Calls XtFree twice (GP offset -32164/0x825c) to free two pointers from stack, then calls popmatrix (GP offset -30912/0x8740). Then checks if a node pointer is non-NULL and clears bit 0x20 at offset 41 (a flag byte), before loading next node.
     * **2. C pseudocode:**
     * ```c
     * XtFree(local_10d0);  // sp+4304
     * XtFree(local_10cc);  // sp+4300
     * popmatrix();
     * if (node != NULL) {
     * node->flags &= ~0x20;  // clear flag at offset 41
     * }
     * next_node = local_14dc;  // sp+5340
     * next_node->flags...      // continues processing
     * ```
     * The `& 0xffdf` is clearing bit 5 (0x20) - likely an "in-use" or "selected" flag at byte offset 41 in a file/directory node structure. This appears to be cleanup code at the end of a drawing or traversal loop.
     */
halt_baddata();
}
