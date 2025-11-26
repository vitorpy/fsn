/**
 * fam_monitor.h
 *
 * File Alteration Monitor interface for FSN.
 * Provides FAM-compatible API using Linux inotify as backend.
 *
 * Original FSN used SGI's FAM library. This reimplementation provides
 * the same interface using modern Linux kernel facilities.
 */

#ifndef FSN_FAM_MONITOR_H
#define FSN_FAM_MONITOR_H

#include "fsn_types.h"

/*=============================================================================
 * FAM Event Types (matching original FAM API)
 *============================================================================*/
typedef enum {
    FAMChanged = 1,      /* File/directory was modified */
    FAMDeleted = 2,      /* File/directory was deleted */
    FAMStartExecuting = 3,  /* File started executing (not used on Linux) */
    FAMStopExecuting = 4,   /* File stopped executing (not used on Linux) */
    FAMCreated = 5,      /* File was created in monitored dir */
    FAMMoved = 6,        /* File was moved/renamed */
    FAMAcknowledge = 7,  /* Acknowledge from FAM */
    FAMExists = 8,       /* Initial file exists notification */
    FAMEndExist = 9      /* End of initial file list */
} FAMEventCode;

/*=============================================================================
 * FAM Structures
 *============================================================================*/

/* FAM connection handle */
typedef struct {
    int fd;              /* inotify file descriptor */
    int initialized;     /* Connection state */
} FAMConnection;

/* FAM request handle */
typedef struct {
    int reqnum;          /* Request number */
    int wd;              /* inotify watch descriptor */
    void *userdata;      /* User-supplied data */
} FAMRequest;

/* FAM event structure */
typedef struct {
    FAMConnection *fc;   /* Connection that generated event */
    FAMRequest fr;       /* Request that generated event */
    char *hostname;      /* Always NULL for local files */
    char filename[256];  /* Filename that triggered event */
    void *userdata;      /* User data from request */
    FAMEventCode code;   /* Event type */
} FAMEvent;

/*=============================================================================
 * FAM API Functions
 *============================================================================*/

/**
 * Open a FAM connection.
 * @param fc FAM connection structure to initialize
 * @return 0 on success, -1 on error
 */
int FAMOpen(FAMConnection *fc);

/**
 * Open a FAM connection (extended version with app name).
 * @param fc FAM connection structure to initialize
 * @param appName Application name (ignored on Linux)
 * @return 0 on success, -1 on error
 */
int FAMOpen2(FAMConnection *fc, const char *appName);

/**
 * Close a FAM connection.
 * @param fc FAM connection to close
 * @return 0 on success, -1 on error
 */
int FAMClose(FAMConnection *fc);

/**
 * Monitor a directory for changes.
 * @param fc FAM connection
 * @param filename Directory path to monitor
 * @param fr FAM request structure to fill
 * @param userdata User data to associate with request
 * @return 0 on success, -1 on error
 */
int FAMMonitorDirectory(FAMConnection *fc, const char *filename,
                        FAMRequest *fr, void *userdata);

/**
 * Monitor a directory (extended version with depth).
 * @param fc FAM connection
 * @param filename Directory path to monitor
 * @param fr FAM request structure to fill
 * @param userdata User data to associate with request
 * @param depth Monitoring depth (0 = immediate children only)
 * @return 0 on success, -1 on error
 */
int FAMMonitorDirectory2(FAMConnection *fc, const char *filename,
                         FAMRequest *fr, void *userdata, int depth);

/**
 * Monitor a file for changes.
 * @param fc FAM connection
 * @param filename File path to monitor
 * @param fr FAM request structure to fill
 * @param userdata User data to associate with request
 * @return 0 on success, -1 on error
 */
int FAMMonitorFile(FAMConnection *fc, const char *filename,
                   FAMRequest *fr, void *userdata);

/**
 * Cancel monitoring for a request.
 * @param fc FAM connection
 * @param fr FAM request to cancel
 * @return 0 on success, -1 on error
 */
int FAMCancelMonitor(FAMConnection *fc, FAMRequest *fr);

/**
 * Suspend monitoring for a request.
 * @param fc FAM connection
 * @param fr FAM request to suspend
 * @return 0 on success, -1 on error
 */
int FAMSuspendMonitor(FAMConnection *fc, FAMRequest *fr);

/**
 * Resume monitoring for a request.
 * @param fc FAM connection
 * @param fr FAM request to resume
 * @return 0 on success, -1 on error
 */
int FAMResumeMonitor(FAMConnection *fc, FAMRequest *fr);

/**
 * Get the next FAM event (blocking).
 * @param fc FAM connection
 * @param fe FAM event structure to fill
 * @return 1 if event retrieved, 0 if no events, -1 on error
 */
int FAMNextEvent(FAMConnection *fc, FAMEvent *fe);

/**
 * Check if events are pending (non-blocking).
 * @param fc FAM connection
 * @return Number of pending events, -1 on error
 */
int FAMPending(FAMConnection *fc);

/**
 * Get the file descriptor for select/poll.
 * @param fc FAM connection
 * @return File descriptor, -1 on error
 */
int FAMConnectionNumber(FAMConnection *fc);

/*=============================================================================
 * FSN-specific FAM helpers
 *============================================================================*/

/**
 * Initialize FAM monitoring for FSN.
 * @return 0 on success, -1 on error
 */
int fsn_fam_init(void);

/**
 * Shutdown FAM monitoring.
 */
void fsn_fam_shutdown(void);

/**
 * Add a directory to monitoring.
 * @param path Directory path
 * @param userdata Associated directory node
 * @return Request number on success, -1 on error
 */
int fsn_fam_monitor_directory(const char *path, void *userdata);

/**
 * Remove a directory from monitoring.
 * @param reqnum Request number from fsn_fam_monitor_directory
 * @return 0 on success, -1 on error
 */
int fsn_fam_unmonitor(int reqnum);

/**
 * Process pending FAM events.
 * @return Number of events processed
 */
int fsn_fam_process_events(void);

#endif /* FSN_FAM_MONITOR_H */
