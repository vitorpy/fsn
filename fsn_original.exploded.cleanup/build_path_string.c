/**
 * build_path_string
 *
 * Extracted from fsn.c lines 52519-52533
 * Category: Filesystem
 */

void build_path_string(undefined1 *param_1,int param_2)

{
  int unaff_gp;
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = (undefined1 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6710);
  }
  *param_1 = 0;
  if (param_2 != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1a78))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
