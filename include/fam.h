/**
 * fam.h - Header for fam module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_FAM_H
#define FSN_FAM_H

#include "fsn_types.h"

void doneFam(void);
void dirfamInit(void);
void dirfamDone(void);
void dirfamMonitorDir(int param_1);
void dirfamUnmonitorDir(int param_1);
void dirfamMonitor(void);
void setup_fam_monitoring(void);
void dirfamUnmonitor(void);
void FAMOpen2(int *param_1,int param_2);
void FAMOpen(undefined4 param_1);
void fam_open_wrapper(undefined4 param_1);
void FAMClose(int param_1);
void FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5);
void fam_monitor_request(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5);
void FAMMonitorDirectory(undefined4 param_1,char *param_2,int *param_3,undefined4 param_4);
void FAMMonitorDirectory2(void);
void FAMMonitorFile(undefined4 param_1,char *param_2,int *param_3,undefined4 param_4);
void FAMMonitorFile2(void);
void FAMMonitorCollection
               (undefined4 *param_1,char *param_2,int *param_3,int param_4,undefined4 param_5,
               undefined4 param_6);
void FAMSuspendMonitor(undefined4 *param_1,undefined4 *param_2);
void FAMResumeMonitor(undefined4 *param_1,undefined4 *param_2);
void FAMCancelMonitor(undefined4 *param_1,undefined4 *param_2);
void fam_cancel_monitor_wrapper(undefined4 *param_1,undefined4 *param_2);
void FAMNextEvent(uint *param_1,undefined4 param_2);
void FAMPending(uint *param_1);
void FAMDebugLevel(undefined4 *param_1,int param_2);

#endif /* FSN_FAM_H */
