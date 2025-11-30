/**
 * init_gl_lists
 *
 * Extracted from fsn.c lines 49954-49968
 * Category: Init
 */

void init_gl_lists(void)

{
  int iVar1;
  
  if ((fsn_resources == '\0') && (iVar1 = fam_open_wrapper(&database_root_node), iVar1 < 0)) {
    fprintf((FILE *)0xfb52904,
            "Could not run FAM.  This program requires FAM to be installed.\nYou may need to install eoe2.sw.envm to obtain FAM\n"
           );
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
