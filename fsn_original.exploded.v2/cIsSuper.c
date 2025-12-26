/**
 * cIsSuper
 *
 * Extracted from fsn.c lines 72061-72073
 * Category: Other
 */

void cIsSuper(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x30);
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp((char *)*puVar2,param_2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[1];
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433d64):
     * Function: cIsSuper
     *
     * Looking at this assembly:
     * 1. **What it does:** Walks a linked list starting at sp+36 (a node pointer). For each node, calls a function via GP-32564 with node->field0 and the original arg (sp+44). Returns 1 if any call returns 0 (match found), otherwise returns 0 after exhausting the list.
     * 2. **C pseudocode:**
     * ```c
     * int cIsSuper(/* ... */, Node *list, SomeType *arg) {
     * while (list != NULL) {
     * if (compare_func(list->data, arg) == 0) {
     * return 1;  // Found match
     * }
     * list = list->next;
     * }
     * return 0;  // No match
     * }
     * ```
     * GP-32564 is likely `strcmp` or a similar comparison function. The function checks if `arg` matches any entry in a linked list - classic "is X a member of set Y" pattern. The name "cIsSuper" suggests checking if a class/type is a superclass of another in some type hierarchy.
     */
halt_baddata();
}
