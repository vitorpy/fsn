/**
 * checkValidSelections
 *
 * Extracted from fsn.c lines 59281-59316
 * Category: Input
 */

void checkValidSelections(void)

{
  if ((*(int *)(curcontext + 0x48) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x48) + 0x28) << 5)
     ) {
    FUN_0041d920();
  }
  if ((*(int *)(curcontext + 0x44) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 3)
     ) {
    FUN_0041d54c();
  }
  if ((*(int *)(curcontext + 0x3c) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x3c) + 0x74) << 3)
     ) {
    reset_eye();
  }
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    if ((*(int *)(curcontext + 0x48) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x48) + 0x28) << 5)) {
      FUN_0041d920();
    }
    if ((*(int *)(curcontext + 0x44) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 3)) {
      FUN_0041d54c();
    }
    if ((*(int *)(curcontext + 0x3c) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x3c) + 0x74) << 3)) {
      reset_eye();
    }
    gl_swap_buffers(1);
  }
  FUN_0041c9e8();
  FUN_0041c3e4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
