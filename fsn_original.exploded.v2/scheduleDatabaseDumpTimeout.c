/**
 * scheduleDatabaseDumpTimeout
 *
 * Extracted from fsn.c lines 54255-54261
 * Category: Other
 */

void scheduleDatabaseDumpTimeout(void)

{
  XtAppAddTimeOut(app_context,900000,databaseDumpTimeout,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00415544):
     * Function: scheduleDatabaseDumpTimeout
     *
     * ## Analysis
     * **1. What it does:**
     * Calls XtAppAddTimeOut() with the app context, a 900,000ms (15 minute) timeout, and a callback function (databaseDumpCB). The 0xdbba0 = 900,000 decimal.
     * **2. C pseudocode:**
     * ```c
     * void scheduleDatabaseDumpTimeout(void) {
     * XtAppAddTimeOut(
     * appContext,           // gp[-30208] -> loaded via double-deref
     * 900000,               // 0x000dbba0 = 15 minutes in milliseconds
     * databaseDumpCB,       // gp[-31308] = callback function pointer
     * NULL                  // a3 = 0 = client_data
     * );
     * }
     * ```
     * **GP offsets resolved:**
     * - gp[-30208] (0x8a00): pointer to appContext (XtAppContext)
     * - gp[-32404] (0x816c): XtAppAddTimeOut function pointer
     * - gp[-31308] (0x85b4): databaseDumpCB callback function pointer
     */
halt_baddata();
}
