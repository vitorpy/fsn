/**
 * dirfamMonitorDir
 *
 * Extracted from fsn.c lines 50004-50016
 * Category: Filesystem
 */

void dirfamMonitorDir(int param_1)

{
  undefined4 uVar1;
  
  if ((fsn_resources == '\0') && (-1 < *(int *)(param_1 + 0x74) << 10)) {
    uVar1 = build_path_string(0,param_1);
    update_database_entry(&database_root_node,uVar1,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
