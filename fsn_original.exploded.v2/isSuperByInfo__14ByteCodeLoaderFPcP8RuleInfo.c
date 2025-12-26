/**
 * isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo
 *
 * Extracted from fsn.c lines 73136-73148
 * Category: Other
 */

void isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_3->child_right /* was: *(undefined4 **)(param_3 + 0x30) */;
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[1];
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434e80):
     * Function: isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo
     *
     * ## Analysis
     * **What it does:**
     * Walks a linked list starting at `ruleInfo->field_0x30`, comparing each node's first field against input string using strcmp. Returns 1 if any match found (string IS a "super"), 0 otherwise.
     * **C pseudocode:**
     * ```c
     * // a0 = this (unused), a1 = char* str, a2 = RuleInfo* ruleInfo
     * int isSuperByInfo(ByteCodeLoader* this, char* str, RuleInfo* ruleInfo) {
     * struct Node* node = ruleInfo->list;  // offset 0x30 (48)
     * while (node != NULL) {
     * if (strcmp(str, node->name) == 0) {  // GP-32564 = strcmp
     * return 1;  // found match - is super
     * }
     * node = node->next;  // offset 4
     * }
     * return 0;  // not found
     * }
     * ```
     * **Key details:**
     * - GP offset -32564 (0x80cc) resolves to `strcmp`
     * - Linked list node structure: `{ char* name; Node* next; }` (8 bytes)
     * - RuleInfo offset 0x30 holds the list head pointer
     */
halt_baddata();
}
