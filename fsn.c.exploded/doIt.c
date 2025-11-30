/**
 * doIt
 *
 * Extracted from fsn.c lines 45682-45703
 * Category: Filesystem
 */

void doIt(char param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(curcontext + 0x48) == 0) {
    if ((*(int *)(curcontext + 0x44) != 0) &&
       (*(int *)(curcontext + 0x3c) != *(int *)(curcontext + 0x44))) {
      do_warp();
    }
  }
  else {
    uVar1 = 4;
    if (param_1 != '\0') {
      uVar1 = 5;
    }
    pick_file_item(*(undefined4 *)(curcontext + 0x44),*(int *)(curcontext + 0x48),uVar1,
                 param_1 == '\0',&pick_status_buffer,"opening");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
