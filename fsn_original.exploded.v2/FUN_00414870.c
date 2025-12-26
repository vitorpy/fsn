/**
 * FUN_00414870
 *
 * Extracted from fsn.c lines 53901-54011
 * Ghidra address: 0x00414870
 * Category: Other
 */

void FUN_00414870(FILE *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined1 local_a;
  byte local_9;
  
  FUN_00411998();
  if (_DAT_0fb51f00 == 0) {
    iVar1 = param_1->_flags + -1;
    param_1->_flags = iVar1;
    if (iVar1 < 0) {
      __flsbuf(2,param_1);
      local_14 = param_2[2];
    }
    else {
      *param_1->_IO_read_ptr = '\x02';
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
      local_14 = param_2[2];
    }
  }
  else {
    __semputc(2,param_1);
    local_14 = param_2[2];
  }
  local_10 = (undefined2)param_2[1];
  local_e = (undefined2)param_2[5];
  local_a = (undefined1)param_3;
  local_9 = 0;
  local_c = (undefined2)param_2[3];
  iVar1 = param_2[0x1d];
  if (iVar1 << 0xb < 0) {
    local_9 = 2;
    iVar1 = param_2[0x1d];
  }
  if (iVar1 << 0xd < 0) {
    local_9 = local_9 | 1;
  }
  fwrite(&local_14,0xc,1,param_1);
  fwrite((void *)*param_2,1,param_2[1],param_1);
  local_18 = (undefined1)(param_3 + 1);
  iVar1 = 0;
  if (0 < (int)param_2[3]) {
    iVar5 = 0;
    do {
      if (_DAT_0fb51f00 == 0) {
        iVar3 = param_1->_flags + -1;
        param_1->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(3,param_1);
          iVar3 = param_2[4];
        }
        else {
          *param_1->_IO_read_ptr = '\x03';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
          iVar3 = param_2[4];
        }
      }
      else {
        __semputc(3,param_1);
        iVar3 = param_2[4];
      }
      puVar4 = *(undefined4 **)(iVar3 + iVar5);
      local_28 = puVar4[3];
      local_24 = puVar4[4];
      local_20 = puVar4[2];
      local_1c = (undefined2)puVar4[1];
      if (puVar4[8] == 0) {
        local_1a = 0;
      }
      else {
        local_2c = (char *)FUN_00433bdc();
        sVar2 = strlen(local_2c);
        local_1a = (short)sVar2;
      }
      fwrite(&local_28,0x14,1,param_1);
      fwrite((void *)*puVar4,1,puVar4[1],param_1);
      if (puVar4[8] != 0) {
        fwrite(local_2c,1,(size_t)local_1a,param_1);
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < (int)param_2[3]);
  }
  iVar1 = 0;
  iVar5 = 0;
  if (0 < (int)param_2[5]) {
    do {
      FUN_00414870(param_1,*(undefined4 *)(param_2[6] + iVar5),param_3 + 1);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < (int)param_2[5]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00414870):
     * Function: FUN_00414870
     *
     * Looking at this assembly:
     * 1. **What it does:** Iterates through child entries of a directory node (s4). For each child (0 to count-1), calls a recursive function (likely this same function at offset 18544 from GOT entry) with the child pointer, a path argument (s1), and a search target (s5).
     * 2. **C pseudocode:**
     * ```c
     * /* s2=i, s3=offset, s4=dirnode, s1=path, s5=target */
     * i = 0;
     * offset = 0;
     * count = dirnode->numChildren;      /* offset 20 */
     * if (count > 0) {
     * children = dirnode->children;  /* offset 24 */
     * do {
     * child = children[i];       /* or *(children + offset) */
     * FUN_00414870(path, child, target);  /* recursive call */
     * i++;
     * offset += 4;
     * } while (i < dirnode->numChildren);
     * }
     * /* epilogue: restore s0-s5, ra from stack, return */
     * ```
     * The key insight: offset 20 = child count, offset 24 = child array pointer. This is a directory tree traversal calling itself recursively on each child directory entry.
     */
halt_baddata();
}
