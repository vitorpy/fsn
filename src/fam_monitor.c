/**
 * fam_monitor.c
 *
 * File Alteration Monitor implementation using Linux inotify.
 * Provides FAM-compatible API for FSN file change monitoring.
 *
 * Original FSN used SGI's FAM daemon. This implementation uses
 * Linux kernel's inotify for better performance and no daemon dependency.
 */

#define _GNU_SOURCE
#include "fam_monitor.h"
#include "fsn_state.h"

#include <sys/inotify.h>
#include <sys/select.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <limits.h>

/*=============================================================================
 * Internal State
 *============================================================================*/

#define MAX_FAM_REQUESTS 256
#define EVENT_BUF_SIZE (sizeof(struct inotify_event) + NAME_MAX + 1)

/* Watch descriptor to FAMRequest mapping */
typedef struct {
    int wd;              /* inotify watch descriptor */
    int reqnum;          /* FAM request number */
    void *userdata;      /* User data */
    char path[PATH_MAX]; /* Monitored path */
    int suspended;       /* Suspended flag */
} WatchEntry;

static WatchEntry g_watches[MAX_FAM_REQUESTS];
static int g_next_reqnum = 1;
static FAMConnection g_fsn_fam_connection;
static int g_fsn_fam_initialized = 0;

/*=============================================================================
 * Internal Helpers
 *============================================================================*/

static WatchEntry *find_watch_by_wd(int wd) {
    for (int i = 0; i < MAX_FAM_REQUESTS; i++) {
        if (g_watches[i].wd == wd && g_watches[i].reqnum > 0) {
            return &g_watches[i];
        }
    }
    return NULL;
}

static WatchEntry *find_watch_by_reqnum(int reqnum) {
    for (int i = 0; i < MAX_FAM_REQUESTS; i++) {
        if (g_watches[i].reqnum == reqnum) {
            return &g_watches[i];
        }
    }
    return NULL;
}

static WatchEntry *alloc_watch(void) {
    for (int i = 0; i < MAX_FAM_REQUESTS; i++) {
        if (g_watches[i].reqnum == 0) {
            return &g_watches[i];
        }
    }
    return NULL;
}

static void free_watch(WatchEntry *w) {
    if (w) {
        w->wd = -1;
        w->reqnum = 0;
        w->userdata = NULL;
        w->path[0] = '\0';
        w->suspended = 0;
    }
}

/* Convert inotify mask to FAM event code */
static FAMEventCode inotify_to_fam_code(uint32_t mask) {
    if (mask & IN_CREATE)     return FAMCreated;
    if (mask & IN_DELETE)     return FAMDeleted;
    if (mask & IN_DELETE_SELF) return FAMDeleted;
    if (mask & IN_MODIFY)     return FAMChanged;
    if (mask & IN_ATTRIB)     return FAMChanged;
    if (mask & IN_MOVE)       return FAMMoved;
    if (mask & IN_MOVED_FROM) return FAMMoved;
    if (mask & IN_MOVED_TO)   return FAMCreated;
    return FAMChanged;  /* Default */
}

/*=============================================================================
 * FAM API Implementation
 *============================================================================*/

int FAMOpen(FAMConnection *fc) {
    return FAMOpen2(fc, NULL);
}

int FAMOpen2(FAMConnection *fc, const char *appName) {
    (void)appName;  /* Ignored on Linux */

    if (!fc) return -1;

    fc->fd = inotify_init1(IN_NONBLOCK | IN_CLOEXEC);
    if (fc->fd < 0) {
        perror("inotify_init1");
        return -1;
    }

    fc->initialized = 1;
    return 0;
}

int FAMClose(FAMConnection *fc) {
    if (!fc || !fc->initialized) return -1;

    /* Remove all watches */
    for (int i = 0; i < MAX_FAM_REQUESTS; i++) {
        if (g_watches[i].wd >= 0 && g_watches[i].reqnum > 0) {
            inotify_rm_watch(fc->fd, g_watches[i].wd);
            free_watch(&g_watches[i]);
        }
    }

    close(fc->fd);
    fc->fd = -1;
    fc->initialized = 0;
    return 0;
}

int FAMMonitorDirectory(FAMConnection *fc, const char *filename,
                        FAMRequest *fr, void *userdata) {
    return FAMMonitorDirectory2(fc, filename, fr, userdata, 0);
}

int FAMMonitorDirectory2(FAMConnection *fc, const char *filename,
                         FAMRequest *fr, void *userdata, int depth) {
    (void)depth;  /* inotify doesn't support recursive watching directly */

    if (!fc || !fc->initialized || !filename || !fr) return -1;

    WatchEntry *w = alloc_watch();
    if (!w) {
        errno = ENOMEM;
        return -1;
    }

    /* Watch for common directory events */
    uint32_t mask = IN_CREATE | IN_DELETE | IN_MODIFY | IN_ATTRIB |
                    IN_MOVED_FROM | IN_MOVED_TO | IN_DELETE_SELF;

    int wd = inotify_add_watch(fc->fd, filename, mask);
    if (wd < 0) {
        free_watch(w);
        return -1;
    }

    w->wd = wd;
    w->reqnum = g_next_reqnum++;
    w->userdata = userdata;
    strncpy(w->path, filename, PATH_MAX - 1);
    w->path[PATH_MAX - 1] = '\0';
    w->suspended = 0;

    fr->reqnum = w->reqnum;
    fr->wd = wd;
    fr->userdata = userdata;

    return 0;
}

int FAMMonitorFile(FAMConnection *fc, const char *filename,
                   FAMRequest *fr, void *userdata) {
    if (!fc || !fc->initialized || !filename || !fr) return -1;

    WatchEntry *w = alloc_watch();
    if (!w) {
        errno = ENOMEM;
        return -1;
    }

    /* Watch for file events */
    uint32_t mask = IN_MODIFY | IN_ATTRIB | IN_DELETE_SELF | IN_MOVE_SELF;

    int wd = inotify_add_watch(fc->fd, filename, mask);
    if (wd < 0) {
        free_watch(w);
        return -1;
    }

    w->wd = wd;
    w->reqnum = g_next_reqnum++;
    w->userdata = userdata;
    strncpy(w->path, filename, PATH_MAX - 1);
    w->path[PATH_MAX - 1] = '\0';
    w->suspended = 0;

    fr->reqnum = w->reqnum;
    fr->wd = wd;
    fr->userdata = userdata;

    return 0;
}

int FAMCancelMonitor(FAMConnection *fc, FAMRequest *fr) {
    if (!fc || !fc->initialized || !fr) return -1;

    WatchEntry *w = find_watch_by_reqnum(fr->reqnum);
    if (!w) return -1;

    if (w->wd >= 0) {
        inotify_rm_watch(fc->fd, w->wd);
    }
    free_watch(w);

    return 0;
}

int FAMSuspendMonitor(FAMConnection *fc, FAMRequest *fr) {
    if (!fc || !fc->initialized || !fr) return -1;

    WatchEntry *w = find_watch_by_reqnum(fr->reqnum);
    if (!w) return -1;

    w->suspended = 1;
    return 0;
}

int FAMResumeMonitor(FAMConnection *fc, FAMRequest *fr) {
    if (!fc || !fc->initialized || !fr) return -1;

    WatchEntry *w = find_watch_by_reqnum(fr->reqnum);
    if (!w) return -1;

    w->suspended = 0;
    return 0;
}

int FAMNextEvent(FAMConnection *fc, FAMEvent *fe) {
    if (!fc || !fc->initialized || !fe) return -1;

    char buf[EVENT_BUF_SIZE * 16];
    ssize_t len = read(fc->fd, buf, sizeof(buf));

    if (len < 0) {
        if (errno == EAGAIN || errno == EWOULDBLOCK) {
            return 0;  /* No events */
        }
        return -1;
    }

    if (len == 0) return 0;

    /* Process first event */
    struct inotify_event *event = (struct inotify_event *)buf;

    WatchEntry *w = find_watch_by_wd(event->wd);
    if (!w || w->suspended) {
        return 0;  /* Watch not found or suspended */
    }

    fe->fc = fc;
    fe->fr.reqnum = w->reqnum;
    fe->fr.wd = w->wd;
    fe->fr.userdata = w->userdata;
    fe->hostname = NULL;
    fe->userdata = w->userdata;
    fe->code = inotify_to_fam_code(event->mask);

    if (event->len > 0) {
        strncpy(fe->filename, event->name, sizeof(fe->filename) - 1);
        fe->filename[sizeof(fe->filename) - 1] = '\0';
    } else {
        strncpy(fe->filename, w->path, sizeof(fe->filename) - 1);
        fe->filename[sizeof(fe->filename) - 1] = '\0';
    }

    return 1;
}

int FAMPending(FAMConnection *fc) {
    if (!fc || !fc->initialized) return -1;

    fd_set fds;
    struct timeval tv = {0, 0};  /* Non-blocking */

    FD_ZERO(&fds);
    FD_SET(fc->fd, &fds);

    int ret = select(fc->fd + 1, &fds, NULL, NULL, &tv);
    if (ret < 0) return -1;

    return ret;
}

int FAMConnectionNumber(FAMConnection *fc) {
    if (!fc || !fc->initialized) return -1;
    return fc->fd;
}

/*=============================================================================
 * FSN-specific FAM helpers
 *============================================================================*/

int fsn_fam_init(void) {
    if (g_fsn_fam_initialized) return 0;

    memset(g_watches, 0, sizeof(g_watches));
    for (int i = 0; i < MAX_FAM_REQUESTS; i++) {
        g_watches[i].wd = -1;
    }

    if (FAMOpen(&g_fsn_fam_connection) < 0) {
        fprintf(stderr, "Warning: Could not initialize file monitoring (inotify)\n");
        return -1;
    }

    g_fsn_fam_initialized = 1;
    return 0;
}

void fsn_fam_shutdown(void) {
    if (!g_fsn_fam_initialized) return;

    FAMClose(&g_fsn_fam_connection);
    g_fsn_fam_initialized = 0;
}

int fsn_fam_monitor_directory(const char *path, void *userdata) {
    if (!g_fsn_fam_initialized) {
        if (fsn_fam_init() < 0) return -1;
    }

    FAMRequest fr;
    if (FAMMonitorDirectory(&g_fsn_fam_connection, path, &fr, userdata) < 0) {
        return -1;
    }

    return fr.reqnum;
}

int fsn_fam_unmonitor(int reqnum) {
    if (!g_fsn_fam_initialized) return -1;

    FAMRequest fr;
    fr.reqnum = reqnum;

    return FAMCancelMonitor(&g_fsn_fam_connection, &fr);
}

int fsn_fam_process_events(void) {
    if (!g_fsn_fam_initialized) return 0;

    int count = 0;
    FAMEvent fe;

    while (FAMPending(&g_fsn_fam_connection) > 0) {
        if (FAMNextEvent(&g_fsn_fam_connection, &fe) > 0) {
            /* TODO: Call appropriate FSN callback based on event type */
            /* For now, just count events */
            count++;
        }
    }

    return count;
}
