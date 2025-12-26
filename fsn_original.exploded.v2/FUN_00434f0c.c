/**
 * FUN_00434f0c
 *
 * Extracted from fsn.c lines 73194-73229
 * Ghidra address: 0x00434f0c
 * Category: Other
 */

void FUN_00434f0c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_gp;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar3 = iVar1->display_mode /* was: *(int *)(iVar1 + 0x68) */;
      /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(iVar1);
      iVar1 = iVar3;
    }
    iVar1 = param_1[2];
    while (iVar1 != 0) {
      iVar3 = iVar1->file_array /* was: *(int *)(iVar1 + 0x10) */;
      /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(iVar1);
      iVar1 = iVar3;
    }
    puVar2 = (undefined4 *)param_1[4];
    while (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar2[1];
      /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(*puVar2);
      /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(puVar2);
      puVar2 = puVar4;
    }
    if ((param_2 & 1) != 0) {
      /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434f0c):
     * Function: FUN_00434f0c
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a linked-list destructor loop. It walks a linked list (next pointer at offset +4), calling a destructor function on each node, then optionally frees the base object if a flag (bit 0 of param) is set.
     * 2. **C pseudocode:**
     * ```c
     * // Destructor for ByteCodeLoader - walks linked list and destroys nodes
     * void __dt__14ByteCodeLoaderFv(ByteCodeLoader *this, int flags) {
     * Node *current = this->head;  // s0
     * while (current != NULL) {
     * Node *next = current->next;  // offset +4, saved in s1
     * void *data = current->data;  // offset +0, passed as a0
     * destroy_node(data);          // jalr via gp-31540
     * destroy_node(current);       // same function, free the node struct
     * current = next;
     * }
     * if (flags & 1) {
     * free(this);  // delete self if flag set
     * }
     * }
     * ```
     * The gp-31540 offset likely resolves to `free()` or a custom deallocator. The `flags & 1` pattern is standard C++ destructor convention where bit 0 indicates "also delete the object itself" (used by `delete` vs explicit destructor call).
     */
halt_baddata();
}
