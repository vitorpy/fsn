/**
 * widgetHelp
 *
 * Extracted from fsn.c lines 52462-52468
 * Category: UI
 */

void widgetHelp(undefined4 param_1,undefined4 param_2)

{
  XtAddCallback(param_1,0xe3f3e9f,help_callback,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
