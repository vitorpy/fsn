/**
 * dirToPath
 *
 * Extracted from fsn.c lines 39118-39130
 * Category: Filesystem
 */

void dirToPath(undefined1 *param_1,int param_2)

{
  if (param_1 == (undefined1 *)0x0) {
    param_1 = &default_byte_value;
  }
  *param_1 = 0;
  if (param_2 != 0) {
    build_path_string();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
