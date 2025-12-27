/**
 * dump.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "dump.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include <stdint.h>

/* TODO: This should be in fsn_state.h */
extern undefined __iob_func_result;

void dumpDatabaseCB(void)

{
  refresh_after_change();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004154c4):
     * Function: dumpDatabaseCB
     *
     * Looking at this assembly:
     * 1. **What it does:** Sets up GP (global pointer), then calls a function at GOT offset -32744 + 19876 (0x4DA4). This is a simple wrapper that calls one function and returns.
     * 2. **C pseudocode:**
     * void dumpDatabaseCB(Widget w, XtPointer client_data, XtPointer call_data) {
     * // Calls function at GP offset 0x8018 + 0x4DA4
     * some_database_dump_function();
     * }
     * To identify the actual function being called, you'd need to resolve the GOT entry:
     * - GP base at this call = 0x4154c4 + 0x0fc1866c (after lui+addiu+addu with t9)
     * - GOT offset -32744 (0xFFFF8018) loads base address
     * - Then adds 19876 (0x4DA4) to get final target
     * This is likely calling a debug/diagnostic function like `dumpDatabase()` or similar - the "CB" suffix indicates it's a Motif callback wrapper.
     */
  return;
}

void databaseDumpTimeout(void)
{
  refresh_after_change();
  init_database_display();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004154f8):
     * Function: databaseDumpTimeout
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Sets up GP, calls one function at GP-32744 + 19876 offset (likely `dumpDatabase` or similar), then calls another function at GP-31304 (likely `XtRemoveTimeOut` or cleanup). Classic timeout callback that performs action then removes itself.
     * **2. C pseudocode:**
     * // void databaseDumpTimeout(XtPointer client_data, XtIntervalId *id)
     * // {
     * // dumpDatabase();           // GP-32744 + 0x4da4 offset
     * // XtRemoveTimeOut(*id);     // GP-31304 - cleanup timeout
     * // }
     * The first call uses an adjusted offset (base + 19876), suggesting it's calling into a specific entry point within a larger function or jump table. The second call is a straightforward indirect call through GOT, typical for removing the timeout that triggered this callback.
     */
  return;
}

void scheduleDatabaseDumpTimeout(void)
{
  XtAppAddTimeOut(app_context,900000,(XtTimerCallbackProc)databaseDumpTimeout,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00415544):
     * Function: scheduleDatabaseDumpTimeout
     *
     * ## Analysis
     * **1. What it does:**
     * Calls XtAppAddTimeOut() with the app context, a 900,000ms (15 minute) timeout, and a callback function (databaseDumpCB). The 0xdbba0 = 900,000 decimal.
     * **2. C pseudocode:**
     * // void scheduleDatabaseDumpTimeout(void) {
     * // XtAppAddTimeOut(
     * // appContext,           // gp[-30208] -> loaded via double-deref
     * // 900000,               // 0x000dbba0 = 15 minutes in milliseconds
     * // databaseDumpCB,       // gp[-31308] = callback function pointer
     * // NULL                  // a3 = 0 = client_data
     * // );
     * // }
     * **GP offsets resolved:**
     * - gp[-30208] (0x8a00): pointer to appContext (XtAppContext)
     * - gp[-32404] (0x816c): XtAppAddTimeOut function pointer
     * - gp[-31308] (0x85b4): databaseDumpCB callback function pointer
     */
  return;
}

void dumpMarks(FILE *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_8 [4];
  
  iVar3 = 0;
  if (0 < selection_count) {
    iVar2 = 0;
    do {
      if (__iob_func_result == 0) {
        iVar4 = param_1->_flags + -1;
        param_1->_flags = iVar4;
        if (iVar4 < 0) {
          __flsbuf(7,param_1);
        }
        else {
          *param_1->_IO_read_ptr = '\a';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(7,param_1);
      }
      sVar1 = strlen(*(char **)(selection_buffer + iVar2 + 0x38));
      asStack_8[0] = (short)sVar1;
      fwrite(asStack_8,2,1,param_1);
      fwrite(*(void **)(selection_buffer + iVar2 + 0x38),1,(int)asStack_8[0],param_1);
      copy_selection_data((undefined2 *)(uintptr_t)(iVar3 * 0x40 + selection_buffer),
                          (undefined4)(uintptr_t)param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < selection_count);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f8b0):
     * Function: dumpMarks
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via t9 with args (t7[56], 1, sp[72], s0), then calls another function at GP-30768 with args (s3[0] + s2*64, s0). Increments s2, loops back to 0x42f918 while s2 < s7[0]. Finally restores s0-s7, ra from stack and returns.
     * 2. **C pseudocode:**
     * // ... continuing from earlier in function
     * // (*func_ptr)(t7->field_56, 1, (short)local_72, s0_ptr);
     * // GP-30768 = strcpy (offset 0x87d0)
     * // strcpy(s3_array[s2], s0_ptr);  // s3_array has 64-byte elements
     * // s2++;
     * // if (s2 < *s7_count) goto loop_start;  // branch to 0x42f918
     * // epilogue - restore saved registers and return
     * The key insight: `sll t8,s2,0x6` (shift left 6 = multiply by 64) combined with `addu a0,t8,t9` shows array indexing with 64-byte stride, likely iterating through mark entries and copying strings into them.
     */
  return;
}
