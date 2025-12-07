/**
 * fsn_state.c
 *
 * Global state definitions for FSN.
 * All application globals are defined here and declared extern in fsn_state.h
 */

#include "fsn_state.h"
#include <stddef.h>
#include <sys/time.h>

/*=============================================================================
 * Application Core State
 *============================================================================*/
int __Argc = 0;
char **__Argv = NULL;
XtAppContext app_context = NULL;
Widget toplevel = NULL;
Display *display = NULL;
char *home_directory = NULL;
char *db_filepath = NULL;

/*=============================================================================
 * Context Management
 *============================================================================*/
char *curcontext = NULL;
char *altcontext = NULL;
void *curcontextwindows = NULL;
void *altcontextwindows = NULL;
int context_count = 0;
int curcontextid = 0;
int curcontextflag = 0;
void *cached_context_ptr = NULL;
int saved_context_state = 0;

/*=============================================================================
 * Widget Hierarchy
 *============================================================================*/
Widget context_top_widget = NULL;
Widget panel_widget = NULL;
Widget copy_button_widget = NULL;
Widget panel_vsep_widget = NULL;
Widget message_widget = NULL;
Widget pane_form_widget = NULL;
Widget popup_menu_widget = NULL;
Widget legend_widget = NULL;
Widget legend_separator_widget = NULL;
Widget legendLabel = NULL;
Widget monitorLabelWidget = NULL;

/* Scale widgets */
Widget zoom_scale_widget = NULL;
Widget vertical_scale_widget = NULL;
Widget view_angle_widget = NULL;

/* Preference panel widgets */
Widget preference_panel_shell = NULL;
Widget pref_filename_field = NULL;
Widget pref_red_scale = NULL;
Widget pref_green_scale = NULL;
Widget pref_blue_scale = NULL;
Widget pref_hue_scale = NULL;
Widget pref_sat_scale = NULL;
Widget pref_val_scale = NULL;

/* Search dialog widgets */
Widget search_name_field = NULL;
Widget search_size_field = NULL;
Widget search_age_field = NULL;
Widget search_dialog_child = NULL;
Widget search_count_label = NULL;
Widget search_size_comp_button = NULL;
Widget search_age_comp_button = NULL;

/* Menu widgets */
Widget menu_directory_cascade = NULL;
Widget menu_file_cascade = NULL;
Widget menu_monitor_directory = NULL;
Widget menu_open_file_1 = NULL;
Widget menu_open_file_2 = NULL;
Widget menu_print_file_1 = NULL;
Widget menu_print_file_2 = NULL;
Widget menu_delete_file_1 = NULL;
Widget menu_delete_file_2 = NULL;
Widget menu_move_file_1 = NULL;
Widget menu_move_file_2 = NULL;
Widget menu_copy_file_1 = NULL;
Widget menu_copy_file_2 = NULL;
Widget menu_link_file_1 = NULL;
Widget menu_link_file_2 = NULL;
Widget menu_process_deletes = NULL;
Widget menu_undo_deletes = NULL;

/* Height mode toggles */
Widget autoscan_split_toggle = NULL;
Widget file_height_none_toggle = NULL;
Widget file_height_linear_toggle = NULL;
Widget file_height_exag_toggle = NULL;
Widget dir_height_menu_button = NULL;
Widget dir_flat_toggle = NULL;
Widget dir_files_only_toggle = NULL;
Widget dir_children_toggle = NULL;

/*=============================================================================
 * View/Camera State
 *============================================================================*/
float view_init_x = 0.0f;
float view_init_y = 0.0f;
float view_init_z = 0.0f;
int view_init_tilt = -700;         /* Initial camera tilt (rotation_x) - default -70 degrees */
float view_init_rotation_x = 0.0f;
float view_init_rotation_y = 0.0f;
float view_offset_x = 0.0f;
float view_offset_y = 0.0f;
float view_offset_z = 0.0f;
float view_offset_adjustment = 0.0f;
float view_scale_factor = 1.0f;

float camera_lookat_x = 0.0f;
float camera_lookat_y = 0.0f;
float camera_lookat_z = 0.0f;
int camera_rotation_angle = 0;
short camera_position_x = 0;
short camera_position_y = 0;
char camera_position_z = 0;
char camera_rotation_changed = 0;

short cached_view_angle_1 = 0;
short cached_view_angle_2 = 0;

/*=============================================================================
 * Zoom State
 * zoom_reference_height: Height at which zoom factor = 1.0 (original ~100)
 * zoom_base_factor: Base for exponential zoom (original ~1.05)
 *============================================================================*/
float zoom_reference_height = 100.0f;
float zoom_base_factor = 1.05f;
int zoom_stack_pointer = 0;
float zoom_stack_size = 0.0f;
float zoom_stack_capacity = 0.0f;
char zoom_active_flag = 0;
int zoom_param_x = 0;
int zoom_param_y = 0;
int zoom_init_state = 0;
int zoom_saved_state = 0;

/*=============================================================================
 * Display/Window State
 *============================================================================*/
int window_width = 0;
int window_height = 0;
float window_scale_x = 1.0f;
float window_scale_y = 1.0f;
int displayHeight = 1;              /* 0=None, 1=Linear, 2=Exaggerated */
int displayDirectoryHeight = 1;     /* 0=Flat, 1=FilesOnly, 2=Children */
float display_height_exponent = 0.5f;  /* Exponent for power scaling (sqrt) */

/*=============================================================================
 * Layout State
 *============================================================================*/
float horizontal_scale_factor = 1.0f;
float horizontal_scale_base = 1.0f;
float vertical_scale_factor = 1.0f;
float reference_dimension = 0.0f;
float layout_base_height = 5.0f;    /* Y-depth per hierarchy level (original FSN) */
float layout_height_adjust = 0.0f;
float layout_offset_base = 0.0f;
float layout_spacing_height = 0.0f;
float layout_z_offset = 0.0f;
int layout_rotation_value = 0;
int layout_short_value = 0;
float item_scale_factor = 1.0f;
float item_spacing_x = 8.0f;        /* Horizontal spacing between child islands (original FSN) */
float item_height_offset = 0.0f;
float icon_size_multiplier = 1.0f;
float icon_spacing_factor = 1.5f;   /* File spacing within islands (original FSN) */
float file_base_width = 0.5f;       /* Base width/depth of file blocks */
float color_top_value_factor = 0.8f;   /* Brightness multiplier for top face */
float color_side_value_factor = 0.55f; /* Brightness multiplier for side faces */
float color_back_value_factor = 0.3f;  /* Brightness multiplier for back face */
float position_offset = 0.0f;

/* Original ternary tree child index markers (fsn.c:1065-1067) */
undefined child_dir_index_1 = 0;
undefined child_dir_index_2 = 0;
undefined child_dir_index_3 = 0;

/*=============================================================================
 * Rendering State
 *============================================================================*/
char redraw_flag = 0;
int redraw_counter = 0;
char render_mode_flag = 0;
int graphics_state_mode = 0;
int graphics_render_flags = 0;
/* Colors from X resources (grass landscape) - packed as BGR for OpenGL */
int cpack_color = 0xffe16d;           /* skyColor #6de1ff as BGR - draw_warp clear */
int bg_color_normal = 0xffe16d;       /* skyColor #6de1ff as BGR - normal background */
int bg_color_grid = 0x238823;         /* groundColor #238823 as BGR (R=B so same) */
int zbuffer_value = 0x7fffff;         /* Z-buffer clear value (far plane) */
char grid_display_flag = 1;           /* 0=flat sky, 1=gradient sky mode */
char use_gouraud_shading = 1;         /* Resource flag: use Gouraud shading */
int current_packed_color = 0xffffff;  /* dirColor #ffffff as BGR (same) */
int highlight_color = 0xffffff;       /* selLineColor #ffffff as BGR (same) */
int highlight_packed_color = 0xd6e0c4; /* unselLineColor #c4e0d6 as BGR */
int rect_draw_color = 0xd2d2d2;       /* warpDirColor #d2d2d2 as BGR (same) */
/* Ground/Sky colors for draw_directories (grass landscape) */
int sky_color_flat = 0xffe16d;        /* skyColor when gouraud off */
int sky_color_top = 0xd58700;         /* topSkyColor #0087d5 as BGR */
int sky_color_bottom = 0xf0ff91;      /* bottomSkyColor #91fff0 as BGR */
int ground_color_near = 0x1a4f0f;     /* nearGroundColor #0f4f1a as BGR */
float ground_scale_width = 2000.0f;  /* Original FSN value (fsn_resources+0x110) */
float ground_offset_forward = 500.0f; /* y offset for forward horizon */
float ground_offset_backward = 200.0f;/* y offset for backward horizon */
float ground_horizon_z = 500.0f;      /* z distance to horizon transition */
int draw_count_1 = 0;                 /* drawing counter */
int draw_count_2 = 0;                 /* drawing counter */
float zoom_power_base = 1.02f;        /* zoom scaling base */
float zoom_power_divisor = 100.0f;    /* zoom scaling divisor */
float rotation_factor_y = 0.0f;
int translate_y_offset = 0;
float base_y_offset = 0.0f;

/*=============================================================================
 * GL State
 *============================================================================*/
int main_gl_window = 0;
int gl_buffer_size = 0;
int display_mode_flags = 0;
/* myContext is a function callback, see context_funcs.c */
int vinfop = 0;

/*=============================================================================
 * Overview State
 *============================================================================*/
char overviewActive = 0;
char overview_initialized = 0;
int overview_gl_context = 0;
Widget overview_gl_widget = NULL;
int overview_popup_shell = 0;
int overview_x_window = 0;
int overview_bg_color = 0;

/*=============================================================================
 * Legend State
 *============================================================================*/
char initialLegend = 0;
char legendShowing = 0;
int lhLabelColor = 0;
int monitorLabelColor = 0;
int labelColors = 0;
int overlayHighlightColor = 0;

/*=============================================================================
 * Controls State
 *============================================================================*/
char initialControls = 0;
char controlsShowing = 0;
char initialOverview = 0;

/*=============================================================================
 * Color State
 *============================================================================*/
float colormap_factor = 1.0f;
float normal_colormap = 0.0f;
float overlay_colormap = 0.0f;
float saturation_factor = 1.0f;
char current_color_index = 0;
int colormap_dirty_flag = 0;
int active_colormap_id = 0;
int current_colormap = 0;
int numcmap = 0;
char cmap_initialized = 0;
int colormap_window_list = 0;

/* Legend colors */
int legend_color_dir = 0;
int legend_color_red = 0;
int legend_color_orange = 0;
int legend_color_yellow = 0;
int legend_color_green = 0;
int legend_color_cyan = 0;
int legend_color_blue = 0;
int legend_color_magenta = 0;

/* Directory colors - BGR packed format
 * Active (selected) = bright cyan #00ffff -> 0xffff00 BGR
 * Normal = white #ffffff -> 0xffffff BGR
 */
int directory_color_active = 0xffff00;   /* Cyan - selected */
int directory_color_normal = 0xffffff;   /* White - normal */
int monitor_label_color = 0;

/*=============================================================================
 * Database/Directory State
 *============================================================================*/
void *database_root_node = NULL;
int database_loaded_flag = 0;
float database_version = 0.0f;
undefined4 *topdir = NULL;
undefined4 *current_directory_node = NULL;
int dir_index = 0;
int directory_pool_index = 0;
int directory_pool_capacity = 0;
void *directory_memory_pool = NULL;
void *directory_pool_limit = NULL;
uint file_memory_pool_ptr = 0;
uint file_pool_limit = 0;
int dir_entry_initial_value = 0;
void *string_copy_buffer = NULL;
uint string_buffer_limit = 0;
char database_dirty_flag = 0;

/* Bounds - allow camera freedom to see the scene */
int minx = -1000;
int maxx = 1000;
int miny = -1000;
int maxy = 1000;
int maxShrinkage = 0;

/*=============================================================================
 * File System State
 *============================================================================*/
int current_device_id = 0;
char relative_path_flag = 0;
char special_display_flag = 0;
FILE *current_file = NULL;
uint current_input_byte = 0;
char file_append_mode = 0;
char *current_dir_path = NULL;
char *current_file_path = NULL;
int localFlag = 0;
char fstyp[16] = {0};

/*=============================================================================
 * Selection State
 *============================================================================*/
int selection_count = 0;
int selection_array_capacity = 0;
int selection_buffer = 0;
int current_picked_item = 0;
int selected_id_1 = 0;
int selected_id_2 = 0;
int active_file_list = 0;
void *active_item_list = NULL;

/*=============================================================================
 * Mark State
 *============================================================================*/
int mark_selector_list = 0;
int mark_selector_dialog = 0;
int mark_prompt_dialog = 0;
char mark_menu_widget = 0;

/*=============================================================================
 * Search State
 *============================================================================*/
char search_results_pending = 0;
uint pattern_match_enabled = 0;
char *search_pattern_string = NULL;
char search_age_mode = 0;
char search_size_mode = 0;
int search_number_value = 0;
int search_count_threshold = 0;
int firstSearchDir = 0;
int lastSearchDir = 0;
int visitedSearchDp = 0;
int visitedSearchFp = 0;
int state_change_counter = 0;
float search_float_1 = 0.0f;
float search_float_2 = 0.0f;
int search_xmstring_1 = 0;
int search_xmstring_2 = 0;
int search_xmstring_3 = 0;

/*=============================================================================
 * Overlay State
 *============================================================================*/
char overlay_mode_flag = 0;
float overlay_position_offset = 0.0f;

/*=============================================================================
 * Menu State
 *============================================================================*/
int menu_items_array = 0;
int array_index = 0;
int move_file_xmstring = 0;
int copy_file_xmstring = 0;
int link_file_xmstring = 0;
int move_out_label = 0;
int move_in_label = 0;
int copy_out_label = 0;
int copy_in_label = 0;
int link_out_label = 0;
int link_in_label = 0;

/*=============================================================================
 * FAM (File Alteration Monitor) State
 *============================================================================*/
int fam_connection = 0;
int fam_request_id = 0;
int unmonitor_timeout_seconds = 0;

/*=============================================================================
 * XmString Cache
 *============================================================================*/
int blankXmString = 0;
int emptyXmString = 0;

/*=============================================================================
 * Work Procedure State
 *============================================================================*/
int work_proc_id = 0;
float work_float_1 = 0.0f;
float work_float_2 = 0.0f;
int last_operation_time = 0;

/*=============================================================================
 * Icon State - BGR packed colors
 * dir_type_icon = directory blocks (blue-ish)
 * file_type_icon = file blocks (white/light gray)
 *============================================================================*/
int dir_type_icon = 0xff8844;     /* Light blue for directories */
int file_type_icon = 0xdddddd;    /* Light gray for files */
int icon_cache_capacity = 0;
int icon_cache_size = 0;
int icon_loader_instance = 0;
int icon_color_table = 0;

/*=============================================================================
 * Permission Display
 *============================================================================*/
char file_type_char = 0;
char perm_setuid_char = 0;
char perm_setgid_char = 0;
char perm_sticky_char = 0;
char *permission_string_table = NULL;

/*=============================================================================
 * Drawing State
 *============================================================================*/
char drawing_active_flag = 0;
/* grid_display_flag moved to Rendering State section */
short default_line_width = 1;

/*=============================================================================
 * Vertex/Face Arrays (box rendering)
 *============================================================================*/
int vertex_idx_0 = 0, vertex_idx_1 = 0, vertex_idx_2 = 0, vertex_idx_3 = 0;
int vertex_idx_4 = 0, vertex_idx_5 = 0, vertex_idx_6 = 0, vertex_idx_7 = 0;
int vertex_array_start_idx = 0;
int vertex_array_end_idx = 0;
int face_vtx_0 = 0, face_vtx_1 = 0, face_vtx_2 = 0, face_vtx_3 = 0;
int face_vtx_4 = 0, face_vtx_5 = 0, face_vtx_6 = 0, face_vtx_7 = 0;
int face_vtx_8 = 0, face_vtx_9 = 0, face_vtx_10 = 0, face_vtx_11 = 0;
int face_vtx_12 = 0, face_vtx_13 = 0, face_vtx_14 = 0, face_vtx_15 = 0;
int face_vtx_16 = 0, face_vtx_17 = 0, face_vtx_18 = 0, face_vtx_19 = 0;
int face_vtx_20 = 0, face_vtx_21 = 0, face_vtx_22 = 0;
int max_scale_limit = 0;

/*=============================================================================
 * Matrix State
 *============================================================================*/
int matrix_stack_index = 0;
int matrix_stack_capacity = 0;

/*=============================================================================
 * Misc State
 *============================================================================*/
int busy_cursor = 0;
int file_selection_dialog = 0;
int numtop = 0;
int default_item_type = 0;
char default_byte_value = 0;
char view_mode_flags = 0;
char previous_state_char = 0;
char wineditor_enabled = 0;
char rest_mode_enabled = 0;
int buffer_initialized_flag = 0;
int buffer_size = 0;
void *string_buffer = NULL;
void *path_buffer = NULL;

/*=============================================================================
 * Context Data Block
 *============================================================================*/
char context[6312] = {0};
char contextwindows[112] = {0};

/*=============================================================================
 * Help Pointers
 *============================================================================*/
void *infoHelp = NULL;
void *glHelp = NULL;
void *topHelp = NULL;
void *messageHelp = NULL;
void *controlHelp = NULL;
void *legendHelp = NULL;
void *sessionHelp = NULL;
void *showHelp = NULL;
void *displayHelp = NULL;
void *directoryHelp = NULL;
void *fileHelp = NULL;
void *moveDestHelp = NULL;
void *overviewHelp = NULL;
void *viewerHelp = NULL;
void *versionHelp = NULL;
void *modeHelp = NULL;
void *prefPanelHelp = NULL;
void *searchHelp = NULL;
void *markHelp = NULL;
void *boxDir = NULL;
void *boxRed = NULL;
void *boxOrange = NULL;
void *boxYellow = NULL;
void *boxGreen = NULL;
void *boxCyan = NULL;
void *boxBlue = NULL;
void *boxMagenta = NULL;
void *dcolorBoxes = NULL;

/*=============================================================================
 * Missing Variables (Batch 6)
 *============================================================================*/
char *temp_data_buffer = NULL;
void *context_data_block = NULL;
XtActionsRec xt_actions_table[16] = {{0}};
char blank_string_literal[] = " ";
char empty_string_literal[] = "";
char *default_charset = "ISO8859-1";
char context_widget_name[] = "fsn_context";

/*=============================================================================
 * Ghidra String Pointers (Batch 4)
 *============================================================================*/
char app_class_name[] = "Fsn";

/* Command-line options for XtAppInitialize
 * Based on usage: fsn [-landscape <name>] [-relative] [-db <file>] [-dbdir <dir>] [-noscan]
 */
static XrmOptionDescRec fsn_options[] = {
    {"-landscape", ".landscape", XrmoptionSepArg, NULL},
    {"-relative",  ".relative",  XrmoptionNoArg,  "True"},
    {"-db",        ".db",        XrmoptionSepArg, NULL},
    {"-dbdir",     ".dbdir",     XrmoptionSepArg, NULL},
    {"-noscan",    ".noscan",    XrmoptionNoArg,  "True"},
};
XrmOptionDescRec *PTR_s__landscape_100000e0 = fsn_options;
char *fallback_resources[] = {
    "*background: #c0c0c0",
    "*foreground: black",
    NULL
};
char *glwidget_translations = NULL;

char *PTR_s_shrinkOnZoom_10008950 = "shrinkOnZoom";
char *PTR_s_monitorTimeout_100089f0 = "monitorTimeout";
char *PTR_s_mouseSpeed_10008b5c = "mouseSpeed";
char *PTR_s_groundColor_1000935c = "groundColor";
void *PTR_PTR_100094ec = NULL;
float pref_float_array[10] = {0.0f};

char *PTR_s_Please_be_patient_while_the_file_10007b64 = "Please be patient while the file system is scanned...";
char *_imsgs[] = {NULL};

/*=============================================================================
 * Zoom State
 *============================================================================*/
struct timeval zoom_start_time = {0, 0};

/*=============================================================================
 * Mouse State - for camera navigation
 *============================================================================*/
int mouse_last_x = 0;
int mouse_last_y = 0;
int mouse_button_down = 0;    /* 0=none, 1=left, 2=middle, 3=right */
float mouse_speed = 1.0f;     /* Movement speed multiplier */

/*=============================================================================
 * IRIX Compatibility
 *============================================================================*/
undefined __iob_func_result = 0;  /* IRIX stdio thread-safety check - use fast path */
