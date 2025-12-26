/**
 * __dt__14ByteCodeLoaderFv
 *
 * Extracted from fsn.c lines 73154-73188
 * Category: Other
 */

void __dt__14ByteCodeLoaderFv(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar3 = iVar1->display_mode /* was: *(int *)(iVar1 + 0x68) */;
      __dl__FPv(iVar1);
      iVar1 = iVar3;
    }
    iVar1 = param_1[2];
    while (iVar1 != 0) {
      iVar3 = iVar1->file_array /* was: *(int *)(iVar1 + 0x10) */;
      __dl__FPv(iVar1);
      iVar1 = iVar3;
    }
    puVar2 = (undefined4 *)param_1[4];
    while (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar2[1];
      __dl__FPv(*puVar2);
      __dl__FPv(puVar2);
      puVar2 = puVar4;
    }
    if ((param_2 & 1) != 0) {
      __dl__FPv(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434f00):
     * Function: __dt__14ByteCodeLoaderFv
     *
     * ## Analysis
     * **What it does:**
     * Linked list destructor loop - iterates through a linked list starting at `this->head`, calling a destructor on each node, then optionally frees `this` if flag bit 0 is set.
     * **C pseudocode:**
     * ```c
     * // __dt__14ByteCodeLoaderFv - ByteCodeLoader destructor
     * void ByteCodeLoader_destructor(ByteCodeLoader *this, int flags) {
     * Node *current = this->head;  // offset 0
     * while (current != NULL) {
     * Node *next = current->next;  // offset 4
     * void *data = current->data;  // offset 0
     * free(data);                  // GP[-31540] = free
     * free(current);
     * current = next;
     * }
     * if (flags & 1) {
     * free(this);  // delete self if requested
     * }
     * }
     * ```
     * **Notes:**
     * - GP offset -31540 (0x84cc) resolves to `free()`
     * - The `flags & 1` pattern is standard C++ destructor convention (bit 0 = delete object after destruction)
     * - Structure: `struct Node { void *data; Node *next; }`
     */
halt_baddata();
}
