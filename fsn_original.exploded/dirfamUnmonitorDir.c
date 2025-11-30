/**
 * dirfamUnmonitorDir
 *
 * Extracted from fsn.c lines 64759-64769
 * Category: Filesystem
 */

void dirfamUnmonitorDir(int param_1)

{
  if ((fsn_resources == '\0') && (*(int *)(param_1 + 0x74) << 10 < 0)) {
    build_path_string(0,param_1);
    FUN_0043a5bc(&DAT_10016c70,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
