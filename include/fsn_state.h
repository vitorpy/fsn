/**
 * fsn_state.h
 *
 * Global state extern declarations for FSN.
 * All application globals are defined in fsn_state.c
 */

#ifndef FSN_STATE_H
#define FSN_STATE_H

#include "fsn_types.h"
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <stdio.h>

/* Motif widget headers */
#include <Xm/Xm.h>
#include <Xm/MainW.h>
#include <Xm/Form.h>
#include <Xm/Label.h>
#include <Xm/PushB.h>
#include <Xm/Scale.h>
#include <Xm/RowColumn.h>
#include <Xm/Separator.h>
#include <Xm/DrawingA.h>
#include <Xm/PanedW.h>
#include <Xm/Text.h>
#include <Xm/TextF.h>
#include <Xm/ToggleB.h>
#include <Xm/ScrolledW.h>
#include <Xm/Protocols.h>
#include <Xm/AtomMgr.h>

/* Forward declarations for X/Motif types */
typedef struct _XtAppStruct* XtAppContext;

/*=============================================================================
 * Application Core State
 *============================================================================*/
extern int __Argc;
extern char **__Argv;
extern XtAppContext app_context;
extern Widget toplevel;
extern Display *display;
extern char *home_directory;
extern char *db_filepath;

/*=============================================================================
 * Context Management
 *============================================================================*/
extern char *curcontext;
extern char *altcontext;  /* Changed from void* - used with array subscript */
extern void *curcontextwindows;
extern void *altcontextwindows;
extern int context_count;
extern int curcontextid;
extern int curcontextflag;
extern void *cached_context_ptr;
extern int saved_context_state;

/*=============================================================================
 * Widget Hierarchy
 *============================================================================*/
extern Widget context_top_widget;
extern Widget panel_widget;
extern Widget copy_button_widget;
extern Widget panel_vsep_widget;
extern Widget message_widget;
extern Widget pane_form_widget;
extern Widget popup_menu_widget;
extern Widget legend_widget;
extern Widget legend_separator_widget;
extern Widget legendLabel;
extern Widget monitorLabelWidget;

/* Scale widgets */
extern Widget zoom_scale_widget;
extern Widget vertical_scale_widget;
extern Widget view_angle_widget;

/* Preference panel widgets */
extern Widget preference_panel_shell;
extern Widget pref_filename_field;
extern Widget pref_red_scale;
extern Widget pref_green_scale;
extern Widget pref_blue_scale;
extern Widget pref_hue_scale;
extern Widget pref_sat_scale;
extern Widget pref_val_scale;

/* Search dialog widgets */
extern Widget search_name_field;
extern Widget search_size_field;
extern Widget search_age_field;
extern Widget search_dialog_child;
extern Widget search_count_label;
extern Widget search_size_comp_button;
extern Widget search_age_comp_button;

/* Menu widgets */
extern Widget menu_directory_cascade;
extern Widget menu_file_cascade;
extern Widget menu_monitor_directory;
extern Widget menu_open_file_1;
extern Widget menu_open_file_2;
extern Widget menu_print_file_1;
extern Widget menu_print_file_2;
extern Widget menu_delete_file_1;
extern Widget menu_delete_file_2;
extern Widget menu_move_file_1;
extern Widget menu_move_file_2;
extern Widget menu_copy_file_1;
extern Widget menu_copy_file_2;
extern Widget menu_link_file_1;
extern Widget menu_link_file_2;
extern Widget menu_process_deletes;
extern Widget menu_undo_deletes;

/* Height mode toggles */
extern Widget autoscan_split_toggle;
extern Widget file_height_none_toggle;
extern Widget file_height_linear_toggle;
extern Widget file_height_exag_toggle;
extern Widget dir_height_menu_button;
extern Widget dir_flat_toggle;
extern Widget dir_files_only_toggle;
extern Widget dir_children_toggle;

/*=============================================================================
 * View/Camera State
 *============================================================================*/
extern float view_init_x;
extern float view_init_y;
extern float view_init_z;
extern int view_init_tilt;         /* Initial camera tilt (rotation_x) in tenths of degrees */
extern float view_init_rotation_x;
extern float view_init_rotation_y;
extern float view_offset_x;
extern float view_offset_y;
extern float view_offset_z;
extern float view_offset_adjustment;
extern float view_scale_factor;

extern float camera_lookat_x;
extern float camera_lookat_y;
extern float camera_lookat_z;
extern int camera_rotation_angle;
extern short camera_position_x;
extern short camera_position_y;
extern char camera_position_z;
extern char camera_rotation_changed;

extern short cached_view_angle_1;
extern short cached_view_angle_2;

/*=============================================================================
 * Zoom State
 *============================================================================*/
extern float zoom_reference_height;
extern float zoom_base_factor;
extern int zoom_stack_pointer;
extern float zoom_stack_size;
extern float zoom_stack_capacity;
extern char zoom_active_flag;
extern int zoom_param_x;
extern int zoom_param_y;
extern int zoom_init_state;
extern int zoom_saved_state;

/*=============================================================================
 * Display/Window State
 *============================================================================*/
extern int window_width;
extern int window_height;
extern float window_scale_x;
extern float window_scale_y;
extern int displayHeight;
extern int displayDirectoryHeight;
extern float display_height_exponent;

/*=============================================================================
 * Layout State
 *============================================================================*/
extern float horizontal_scale_factor;
extern float horizontal_scale_base;
extern float vertical_scale_factor;
extern float reference_dimension;
extern float layout_base_height;
extern float layout_height_adjust;
extern float layout_offset_base;
extern float layout_spacing_height;
extern float layout_z_offset;
extern int layout_rotation_value;
extern int layout_short_value;
extern float item_scale_factor;
extern float item_spacing_x;
extern float item_height_offset;
extern float icon_size_multiplier;
extern float icon_spacing_factor;
extern float file_base_width;
extern float color_top_value_factor;
extern float color_side_value_factor;
extern float color_back_value_factor;
extern float position_offset;

/* Original ternary tree child index markers (fsn.c:1065-1067) */
extern undefined child_dir_index_1;
extern undefined child_dir_index_2;
extern undefined child_dir_index_3;

/*=============================================================================
 * Rendering State
 *============================================================================*/
extern char redraw_flag;
extern int redraw_counter;
extern char render_mode_flag;
extern int graphics_state_mode;
extern int graphics_render_flags;
extern int cpack_color;
extern int bg_color_normal;
extern int bg_color_grid;
extern int zbuffer_value;
extern char grid_display_flag;
extern char use_gouraud_shading;
extern int current_packed_color;
extern int highlight_color;
extern int highlight_packed_color;
extern int rect_draw_color;
/* Ground/Sky colors for draw_directories */
extern int sky_color_flat;
extern int sky_color_top;
extern int sky_color_bottom;
extern int ground_color_near;
extern float ground_scale_width;
extern float ground_offset_forward;
extern float ground_offset_backward;
extern float ground_horizon_z;
extern int draw_count_1;
extern int draw_count_2;
extern float zoom_power_base;
extern float zoom_power_divisor;
extern float rotation_factor_y;
extern int translate_y_offset;
extern float base_y_offset;

/*=============================================================================
 * GL State
 *============================================================================*/
extern int main_gl_window;
extern int gl_buffer_size;
extern int display_mode_flags;
/* myContext is a function callback, see context_funcs.h */
extern int vinfop;

/*=============================================================================
 * Overview State
 *============================================================================*/
extern char overviewActive;
extern char overview_initialized;
extern int overview_gl_context;
extern Widget overview_gl_widget;
extern int overview_popup_shell;
extern int overview_x_window;
extern int overview_bg_color;

/*=============================================================================
 * Legend State
 *============================================================================*/
extern char initialLegend;
extern char legendShowing;
extern int lhLabelColor;
extern int monitorLabelColor;
extern int labelColors;
extern int overlayHighlightColor;

/*=============================================================================
 * Controls State
 *============================================================================*/
extern char initialControls;
extern char controlsShowing;
extern char initialOverview;

/*=============================================================================
 * Color State
 *============================================================================*/
extern float colormap_factor;
extern float normal_colormap;
extern float overlay_colormap;
extern float saturation_factor;
extern char current_color_index;
extern int colormap_dirty_flag;
extern int active_colormap_id;
extern int current_colormap;
extern int numcmap;
extern char cmap_initialized;
extern int colormap_window_list;

/* Legend colors */
extern int legend_color_dir;
extern int legend_color_red;
extern int legend_color_orange;
extern int legend_color_yellow;
extern int legend_color_green;
extern int legend_color_cyan;
extern int legend_color_blue;
extern int legend_color_magenta;

/* Directory colors */
extern int directory_color_active;
extern int directory_color_normal;
extern int monitor_label_color;

/*=============================================================================
 * Database/Directory State
 *============================================================================*/
extern void *database_root_node;
extern int database_loaded_flag;
extern float database_version;
extern undefined4 *topdir;  /* Changed from void* - used as array with subscript */
extern undefined4 *current_directory_node;  /* Changed from void* - dereferenced in delete.c/messages.c */
extern int dir_index;
extern int directory_pool_index;
extern int directory_pool_capacity;
extern void *directory_memory_pool;
extern void *directory_pool_limit;
extern uint file_memory_pool_ptr;
extern uint file_pool_limit;
extern int dir_entry_initial_value;
extern void *string_copy_buffer;
extern uint string_buffer_limit;
extern char database_dirty_flag;

/* Bounds */
extern int minx;
extern int maxx;
extern int miny;
extern int maxy;
extern int maxShrinkage;

/*=============================================================================
 * File System State
 *============================================================================*/
extern int current_device_id;
extern char relative_path_flag;
extern char special_display_flag;
extern FILE *current_file;
extern uint current_input_byte;
extern char file_append_mode;
extern char *current_dir_path;
extern char *current_file_path;
extern int localFlag;
extern char fstyp[16];

/*=============================================================================
 * Selection State
 *============================================================================*/
extern int selection_count;
extern int selection_array_capacity;
extern int selection_buffer;
extern int current_picked_item;
extern int selected_id_1;
extern int selected_id_2;
extern int active_file_list;
extern void *active_item_list;

/*=============================================================================
 * Mark State
 *============================================================================*/
extern int mark_selector_list;
extern int mark_selector_dialog;
extern int mark_prompt_dialog;
extern char mark_menu_widget;

/*=============================================================================
 * Search State
 *============================================================================*/
extern char search_results_pending;
extern uint pattern_match_enabled;
extern char *search_pattern_string;
extern char search_age_mode;
extern char search_size_mode;
extern int search_number_value;
extern int search_count_threshold;
extern int firstSearchDir;
extern int lastSearchDir;
extern int visitedSearchDp;
extern int visitedSearchFp;
extern int state_change_counter;
extern float search_float_1;
extern float search_float_2;
extern int search_xmstring_1;
extern int search_xmstring_2;
extern int search_xmstring_3;

/*=============================================================================
 * Overlay State
 *============================================================================*/
extern char overlay_mode_flag;
extern float overlay_position_offset;

/*=============================================================================
 * Menu State
 *============================================================================*/
extern int menu_items_array;
extern int array_index;
extern int move_file_xmstring;
extern int copy_file_xmstring;
extern int link_file_xmstring;
extern int move_out_label;
extern int move_in_label;
extern int copy_out_label;
extern int copy_in_label;
extern int link_out_label;
extern int link_in_label;

/*=============================================================================
 * FAM (File Alteration Monitor) State
 *============================================================================*/
extern int fam_connection;
extern int fam_request_id;
extern int unmonitor_timeout_seconds;

/*=============================================================================
 * XmString Cache
 *============================================================================*/
extern int blankXmString;
extern int emptyXmString;

/*=============================================================================
 * Work Procedure State
 *============================================================================*/
extern int work_proc_id;
extern float work_float_1;
extern float work_float_2;
extern int last_operation_time;

/*=============================================================================
 * Icon State
 *============================================================================*/
extern int dir_type_icon;
extern int file_type_icon;
extern int icon_cache_capacity;
extern int icon_cache_size;
extern int icon_loader_instance;
extern int icon_color_table;

/*=============================================================================
 * Permission Display
 *============================================================================*/
extern char file_type_char;
extern char perm_setuid_char;
extern char perm_setgid_char;
extern char perm_sticky_char;
extern char *permission_string_table;

/*=============================================================================
 * Drawing State
 *============================================================================*/
extern char drawing_active_flag;
extern char grid_display_flag;
extern short default_line_width;

/*=============================================================================
 * Vertex/Face Arrays (box rendering)
 *============================================================================*/
extern int vertex_idx_0, vertex_idx_1, vertex_idx_2, vertex_idx_3;
extern int vertex_idx_4, vertex_idx_5, vertex_idx_6, vertex_idx_7;
extern int vertex_array_start_idx;
extern int vertex_array_end_idx;
extern int face_vtx_0, face_vtx_1, face_vtx_2, face_vtx_3;
extern int face_vtx_4, face_vtx_5, face_vtx_6, face_vtx_7;
extern int face_vtx_8, face_vtx_9, face_vtx_10, face_vtx_11;
extern int face_vtx_12, face_vtx_13, face_vtx_14, face_vtx_15;
extern int face_vtx_16, face_vtx_17, face_vtx_18, face_vtx_19;
extern int face_vtx_20, face_vtx_21, face_vtx_22;
extern int max_scale_limit;

/*=============================================================================
 * Matrix State
 *============================================================================*/
extern int matrix_stack_index;
extern int matrix_stack_capacity;

/*=============================================================================
 * Misc State
 *============================================================================*/
extern int busy_cursor;
extern int file_selection_dialog;
extern int numtop;
extern int default_item_type;
extern char default_byte_value;
extern char view_mode_flags;
extern char previous_state_char;
extern char wineditor_enabled;
extern char rest_mode_enabled;
extern int buffer_initialized_flag;
extern int buffer_size;
extern void *string_buffer;
extern void *path_buffer;

/*=============================================================================
 * Context Data Block
 *============================================================================*/
extern char context[6312];
extern char contextwindows[112];

/*=============================================================================
 * Help Pointers
 *============================================================================*/
extern void *infoHelp;
extern void *glHelp;
extern void *topHelp;
extern void *messageHelp;
extern void *controlHelp;
extern void *legendHelp;
extern void *sessionHelp;
extern void *showHelp;
extern void *displayHelp;
extern void *directoryHelp;
extern void *fileHelp;
extern void *moveDestHelp;
extern void *overviewHelp;
extern void *viewerHelp;
extern void *versionHelp;
extern void *modeHelp;
extern void *prefPanelHelp;
extern void *searchHelp;
extern void *markHelp;
extern void *boxDir;
extern void *boxRed;
extern void *boxOrange;
extern void *boxYellow;
extern void *boxGreen;
extern void *boxCyan;
extern void *boxBlue;
extern void *boxMagenta;
extern void *dcolorBoxes;

/*=============================================================================
 * Missing Variables (Batch 6)
 *============================================================================*/
extern char *temp_data_buffer;
extern void *context_data_block;
extern XtActionsRec xt_actions_table[];
extern char blank_string_literal[];
extern char empty_string_literal[];
extern char *default_charset;
extern char context_widget_name[];

/*=============================================================================
 * Ghidra String Pointers (Batch 4 - main_entry.c)
 *============================================================================*/
extern char app_class_name[];
extern XrmOptionDescRec *PTR_s__landscape_100000e0;
extern char *fallback_resources[];
extern char *glwidget_translations;

/*=============================================================================
 * Callback Functions (Batch 4 - preferences.c)
 *============================================================================*/
void quit_application(Widget w, XtPointer client, XtPointer call);
void pref_panel_map_callback(Widget w, XtPointer client, XtPointer call);
void pref_color_callback(Widget w, XtPointer client, XtPointer call);
void toggle_pair_callback(Widget w, XtPointer client, XtPointer call);
void color_select_callback(Widget w, XtPointer client, XtPointer call);
void exec_color_toggle_callback(Widget w, XtPointer client, XtPointer call);
void file_color_toggle_callback(Widget w, XtPointer client, XtPointer call);
void link_color_toggle_callback(Widget w, XtPointer client, XtPointer call);
void dir_color_toggle_callback(Widget w, XtPointer client, XtPointer call);
void rgb_scale_callback(Widget w, XtPointer client, XtPointer call);
void hsv_scale_callback(Widget w, XtPointer client, XtPointer call);
void zoom_gl_init_callback(Widget w, XtPointer client, XtPointer call);
void search_gl_init_callback(Widget w, XtPointer client, XtPointer call);

/*=============================================================================
 * Ghidra String Pointers (Batch 4 - preferences.c)
 *============================================================================*/
extern char *PTR_s_shrinkOnZoom_10008950;
extern char *PTR_s_monitorTimeout_100089f0;
extern char *PTR_s_mouseSpeed_10008b5c;
extern char *PTR_s_groundColor_1000935c;
extern void *PTR_PTR_100094ec;
extern float pref_float_array[];

/*=============================================================================
 * Ghidra String Pointers (Batch 4 - messaging.c)
 *============================================================================*/
extern char *PTR_s_Please_be_patient_while_the_file_10007b64;
extern char *_imsgs[];

/*=============================================================================
 * Zoom State
 *============================================================================*/
#include <sys/time.h>
extern struct timeval zoom_start_time;

/*=============================================================================
 * Mouse State - for camera navigation
 *============================================================================*/
extern int mouse_last_x;
extern int mouse_last_y;
extern int mouse_button_down;
extern float mouse_speed;

/*=============================================================================
 * IRIX Compatibility
 *============================================================================*/
extern undefined __iob_func_result;

#endif /* FSN_STATE_H */
