/**
 * fileChanged
 *
 * Extracted from fsn.c lines 41623-41666
 * Category: Filesystem
 */

void fileChanged(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  stat sStack_90;
  char *pcStack_8;
  
  iVar1 = validate_directory_access();
  if (iVar1 != 0) {
    pcStack_8 = (char *)build_path_string(0,param_1);
    strcat(pcStack_8,param_2);
    iVar2 = lstat(pcStack_8,&sStack_90);
    if (-1 < iVar2) {
      if (((sStack_90.st_nlink != *(__nlink_t *)(iVar1 + 8)) ||
          (sStack_90.st_blksize != *(int *)(iVar1 + 0xc))) ||
         (sStack_90.st_mtim.tv_sec != *(int *)(iVar1 + 0x10))) {
        *(int *)(param_1 + 0x1c) =
             (*(int *)(param_1 + 0x1c) + sStack_90.st_blksize) - *(int *)(iVar1 + 0xc);
        uVar3 = calculate_layout_position(param_1);
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        *(__nlink_t *)(iVar1 + 8) = sStack_90.st_nlink;
        *(__blksize_t *)(iVar1 + 0xc) = sStack_90.st_blksize;
        *(__time_t *)(iVar1 + 0x10) = sStack_90.st_mtim.tv_sec;
        uVar3 = expand_path(pcStack_8);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
        if (window_width < *(int *)(iVar1 + 0xc)) {
          window_width = *(int *)(iVar1 + 0xc);
        }
        if (window_height < *(int *)(param_1 + 0x1c)) {
          window_height = *(int *)(param_1 + 0x1c);
        }
        update_directory_bounds(iVar1);
        update_directory_layout(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x80;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
