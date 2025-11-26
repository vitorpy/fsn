/**
 * main.h - Entry point and main loop declarations
 *
 * Extracted from fsn.c (lines 36896-37368)
 * Note: Old declarations kept for reference, new ones marked
 */

#ifndef FSN_MAIN_H
#define FSN_MAIN_H

#include "fsn_types.h"
#include "fsn_std.h"

/* Entry point - extracted */
void init_app_state(void);
void main(int param_1, undefined4 *param_2);

/* Window management - extracted */
void setMainWindow(void);
void set_main_gl_window(void);

/* From old extraction - to be verified */
void restorePositions(void);
void update_display(undefined4 param_1,undefined4 param_2);
void first_traversal(int param_1);
void need_pups(void);
void AddServer__6ClientFliT2(int *param_1,in_addr_t param_2,u_long param_3,u_long param_4);
void deleteMessage(undefined4 *param_1);
void viewFile(undefined4 param_1,undefined4 *param_2);
void activeWorkProc(void);
void getword__FPcPl(undefined1 *param_1,undefined1 *param_2);
void restorePosition(undefined4 param_1);
void rescanDatabase(void);
void reset_eye(void);
void cleanup_before_exit(void);
void fileDeleted(int param_1,char *param_2);
void writePosition(undefined2 *param_1,FILE *param_2);
void handleEvents(void);
void initialize_db(char *param_1);
void layout_db(undefined4 param_1,undefined4 param_2);
void ReadFromServer__6ClientFiPcT1(int *param_1,int param_2,undefined1 *param_3,int param_4);
void SG_getNormalArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void fileChanged(int param_1,char *param_2);
void parse_typed_value(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FAMOpen2(int *param_1,int param_2);
void readMark(FILE *param_1);
void readPosition(undefined2 *param_1,FILE *param_2);
void scanDatabase(int param_1);
void setcontext(int param_1,undefined1 param_2);
void cIsSuper(int param_1,char *param_2);
void putword__FPcPl(undefined1 *param_1,undefined1 *param_2);
void SG_getDefaultDepth(int param_1,undefined4 param_2,int *param_3,int param_4);
void savePosition(undefined2 *param_1);
void SG_getUnderlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void findDirByFullName(char *param_1);
void dumpMarks(FILE *param_1);
void init_display_mode(void);
void initnames(void);
void LoadIntlResources(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void SG_getMatchingVisual(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6);
void newcontext(uint param_1,char param_2);
void doIt(char param_1);
void usystem(undefined4 param_1);
void SG_getMaxDepth(int param_1,int param_2,int *param_3,int param_4);
void message(undefined4 param_1,int param_2);
void third_traversal(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void calculate_file_view(int param_1);
void WriteToServer__6ClientFiPcT1(undefined4 param_1,int param_2,void *param_3,size_t param_4);
void initResources(undefined4 param_1);
void preExit(void);
void error(undefined4 param_1);
void set_camera_lookat(double param_1,double param_2);
void rescaleOverview(void);
void makePatterns(void);
void DoClientIn__6ClientFP11ServerEntry(undefined4 param_1,int *param_2);
void checkValidSelections(void);

#endif /* FSN_MAIN_H */
