/**
 * dirfamDone
 *
 * Extracted from fsn.c lines 49974-49982
 * Category: Filesystem
 */

void dirfamDone(void)

{
  if (fsn_resources == '\0') {
    init_database_node(&database_root_node);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
