//
// Content for MICROPY_MODULE_FROZEN_STR
//
#include <stdint.h>
#define MP_FROZEN_STR_NAMES \

const uint32_t mp_frozen_str_sizes[] = { 0 };
const char mp_frozen_str_content[] = {
"\0"
};

//
// Content for MICROPY_MODULE_FROZEN_MPY
//
#include "py/mpconfig.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/emitglue.h"
#include "py/nativeglue.h"

#if MICROPY_LONGINT_IMPL != 2
#error "incompatible MICROPY_LONGINT_IMPL"
#endif

#if MPZ_DIG_SIZE != 16
#error "incompatible MPZ_DIG_SIZE"
#endif

#if MICROPY_PY_BUILTINS_FLOAT
typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;
#endif

#if MICROPY_PY_BUILTINS_COMPLEX
typedef struct _mp_obj_complex_t {
    mp_obj_base_t base;
    mp_float_t real;
    mp_float_t imag;
} mp_obj_complex_t;
#endif

enum {
    MP_QSTR__0x0a__brace_open__colon__comma_d_brace_close_k_space_free = MP_QSTRnumber_of,
    MP_QSTR__0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR__0x1b__bracket_open_2J_0x1b__bracket_open_H,
    MP_QSTR__space__space__space__space__space__space__space__space__space__space__percent_s,
    MP_QSTR__space__space__space__space__lt_dir_gt__space__percent_s,
    MP_QSTR__bang_BH,
    MP_QSTR__bang_H,
    MP_QSTR__bang_I,
    MP_QSTR__hash_,
    MP_QSTR__percent__space_9d_space__percent_s,
    MP_QSTR__paren_open_Empty_space_line_space_to_space_quit_paren_close_,
    MP_QSTR__dot_,
    MP_QSTR__dot__dot_,
    MP_QSTR__dot__slash_boot_dot_py,
    MP_QSTR__dot__slash_webrepl_cfg_dot_py,
    MP_QSTR__dot_json,
    MP_QSTR__dot_mpy,
    MP_QSTR__dot_py,
    MP_QSTR__dot_tmp,
    MP_QSTR_0_0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR_0_dot_0_dot_0_dot_0,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR_0_dot_2_dot_0,
    MP_QSTR_0_dot_6_dot_1,
    MP_QSTR_0_dot_8_dot_0,
    MP_QSTR_0_dot_8_dot_1,
    MP_QSTR_1_dot_0_dot_2,
    MP_QSTR_1_dot_3_dot_4,
    MP_QSTR__colon_,
    MP_QSTR__gt__space_,
    MP_QSTR_AIOESPNow,
    MP_QSTR_APA106,
    MP_QSTR_Authorization,
    MP_QSTR_BASE,
    MP_QSTR_Basic_space__brace_open__brace_close_,
    MP_QSTR_CLEAR,
    MP_QSTR_CONFIG,
    MP_QSTR_CRC_space_error,
    MP_QSTR_Confirm_space_password_colon__space_,
    MP_QSTR_Copying_colon_,
    MP_QSTR_D,
    MP_QSTR_DEBUG,
    MP_QSTR_DELAY,
    MP_QSTR_DELETE,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_DHTBase,
    MP_QSTR_DS18X20,
    MP_QSTR_Done,
    MP_QSTR_Downloading_space__brace_open__brace_close__space_to_space__brace_open__brace_close_,
    MP_QSTR_E,
    MP_QSTR_ESPNow,
    MP_QSTR_Error,
    MP_QSTR_Event,
    MP_QSTR_Exists_colon_,
    MP_QSTR_File_space_not_space_found_colon__space__brace_open__brace_close__space__brace_open__brace_close_,
    MP_QSTR_GET,
    MP_QSTR_HEAD,
    MP_QSTR_Host,
    MP_QSTR_IOQueue,
    MP_QSTR_Installing_space__brace_open__brace_close__space_to_space__brace_open__brace_close_,
    MP_QSTR_Invalid_space_password_space_length,
    MP_QSTR_LS,
    MP_QSTR_Lock,
    MP_QSTR_Lock_space_not_space_acquired,
    MP_QSTR_Loop,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_MQTTClient,
    MP_QSTR_MQTTException,
    MP_QSTR_Man,
    MP_QSTR_NeoPixel,
    MP_QSTR_ORDER,
    MP_QSTR_OneWire,
    MP_QSTR_OneWireError,
    MP_QSTR_PASS,
    MP_QSTR_PASS_space__equals__space__percent_r_0x0a_,
    MP_QSTR_PATCH,
    MP_QSTR_POST,
    MP_QSTR_PUT,
    MP_QSTR_PWD,
    MP_QSTR_Package_space_not_space_found_colon_,
    MP_QSTR_Passwords_space_do_space_not_space_match,
    MP_QSTR_Performing_space_initial_space_setup,
    MP_QSTR_RC,
    MP_QSTR_Response,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_Sec_hyphen_WebSocket_hyphen_Key_colon_,
    MP_QSTR_Server,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_Stream,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_TimeoutError,
    MP_QSTR_Unsupported_space_,
    MP_QSTR_Unsupported_space_epoch_colon__space__brace_open__brace_close_,
    MP_QSTR_Unsupported_space_protocol_colon__space_,
    MP_QSTR__CHUNK_SIZE,
    MP_QSTR__Remove,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR__boot_dot_py,
    MP_QSTR__cached,
    MP_QSTR__check_exists,
    MP_QSTR__chunk,
    MP_QSTR__data,
    MP_QSTR__dequeue,
    MP_QSTR__download_file,
    MP_QSTR__enqueue,
    MP_QSTR__ensure_path_exists,
    MP_QSTR__exc_context,
    MP_QSTR__exc_handler,
    MP_QSTR__install_json,
    MP_QSTR__install_package,
    MP_QSTR__io_queue,
    MP_QSTR__none_tuple,
    MP_QSTR__ow,
    MP_QSTR__promote_to_task,
    MP_QSTR__recv_len,
    MP_QSTR__rewrite_url,
    MP_QSTR__run,
    MP_QSTR__search_rom,
    MP_QSTR__send_str,
    MP_QSTR__serve,
    MP_QSTR__stop_task,
    MP_QSTR__stopper,
    MP_QSTR_accept_conn,
    MP_QSTR_accept_handler,
    MP_QSTR_aclose,
    MP_QSTR_action,
    MP_QSTR_aioespnow_dot_py,
    MP_QSTR_airecv,
    MP_QSTR_apa106_dot_py,
    MP_QSTR_arecv,
    MP_QSTR_ascii,
    MP_QSTR_asend,
    MP_QSTR_asyncio,
    MP_QSTR_asyncio_slash___init___dot_py,
    MP_QSTR_asyncio_slash_core_dot_py,
    MP_QSTR_asyncio_slash_event_dot_py,
    MP_QSTR_asyncio_slash_funcs_dot_py,
    MP_QSTR_asyncio_slash_lock_dot_py,
    MP_QSTR_asyncio_slash_stream_dot_py,
    MP_QSTR_attempts,
    MP_QSTR_attr,
    MP_QSTR_auth,
    MP_QSTR_aw,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_backlog,
    MP_QSTR_bdev,
    MP_QSTR_boot_dot_py,
    MP_QSTR_bpp,
    MP_QSTR_branch,
    MP_QSTR_call_exception_handler,
    MP_QSTR_can_squot_t_space_gather,
    MP_QSTR_cat,
    MP_QSTR_cb,
    MP_QSTR_change_daemon,
    MP_QSTR_check_bootsec,
    MP_QSTR_check_msg,
    MP_QSTR_checksum_space_error,
    MP_QSTR_choices,
    MP_QSTR_cl,
    MP_QSTR_clean_session,
    MP_QSTR_client_id,
    MP_QSTR_client_s,
    MP_QSTR_content,
    MP_QSTR_context,
    MP_QSTR_convert_temp,
    MP_QSTR_core,
    MP_QSTR_coro_equals_,
    MP_QSTR_coroutine_space_expected,
    MP_QSTR_cp,
    MP_QSTR_create_task,
    MP_QSTR_current_task,
    MP_QSTR_d,
    MP_QSTR_default_exception_handler,
    MP_QSTR_delay,
    MP_QSTR_delete,
    MP_QSTR_deps,
    MP_QSTR_dest,
    MP_QSTR_dht_dot_py,
    MP_QSTR_diff,
    MP_QSTR_disabled,
    MP_QSTR_drain,
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR_dt,
    MP_QSTR_enabled,
    MP_QSTR_er,
    MP_QSTR_espnow,
    MP_QSTR_espnow_dot_py,
    MP_QSTR_event,
    MP_QSTR_exc,
    MP_QSTR_exc_type,
    MP_QSTR_exception,
    MP_QSTR_exists,
    MP_QSTR_f,
    MP_QSTR_ffat,
    MP_QSTR_flashbdev,
    MP_QSTR_flashbdev_dot_py,
    MP_QSTR_fname,
    MP_QSTR_fs_corrupted,
    MP_QSTR_funcs,
    MP_QSTR_future,
    MP_QSTR_future_colon_,
    MP_QSTR_gather,
    MP_QSTR_get_daemon_status,
    MP_QSTR_get_event_loop,
    MP_QSTR_get_exception_handler,
    MP_QSTR_get_extra_info,
    MP_QSTR_getpass,
    MP_QSTR_github_colon_,
    MP_QSTR_hashes,
    MP_QSTR_head,
    MP_QSTR_headers,
    MP_QSTR_host,
    MP_QSTR_http_colon_,
    MP_QSTR_http_colon__slash__slash_,
    MP_QSTR_https_colon_,
    MP_QSTR_https_colon__slash__slash_,
    MP_QSTR_humidity,
    MP_QSTR_i,
    MP_QSTR_idx,
    MP_QSTR_import_space_webrepl,
    MP_QSTR_in_reconnect,
    MP_QSTR_inisetup,
    MP_QSTR_inisetup_dot_py,
    MP_QSTR_input_choice,
    MP_QSTR_input_pass,
    MP_QSTR_install,
    MP_QSTR_irecv,
    MP_QSTR_is_set,
    MP_QSTR_keepalive,
    MP_QSTR_l_rom,
    MP_QSTR_latest,
    MP_QSTR_listen_s,
    MP_QSTR_listen_sock,
    MP_QSTR_ls,
    MP_QSTR_lw_msg,
    MP_QSTR_lw_qos,
    MP_QSTR_lw_retain,
    MP_QSTR_lw_topic,
    MP_QSTR_main_task,
    MP_QSTR_man,
    MP_QSTR_measure,
    MP_QSTR_message,
    MP_QSTR_method,
    MP_QSTR_mip_slash___init___dot_py,
    MP_QSTR_mpy,
    MP_QSTR_mqtt_space_reconnect_colon__space__percent_r,
    MP_QSTR_mqtt_colon__space__percent_r,
    MP_QSTR_msg,
    MP_QSTR_mv,
    MP_QSTR_n,
    MP_QSTR_neopixel,
    MP_QSTR_neopixel_dot_py,
    MP_QSTR_new_event_loop,
    MP_QSTR_newfile,
    MP_QSTR_ntptime_dot_py,
    MP_QSTR_onewire_dot_py,
    MP_QSTR_open_connection,
    MP_QSTR_out_buf,
    MP_QSTR_ow,
    MP_QSTR_package,
    MP_QSTR_package_dot_json,
    MP_QSTR_package_json_url,
    MP_QSTR_parse_headers,
    MP_QSTR_patch,
    MP_QSTR_peername,
    MP_QSTR_pid,
    MP_QSTR_ping,
    MP_QSTR_poller,
    MP_QSTR_pool_dot_ntp_dot_org,
    MP_QSTR_port,
    MP_QSTR_post,
    MP_QSTR_prompt,
    MP_QSTR_pswd,
    MP_QSTR_publish,
    MP_QSTR_pwd,
    MP_QSTR_py,
    MP_QSTR_pyb,
    MP_QSTR_pyboard,
    MP_QSTR_qos,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_raw,
    MP_QSTR_read_scratch,
    MP_QSTR_read_temp,
    MP_QSTR_readexactly,
    MP_QSTR_reason,
    MP_QSTR_reconnect,
    MP_QSTR_recursive,
    MP_QSTR_rejected,
    MP_QSTR_req,
    MP_QSTR_request,
    MP_QSTR_requesting,
    MP_QSTR_requests,
    MP_QSTR_requests_slash___init___dot_py,
    MP_QSTR_required,
    MP_QSTR_respkey_colon_,
    MP_QSTR_retain,
    MP_QSTR_return_exceptions,
    MP_QSTR_rm,
    MP_QSTR_rm_space_of_space__squot__percent_s_squot__space_failed,
    MP_QSTR_rom,
    MP_QSTR_run_forever,
    MP_QSTR_run_until_complete,
    MP_QSTR_runq_len,
    MP_QSTR_rwb,
    MP_QSTR_s,
    MP_QSTR_select_rom,
    MP_QSTR_send_html,
    MP_QSTR_server,
    MP_QSTR_server_handshake,
    MP_QSTR_set_callback,
    MP_QSTR_set_exception_handler,
    MP_QSTR_set_last_will,
    MP_QSTR_settime,
    MP_QSTR_setup,
    MP_QSTR_setup_conn,
    MP_QSTR_sgen,
    MP_QSTR_short_hash,
    MP_QSTR_simple,
    MP_QSTR_sock,
    MP_QSTR_src,
    MP_QSTR_ssl_params,
    MP_QSTR_start_foreground,
    MP_QSTR_start_server,
    MP_QSTR_static_host,
    MP_QSTR_status_code,
    MP_QSTR_stream,
    MP_QSTR_stream_awrite,
    MP_QSTR_subscribe,
    MP_QSTR_sz,
    MP_QSTR_t,
    MP_QSTR_target,
    MP_QSTR_task,
    MP_QSTR_tb,
    MP_QSTR_temperature,
    MP_QSTR_ticks,
    MP_QSTR_timing,
    MP_QSTR_topic,
    MP_QSTR_uasyncio,
    MP_QSTR_uasyncio_dot_py,
    MP_QSTR_ubinascii,
    MP_QSTR_ujson,
    MP_QSTR_umqtt_slash_robust_dot_py,
    MP_QSTR_umqtt_slash_simple_dot_py,
    MP_QSTR_upysh_dot_py,
    MP_QSTR_urequests_dot_py,
    MP_QSTR_url,
    MP_QSTR_urls,
    MP_QSTR_user,
    MP_QSTR_usocket,
    MP_QSTR_ussl,
    MP_QSTR_ustruct,
    MP_QSTR_utime,
    MP_QSTR_v,
    MP_QSTR_vfs,
    MP_QSTR_w,
    MP_QSTR_wait,
    MP_QSTR_wait_closed,
    MP_QSTR_wait_for,
    MP_QSTR_wait_for_ms,
    MP_QSTR_wait_io_event,
    MP_QSTR_wait_msg,
    MP_QSTR_waiter,
    MP_QSTR_waiting,
    MP_QSTR_waitq_len,
    MP_QSTR_webrepl,
    MP_QSTR_webrepl_dot_py,
    MP_QSTR_webrepl_dot_start_paren_open__paren_close_,
    MP_QSTR_webrepl_cfg,
    MP_QSTR_webrepl_setup_dot_py,
    MP_QSTR_write_scratch,
    MP_QSTR_y,
    MP_QSTR__brace_open__brace_close__slash_file_slash__brace_open__brace_close__slash__brace_open__brace_close_,
    MP_QSTR__brace_open__brace_close__slash_package_slash__brace_open__brace_close__slash__brace_open__brace_close__slash__brace_open__brace_close__dot_json,
};

const qstr_hash_t mp_qstr_frozen_const_hashes[] = {
    27620,
    40133,
    21,
    47859,
    49998,
    12110,
    26188,
    26189,
    46470,
    28331,
    39613,
    46475,
    26309,
    27925,
    32613,
    16755,
    7567,
    14722,
    31778,
    1365,
    64203,
    26900,
    23831,
    27922,
    17693,
    17692,
    27926,
    24851,
    46495,
    26843,
    57554,
    20130,
    40382,
    9712,
    57753,
    40860,
    48783,
    53071,
    25106,
    31962,
    46561,
    27956,
    33968,
    11292,
    32861,
    33021,
    28456,
    45825,
    51237,
    17354,
    46560,
    43861,
    4573,
    35561,
    1983,
    11802,
    48915,
    32237,
    64005,
    26002,
    40031,
    22679,
    29530,
    59534,
    43943,
    59673,
    20921,
    2816,
    62926,
    50119,
    33641,
    26955,
    55400,
    23888,
    61364,
    64660,
    55275,
    6461,
    3220,
    3398,
    20518,
    36388,
    7181,
    29844,
    5830,
    28580,
    4555,
    35752,
    2976,
    12601,
    55353,
    39580,
    35638,
    9558,
    19302,
    18832,
    17597,
    38204,
    14203,
    37244,
    38975,
    24346,
    15787,
    6226,
    7715,
    49025,
    30442,
    49770,
    53815,
    26816,
    9133,
    13092,
    52355,
    55644,
    7934,
    43474,
    6295,
    8066,
    24914,
    35040,
    37796,
    58803,
    32507,
    14476,
    55469,
    5648,
    12837,
    48726,
    36290,
    24658,
    60251,
    37845,
    38415,
    57253,
    39142,
    22356,
    24376,
    44357,
    63415,
    61558,
    25345,
    46624,
    16486,
    35185,
    26331,
    48310,
    47277,
    28211,
    49657,
    2796,
    43370,
    12400,
    47476,
    18887,
    22033,
    19688,
    4535,
    19379,
    28388,
    54096,
    28927,
    39173,
    53040,
    39069,
    28394,
    35073,
    8302,
    18128,
    55724,
    55546,
    15425,
    56254,
    21001,
    50473,
    28406,
    21139,
    8734,
    46529,
    45889,
    19536,
    59292,
    60551,
    60707,
    56666,
    64712,
    18645,
    18805,
    26790,
    28053,
    40672,
    28082,
    35349,
    20626,
    27081,
    9435,
    52220,
    60370,
    25861,
    46531,
    1904,
    62912,
    59367,
    21988,
    25555,
    27400,
    14592,
    22842,
    2184,
    49387,
    19971,
    60604,
    16583,
    58434,
    22202,
    34369,
    24045,
    43945,
    13605,
    3847,
    59623,
    63796,
    4820,
    44924,
    46540,
    21584,
    42115,
    26196,
    46092,
    7083,
    17127,
    59261,
    56068,
    23790,
    58562,
    1385,
    41766,
    27646,
    59904,
    32199,
    28314,
    17400,
    21612,
    34404,
    58496,
    31740,
    17319,
    44573,
    48238,
    22682,
    29955,
    17857,
    17533,
    63572,
    18044,
    28350,
    46539,
    41065,
    49582,
    3209,
    41535,
    16733,
    55311,
    25560,
    30085,
    28541,
    51135,
    23177,
    21804,
    44963,
    40587,
    8320,
    29688,
    62037,
    42221,
    33769,
    55388,
    55357,
    40417,
    34485,
    27228,
    28710,
    28684,
    29166,
    38486,
    30696,
    52601,
    8726,
    35809,
    36436,
    12004,
    23753,
    59329,
    4460,
    3711,
    8523,
    35683,
    45172,
    56532,
    48775,
    26741,
    19500,
    47804,
    11104,
    47572,
    28890,
    26822,
    35765,
    25036,
    37871,
    52773,
    34978,
    46550,
    20450,
    3579,
    10432,
    50376,
    43409,
    5288,
    6291,
    35858,
    706,
    59505,
    32154,
    17434,
    19467,
    40913,
    36103,
    30954,
    31393,
    63679,
    44450,
    62819,
    54361,
    59482,
    2061,
    28908,
    46545,
    14068,
    40488,
    28563,
    57065,
    2115,
    9013,
    55556,
    6704,
    55575,
    35012,
    12520,
    33545,
    40458,
    50373,
    36405,
    25486,
    54589,
    61780,
    117,
    61980,
    2119,
    40421,
    46547,
    31366,
    46546,
    21902,
    29411,
    40746,
    25035,
    6948,
    43752,
    60665,
    31214,
    21895,
    25086,
    20377,
    30641,
    803,
    59393,
    8251,
    46556,
    38218,
    18473,
};

const qstr_len_t mp_qstr_frozen_const_lengths[] = {
    12,
    4,
    7,
    12,
    12,
    3,
    2,
    2,
    1,
    7,
    20,
    1,
    2,
    9,
    16,
    5,
    4,
    3,
    4,
    5,
    7,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    1,
    2,
    9,
    6,
    13,
    4,
    8,
    5,
    6,
    9,
    18,
    8,
    1,
    5,
    5,
    6,
    5,
    5,
    7,
    7,
    4,
    20,
    1,
    6,
    5,
    5,
    7,
    21,
    3,
    4,
    4,
    7,
    19,
    23,
    2,
    4,
    17,
    4,
    9,
    10,
    13,
    3,
    8,
    5,
    7,
    12,
    4,
    10,
    5,
    4,
    3,
    3,
    18,
    22,
    24,
    2,
    8,
    10,
    8,
    18,
    6,
    18,
    6,
    12,
    12,
    14,
    12,
    12,
    21,
    22,
    11,
    7,
    11,
    6,
    8,
    7,
    13,
    6,
    5,
    8,
    14,
    8,
    19,
    12,
    12,
    13,
    16,
    9,
    11,
    3,
    16,
    9,
    12,
    4,
    11,
    9,
    6,
    10,
    8,
    11,
    14,
    6,
    6,
    12,
    6,
    9,
    5,
    5,
    5,
    7,
    19,
    15,
    16,
    16,
    15,
    17,
    8,
    4,
    4,
    2,
    6,
    9,
    7,
    4,
    7,
    3,
    6,
    22,
    12,
    3,
    2,
    13,
    13,
    9,
    14,
    7,
    2,
    13,
    9,
    8,
    7,
    7,
    12,
    4,
    5,
    18,
    2,
    11,
    12,
    1,
    25,
    5,
    6,
    4,
    4,
    6,
    4,
    8,
    5,
    10,
    2,
    7,
    2,
    6,
    9,
    5,
    3,
    8,
    9,
    6,
    1,
    4,
    9,
    12,
    5,
    12,
    5,
    6,
    7,
    6,
    17,
    14,
    21,
    14,
    7,
    7,
    6,
    4,
    7,
    4,
    5,
    7,
    6,
    8,
    8,
    1,
    3,
    14,
    12,
    8,
    11,
    12,
    10,
    7,
    5,
    6,
    9,
    5,
    6,
    8,
    11,
    2,
    6,
    6,
    9,
    8,
    9,
    3,
    7,
    7,
    6,
    15,
    3,
    18,
    8,
    3,
    2,
    1,
    8,
    11,
    14,
    7,
    10,
    10,
    15,
    7,
    2,
    7,
    12,
    16,
    13,
    5,
    8,
    3,
    4,
    6,
    12,
    4,
    4,
    6,
    4,
    7,
    3,
    2,
    3,
    7,
    3,
    10,
    11,
    3,
    12,
    9,
    11,
    6,
    9,
    9,
    8,
    3,
    7,
    10,
    8,
    20,
    8,
    8,
    6,
    17,
    2,
    17,
    3,
    11,
    18,
    8,
    3,
    1,
    10,
    9,
    6,
    16,
    12,
    21,
    13,
    7,
    5,
    10,
    4,
    10,
    6,
    4,
    3,
    10,
    16,
    12,
    11,
    11,
    6,
    13,
    9,
    2,
    1,
    6,
    4,
    2,
    11,
    5,
    6,
    5,
    8,
    11,
    9,
    5,
    15,
    15,
    8,
    12,
    3,
    4,
    4,
    7,
    4,
    7,
    5,
    1,
    3,
    1,
    4,
    11,
    8,
    11,
    13,
    8,
    6,
    7,
    9,
    7,
    10,
    15,
    11,
    16,
    13,
    1,
    13,
    24,
};

extern const qstr_pool_t mp_qstr_const_pool;
const qstr_pool_t mp_qstr_frozen_const_pool = {
    &mp_qstr_const_pool, // previous pool
    MP_QSTRnumber_of, // previous pool size
    true, // is_sorted
    10, // allocated entries
    380, // used entries
    (qstr_hash_t *)mp_qstr_frozen_const_hashes,
    (qstr_len_t *)mp_qstr_frozen_const_lengths,
    {
        "\x0a\x7b\x3a\x2c\x64\x7d\x6b\x20\x66\x72\x65\x65",
        "\x0d\x0a\x0d\x0a",
        "\x1b\x5b\x32\x4a\x1b\x5b\x48",
        "          %s",
        "    <dir> %s",
        "!BH",
        "!H",
        "!I",
        "#",
        "% 9d %s",
        "(Empty line to quit)",
        ".",
        "..",
        "./boot.py",
        "./webrepl_cfg.py",
        ".json",
        ".mpy",
        ".py",
        ".tmp",
        "\x30\x0d\x0a\x0d\x0a",
        "0.0.0.0",
        "0.1.0",
        "0.2.0",
        "0.6.1",
        "0.8.0",
        "0.8.1",
        "1.0.2",
        "1.3.4",
        ":",
        "> ",
        "AIOESPNow",
        "APA106",
        "Authorization",
        "BASE",
        "Basic {}",
        "CLEAR",
        "CONFIG",
        "CRC error",
        "Confirm password: ",
        "Copying:",
        "D",
        "DEBUG",
        "DELAY",
        "DELETE",
        "DHT11",
        "DHT22",
        "DHTBase",
        "DS18X20",
        "Done",
        "Downloading {} to {}",
        "E",
        "ESPNow",
        "Error",
        "Event",
        "Exists:",
        "File not found: {} {}",
        "GET",
        "HEAD",
        "Host",
        "IOQueue",
        "Installing {} to {}",
        "Invalid password length",
        "LS",
        "Lock",
        "Lock not acquired",
        "Loop",
        "MATCH_ROM",
        "MQTTClient",
        "MQTTException",
        "Man",
        "NeoPixel",
        "ORDER",
        "OneWire",
        "OneWireError",
        "PASS",
        "\x50\x41\x53\x53\x20\x3d\x20\x25\x72\x0a",
        "PATCH",
        "POST",
        "PUT",
        "PWD",
        "Package not found:",
        "Passwords do not match",
        "Performing initial setup",
        "RC",
        "Response",
        "SEARCH_ROM",
        "SKIP_ROM",
        "Sec-WebSocket-Key:",
        "Server",
        "SingletonGenerator",
        "Stream",
        "StreamReader",
        "StreamWriter",
        "ThreadSafeFlag",
        "TimeoutError",
        "Unsupported ",
        "Unsupported epoch: {}",
        "Unsupported protocol: ",
        "_CHUNK_SIZE",
        "_Remove",
        "__version__",
        "_attrs",
        "_boot.py",
        "_cached",
        "_check_exists",
        "_chunk",
        "_data",
        "_dequeue",
        "_download_file",
        "_enqueue",
        "_ensure_path_exists",
        "_exc_context",
        "_exc_handler",
        "_install_json",
        "_install_package",
        "_io_queue",
        "_none_tuple",
        "_ow",
        "_promote_to_task",
        "_recv_len",
        "_rewrite_url",
        "_run",
        "_search_rom",
        "_send_str",
        "_serve",
        "_stop_task",
        "_stopper",
        "accept_conn",
        "accept_handler",
        "aclose",
        "action",
        "aioespnow.py",
        "airecv",
        "apa106.py",
        "arecv",
        "ascii",
        "asend",
        "asyncio",
        "asyncio/__init__.py",
        "asyncio/core.py",
        "asyncio/event.py",
        "asyncio/funcs.py",
        "asyncio/lock.py",
        "asyncio/stream.py",
        "attempts",
        "attr",
        "auth",
        "aw",
        "awrite",
        "awritestr",
        "backlog",
        "bdev",
        "boot.py",
        "bpp",
        "branch",
        "call_exception_handler",
        "can't gather",
        "cat",
        "cb",
        "change_daemon",
        "check_bootsec",
        "check_msg",
        "checksum error",
        "choices",
        "cl",
        "clean_session",
        "client_id",
        "client_s",
        "content",
        "context",
        "convert_temp",
        "core",
        "coro=",
        "coroutine expected",
        "cp",
        "create_task",
        "current_task",
        "d",
        "default_exception_handler",
        "delay",
        "delete",
        "deps",
        "dest",
        "dht.py",
        "diff",
        "disabled",
        "drain",
        "ds18x20.py",
        "dt",
        "enabled",
        "er",
        "espnow",
        "espnow.py",
        "event",
        "exc",
        "exc_type",
        "exception",
        "exists",
        "f",
        "ffat",
        "flashbdev",
        "flashbdev.py",
        "fname",
        "fs_corrupted",
        "funcs",
        "future",
        "future:",
        "gather",
        "get_daemon_status",
        "get_event_loop",
        "get_exception_handler",
        "get_extra_info",
        "getpass",
        "github:",
        "hashes",
        "head",
        "headers",
        "host",
        "http:",
        "http://",
        "https:",
        "https://",
        "humidity",
        "i",
        "idx",
        "import webrepl",
        "in_reconnect",
        "inisetup",
        "inisetup.py",
        "input_choice",
        "input_pass",
        "install",
        "irecv",
        "is_set",
        "keepalive",
        "l_rom",
        "latest",
        "listen_s",
        "listen_sock",
        "ls",
        "lw_msg",
        "lw_qos",
        "lw_retain",
        "lw_topic",
        "main_task",
        "man",
        "measure",
        "message",
        "method",
        "mip/__init__.py",
        "mpy",
        "mqtt reconnect: %r",
        "mqtt: %r",
        "msg",
        "mv",
        "n",
        "neopixel",
        "neopixel.py",
        "new_event_loop",
        "newfile",
        "ntptime.py",
        "onewire.py",
        "open_connection",
        "out_buf",
        "ow",
        "package",
        "package.json",
        "package_json_url",
        "parse_headers",
        "patch",
        "peername",
        "pid",
        "ping",
        "poller",
        "pool.ntp.org",
        "port",
        "post",
        "prompt",
        "pswd",
        "publish",
        "pwd",
        "py",
        "pyb",
        "pyboard",
        "qos",
        "queue_read",
        "queue_write",
        "raw",
        "read_scratch",
        "read_temp",
        "readexactly",
        "reason",
        "reconnect",
        "recursive",
        "rejected",
        "req",
        "request",
        "requesting",
        "requests",
        "requests/__init__.py",
        "required",
        "respkey:",
        "retain",
        "return_exceptions",
        "rm",
        "rm of '%s' failed",
        "rom",
        "run_forever",
        "run_until_complete",
        "runq_len",
        "rwb",
        "s",
        "select_rom",
        "send_html",
        "server",
        "server_handshake",
        "set_callback",
        "set_exception_handler",
        "set_last_will",
        "settime",
        "setup",
        "setup_conn",
        "sgen",
        "short_hash",
        "simple",
        "sock",
        "src",
        "ssl_params",
        "start_foreground",
        "start_server",
        "static_host",
        "status_code",
        "stream",
        "stream_awrite",
        "subscribe",
        "sz",
        "t",
        "target",
        "task",
        "tb",
        "temperature",
        "ticks",
        "timing",
        "topic",
        "uasyncio",
        "uasyncio.py",
        "ubinascii",
        "ujson",
        "umqtt/robust.py",
        "umqtt/simple.py",
        "upysh.py",
        "urequests.py",
        "url",
        "urls",
        "user",
        "usocket",
        "ussl",
        "ustruct",
        "utime",
        "v",
        "vfs",
        "w",
        "wait",
        "wait_closed",
        "wait_for",
        "wait_for_ms",
        "wait_io_event",
        "wait_msg",
        "waiter",
        "waiting",
        "waitq_len",
        "webrepl",
        "webrepl.py",
        "webrepl.start()",
        "webrepl_cfg",
        "webrepl_setup.py",
        "write_scratch",
        "y",
        "{}/file/{}/{}",
        "{}/package/{}/{}/{}.json",
    },
};

////////////////////////////////////////////////////////////////////////////////
// frozen module _boot
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/_boot.mpy
// - frozen file name: _boot.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file _boot.py, scope _boot__lt_module_gt_
static const byte fun_data__boot__lt_module_gt_[87] = {
    0x2c,0x12, // prelude
    0x01, // names: <module>
    0x26,0x26,0x4c,0x22,0x24,0x54,0x46,0x4b, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'gc'
    0x16,0x02, // STORE_NAME 'gc'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'os'
    0x16,0x03, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'bdev'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'flashbdev'
    0x1c,0x04, // IMPORT_FROM 'bdev'
    0x16,0x04, // STORE_NAME 'bdev'
    0x59, // POP_TOP
    0x48,0x11, // SETUP_EXCEPT 17
    0x11,0x04, // LOAD_NAME 'bdev'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x11,0x03, // LOAD_NAME 'os'
    0x14,0x06, // LOAD_METHOD 'mount'
    0x11,0x04, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x4a,0x18, // POP_EXCEPT_JUMP 24
    0x57, // DUP_TOP
    0x11,0x0b, // LOAD_NAME 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x51, // POP_JUMP_IF_FALSE 17
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'inisetup'
    0x16,0x08, // STORE_NAME 'inisetup'
    0x11,0x08, // LOAD_NAME 'inisetup'
    0x14,0x09, // LOAD_METHOD 'setup'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0c, // STORE_NAME 'vfs'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x11,0x02, // LOAD_NAME 'gc'
    0x14,0x0a, // LOAD_METHOD 'collect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code__boot__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data__boot__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 87,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data__boot__lt_module_gt_ + 3,
        .line_info_top = fun_data__boot__lt_module_gt_ + 11,
        .opcodes = fun_data__boot__lt_module_gt_ + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data__boot[13] = {
    MP_QSTR__boot_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_gc,
    MP_QSTR_os,
    MP_QSTR_bdev,
    MP_QSTR_flashbdev,
    MP_QSTR_mount,
    MP_QSTR__slash_,
    MP_QSTR_inisetup,
    MP_QSTR_setup,
    MP_QSTR_collect,
    MP_QSTR_OSError,
    MP_QSTR_vfs,
};

static const mp_frozen_module_t frozen_module__boot = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data__boot,
        .obj_table = NULL,
    },
    .rc = &raw_code__boot__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module inisetup
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/inisetup.mpy
// - frozen file name: inisetup.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file inisetup.py, scope inisetup__lt_module_gt_
static const byte fun_data_inisetup__lt_module_gt_[41] = {
    0x08,0x0e, // prelude
    0x01, // names: <module>
    0x26,0x6c,0x84,0x0d,0x84,0x13, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'os'
    0x16,0x02, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING 'bdev'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x04, // IMPORT_NAME 'flashbdev'
    0x1c,0x03, // IMPORT_FROM 'bdev'
    0x16,0x03, // STORE_NAME 'bdev'
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME 'check_bootsec'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x08, // STORE_NAME 'fs_corrupted'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'setup'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of inisetup__lt_module_gt_
// frozen bytecode for file inisetup.py, scope inisetup_check_bootsec
static const byte fun_data_inisetup_check_bootsec[72] = {
    0x40,0x18, // prelude
    0x05, // names: check_bootsec
    0x60,0x40,0x2d,0x29,0x22,0x25,0x27,0x22,0x28,0x23,0x22, // code info
    0x12,0x19, // LOAD_GLOBAL 'bytearray'
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x14,0x06, // LOAD_METHOD 'ioctl'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0xc0, // STORE_FAST 0
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x14,0x07, // LOAD_METHOD 'readblocks'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x12, // FOR_ITER 18
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x50, // LOAD_CONST_FALSE
    0xc1, // STORE_FAST 1
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x2c, // JUMP -20
    0xb1, // LOAD_FAST 1
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
    0x12,0x08, // LOAD_GLOBAL 'fs_corrupted'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_inisetup_check_bootsec = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_inisetup_check_bootsec,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 72,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_inisetup_check_bootsec + 3,
        .line_info_top = fun_data_inisetup_check_bootsec + 14,
        .opcodes = fun_data_inisetup_check_bootsec + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of inisetup__lt_module_gt_
// frozen bytecode for file inisetup.py, scope inisetup_fs_corrupted
static const byte fun_data_inisetup_fs_corrupted[47] = {
    0x20,0x14, // prelude
    0x08, // names: fs_corrupted
    0x80,0x12,0x25,0x65,0x47,0x20,0x22,0x85,0x07, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x09, // IMPORT_NAME 'time'
    0xc0, // STORE_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0a, // IMPORT_NAME 'micropython'
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x0b, // LOAD_METHOD 'kbd_intr'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x1a, // LOAD_GLOBAL 'print'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x0c, // LOAD_METHOD 'sleep'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x30, // JUMP -16
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_inisetup_fs_corrupted = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_inisetup_fs_corrupted,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 47,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_inisetup_fs_corrupted + 3,
        .line_info_top = fun_data_inisetup_fs_corrupted + 12,
        .opcodes = fun_data_inisetup_fs_corrupted + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of inisetup__lt_module_gt_
// frozen bytecode for file inisetup.py, scope inisetup_setup
static const byte fun_data_inisetup_setup[134] = {
    0x34,0x20, // prelude
    0x0d, // names: setup
    0x80,0x25,0x25,0x27,0x2d,0x2b,0x2b,0x2d,0x2b,0x2b,0x2a,0x2b,0x23,0x88,0x08, // code info
    0x12,0x05, // LOAD_GLOBAL 'check_bootsec'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x12,0x1a, // LOAD_GLOBAL 'print'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x14,0x0e, // LOAD_METHOD 'info'
    0x36,0x00, // CALL_METHOD 0
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0x10,0x0f, // LOAD_CONST_STRING 'vfs'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x13,0x10, // LOAD_ATTR 'VfsLfs2'
    0x14,0x11, // LOAD_METHOD 'mkfs'
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x14,0x10, // LOAD_METHOD 'VfsLfs2'
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x42,0x63, // JUMP 35
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x14,0x0e, // LOAD_METHOD 'info'
    0x36,0x00, // CALL_METHOD 0
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0x10,0x12, // LOAD_CONST_STRING 'ffat'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x13,0x13, // LOAD_ATTR 'VfsFat'
    0x14,0x11, // LOAD_METHOD 'mkfs'
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x14,0x13, // LOAD_METHOD 'VfsFat'
    0x12,0x03, // LOAD_GLOBAL 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x42,0x40, // JUMP 0
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x14,0x14, // LOAD_METHOD 'mount'
    0xb0, // LOAD_FAST 0
    0x10,0x15, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x12,0x1b, // LOAD_GLOBAL 'open'
    0x10,0x16, // LOAD_CONST_STRING 'boot.py'
    0x10,0x17, // LOAD_CONST_STRING 'w'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x0a, // SETUP_WITH 10
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x18, // LOAD_METHOD 'write'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_inisetup_setup = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_inisetup_setup,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 134,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_inisetup_setup + 3,
        .line_info_top = fun_data_inisetup_setup + 18,
        .opcodes = fun_data_inisetup_setup + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_inisetup__lt_module_gt_[] = {
    &raw_code_inisetup_check_bootsec,
    &raw_code_inisetup_fs_corrupted,
    &raw_code_inisetup_setup,
};

static const mp_raw_code_t raw_code_inisetup__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_inisetup__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = (void *)&children_inisetup__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_inisetup__lt_module_gt_ + 3,
        .line_info_top = fun_data_inisetup__lt_module_gt_ + 9,
        .opcodes = fun_data_inisetup__lt_module_gt_ + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_inisetup[28] = {
    MP_QSTR_inisetup_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_os,
    MP_QSTR_bdev,
    MP_QSTR_flashbdev,
    MP_QSTR_check_bootsec,
    MP_QSTR_ioctl,
    MP_QSTR_readblocks,
    MP_QSTR_fs_corrupted,
    MP_QSTR_time,
    MP_QSTR_micropython,
    MP_QSTR_kbd_intr,
    MP_QSTR_sleep,
    MP_QSTR_setup,
    MP_QSTR_info,
    MP_QSTR_vfs,
    MP_QSTR_VfsLfs2,
    MP_QSTR_mkfs,
    MP_QSTR_ffat,
    MP_QSTR_VfsFat,
    MP_QSTR_mount,
    MP_QSTR__slash_,
    MP_QSTR_boot_dot_py,
    MP_QSTR_w,
    MP_QSTR_write,
    MP_QSTR_bytearray,
    MP_QSTR_print,
    MP_QSTR_open,
};

// constants
static const mp_obj_str_t const_obj_inisetup_0 = {{&mp_type_str}, 55993, 258, (const byte*)"\x54\x68\x65\x20\x66\x69\x6c\x65\x73\x79\x73\x74\x65\x6d\x20\x61\x70\x70\x65\x61\x72\x73\x20\x74\x6f\x20\x62\x65\x20\x63\x6f\x72\x72\x75\x70\x74\x65\x64\x2e\x20\x49\x66\x20\x79\x6f\x75\x20\x68\x61\x64\x20\x69\x6d\x70\x6f\x72\x74\x61\x6e\x74\x20\x64\x61\x74\x61\x20\x74\x68\x65\x72\x65\x2c\x20\x79\x6f\x75\x0a\x6d\x61\x79\x20\x77\x61\x6e\x74\x20\x74\x6f\x20\x6d\x61\x6b\x65\x20\x61\x20\x66\x6c\x61\x73\x68\x20\x73\x6e\x61\x70\x73\x68\x6f\x74\x20\x74\x6f\x20\x74\x72\x79\x20\x74\x6f\x20\x72\x65\x63\x6f\x76\x65\x72\x20\x69\x74\x2e\x20\x4f\x74\x68\x65\x72\x77\x69\x73\x65\x2c\x20\x70\x65\x72\x66\x6f\x72\x6d\x0a\x66\x61\x63\x74\x6f\x72\x79\x20\x72\x65\x70\x72\x6f\x67\x72\x61\x6d\x6d\x69\x6e\x67\x20\x6f\x66\x20\x4d\x69\x63\x72\x6f\x50\x79\x74\x68\x6f\x6e\x20\x66\x69\x72\x6d\x77\x61\x72\x65\x20\x28\x63\x6f\x6d\x70\x6c\x65\x74\x65\x6c\x79\x20\x65\x72\x61\x73\x65\x20\x66\x6c\x61\x73\x68\x2c\x20\x66\x6f\x6c\x6c\x6f\x77\x65\x64\x0a\x62\x79\x20\x66\x69\x72\x6d\x77\x61\x72\x65\x20\x70\x72\x6f\x67\x72\x61\x6d\x6d\x69\x6e\x67\x29\x2e\x0a"};
static const mp_obj_str_t const_obj_inisetup_2 = {{&mp_type_str}, 18582, 139, (const byte*)"\x23\x20\x54\x68\x69\x73\x20\x66\x69\x6c\x65\x20\x69\x73\x20\x65\x78\x65\x63\x75\x74\x65\x64\x20\x6f\x6e\x20\x65\x76\x65\x72\x79\x20\x62\x6f\x6f\x74\x20\x28\x69\x6e\x63\x6c\x75\x64\x69\x6e\x67\x20\x77\x61\x6b\x65\x2d\x62\x6f\x6f\x74\x20\x66\x72\x6f\x6d\x20\x64\x65\x65\x70\x73\x6c\x65\x65\x70\x29\x0a\x23\x69\x6d\x70\x6f\x72\x74\x20\x65\x73\x70\x0a\x23\x65\x73\x70\x2e\x6f\x73\x64\x65\x62\x75\x67\x28\x4e\x6f\x6e\x65\x29\x0a\x23\x69\x6d\x70\x6f\x72\x74\x20\x77\x65\x62\x72\x65\x70\x6c\x0a\x23\x77\x65\x62\x72\x65\x70\x6c\x2e\x73\x74\x61\x72\x74\x28\x29\x0a"};

// constant table
static const mp_rom_obj_t const_obj_table_data_inisetup[3] = {
    MP_ROM_PTR(&const_obj_inisetup_0),
    MP_ROM_QSTR(MP_QSTR_Performing_space_initial_space_setup),
    MP_ROM_PTR(&const_obj_inisetup_2),
};

static const mp_frozen_module_t frozen_module_inisetup = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_inisetup,
        .obj_table = (mp_obj_t *)&const_obj_table_data_inisetup,
    },
    .rc = &raw_code_inisetup__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module espnow
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/espnow.mpy
// - frozen file name: espnow.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file espnow.py, scope espnow__lt_module_gt_
static const byte fun_data_espnow__lt_module_gt_[26] = {
    0x18,0x06, // prelude
    0x01, // names: <module>
    0x60,0x68, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME '_espnow'
    0x69, // IMPORT_STAR
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'ESPNow'
    0x11,0x0f, // LOAD_NAME 'ESPNowBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x04, // STORE_NAME 'ESPNow'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of espnow__lt_module_gt_
// frozen bytecode for file espnow.py, scope espnow_ESPNow
static const byte fun_data_espnow_ESPNow[76] = {
    0x18,0x19, // prelude
    0x04, // names: ESPNow
    0x88,0x08,0x2b,0x44,0x66,0x68,0x20,0x68,0x20,0x66,0x64,0x00, // code info
    0x11,0x10, // LOAD_NAME '__name__'
    0x16,0x11, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'ESPNow'
    0x16,0x12, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x11,0x13, // LOAD_NAME 'bytearray'
    0x11,0x14, // LOAD_NAME 'MAX_DATA_LEN'
    0x34,0x01, // CALL_FUNCTION 1
    0x2b,0x02, // BUILD_LIST 2
    0x16,0x08, // STORE_NAME '_data'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x09, // STORE_NAME '_none_tuple'
    0xb0, // LOAD_FAST 0
    0x20,0x00,0x01, // MAKE_CLOSURE 0
    0x16,0x05, // STORE_NAME '__init__'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x06, // STORE_NAME 'irecv'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x02, // MAKE_FUNCTION_DEFARGS 2
    0x16,0x0a, // STORE_NAME 'recv'
    0xb0, // LOAD_FAST 0
    0x20,0x03,0x01, // MAKE_CLOSURE 3
    0x16,0x0b, // STORE_NAME 'irq'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0c, // STORE_NAME '__iter__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x0d, // STORE_NAME '__next__'
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
// child of espnow_ESPNow
// frozen bytecode for file espnow.py, scope espnow_ESPNow___init__
static const byte fun_data_espnow_ESPNow___init__[19] = {
    0x22,0x0a, // prelude
    0x05,0x02,0x15, // names: __init__, *, self
    0x80,0x0c, // code info
    0x12,0x16, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x05, // LOAD_SUPER_METHOD '__init__'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_espnow_ESPNow___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_espnow_ESPNow___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_espnow_ESPNow___init__ + 5,
        .line_info_top = fun_data_espnow_ESPNow___init__ + 7,
        .opcodes = fun_data_espnow_ESPNow___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of espnow_ESPNow
// frozen bytecode for file espnow.py, scope espnow_ESPNow_irecv
static const byte fun_data_espnow_ESPNow_irecv[30] = {
    0xb2,0x01,0x0c, // prelude
    0x06,0x15,0x17, // names: irecv, self, timeout_ms
    0x80,0x0f,0x2a, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x07, // LOAD_METHOD 'recvinto'
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR '_data'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR '_data'
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR '_none_tuple'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_espnow_ESPNow_irecv = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_espnow_ESPNow_irecv,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_espnow_ESPNow_irecv + 6,
        .line_info_top = fun_data_espnow_ESPNow_irecv + 9,
        .opcodes = fun_data_espnow_ESPNow_irecv + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of espnow_ESPNow
// frozen bytecode for file espnow.py, scope espnow_ESPNow_recv
static const byte fun_data_espnow_ESPNow_recv[34] = {
    0xb2,0x01,0x0c, // prelude
    0x0a,0x15,0x17, // names: recv, self, timeout_ms
    0x80,0x13,0x2a, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x07, // LOAD_METHOD 'recvinto'
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR '_data'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x32,0x00, // MAKE_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR '_data'
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR '_none_tuple'
    0x63, // RETURN_VALUE
};
// child of espnow_ESPNow_recv
// frozen bytecode for file espnow.py, scope espnow_ESPNow_recv__lt_listcomp_gt_
static const byte fun_data_espnow_ESPNow_recv__lt_listcomp_gt_[23] = {
    0x41,0x08, // prelude
    0x0e,0x02, // names: <listcomp>, *
    0x80,0x14, // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0a, // FOR_ITER 10
    0xc1, // STORE_FAST 1
    0x12,0x19, // LOAD_GLOBAL 'bytes'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x34, // JUMP -12
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_espnow_ESPNow_recv__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_espnow_ESPNow_recv__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_espnow_ESPNow_recv__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_espnow_ESPNow_recv__lt_listcomp_gt_ + 6,
        .opcodes = fun_data_espnow_ESPNow_recv__lt_listcomp_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_espnow_ESPNow_recv[] = {
    &raw_code_espnow_ESPNow_recv__lt_listcomp_gt_,
};

static const mp_raw_code_t raw_code_espnow_ESPNow_recv = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_espnow_ESPNow_recv,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 34,
    #endif
    .children = (void *)&children_espnow_ESPNow_recv,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_espnow_ESPNow_recv + 6,
        .line_info_top = fun_data_espnow_ESPNow_recv + 9,
        .opcodes = fun_data_espnow_ESPNow_recv + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of espnow_ESPNow
// frozen bytecode for file espnow.py, scope espnow_ESPNow_irq
static const byte fun_data_espnow_ESPNow_irq[22] = {
    0x33,0x0c, // prelude
    0x0b,0x02,0x15,0x18, // names: irq, *, self, callback
    0x80,0x17, // code info
    0x12,0x16, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x0b, // LOAD_SUPER_METHOD 'irq'
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_espnow_ESPNow_irq = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_espnow_ESPNow_irq,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_espnow_ESPNow_irq + 6,
        .line_info_top = fun_data_espnow_ESPNow_irq + 8,
        .opcodes = fun_data_espnow_ESPNow_irq + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of espnow_ESPNow
// frozen bytecode for file espnow.py, scope espnow_ESPNow___iter__
static const byte fun_data_espnow_ESPNow___iter__[8] = {
    0x09,0x08, // prelude
    0x0c,0x15, // names: __iter__, self
    0x80,0x1a, // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_espnow_ESPNow___iter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_espnow_ESPNow___iter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_espnow_ESPNow___iter__ + 4,
        .line_info_top = fun_data_espnow_ESPNow___iter__ + 6,
        .opcodes = fun_data_espnow_ESPNow___iter__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of espnow_ESPNow
// frozen bytecode for file espnow.py, scope espnow_ESPNow___next__
static const byte fun_data_espnow_ESPNow___next__[12] = {
    0x11,0x08, // prelude
    0x0d,0x15, // names: __next__, self
    0x80,0x1d, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x06, // LOAD_METHOD 'irecv'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_espnow_ESPNow___next__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_espnow_ESPNow___next__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_espnow_ESPNow___next__ + 4,
        .line_info_top = fun_data_espnow_ESPNow___next__ + 6,
        .opcodes = fun_data_espnow_ESPNow___next__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_espnow_ESPNow[] = {
    &raw_code_espnow_ESPNow___init__,
    &raw_code_espnow_ESPNow_irecv,
    &raw_code_espnow_ESPNow_recv,
    &raw_code_espnow_ESPNow_irq,
    &raw_code_espnow_ESPNow___iter__,
    &raw_code_espnow_ESPNow___next__,
};

static const mp_raw_code_t raw_code_espnow_ESPNow = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_espnow_ESPNow,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 76,
    #endif
    .children = (void *)&children_espnow_ESPNow,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_espnow_ESPNow + 3,
        .line_info_top = fun_data_espnow_ESPNow + 14,
        .opcodes = fun_data_espnow_ESPNow + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_espnow__lt_module_gt_[] = {
    &raw_code_espnow_ESPNow,
};

static const mp_raw_code_t raw_code_espnow__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_espnow__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = (void *)&children_espnow__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_espnow__lt_module_gt_ + 3,
        .line_info_top = fun_data_espnow__lt_module_gt_ + 5,
        .opcodes = fun_data_espnow__lt_module_gt_ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_espnow[26] = {
    MP_QSTR_espnow_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR__espnow,
    MP_QSTR_ESPNow,
    MP_QSTR___init__,
    MP_QSTR_irecv,
    MP_QSTR_recvinto,
    MP_QSTR__data,
    MP_QSTR__none_tuple,
    MP_QSTR_recv,
    MP_QSTR_irq,
    MP_QSTR___iter__,
    MP_QSTR___next__,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_ESPNowBase,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_bytearray,
    MP_QSTR_MAX_DATA_LEN,
    MP_QSTR_self,
    MP_QSTR_super,
    MP_QSTR_timeout_ms,
    MP_QSTR_callback,
    MP_QSTR_bytes,
};

// constants
static const mp_rom_obj_tuple_t const_obj_espnow_0 = {{&mp_type_tuple}, 2, {
    MP_ROM_NONE,
    MP_ROM_NONE,
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_espnow[1] = {
    MP_ROM_PTR(&const_obj_espnow_0),
};

static const mp_frozen_module_t frozen_module_espnow = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_espnow,
        .obj_table = (mp_obj_t *)&const_obj_table_data_espnow,
    },
    .rc = &raw_code_espnow__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module flashbdev
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/flashbdev.mpy
// - frozen file name: flashbdev.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file flashbdev.py, scope flashbdev__lt_module_gt_
static const byte fun_data_flashbdev__lt_module_gt_[77] = {
    0x30,0x0a, // prelude
    0x01, // names: <module>
    0x6c,0x31,0x24,0x36, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'Partition'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'esp32'
    0x1c,0x02, // IMPORT_FROM 'Partition'
    0x16,0x02, // STORE_NAME 'Partition'
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'Partition'
    0x14,0x04, // LOAD_METHOD 'find'
    0x11,0x02, // LOAD_NAME 'Partition'
    0x13,0x05, // LOAD_ATTR 'TYPE_DATA'
    0x10,0x06, // LOAD_CONST_STRING 'label'
    0x10,0x07, // LOAD_CONST_STRING 'vfs'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x0a, // STORE_NAME 'bdev'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x43,0x56, // POP_JUMP_IF_TRUE 22
    0x11,0x02, // LOAD_NAME 'Partition'
    0x14,0x04, // LOAD_METHOD 'find'
    0x11,0x02, // LOAD_NAME 'Partition'
    0x13,0x05, // LOAD_ATTR 'TYPE_DATA'
    0x10,0x06, // LOAD_CONST_STRING 'label'
    0x10,0x08, // LOAD_CONST_STRING 'ffat'
    0x10,0x09, // LOAD_CONST_STRING 'block_size'
    0x22,0x84,0x00, // LOAD_CONST_SMALL_INT 512
    0x36,0x84,0x01, // CALL_METHOD 513
    0x16,0x0a, // STORE_NAME 'bdev'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x42,0x41, // JUMP 1
    0x51, // LOAD_CONST_NONE
    0x16,0x0a, // STORE_NAME 'bdev'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_flashbdev__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_flashbdev__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 77,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_flashbdev__lt_module_gt_ + 3,
        .line_info_top = fun_data_flashbdev__lt_module_gt_ + 7,
        .opcodes = fun_data_flashbdev__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_flashbdev[11] = {
    MP_QSTR_flashbdev_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_Partition,
    MP_QSTR_esp32,
    MP_QSTR_find,
    MP_QSTR_TYPE_DATA,
    MP_QSTR_label,
    MP_QSTR_vfs,
    MP_QSTR_ffat,
    MP_QSTR_block_size,
    MP_QSTR_bdev,
};

static const mp_frozen_module_t frozen_module_flashbdev = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_flashbdev,
        .obj_table = NULL,
    },
    .rc = &raw_code_flashbdev__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module apa106
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/apa106.mpy
// - frozen file name: apa106.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file apa106.py, scope apa106__lt_module_gt_
static const byte fun_data_apa106__lt_module_gt_[30] = {
    0x18,0x06, // prelude
    0x01, // names: <module>
    0x60,0x6c, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'NeoPixel'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'neopixel'
    0x1c,0x02, // IMPORT_FROM 'NeoPixel'
    0x16,0x02, // STORE_NAME 'NeoPixel'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'APA106'
    0x11,0x02, // LOAD_NAME 'NeoPixel'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x04, // STORE_NAME 'APA106'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of apa106__lt_module_gt_
// frozen bytecode for file apa106.py, scope apa106_APA106
static const byte fun_data_apa106_APA106[19] = {
    0x00,0x06, // prelude
    0x04, // names: APA106
    0x88,0x07, // code info
    0x11,0x05, // LOAD_NAME '__name__'
    0x16,0x06, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'APA106'
    0x16,0x07, // STORE_NAME '__qualname__'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x08, // STORE_NAME 'ORDER'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_apa106_APA106 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_apa106_APA106,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_apa106_APA106 + 3,
        .line_info_top = fun_data_apa106_APA106 + 5,
        .opcodes = fun_data_apa106_APA106 + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_apa106__lt_module_gt_[] = {
    &raw_code_apa106_APA106,
};

static const mp_raw_code_t raw_code_apa106__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_apa106__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = (void *)&children_apa106__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_apa106__lt_module_gt_ + 3,
        .line_info_top = fun_data_apa106__lt_module_gt_ + 5,
        .opcodes = fun_data_apa106__lt_module_gt_ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_apa106[9] = {
    MP_QSTR_apa106_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_NeoPixel,
    MP_QSTR_neopixel,
    MP_QSTR_APA106,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_ORDER,
};

// constants
static const mp_rom_obj_tuple_t const_obj_apa106_0 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(0),
    MP_ROM_INT(1),
    MP_ROM_INT(2),
    MP_ROM_INT(3),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_apa106[1] = {
    MP_ROM_PTR(&const_obj_apa106_0),
};

static const mp_frozen_module_t frozen_module_apa106 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_apa106,
        .obj_table = (mp_obj_t *)&const_obj_table_data_apa106,
    },
    .rc = &raw_code_apa106__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio___init__
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/asyncio/__init__.mpy
// - frozen file name: asyncio/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/__init__.py, scope asyncio___init____lt_module_gt_
static const byte fun_data_asyncio___init____lt_module_gt_[75] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'core'
    0x69, // IMPORT_STAR
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x0e, // STORE_NAME '__version__'
    0x2c,0x0a, // BUILD_MAP 10
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x05, // LOAD_CONST_STRING 'wait_for'
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x06, // LOAD_CONST_STRING 'gather'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x10,0x08, // LOAD_CONST_STRING 'Event'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x62, // STORE_MAP
    0x10,0x09, // LOAD_CONST_STRING 'lock'
    0x10,0x0a, // LOAD_CONST_STRING 'Lock'
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x62, // STORE_MAP
    0x16,0x0f, // STORE_NAME '_attrs'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0c, // STORE_NAME '__getattr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio___init____lt_module_gt_
// frozen bytecode for file asyncio/__init__.py, scope asyncio___init_____getattr__
static const byte fun_data_asyncio___init_____getattr__[48] = {
    0x49,0x04, // prelude
    0x0c,0x10, // names: __getattr__, attr
     // code info
    0x12,0x0f, // LOAD_GLOBAL '_attrs'
    0x14,0x0d, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0x51, // LOAD_CONST_NONE
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x11, // LOAD_GLOBAL 'AttributeError'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x12, // LOAD_GLOBAL 'getattr'
    0x12,0x13, // LOAD_GLOBAL '__import__'
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x81, // LOAD_CONST_SMALL_INT 1
    0x34,0x05, // CALL_FUNCTION 5
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x14, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x56, // STORE_SUBSCR
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio___init_____getattr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio___init_____getattr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_asyncio___init_____getattr__ + 4,
        .line_info_top = fun_data_asyncio___init_____getattr__ + 4,
        .opcodes = fun_data_asyncio___init_____getattr__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio___init____lt_module_gt_[] = {
    &raw_code_asyncio___init_____getattr__,
};

static const mp_raw_code_t raw_code_asyncio___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 75,
    #endif
    .children = (void *)&children_asyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio___init____lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio___init____lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio___init____lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio___init__[21] = {
    MP_QSTR_asyncio_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR_core,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_event,
    MP_QSTR_Event,
    MP_QSTR_lock,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR___getattr__,
    MP_QSTR_get,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_AttributeError,
    MP_QSTR_getattr,
    MP_QSTR___import__,
    MP_QSTR_globals,
};

// constants
static const mp_rom_obj_tuple_t const_obj_asyncio___init___0 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(3),
    MP_ROM_INT(0),
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio___init__[7] = {
    MP_ROM_PTR(&const_obj_asyncio___init___0),
    MP_ROM_QSTR(MP_QSTR_wait_for_ms),
    MP_ROM_QSTR(MP_QSTR_ThreadSafeFlag),
    MP_ROM_QSTR(MP_QSTR_open_connection),
    MP_ROM_QSTR(MP_QSTR_start_server),
    MP_ROM_QSTR(MP_QSTR_StreamReader),
    MP_ROM_QSTR(MP_QSTR_StreamWriter),
};

static const mp_frozen_module_t frozen_module_asyncio___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio___init__,
    },
    .rc = &raw_code_asyncio___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_core
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/asyncio/core.mpy
// - frozen file name: asyncio/core.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/core.py, scope asyncio_core__lt_module_gt_
static const byte fun_data_asyncio_core__lt_module_gt_[215] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'ticks_ms'
    0x10,0x03, // LOAD_CONST_STRING 'ticks_diff'
    0x10,0x04, // LOAD_CONST_STRING 'ticks_add'
    0x2a,0x03, // BUILD_TUPLE 3
    0x1b,0x05, // IMPORT_NAME 'time'
    0x1c,0x02, // IMPORT_FROM 'ticks_ms'
    0x16,0x49, // STORE_NAME 'ticks'
    0x1c,0x03, // IMPORT_FROM 'ticks_diff'
    0x16,0x03, // STORE_NAME 'ticks_diff'
    0x1c,0x04, // IMPORT_FROM 'ticks_add'
    0x16,0x04, // STORE_NAME 'ticks_add'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'sys'
    0x16,0x06, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'select'
    0x16,0x07, // STORE_NAME 'select'
    0x48,0x14, // SETUP_EXCEPT 20
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0a, // IMPORT_NAME '_asyncio'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x59, // POP_TOP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0b, // IMPORT_NAME 'task'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x11,0x4a, // LOAD_NAME 'BaseException'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'CancelledError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x11,0x4b, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'TimeoutError'
    0x2c,0x03, // BUILD_MAP 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x62, // STORE_MAP
    0x16,0x4c, // STORE_NAME '_exc_context'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x11, // STORE_NAME 'SingletonGenerator'
    0x11,0x11, // LOAD_NAME 'SingletonGenerator'
    0x34,0x00, // CALL_FUNCTION 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x14, // STORE_NAME 'sleep_ms'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x16, // STORE_NAME 'sleep'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x05, // MAKE_FUNCTION 5
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x12, // STORE_NAME 'IOQueue'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x17, // STORE_NAME '_promote_to_task'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x18, // STORE_NAME 'create_task'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x26, // STORE_NAME 'run'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x27, // STORE_NAME '_stopper'
    0x51, // LOAD_CONST_NONE
    0x17,0x4d, // STORE_GLOBAL '_stop_task'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x0b, // MAKE_FUNCTION 11
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x13, // STORE_NAME 'Loop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0c, // MAKE_FUNCTION_DEFARGS 12
    0x16,0x28, // STORE_NAME 'get_event_loop'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x29, // STORE_NAME 'current_task'
    0x32,0x0e, // MAKE_FUNCTION 14
    0x16,0x2a, // STORE_NAME 'new_event_loop'
    0x11,0x2a, // LOAD_NAME 'new_event_loop'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_CancelledError
static const byte fun_data_asyncio_core_CancelledError[13] = {
    0x00,0x02, // prelude
    0x0c, // names: CancelledError
     // code info
    0x11,0x4e, // LOAD_NAME '__name__'
    0x16,0x4f, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x16,0x50, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_CancelledError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_CancelledError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_asyncio_core_CancelledError + 3,
        .line_info_top = fun_data_asyncio_core_CancelledError + 3,
        .opcodes = fun_data_asyncio_core_CancelledError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_TimeoutError
static const byte fun_data_asyncio_core_TimeoutError[13] = {
    0x00,0x02, // prelude
    0x0d, // names: TimeoutError
     // code info
    0x11,0x4e, // LOAD_NAME '__name__'
    0x16,0x4f, // STORE_NAME '__module__'
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x16,0x50, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_TimeoutError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_TimeoutError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_asyncio_core_TimeoutError + 3,
        .line_info_top = fun_data_asyncio_core_TimeoutError + 3,
        .opcodes = fun_data_asyncio_core_TimeoutError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator
static const byte fun_data_asyncio_core_SingletonGenerator[25] = {
    0x00,0x02, // prelude
    0x11, // names: SingletonGenerator
     // code info
    0x11,0x4e, // LOAD_NAME '__name__'
    0x16,0x4f, // STORE_NAME '__module__'
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x16,0x50, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x2d, // STORE_NAME '__iter__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME '__next__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core_SingletonGenerator
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator___init__
static const byte fun_data_asyncio_core_SingletonGenerator___init__[17] = {
    0x11,0x04, // prelude
    0x2b,0x62, // names: __init__, self
     // code info
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x12,0x5c, // LOAD_GLOBAL 'StopIteration'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'exc'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_SingletonGenerator___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_SingletonGenerator___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_asyncio_core_SingletonGenerator___init__ + 4,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator___init__ + 4,
        .opcodes = fun_data_asyncio_core_SingletonGenerator___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_SingletonGenerator
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator___iter__
static const byte fun_data_asyncio_core_SingletonGenerator___iter__[6] = {
    0x09,0x04, // prelude
    0x2d,0x62, // names: __iter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_SingletonGenerator___iter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_SingletonGenerator___iter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_asyncio_core_SingletonGenerator___iter__ + 4,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator___iter__ + 4,
        .opcodes = fun_data_asyncio_core_SingletonGenerator___iter__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_SingletonGenerator
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator___next__
static const byte fun_data_asyncio_core_SingletonGenerator___next__[42] = {
    0x21,0x04, // prelude
    0x2e,0x62, // names: __next__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x5e, // LOAD_GLOBAL 'cur_task'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x18,0x2f, // STORE_ATTR '__traceback__'
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_SingletonGenerator___next__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_SingletonGenerator___next__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 42,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_asyncio_core_SingletonGenerator___next__ + 4,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator___next__ + 4,
        .opcodes = fun_data_asyncio_core_SingletonGenerator___next__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_core_SingletonGenerator[] = {
    &raw_code_asyncio_core_SingletonGenerator___init__,
    &raw_code_asyncio_core_SingletonGenerator___iter__,
    &raw_code_asyncio_core_SingletonGenerator___next__,
};

static const mp_raw_code_t raw_code_asyncio_core_SingletonGenerator = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = (void *)&children_asyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_asyncio_core_SingletonGenerator + 3,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator + 3,
        .opcodes = fun_data_asyncio_core_SingletonGenerator + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_sleep_ms
static const byte fun_data_asyncio_core_sleep_ms[25] = {
    0xb2,0x01,0x06, // prelude
    0x14,0x51,0x52, // names: sleep_ms, t, sgen
     // code info
    0x12,0x04, // LOAD_GLOBAL 'ticks_add'
    0x12,0x49, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x53, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xb1, // LOAD_FAST 1
    0x18,0x15, // STORE_ATTR 'state'
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_sleep_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_sleep_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_asyncio_core_sleep_ms + 6,
        .line_info_top = fun_data_asyncio_core_sleep_ms + 6,
        .opcodes = fun_data_asyncio_core_sleep_ms + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_sleep
static const byte fun_data_asyncio_core_sleep[18] = {
    0x21,0x04, // prelude
    0x16,0x51, // names: sleep, t
     // code info
    0x12,0x14, // LOAD_GLOBAL 'sleep_ms'
    0x12,0x54, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x22,0x87,0x68, // LOAD_CONST_SMALL_INT 1000
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_sleep = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_sleep,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_asyncio_core_sleep + 4,
        .line_info_top = fun_data_asyncio_core_sleep + 4,
        .opcodes = fun_data_asyncio_core_sleep + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue
static const byte fun_data_asyncio_core_IOQueue[41] = {
    0x00,0x02, // prelude
    0x12, // names: IOQueue
     // code info
    0x11,0x4e, // LOAD_NAME '__name__'
    0x16,0x4f, // STORE_NAME '__module__'
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x16,0x50, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x32, // STORE_NAME '_enqueue'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x37, // STORE_NAME '_dequeue'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x39, // STORE_NAME 'queue_read'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3a, // STORE_NAME 'queue_write'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x3b, // STORE_NAME 'remove'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x1f, // STORE_NAME 'wait_io_event'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue___init__
static const byte fun_data_asyncio_core_IOQueue___init__[20] = {
    0x11,0x04, // prelude
    0x2b,0x62, // names: __init__, self
     // code info
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x14,0x30, // LOAD_METHOD 'poll'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x31, // STORE_ATTR 'poller'
    0x2c,0x00, // BUILD_MAP 0
    0xb0, // LOAD_FAST 0
    0x18,0x1e, // STORE_ATTR 'map'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_IOQueue___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_asyncio_core_IOQueue___init__ + 4,
        .line_info_top = fun_data_asyncio_core_IOQueue___init__ + 4,
        .opcodes = fun_data_asyncio_core_IOQueue___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue__enqueue
static const byte fun_data_asyncio_core_IOQueue__enqueue[105] = {
    0x4b,0x08, // prelude
    0x32,0x62,0x63,0x64, // names: _enqueue, self, s, idx
     // code info
    0x12,0x65, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xb1, // LOAD_FAST 1
    0x2b,0x03, // BUILD_LIST 3
    0xc3, // STORE_FAST 3
    0x12,0x5e, // LOAD_GLOBAL 'cur_task'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x65, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x33, // LOAD_METHOD 'register'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x42,0x44, // JUMP 4
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x61, // JUMP 33
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x65, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x12,0x5e, // LOAD_GLOBAL 'cur_task'
    0xb4, // LOAD_FAST 4
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb1, // LOAD_FAST 1
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xed, // BINARY_OP 22 __or__
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x12,0x5e, // LOAD_GLOBAL 'cur_task'
    0x18,0x21, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue__enqueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_asyncio_core_IOQueue__enqueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 105,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_asyncio_core_IOQueue__enqueue + 6,
        .line_info_top = fun_data_asyncio_core_IOQueue__enqueue + 6,
        .opcodes = fun_data_asyncio_core_IOQueue__enqueue + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue__dequeue
static const byte fun_data_asyncio_core_IOQueue__dequeue[27] = {
    0x22,0x06, // prelude
    0x37,0x62,0x63, // names: _dequeue, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x65, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x53, // LOAD_NULL
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x38, // LOAD_METHOD 'unregister'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue__dequeue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_IOQueue__dequeue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_asyncio_core_IOQueue__dequeue + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue__dequeue + 5,
        .opcodes = fun_data_asyncio_core_IOQueue__dequeue + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_queue_read
static const byte fun_data_asyncio_core_IOQueue_queue_read[15] = {
    0x2a,0x06, // prelude
    0x39,0x62,0x63, // names: queue_read, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue_queue_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_IOQueue_queue_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_asyncio_core_IOQueue_queue_read + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_queue_read + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_queue_read + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_queue_write
static const byte fun_data_asyncio_core_IOQueue_queue_write[15] = {
    0x2a,0x06, // prelude
    0x3a,0x62,0x63, // names: queue_write, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue_queue_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_IOQueue_queue_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_asyncio_core_IOQueue_queue_write + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_queue_write + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_queue_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_remove
static const byte fun_data_asyncio_core_IOQueue_remove[65] = {
    0x6a,0x06, // prelude
    0x3b,0x62,0x0b, // names: remove, self, task
     // code info
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x5f, // GET_ITER_STACK
    0x4b,0x1f, // FOR_ITER 31
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xc4, // STORE_FAST 4
    0xc5, // STORE_FAST 5
    0xc6, // STORE_FAST 6
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb5, // LOAD_FAST 5
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb6, // LOAD_FAST 6
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x1f, // JUMP -33
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x42, // JUMP 2
    0x42,0x06, // JUMP -58
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_IOQueue_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 65,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 59,
        .line_info = fun_data_asyncio_core_IOQueue_remove + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_remove + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_remove + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_wait_io_event
static const byte fun_data_asyncio_core_IOQueue_wait_io_event[156] = {
    0x62,0x06, // prelude
    0x1f,0x62,0x66, // names: wait_io_event, self, dt
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x3c, // LOAD_METHOD 'ipoll'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x89,0x01, // FOR_ITER 137
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc2, // STORE_FAST 2
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x65, // LOAD_GLOBAL 'id'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0xf4,0x7e, // JUMP -140
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_IOQueue_wait_io_event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_IOQueue_wait_io_event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 156,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_asyncio_core_IOQueue_wait_io_event + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_wait_io_event + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_wait_io_event + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_core_IOQueue[] = {
    &raw_code_asyncio_core_IOQueue___init__,
    &raw_code_asyncio_core_IOQueue__enqueue,
    &raw_code_asyncio_core_IOQueue__dequeue,
    &raw_code_asyncio_core_IOQueue_queue_read,
    &raw_code_asyncio_core_IOQueue_queue_write,
    &raw_code_asyncio_core_IOQueue_remove,
    &raw_code_asyncio_core_IOQueue_wait_io_event,
};

static const mp_raw_code_t raw_code_asyncio_core_IOQueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = (void *)&children_asyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_core_IOQueue + 3,
        .line_info_top = fun_data_asyncio_core_IOQueue + 3,
        .opcodes = fun_data_asyncio_core_IOQueue + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core__promote_to_task
static const byte fun_data_asyncio_core__promote_to_task[21] = {
    0x19,0x04, // prelude
    0x17,0x55, // names: _promote_to_task, aw
     // code info
    0x12,0x56, // LOAD_GLOBAL 'isinstance'
    0xb0, // LOAD_FAST 0
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core__promote_to_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core__promote_to_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_asyncio_core__promote_to_task + 4,
        .line_info_top = fun_data_asyncio_core__promote_to_task + 4,
        .opcodes = fun_data_asyncio_core__promote_to_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_create_task
static const byte fun_data_asyncio_core_create_task[40] = {
    0x21,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x57, // LOAD_GLOBAL 'hasattr'
    0xb0, // LOAD_FAST 0
    0x10,0x19, // LOAD_CONST_STRING 'send'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x58, // LOAD_GLOBAL 'TypeError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0xb0, // LOAD_FAST 0
    0x12,0x59, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc1, // STORE_FAST 1
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 40,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_asyncio_core_create_task + 4,
        .line_info_top = fun_data_asyncio_core_create_task + 4,
        .opcodes = fun_data_asyncio_core_create_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_run_until_complete
static const byte fun_data_asyncio_core_run_until_complete[301] = {
    0xf1,0x03,0x04, // prelude
    0x1b,0x5b, // names: run_until_complete, main_task
     // code info
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x4b, // LOAD_GLOBAL 'Exception'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc1, // STORE_FAST 1
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x5c, // LOAD_GLOBAL 'StopIteration'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc2, // STORE_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc3, // STORE_FAST 3
    0x42,0x6f, // JUMP 47
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xc3, // STORE_FAST 3
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x53, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x03, // LOAD_GLOBAL 'ticks_diff'
    0xb4, // LOAD_FAST 4
    0x13,0x1d, // LOAD_ATTR 'ph_key'
    0x12,0x49, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xc3, // STORE_FAST 3
    0x42,0x48, // JUMP 8
    0x12,0x5d, // LOAD_GLOBAL '_io_queue'
    0x13,0x1e, // LOAD_ATTR 'map'
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x5d, // LOAD_GLOBAL '_io_queue'
    0x14,0x1f, // LOAD_METHOD 'wait_io_event'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x0c, // POP_JUMP_IF_TRUE -52
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x17,0x5e, // STORE_GLOBAL 'cur_task'
    0x48,0x22, // SETUP_EXCEPT 34
    0xb4, // LOAD_FAST 4
    0x13,0x21, // LOAD_ATTR 'data'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x19, // LOAD_METHOD 'send'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x23, // LOAD_METHOD 'throw'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0xaf,0x01, // POP_EXCEPT_JUMP 175
    0x57, // DUP_TOP
    0xb1, // LOAD_FAST 1
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0xa8,0x81, // POP_JUMP_IF_FALSE 168
    0xc6, // STORE_FAST 6
    0x49,0x9d,0x01, // SETUP_FINALLY 157
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x56, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0x12,0x5c, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb6, // LOAD_FAST 6
    0x13,0x24, // LOAD_ATTR 'value'
    0x63, // RETURN_VALUE
    0xb6, // LOAD_FAST 6
    0x65, // RAISE_OBJ
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x44,0xe0,0x80, // POP_JUMP_IF_FALSE 96
    0x50, // LOAD_CONST_FALSE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x42,0x78, // JUMP 56
    0x12,0x5f, // LOAD_GLOBAL 'callable'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x14,0x15, // LOAD_METHOD 'state'
    0xb4, // LOAD_FAST 4
    0xb6, // LOAD_FAST 6
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0x42,0x5f, // JUMP 31
    0x42,0x50, // JUMP 16
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0xb7, // LOAD_FAST 7
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x12,0x56, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0x42,0x62, // JUMP 34
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0xb5, // LOAD_FAST 5
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0xb5, // LOAD_FAST 5
    0x12,0x4c, // LOAD_GLOBAL '_exc_context'
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x12,0x4c, // LOAD_GLOBAL '_exc_context'
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x56, // STORE_SUBSCR
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x14,0x25, // LOAD_METHOD 'call_exception_handler'
    0x12,0x4c, // LOAD_GLOBAL '_exc_context'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xe8,0x7d, // JUMP -280
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 301,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_asyncio_core_run_until_complete + 5,
        .line_info_top = fun_data_asyncio_core_run_until_complete + 5,
        .opcodes = fun_data_asyncio_core_run_until_complete + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_run
static const byte fun_data_asyncio_core_run[14] = {
    0x19,0x04, // prelude
    0x26,0x22, // names: run, coro
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_run,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_asyncio_core_run + 4,
        .line_info_top = fun_data_asyncio_core_run + 4,
        .opcodes = fun_data_asyncio_core_run + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core__stopper
static const byte fun_data_asyncio_core__stopper[6] = {
    0x80,0x40,0x02, // prelude
    0x27, // names: _stopper
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core__stopper = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core__stopper,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_asyncio_core__stopper + 4,
        .line_info_top = fun_data_asyncio_core__stopper + 4,
        .opcodes = fun_data_asyncio_core__stopper + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop
static const byte fun_data_asyncio_core_Loop[52] = {
    0x00,0x02, // prelude
    0x13, // names: Loop
     // code info
    0x11,0x4e, // LOAD_NAME '__name__'
    0x16,0x4f, // STORE_NAME '__module__'
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x16,0x50, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x41, // STORE_NAME '_exc_handler'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x18, // STORE_NAME 'create_task'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x3d, // STORE_NAME 'run_forever'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x3e, // STORE_NAME 'stop'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3f, // STORE_NAME 'close'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x40, // STORE_NAME 'set_exception_handler'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x42, // STORE_NAME 'get_exception_handler'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x43, // STORE_NAME 'default_exception_handler'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x25, // STORE_NAME 'call_exception_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_create_task
static const byte fun_data_asyncio_core_Loop_create_task[10] = {
    0x11,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_Loop_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_asyncio_core_Loop_create_task + 4,
        .line_info_top = fun_data_asyncio_core_Loop_create_task + 4,
        .opcodes = fun_data_asyncio_core_Loop_create_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_run_forever
static const byte fun_data_asyncio_core_Loop_run_forever[26] = {
    0x10,0x02, // prelude
    0x3d, // names: run_forever
     // code info
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x12,0x27, // LOAD_GLOBAL '_stopper'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x59, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x17,0x4d, // STORE_GLOBAL '_stop_task'
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x4d, // LOAD_GLOBAL '_stop_task'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_run_forever = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_Loop_run_forever,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 61,
        .line_info = fun_data_asyncio_core_Loop_run_forever + 3,
        .line_info_top = fun_data_asyncio_core_Loop_run_forever + 3,
        .opcodes = fun_data_asyncio_core_Loop_run_forever + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_run_until_complete
static const byte fun_data_asyncio_core_Loop_run_until_complete[14] = {
    0x19,0x04, // prelude
    0x1b,0x55, // names: run_until_complete, aw
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x17, // LOAD_GLOBAL '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_Loop_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_asyncio_core_Loop_run_until_complete + 4,
        .line_info_top = fun_data_asyncio_core_Loop_run_until_complete + 4,
        .opcodes = fun_data_asyncio_core_Loop_run_until_complete + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_stop
static const byte fun_data_asyncio_core_Loop_stop[24] = {
    0x10,0x02, // prelude
    0x3e, // names: stop
     // code info
    0x12,0x4d, // LOAD_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x5a, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x4d, // LOAD_GLOBAL '_stop_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x17,0x4d, // STORE_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_stop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_Loop_stop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 62,
        .line_info = fun_data_asyncio_core_Loop_stop + 3,
        .line_info_top = fun_data_asyncio_core_Loop_stop + 3,
        .opcodes = fun_data_asyncio_core_Loop_stop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_close
static const byte fun_data_asyncio_core_Loop_close[5] = {
    0x00,0x02, // prelude
    0x3f, // names: close
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_Loop_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 5,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_asyncio_core_Loop_close + 3,
        .line_info_top = fun_data_asyncio_core_Loop_close + 3,
        .opcodes = fun_data_asyncio_core_Loop_close + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_set_exception_handler
static const byte fun_data_asyncio_core_Loop_set_exception_handler[11] = {
    0x11,0x04, // prelude
    0x40,0x67, // names: set_exception_handler, handler
     // code info
    0xb0, // LOAD_FAST 0
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x18,0x41, // STORE_ATTR '_exc_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_set_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_Loop_set_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_asyncio_core_Loop_set_exception_handler + 4,
        .line_info_top = fun_data_asyncio_core_Loop_set_exception_handler + 4,
        .opcodes = fun_data_asyncio_core_Loop_set_exception_handler + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_get_exception_handler
static const byte fun_data_asyncio_core_Loop_get_exception_handler[8] = {
    0x00,0x02, // prelude
    0x42, // names: get_exception_handler
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_get_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_Loop_get_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_asyncio_core_Loop_get_exception_handler + 3,
        .line_info_top = fun_data_asyncio_core_Loop_get_exception_handler + 3,
        .opcodes = fun_data_asyncio_core_Loop_get_exception_handler + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_default_exception_handler
static const byte fun_data_asyncio_core_Loop_default_exception_handler[64] = {
    0x42,0x06, // prelude
    0x43,0x68,0x69, // names: default_exception_handler, loop, context
     // code info
    0x12,0x6a, // LOAD_GLOBAL 'print'
    0xb1, // LOAD_FAST 1
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x55, // LOAD_SUBSCR
    0x10,0x44, // LOAD_CONST_STRING 'file'
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x13,0x45, // LOAD_ATTR 'stderr'
    0x34,0x82,0x01, // CALL_FUNCTION 257
    0x59, // POP_TOP
    0x12,0x6a, // LOAD_GLOBAL 'print'
    0x10,0x46, // LOAD_CONST_STRING 'future:'
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x10,0x47, // LOAD_CONST_STRING 'coro='
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x13,0x22, // LOAD_ATTR 'coro'
    0x10,0x44, // LOAD_CONST_STRING 'file'
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x13,0x45, // LOAD_ATTR 'stderr'
    0x34,0x82,0x04, // CALL_FUNCTION 260
    0x59, // POP_TOP
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x14,0x48, // LOAD_METHOD 'print_exception'
    0xb1, // LOAD_FAST 1
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x55, // LOAD_SUBSCR
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x13,0x45, // LOAD_ATTR 'stderr'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_default_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_Loop_default_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 67,
        .line_info = fun_data_asyncio_core_Loop_default_exception_handler + 5,
        .line_info_top = fun_data_asyncio_core_Loop_default_exception_handler + 5,
        .opcodes = fun_data_asyncio_core_Loop_default_exception_handler + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_call_exception_handler
static const byte fun_data_asyncio_core_Loop_call_exception_handler[22] = {
    0x19,0x04, // prelude
    0x25,0x69, // names: call_exception_handler, context
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x45,0x04, // JUMP_IF_TRUE_OR_POP 4
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x43, // LOAD_ATTR 'default_exception_handler'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_Loop_call_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_core_Loop_call_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 37,
        .line_info = fun_data_asyncio_core_Loop_call_exception_handler + 4,
        .line_info_top = fun_data_asyncio_core_Loop_call_exception_handler + 4,
        .opcodes = fun_data_asyncio_core_Loop_call_exception_handler + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_core_Loop[] = {
    &raw_code_asyncio_core_Loop_create_task,
    &raw_code_asyncio_core_Loop_run_forever,
    &raw_code_asyncio_core_Loop_run_until_complete,
    &raw_code_asyncio_core_Loop_stop,
    &raw_code_asyncio_core_Loop_close,
    &raw_code_asyncio_core_Loop_set_exception_handler,
    &raw_code_asyncio_core_Loop_get_exception_handler,
    &raw_code_asyncio_core_Loop_default_exception_handler,
    &raw_code_asyncio_core_Loop_call_exception_handler,
};

static const mp_raw_code_t raw_code_asyncio_core_Loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 52,
    #endif
    .children = (void *)&children_asyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 9,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_core_Loop + 3,
        .line_info_top = fun_data_asyncio_core_Loop + 3,
        .opcodes = fun_data_asyncio_core_Loop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_get_event_loop
static const byte fun_data_asyncio_core_get_event_loop[10] = {
    0x92,0x80,0x01,0x06, // prelude
    0x28,0x60,0x61, // names: get_event_loop, runq_len, waitq_len
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_get_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_core_get_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_asyncio_core_get_event_loop + 7,
        .line_info_top = fun_data_asyncio_core_get_event_loop + 7,
        .opcodes = fun_data_asyncio_core_get_event_loop + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_current_task
static const byte fun_data_asyncio_core_current_task[6] = {
    0x00,0x02, // prelude
    0x29, // names: current_task
     // code info
    0x12,0x5e, // LOAD_GLOBAL 'cur_task'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_current_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_current_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_asyncio_core_current_task + 3,
        .line_info_top = fun_data_asyncio_core_current_task + 3,
        .opcodes = fun_data_asyncio_core_current_task + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_new_event_loop
static const byte fun_data_asyncio_core_new_event_loop[18] = {
    0x00,0x02, // prelude
    0x2a, // names: new_event_loop
     // code info
    0x12,0x08, // LOAD_GLOBAL 'TaskQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x5a, // STORE_GLOBAL '_task_queue'
    0x12,0x12, // LOAD_GLOBAL 'IOQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x5d, // STORE_GLOBAL '_io_queue'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_core_new_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core_new_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_asyncio_core_new_event_loop + 3,
        .line_info_top = fun_data_asyncio_core_new_event_loop + 3,
        .opcodes = fun_data_asyncio_core_new_event_loop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_core__lt_module_gt_[] = {
    &raw_code_asyncio_core_CancelledError,
    &raw_code_asyncio_core_TimeoutError,
    &raw_code_asyncio_core_SingletonGenerator,
    &raw_code_asyncio_core_sleep_ms,
    &raw_code_asyncio_core_sleep,
    &raw_code_asyncio_core_IOQueue,
    &raw_code_asyncio_core__promote_to_task,
    &raw_code_asyncio_core_create_task,
    &raw_code_asyncio_core_run_until_complete,
    &raw_code_asyncio_core_run,
    &raw_code_asyncio_core__stopper,
    &raw_code_asyncio_core_Loop,
    &raw_code_asyncio_core_get_event_loop,
    &raw_code_asyncio_core_current_task,
    &raw_code_asyncio_core_new_event_loop,
};

static const mp_raw_code_t raw_code_asyncio_core__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 215,
    #endif
    .children = (void *)&children_asyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 15,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_core__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_core__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_core__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_core[107] = {
    MP_QSTR_asyncio_slash_core_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_ticks_ms,
    MP_QSTR_ticks_diff,
    MP_QSTR_ticks_add,
    MP_QSTR_time,
    MP_QSTR_sys,
    MP_QSTR_select,
    MP_QSTR_TaskQueue,
    MP_QSTR_Task,
    MP_QSTR__asyncio,
    MP_QSTR_task,
    MP_QSTR_CancelledError,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR_Loop,
    MP_QSTR_sleep_ms,
    MP_QSTR_state,
    MP_QSTR_sleep,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_send,
    MP_QSTR_push,
    MP_QSTR_run_until_complete,
    MP_QSTR_peek,
    MP_QSTR_ph_key,
    MP_QSTR_map,
    MP_QSTR_wait_io_event,
    MP_QSTR_pop,
    MP_QSTR_data,
    MP_QSTR_coro,
    MP_QSTR_throw,
    MP_QSTR_value,
    MP_QSTR_call_exception_handler,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR___init__,
    MP_QSTR_exc,
    MP_QSTR___iter__,
    MP_QSTR___next__,
    MP_QSTR___traceback__,
    MP_QSTR_poll,
    MP_QSTR_poller,
    MP_QSTR__enqueue,
    MP_QSTR_register,
    MP_QSTR_POLLIN,
    MP_QSTR_POLLOUT,
    MP_QSTR_modify,
    MP_QSTR__dequeue,
    MP_QSTR_unregister,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_remove,
    MP_QSTR_ipoll,
    MP_QSTR_run_forever,
    MP_QSTR_stop,
    MP_QSTR_close,
    MP_QSTR_set_exception_handler,
    MP_QSTR__exc_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_file,
    MP_QSTR_stderr,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_print_exception,
    MP_QSTR_ticks,
    MP_QSTR_BaseException,
    MP_QSTR_Exception,
    MP_QSTR__exc_context,
    MP_QSTR__stop_task,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR_max,
    MP_QSTR_int,
    MP_QSTR_aw,
    MP_QSTR_isinstance,
    MP_QSTR_hasattr,
    MP_QSTR_TypeError,
    MP_QSTR_globals,
    MP_QSTR__task_queue,
    MP_QSTR_main_task,
    MP_QSTR_StopIteration,
    MP_QSTR__io_queue,
    MP_QSTR_cur_task,
    MP_QSTR_callable,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_self,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_id,
    MP_QSTR_dt,
    MP_QSTR_handler,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_print,
};

// constants
static const mp_obj_str_t const_obj_asyncio_core_0 = {{&mp_type_str}, 64973, 31, (const byte*)"\x54\x61\x73\x6b\x20\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x20\x77\x61\x73\x6e\x27\x74\x20\x72\x65\x74\x72\x69\x65\x76\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_core[2] = {
    MP_ROM_PTR(&const_obj_asyncio_core_0),
    MP_ROM_QSTR(MP_QSTR_coroutine_space_expected),
};

static const mp_frozen_module_t frozen_module_asyncio_core = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_core,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_core,
    },
    .rc = &raw_code_asyncio_core__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_event
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/asyncio/event.mpy
// - frozen file name: asyncio/event.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/event.py, scope asyncio_event__lt_module_gt_
static const byte fun_data_asyncio_event__lt_module_gt_[59] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Event'
    0x48,0x15, // SETUP_EXCEPT 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'io'
    0x16,0x05, // STORE_NAME 'io'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x11,0x05, // LOAD_NAME 'io'
    0x13,0x07, // LOAD_ATTR 'IOBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'ThreadSafeFlag'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x11,0x19, // LOAD_NAME 'ImportError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_event__lt_module_gt_
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event
static const byte fun_data_asyncio_event_Event[33] = {
    0x00,0x02, // prelude
    0x04, // names: Event
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0c, // STORE_NAME 'is_set'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event___init__
static const byte fun_data_asyncio_event_Event___init__[19] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_Event___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_Event___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_asyncio_event_Event___init__ + 4,
        .line_info_top = fun_data_asyncio_event_Event___init__ + 4,
        .opcodes = fun_data_asyncio_event_Event___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_is_set
static const byte fun_data_asyncio_event_Event_is_set[8] = {
    0x09,0x04, // prelude
    0x0c,0x1d, // names: is_set, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_Event_is_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_Event_is_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_asyncio_event_Event_is_set + 4,
        .line_info_top = fun_data_asyncio_event_Event_is_set + 4,
        .opcodes = fun_data_asyncio_event_Event_is_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_set
static const byte fun_data_asyncio_event_Event_set[37] = {
    0x21,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x42,0x50, // JUMP 16
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR '_task_queue'
    0x14,0x0f, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x10, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x11, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_Event_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_Event_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_asyncio_event_Event_set + 4,
        .line_info_top = fun_data_asyncio_event_Event_set + 4,
        .opcodes = fun_data_asyncio_event_Event_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_clear
static const byte fun_data_asyncio_event_Event_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_Event_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_Event_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_event_Event_clear + 4,
        .line_info_top = fun_data_asyncio_event_Event_clear + 4,
        .opcodes = fun_data_asyncio_event_Event_clear + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_wait
static const byte fun_data_asyncio_event_Event_wait[36] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x0f, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x18,0x15, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_Event_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_Event_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 36,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_event_Event_wait + 5,
        .line_info_top = fun_data_asyncio_event_Event_wait + 5,
        .opcodes = fun_data_asyncio_event_Event_wait + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_event_Event[] = {
    &raw_code_asyncio_event_Event___init__,
    &raw_code_asyncio_event_Event_is_set,
    &raw_code_asyncio_event_Event_set,
    &raw_code_asyncio_event_Event_clear,
    &raw_code_asyncio_event_Event_wait,
};

static const mp_raw_code_t raw_code_asyncio_event_Event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_asyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_asyncio_event_Event + 3,
        .line_info_top = fun_data_asyncio_event_Event + 3,
        .opcodes = fun_data_asyncio_event_Event + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event__lt_module_gt_
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag
static const byte fun_data_asyncio_event_ThreadSafeFlag[33] = {
    0x00,0x02, // prelude
    0x06, // names: ThreadSafeFlag
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x16, // STORE_NAME 'ioctl'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag___init__
static const byte fun_data_asyncio_event_ThreadSafeFlag___init__[10] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_ThreadSafeFlag___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag___init__ + 4,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag___init__ + 4,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_ioctl
static const byte fun_data_asyncio_event_ThreadSafeFlag_ioctl[19] = {
    0x23,0x08, // prelude
    0x16,0x1d,0x1e,0x1f, // names: ioctl, self, req, flags
     // code info
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_ThreadSafeFlag_ioctl = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_ioctl,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_ioctl + 6,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_ioctl + 6,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_ioctl + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_set
static const byte fun_data_asyncio_event_ThreadSafeFlag_set[10] = {
    0x11,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_ThreadSafeFlag_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_set + 4,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_set + 4,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_clear
static const byte fun_data_asyncio_event_ThreadSafeFlag_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_ThreadSafeFlag_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_clear + 4,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_clear + 4,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_clear + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_wait
static const byte fun_data_asyncio_event_ThreadSafeFlag_wait[27] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x17, // LOAD_ATTR '_io_queue'
    0x14,0x18, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_event_ThreadSafeFlag_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_wait + 5,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_wait + 5,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_wait + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_event_ThreadSafeFlag[] = {
    &raw_code_asyncio_event_ThreadSafeFlag___init__,
    &raw_code_asyncio_event_ThreadSafeFlag_ioctl,
    &raw_code_asyncio_event_ThreadSafeFlag_set,
    &raw_code_asyncio_event_ThreadSafeFlag_clear,
    &raw_code_asyncio_event_ThreadSafeFlag_wait,
};

static const mp_raw_code_t raw_code_asyncio_event_ThreadSafeFlag = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_asyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag + 3,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag + 3,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_event__lt_module_gt_[] = {
    &raw_code_asyncio_event_Event,
    &raw_code_asyncio_event_ThreadSafeFlag,
};

static const mp_raw_code_t raw_code_asyncio_event__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 59,
    #endif
    .children = (void *)&children_asyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_event__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_event__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_event__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_event[32] = {
    MP_QSTR_asyncio_slash_event_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Event,
    MP_QSTR_io,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_IOBase,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_is_set,
    MP_QSTR_set,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_pop,
    MP_QSTR_peek,
    MP_QSTR_clear,
    MP_QSTR_wait,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_ioctl,
    MP_QSTR__io_queue,
    MP_QSTR_queue_read,
    MP_QSTR_ImportError,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_req,
    MP_QSTR_flags,
};

static const mp_frozen_module_t frozen_module_asyncio_event = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_event,
        .obj_table = NULL,
    },
    .rc = &raw_code_asyncio_event__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_funcs
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/asyncio/funcs.mpy
// - frozen file name: asyncio/funcs.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__lt_module_gt_
static const byte fun_data_asyncio_funcs__lt_module_gt_[56] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME '_run'
    0x11,0x02, // LOAD_NAME 'core'
    0x13,0x04, // LOAD_ATTR 'sleep'
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0b, // STORE_NAME 'wait_for'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x12, // STORE_NAME 'wait_for_ms'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME '_Remove'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x50, // LOAD_CONST_FALSE
    0x10,0x06, // LOAD_CONST_STRING 'return_exceptions'
    0x62, // STORE_MAP
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x14, // STORE_NAME 'gather'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__run
static const byte fun_data_asyncio_funcs__run[66] = {
    0xd2,0x42,0x06, // prelude
    0x07,0x1b,0x1c, // names: _run, waiter, aw
     // code info
    0x48,0x09, // SETUP_EXCEPT 9
    0xb1, // LOAD_FAST 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0xc2, // STORE_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xc3, // STORE_FAST 3
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x57, // DUP_TOP
    0x12,0x1d, // LOAD_GLOBAL 'BaseException'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xc4, // STORE_FAST 4
    0x49,0x05, // SETUP_FINALLY 5
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb4, // LOAD_FAST 4
    0xc3, // STORE_FAST 3
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb0, // LOAD_FAST 0
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'CancelledError'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_funcs__run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_funcs__run,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_asyncio_funcs__run + 6,
        .line_info_top = fun_data_asyncio_funcs__run + 6,
        .opcodes = fun_data_asyncio_funcs__run + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_wait_for
static const byte fun_data_asyncio_funcs_wait_for[119] = {
    0xdb,0x43,0x08, // prelude
    0x0b,0x1c,0x1e,0x04, // names: wait_for, aw, timeout, sleep
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb0, // LOAD_FAST 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0d, // LOAD_METHOD 'create_task'
    0x12,0x07, // LOAD_GLOBAL '_run'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x48,0x0a, // SETUP_EXCEPT 10
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x4a,0x32, // POP_EXCEPT_JUMP 50
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x69, // POP_JUMP_IF_FALSE 41
    0xc4, // STORE_FAST 4
    0x49,0x1f, // SETUP_FINALLY 31
    0xb4, // LOAD_FAST 4
    0x13,0x0f, // LOAD_ATTR 'value'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb4, // LOAD_FAST 4
    0x13,0x10, // LOAD_ATTR 'args'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
    0xb5, // LOAD_FAST 5
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x11, // LOAD_ATTR 'TimeoutError'
    0x65, // RAISE_OBJ
};
static const mp_raw_code_t raw_code_asyncio_funcs_wait_for = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_asyncio_funcs_wait_for,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 119,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_asyncio_funcs_wait_for + 7,
        .line_info_top = fun_data_asyncio_funcs_wait_for + 7,
        .opcodes = fun_data_asyncio_funcs_wait_for + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_wait_for_ms
static const byte fun_data_asyncio_funcs_wait_for_ms[16] = {
    0x2a,0x06, // prelude
    0x12,0x1c,0x1e, // names: wait_for_ms, aw, timeout
     // code info
    0x12,0x0b, // LOAD_GLOBAL 'wait_for'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x13, // LOAD_ATTR 'sleep_ms'
    0x34,0x03, // CALL_FUNCTION 3
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_funcs_wait_for_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_funcs_wait_for_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_funcs_wait_for_ms + 5,
        .line_info_top = fun_data_asyncio_funcs_wait_for_ms + 5,
        .opcodes = fun_data_asyncio_funcs_wait_for_ms + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__Remove
static const byte fun_data_asyncio_funcs__Remove[21] = {
    0x08,0x02, // prelude
    0x05, // names: _Remove
     // code info
    0x11,0x1f, // LOAD_NAME '__name__'
    0x16,0x20, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x16,0x21, // STORE_NAME '__qualname__'
    0x11,0x22, // LOAD_NAME 'staticmethod'
    0x32,0x00, // MAKE_FUNCTION 0
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x16, // STORE_NAME 'remove'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_funcs__Remove
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__Remove_remove
static const byte fun_data_asyncio_funcs__Remove_remove[6] = {
    0x09,0x04, // prelude
    0x16,0x28, // names: remove, t
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_funcs__Remove_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_funcs__Remove_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_asyncio_funcs__Remove_remove + 4,
        .line_info_top = fun_data_asyncio_funcs__Remove_remove + 4,
        .opcodes = fun_data_asyncio_funcs__Remove_remove + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_funcs__Remove[] = {
    &raw_code_asyncio_funcs__Remove_remove,
};

static const mp_raw_code_t raw_code_asyncio_funcs__Remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_asyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_asyncio_funcs__Remove + 3,
        .line_info_top = fun_data_asyncio_funcs__Remove + 3,
        .opcodes = fun_data_asyncio_funcs__Remove + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_gather
static const byte fun_data_asyncio_funcs_gather[281] = {
    0xf0,0xca,0x80,0xc0,0x40,0x85,0x01, // prelude
    0x14,0x06, // names: gather, return_exceptions
    0x00,0x07,0x08, // code info
    0xb0, // LOAD_FAST 0
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x20,0x00,0x03, // MAKE_CLOSURE 0
    0xc2, // STORE_FAST 2
    0x32,0x01, // MAKE_FUNCTION 1
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x27,0x07, // STORE_DEREF 7
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc4,0x80, // JUMP 68
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0x25,0x07, // LOAD_DEREF 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x27,0x07, // STORE_DEREF 7
    0x42,0x69, // JUMP 41
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0x43,0x5b, // POP_JUMP_IF_TRUE 27
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x25, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x25,0x00, // LOAD_DEREF 0
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xd1, // UNARY_OP 1 __neg__
    0x27,0x07, // STORE_DEREF 7
    0x42,0x47, // JUMP 7
    0x12,0x26, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb6,0x7f, // POP_JUMP_IF_TRUE -74
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0x27,0x08, // STORE_DEREF 8
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0x25,0x07, // LOAD_DEREF 7
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0x25,0x08, // LOAD_DEREF 8
    0x18,0x08, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x19, // POP_EXCEPT_JUMP 25
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xc6, // STORE_FAST 6
    0x49,0x06, // SETUP_FINALLY 6
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0xb6, // LOAD_FAST 6
    0x27,0x07, // STORE_DEREF 7
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xda,0x80, // JUMP 90
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xde, // BINARY_OP 7 <is>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x52, // LOAD_CONST_TRUE
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0xb5, // LOAD_FAST 5
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x7a, // JUMP 58
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x25, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x13,0x0f, // LOAD_ATTR 'value'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x61, // JUMP 33
    0x25,0x00, // LOAD_DEREF 0
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x53, // JUMP 19
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0x25,0x07, // LOAD_DEREF 7
    0x12,0x27, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x27,0x07, // STORE_DEREF 7
    0x42,0x40, // JUMP 0
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xa0,0x7f, // POP_JUMP_IF_TRUE -96
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x25,0x07, // LOAD_DEREF 7
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x25,0x07, // LOAD_DEREF 7
    0x65, // RAISE_OBJ
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
// child of asyncio_funcs_gather
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_gather_done
static const byte fun_data_asyncio_funcs_gather_done[64] = {
    0xb9,0x04,0x0c, // prelude
    0x17,0x29,0x29,0x29,0x28,0x2a, // names: done, *, *, *, t, er
     // code info
    0x25,0x02, // LOAD_DEREF 2
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x25,0x00, // LOAD_DEREF 0
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x25, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb4, // LOAD_FAST 4
    0x27,0x01, // STORE_DEREF 1
    0x42,0x4c, // JUMP 12
    0x25,0x01, // LOAD_DEREF 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0x27,0x01, // STORE_DEREF 1
    0x25,0x01, // LOAD_DEREF 1
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_task_queue'
    0x14,0x19, // LOAD_METHOD 'push'
    0x25,0x02, // LOAD_DEREF 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_funcs_gather_done = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_asyncio_funcs_gather_done,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_asyncio_funcs_gather_done + 9,
        .line_info_top = fun_data_asyncio_funcs_gather_done + 9,
        .opcodes = fun_data_asyncio_funcs_gather_done + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_funcs_gather
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_gather__lt_listcomp_gt_
static const byte fun_data_asyncio_funcs_gather__lt_listcomp_gt_[23] = {
    0x49,0x04, // prelude
    0x1a,0x29, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0c, // FOR_ITER 12
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x32, // JUMP -14
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_funcs_gather__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_funcs_gather__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_asyncio_funcs_gather__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_asyncio_funcs_gather__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_asyncio_funcs_gather__lt_listcomp_gt_ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_funcs_gather[] = {
    &raw_code_asyncio_funcs_gather_done,
    &raw_code_asyncio_funcs_gather__lt_listcomp_gt_,
};

static const mp_raw_code_t raw_code_asyncio_funcs_gather = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x0d,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 281,
    #endif
    .children = (void *)&children_asyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 13,
        .n_pos_args = 0,
        .n_kwonly_args = 1,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_asyncio_funcs_gather + 9,
        .line_info_top = fun_data_asyncio_funcs_gather + 9,
        .opcodes = fun_data_asyncio_funcs_gather + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_funcs__lt_module_gt_[] = {
    &raw_code_asyncio_funcs__run,
    &raw_code_asyncio_funcs_wait_for,
    &raw_code_asyncio_funcs_wait_for_ms,
    &raw_code_asyncio_funcs__Remove,
    &raw_code_asyncio_funcs_gather,
};

static const mp_raw_code_t raw_code_asyncio_funcs__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 56,
    #endif
    .children = (void *)&children_asyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_funcs__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_funcs__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_funcs__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_funcs[43] = {
    MP_QSTR_asyncio_slash_funcs_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_sleep,
    MP_QSTR__Remove,
    MP_QSTR_return_exceptions,
    MP_QSTR__run,
    MP_QSTR_data,
    MP_QSTR_cancel,
    MP_QSTR_CancelledError,
    MP_QSTR_wait_for,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_cur_task,
    MP_QSTR_value,
    MP_QSTR_args,
    MP_QSTR_TimeoutError,
    MP_QSTR_wait_for_ms,
    MP_QSTR_sleep_ms,
    MP_QSTR_gather,
    MP_QSTR_state,
    MP_QSTR_remove,
    MP_QSTR_done,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_waiter,
    MP_QSTR_aw,
    MP_QSTR_BaseException,
    MP_QSTR_timeout,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_staticmethod,
    MP_QSTR_len,
    MP_QSTR_isinstance,
    MP_QSTR_StopIteration,
    MP_QSTR_RuntimeError,
    MP_QSTR_int,
    MP_QSTR_t,
    MP_QSTR__star_,
    MP_QSTR_er,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_funcs[1] = {
    MP_ROM_QSTR(MP_QSTR_can_squot_t_space_gather),
};

static const mp_frozen_module_t frozen_module_asyncio_funcs = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_funcs,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_funcs,
    },
    .rc = &raw_code_asyncio_funcs__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_lock
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/asyncio/lock.mpy
// - frozen file name: asyncio/lock.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/lock.py, scope asyncio_lock__lt_module_gt_
static const byte fun_data_asyncio_lock__lt_module_gt_[26] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Lock'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_lock__lt_module_gt_
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock
static const byte fun_data_asyncio_lock_Lock[37] = {
    0x00,0x02, // prelude
    0x04, // names: Lock
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x09, // STORE_NAME 'locked'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'release'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0f, // STORE_NAME 'acquire'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME '__aenter__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x14, // STORE_NAME '__aexit__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock___init__
static const byte fun_data_asyncio_lock_Lock___init__[19] = {
    0x11,0x04, // prelude
    0x05,0x18, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x07, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_lock_Lock___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_lock_Lock___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_asyncio_lock_Lock___init__ + 4,
        .line_info_top = fun_data_asyncio_lock_Lock___init__ + 4,
        .opcodes = fun_data_asyncio_lock_Lock___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock_locked
static const byte fun_data_asyncio_lock_Lock_locked[10] = {
    0x11,0x04, // prelude
    0x09,0x18, // names: locked, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_lock_Lock_locked = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_lock_Lock_locked,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_asyncio_lock_Lock_locked + 4,
        .line_info_top = fun_data_asyncio_lock_Lock_locked + 4,
        .opcodes = fun_data_asyncio_lock_Lock_locked + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock_release
static const byte fun_data_asyncio_lock_Lock_release[57] = {
    0x19,0x04, // prelude
    0x0a,0x18, // names: release, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x19, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0b, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0c, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0d, // LOAD_ATTR '_task_queue'
    0x14,0x0e, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x44, // JUMP 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_lock_Lock_release = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_lock_Lock_release,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 57,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_asyncio_lock_Lock_release + 4,
        .line_info_top = fun_data_asyncio_lock_Lock_release + 4,
        .opcodes = fun_data_asyncio_lock_Lock_release + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock_acquire
static const byte fun_data_asyncio_lock_Lock_acquire[88] = {
    0xb9,0x42,0x04, // prelude
    0x0f,0x18, // names: acquire, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0xc5,0x80, // POP_JUMP_IF_FALSE 69
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0e, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x18,0x11, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x29, // POP_EXCEPT_JUMP 41
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x12, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0xc1, // STORE_FAST 1
    0x49,0x16, // SETUP_FINALLY 22
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc1, // STORE_FAST 1
    0x28,0x01, // DELETE_FAST 1
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_lock_Lock_acquire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_lock_Lock_acquire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 88,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_asyncio_lock_Lock_acquire + 5,
        .line_info_top = fun_data_asyncio_lock_Lock_acquire + 5,
        .opcodes = fun_data_asyncio_lock_Lock_acquire + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock___aenter__
static const byte fun_data_asyncio_lock_Lock___aenter__[14] = {
    0x91,0x40,0x04, // prelude
    0x13,0x18, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'acquire'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_lock_Lock___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_lock_Lock___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_lock_Lock___aenter__ + 5,
        .line_info_top = fun_data_asyncio_lock_Lock___aenter__ + 5,
        .opcodes = fun_data_asyncio_lock_Lock___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock___aexit__
static const byte fun_data_asyncio_lock_Lock___aexit__[14] = {
    0xa8,0x44,0x0a, // prelude
    0x14,0x18,0x1a,0x1b,0x1c, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_lock_Lock___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_asyncio_lock_Lock___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_asyncio_lock_Lock___aexit__ + 8,
        .line_info_top = fun_data_asyncio_lock_Lock___aexit__ + 8,
        .opcodes = fun_data_asyncio_lock_Lock___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_lock_Lock[] = {
    &raw_code_asyncio_lock_Lock___init__,
    &raw_code_asyncio_lock_Lock_locked,
    &raw_code_asyncio_lock_Lock_release,
    &raw_code_asyncio_lock_Lock_acquire,
    &raw_code_asyncio_lock_Lock___aenter__,
    &raw_code_asyncio_lock_Lock___aexit__,
};

static const mp_raw_code_t raw_code_asyncio_lock_Lock = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_asyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_asyncio_lock_Lock + 3,
        .line_info_top = fun_data_asyncio_lock_Lock + 3,
        .opcodes = fun_data_asyncio_lock_Lock + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_lock__lt_module_gt_[] = {
    &raw_code_asyncio_lock_Lock,
};

static const mp_raw_code_t raw_code_asyncio_lock__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = (void *)&children_asyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_lock__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_lock__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_lock__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_lock[29] = {
    MP_QSTR_asyncio_slash_lock_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Lock,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_locked,
    MP_QSTR_release,
    MP_QSTR_peek,
    MP_QSTR_pop,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_acquire,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_CancelledError,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_RuntimeError,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_lock[1] = {
    MP_ROM_QSTR(MP_QSTR_Lock_space_not_space_acquired),
};

static const mp_frozen_module_t frozen_module_asyncio_lock = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_lock,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_lock,
    },
    .rc = &raw_code_asyncio_lock__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_stream
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/asyncio/stream.mpy
// - frozen file name: asyncio/stream.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/stream.py, scope asyncio_stream__lt_module_gt_
static const byte fun_data_asyncio_stream__lt_module_gt_[90] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Stream'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x3c, // STORE_NAME 'StreamReader'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x3d, // STORE_NAME 'StreamWriter'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0a, // STORE_NAME 'open_connection'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME 'Server'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x1a, // STORE_NAME 'start_server'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x26, // STORE_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x13,0x06, // LOAD_ATTR 'wait_closed'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x07, // STORE_ATTR 'aclose'
    0x11,0x26, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x08, // STORE_ATTR 'awrite'
    0x11,0x26, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x09, // STORE_ATTR 'awritestr'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream
static const byte fun_data_asyncio_stream_Stream[62] = {
    0x08,0x02, // prelude
    0x04, // names: Stream
     // code info
    0x11,0x3e, // LOAD_NAME '__name__'
    0x16,0x3f, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x16,0x40, // STORE_NAME '__qualname__'
    0x2c,0x00, // BUILD_MAP 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x29, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x2d, // STORE_NAME 'get_extra_info'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME 'close'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x2f, // STORE_NAME 'read'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x31, // STORE_NAME 'readinto'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x32, // STORE_NAME 'readexactly'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x33, // STORE_NAME 'readline'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x27, // STORE_NAME 'write'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x28, // STORE_NAME 'drain'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream___init__
static const byte fun_data_asyncio_stream_Stream___init__[22] = {
    0xa3,0x01,0x08, // prelude
    0x29,0x46,0x2a,0x2b, // names: __init__, self, s, e
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x2a, // STORE_ATTR 's'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x2b, // STORE_ATTR 'e'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_asyncio_stream_Stream___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_asyncio_stream_Stream___init__ + 7,
        .line_info_top = fun_data_asyncio_stream_Stream___init__ + 7,
        .opcodes = fun_data_asyncio_stream_Stream___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_get_extra_info
static const byte fun_data_asyncio_stream_Stream_get_extra_info[11] = {
    0x1a,0x06, // prelude
    0x2d,0x46,0x4c, // names: get_extra_info, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2b, // LOAD_ATTR 'e'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_get_extra_info = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_stream_Stream_get_extra_info,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_asyncio_stream_Stream_get_extra_info + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_get_extra_info + 5,
        .opcodes = fun_data_asyncio_stream_Stream_get_extra_info + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_close
static const byte fun_data_asyncio_stream_Stream_close[6] = {
    0x09,0x04, // prelude
    0x2e,0x46, // names: close, self
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Stream_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_asyncio_stream_Stream_close + 4,
        .line_info_top = fun_data_asyncio_stream_Stream_close + 4,
        .opcodes = fun_data_asyncio_stream_Stream_close + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_wait_closed
static const byte fun_data_asyncio_stream_Stream_wait_closed[15] = {
    0x91,0x40,0x04, // prelude
    0x06,0x46, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Stream_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_asyncio_stream_Stream_wait_closed + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_wait_closed + 5,
        .opcodes = fun_data_asyncio_stream_Stream_wait_closed + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_read
static const byte fun_data_asyncio_stream_Stream_read[61] = {
    0xb2,0x41,0x06, // prelude
    0x2f,0x46,0x4d, // names: read, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x2f, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0x42,0x0e, // JUMP -50
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_stream_Stream_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 61,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 47,
        .line_info = fun_data_asyncio_stream_Stream_read + 6,
        .line_info_top = fun_data_asyncio_stream_Stream_read + 6,
        .opcodes = fun_data_asyncio_stream_Stream_read + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_readinto
static const byte fun_data_asyncio_stream_Stream_readinto[28] = {
    0xa2,0x40,0x06, // prelude
    0x31,0x46,0x47, // names: readinto, self, buf
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x31, // LOAD_METHOD 'readinto'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_stream_Stream_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_asyncio_stream_Stream_readinto + 6,
        .line_info_top = fun_data_asyncio_stream_Stream_readinto + 6,
        .opcodes = fun_data_asyncio_stream_Stream_readinto + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_readexactly
static const byte fun_data_asyncio_stream_Stream_readexactly[66] = {
    0xb2,0x40,0x06, // prelude
    0x32,0x46,0x4d, // names: readexactly, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x42,0x72, // JUMP 50
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x2f, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x4e, // LOAD_GLOBAL 'EOFError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xe6, // BINARY_OP 15 __isub__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x43,0x0b, // POP_JUMP_IF_TRUE -53
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_readexactly = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_stream_Stream_readexactly,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_asyncio_stream_Stream_readexactly + 6,
        .line_info_top = fun_data_asyncio_stream_Stream_readexactly + 6,
        .opcodes = fun_data_asyncio_stream_Stream_readexactly + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_readline
static const byte fun_data_asyncio_stream_Stream_readline[56] = {
    0xa9,0x40,0x04, // prelude
    0x33,0x46, // names: readline, self
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x33, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x50, // JUMP 16
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x8a, // LOAD_CONST_SMALL_INT 10
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
    0x42,0x12, // JUMP -46
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_readline = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Stream_readline,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 56,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 51,
        .line_info = fun_data_asyncio_stream_Stream_readline + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_readline + 5,
        .opcodes = fun_data_asyncio_stream_Stream_readline + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_write
static const byte fun_data_asyncio_stream_Stream_write[54] = {
    0x2a,0x06, // prelude
    0x27,0x46,0x47, // names: write, self, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0x43,0x61, // POP_JUMP_IF_TRUE 33
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x27, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0xb1, // LOAD_FAST 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x2c, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_asyncio_stream_Stream_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 54,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_asyncio_stream_Stream_write + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_write + 5,
        .opcodes = fun_data_asyncio_stream_Stream_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_drain
static const byte fun_data_asyncio_stream_Stream_drain[86] = {
    0xc1,0x40,0x04, // prelude
    0x28,0x46, // names: drain, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x23, // LOAD_METHOD 'sleep_ms'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x4a, // LOAD_GLOBAL 'memoryview'
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x42,0x65, // JUMP 37
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x19, // LOAD_METHOD 'queue_write'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x27, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x12, // POP_JUMP_IF_TRUE -46
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Stream_drain = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Stream_drain,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 86,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_asyncio_stream_Stream_drain + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_drain + 5,
        .opcodes = fun_data_asyncio_stream_Stream_drain + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_stream_Stream[] = {
    &raw_code_asyncio_stream_Stream___init__,
    &raw_code_asyncio_stream_Stream_get_extra_info,
    &raw_code_asyncio_stream_Stream_close,
    &raw_code_asyncio_stream_Stream_wait_closed,
    &raw_code_asyncio_stream_Stream_read,
    &raw_code_asyncio_stream_Stream_readinto,
    &raw_code_asyncio_stream_Stream_readexactly,
    &raw_code_asyncio_stream_Stream_readline,
    &raw_code_asyncio_stream_Stream_write,
    &raw_code_asyncio_stream_Stream_drain,
};

static const mp_raw_code_t raw_code_asyncio_stream_Stream = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 62,
    #endif
    .children = (void *)&children_asyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 10,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_asyncio_stream_Stream + 3,
        .line_info_top = fun_data_asyncio_stream_Stream + 3,
        .opcodes = fun_data_asyncio_stream_Stream + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_open_connection
static const byte fun_data_asyncio_stream_open_connection[171] = {
    0x88,0xd6,0x01,0x0a, // prelude
    0x0a,0x41,0x42,0x12,0x16, // names: open_connection, host, port, ssl, server_hostname
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0b, // LOAD_CONST_STRING 'EINPROGRESS'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0c, // IMPORT_NAME 'errno'
    0x1c,0x0b, // IMPORT_FROM 'EINPROGRESS'
    0xc4, // STORE_FAST 4
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'socket'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb5, // LOAD_FAST 5
    0x13,0x0f, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb5, // LOAD_FAST 5
    0x14,0x0d, // LOAD_METHOD 'socket'
    0xb6, // LOAD_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb7, // LOAD_FAST 7
    0x14,0x11, // LOAD_METHOD 'connect'
    0xb6, // LOAD_FAST 6
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x1b, // POP_EXCEPT_JUMP 27
    0x57, // DUP_TOP
    0x12,0x43, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xc8, // STORE_FAST 8
    0x49,0x0a, // SETUP_FINALLY 10
    0xb8, // LOAD_FAST 8
    0x13,0x0c, // LOAD_ATTR 'errno'
    0xb4, // LOAD_FAST 4
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb8, // LOAD_FAST 8
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc8, // STORE_FAST 8
    0x28,0x08, // DELETE_FAST 8
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb2, // LOAD_FAST 2
    0x44,0x6d, // POP_JUMP_IF_FALSE 45
    0xb2, // LOAD_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x12, // IMPORT_NAME 'ssl'
    0xc9, // STORE_FAST 9
    0xb9, // LOAD_FAST 9
    0x14,0x13, // LOAD_METHOD 'SSLContext'
    0xb9, // LOAD_FAST 9
    0x13,0x14, // LOAD_ATTR 'PROTOCOL_TLS_CLIENT'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb0, // LOAD_FAST 0
    0xc3, // STORE_FAST 3
    0xb2, // LOAD_FAST 2
    0x14,0x15, // LOAD_METHOD 'wrap_socket'
    0xb7, // LOAD_FAST 7
    0x10,0x16, // LOAD_CONST_STRING 'server_hostname'
    0xb3, // LOAD_FAST 3
    0x10,0x17, // LOAD_CONST_STRING 'do_handshake_on_connect'
    0x50, // LOAD_CONST_FALSE
    0x36,0x84,0x01, // CALL_METHOD 513
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb7, // LOAD_FAST 7
    0x34,0x01, // CALL_FUNCTION 1
    0xca, // STORE_FAST 10
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x19, // LOAD_METHOD 'queue_write'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xba, // LOAD_FAST 10
    0xba, // LOAD_FAST 10
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_open_connection = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_asyncio_stream_open_connection,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 171,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_asyncio_stream_open_connection + 9,
        .line_info_top = fun_data_asyncio_stream_open_connection + 9,
        .opcodes = fun_data_asyncio_stream_open_connection + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server
static const byte fun_data_asyncio_stream_Server[33] = {
    0x00,0x02, // prelude
    0x05, // names: Server
     // code info
    0x11,0x3e, // LOAD_NAME '__name__'
    0x16,0x3f, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x16,0x40, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x34, // STORE_NAME '__aenter__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x35, // STORE_NAME '__aexit__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME 'close'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x21, // STORE_NAME '_serve'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server___aenter__
static const byte fun_data_asyncio_stream_Server___aenter__[7] = {
    0x89,0x40,0x04, // prelude
    0x34,0x46, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Server___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Server___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 7,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 52,
        .line_info = fun_data_asyncio_stream_Server___aenter__ + 5,
        .line_info_top = fun_data_asyncio_stream_Server___aenter__ + 5,
        .opcodes = fun_data_asyncio_stream_Server___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server___aexit__
static const byte fun_data_asyncio_stream_Server___aexit__[25] = {
    0xa8,0x44,0x0a, // prelude
    0x35,0x46,0x4f,0x50,0x51, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x06, // LOAD_METHOD 'wait_closed'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Server___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_asyncio_stream_Server___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 53,
        .line_info = fun_data_asyncio_stream_Server___aexit__ + 8,
        .line_info_top = fun_data_asyncio_stream_Server___aexit__ + 8,
        .opcodes = fun_data_asyncio_stream_Server___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server_close
static const byte fun_data_asyncio_stream_Server_close[18] = {
    0x11,0x04, // prelude
    0x2e,0x46, // names: close, self
     // code info
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x36, // STORE_ATTR 'state'
    0xb0, // LOAD_FAST 0
    0x13,0x22, // LOAD_ATTR 'task'
    0x14,0x25, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Server_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Server_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_asyncio_stream_Server_close + 4,
        .line_info_top = fun_data_asyncio_stream_Server_close + 4,
        .opcodes = fun_data_asyncio_stream_Server_close + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server_wait_closed
static const byte fun_data_asyncio_stream_Server_wait_closed[14] = {
    0x91,0x40,0x04, // prelude
    0x06,0x46, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x22, // LOAD_ATTR 'task'
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Server_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_asyncio_stream_Server_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_asyncio_stream_Server_wait_closed + 5,
        .line_info_top = fun_data_asyncio_stream_Server_wait_closed + 5,
        .opcodes = fun_data_asyncio_stream_Server_wait_closed + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server__serve
static const byte fun_data_asyncio_stream_Server__serve[174] = {
    0xf8,0x46,0x0a, // prelude
    0x21,0x46,0x2a,0x44,0x12, // names: _serve, self, s, cb, ssl
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x36, // STORE_ATTR 'state'
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x23, // POP_EXCEPT_JUMP 35
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x24, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0xc4, // STORE_FAST 4
    0x49,0x10, // SETUP_FINALLY 16
    0xb1, // LOAD_FAST 1
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'state'
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb4, // LOAD_FAST 4
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb1, // LOAD_FAST 1
    0x14,0x37, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc5, // STORE_FAST 5
    0xc6, // STORE_FAST 6
    0x4a,0x06, // POP_EXCEPT_JUMP 6
    0x59, // POP_TOP
    0x40,0xda,0x80,0x01, // UNWIND_JUMP 90
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x44,0x76, // POP_JUMP_IF_FALSE 54
    0x48,0x10, // SETUP_EXCEPT 16
    0xb3, // LOAD_FAST 3
    0x14,0x15, // LOAD_METHOD 'wrap_socket'
    0xb5, // LOAD_FAST 5
    0x10,0x38, // LOAD_CONST_STRING 'server_side'
    0x52, // LOAD_CONST_TRUE
    0x10,0x17, // LOAD_CONST_STRING 'do_handshake_on_connect'
    0x50, // LOAD_CONST_FALSE
    0x36,0x84,0x01, // CALL_METHOD 513
    0xc5, // STORE_FAST 5
    0x4a,0x24, // POP_EXCEPT_JUMP 36
    0x57, // DUP_TOP
    0x12,0x43, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x5d, // POP_JUMP_IF_FALSE 29
    0xc7, // STORE_FAST 7
    0x49,0x13, // SETUP_FINALLY 19
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x39, // LOAD_ATTR 'sys'
    0x14,0x3a, // LOAD_METHOD 'print_exception'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x40,0x68,0x02, // UNWIND_JUMP 40
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb5, // LOAD_FAST 5
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb5, // LOAD_FAST 5
    0x2c,0x01, // BUILD_MAP 1
    0xb6, // LOAD_FAST 6
    0x10,0x3b, // LOAD_CONST_STRING 'peername'
    0x62, // STORE_MAP
    0x34,0x02, // CALL_FUNCTION 2
    0xc8, // STORE_FAST 8
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x20, // LOAD_METHOD 'create_task'
    0xb2, // LOAD_FAST 2
    0xb8, // LOAD_FAST 8
    0xb8, // LOAD_FAST 8
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xe0,0x7e, // JUMP -160
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_Server__serve = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_asyncio_stream_Server__serve,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 174,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 16,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_asyncio_stream_Server__serve + 8,
        .line_info_top = fun_data_asyncio_stream_Server__serve + 8,
        .opcodes = fun_data_asyncio_stream_Server__serve + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_stream_Server[] = {
    &raw_code_asyncio_stream_Server___aenter__,
    &raw_code_asyncio_stream_Server___aexit__,
    &raw_code_asyncio_stream_Server_close,
    &raw_code_asyncio_stream_Server_wait_closed,
    &raw_code_asyncio_stream_Server__serve,
};

static const mp_raw_code_t raw_code_asyncio_stream_Server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_asyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_asyncio_stream_Server + 3,
        .line_info_top = fun_data_asyncio_stream_Server + 3,
        .opcodes = fun_data_asyncio_stream_Server + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_start_server
static const byte fun_data_asyncio_stream_start_server[135] = {
    0xf9,0xc6,0x01,0x0c, // prelude
    0x1a,0x44,0x41,0x42,0x45,0x12, // names: start_server, cb, host, port, backlog, ssl
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'socket'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb5, // LOAD_FAST 5
    0x14,0x0d, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0x14,0x1b, // LOAD_METHOD 'setsockopt'
    0xb5, // LOAD_FAST 5
    0x13,0x1c, // LOAD_ATTR 'SOL_SOCKET'
    0xb5, // LOAD_FAST 5
    0x13,0x1d, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0x14,0x1e, // LOAD_METHOD 'bind'
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0x14,0x1f, // LOAD_METHOD 'listen'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x05, // LOAD_GLOBAL 'Server'
    0x34,0x00, // CALL_FUNCTION 0
    0xc7, // STORE_FAST 7
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x20, // LOAD_METHOD 'create_task'
    0xb7, // LOAD_FAST 7
    0x14,0x21, // LOAD_METHOD '_serve'
    0xb6, // LOAD_FAST 6
    0xb0, // LOAD_FAST 0
    0xb4, // LOAD_FAST 4
    0x36,0x03, // CALL_METHOD 3
    0x36,0x01, // CALL_METHOD 1
    0xb7, // LOAD_FAST 7
    0x18,0x22, // STORE_ATTR 'task'
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x23, // LOAD_METHOD 'sleep_ms'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x4a,0x1d, // POP_EXCEPT_JUMP 29
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x24, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xc8, // STORE_FAST 8
    0x49,0x0a, // SETUP_FINALLY 10
    0xb7, // LOAD_FAST 7
    0x13,0x22, // LOAD_ATTR 'task'
    0x14,0x25, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb8, // LOAD_FAST 8
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc8, // STORE_FAST 8
    0x28,0x08, // DELETE_FAST 8
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb7, // LOAD_FAST 7
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_start_server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 5,
    .fun_data = fun_data_asyncio_stream_start_server,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 135,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 16,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_asyncio_stream_start_server + 10,
        .line_info_top = fun_data_asyncio_stream_start_server + 10,
        .opcodes = fun_data_asyncio_stream_start_server + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_stream_awrite
static const byte fun_data_asyncio_stream_stream_awrite[63] = {
    0xb8,0xc4,0x01,0x0a, // prelude
    0x26,0x46,0x47,0x48,0x49, // names: stream_awrite, self, buf, off, sz
     // code info
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x12,0x4a, // LOAD_GLOBAL 'memoryview'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf2, // BINARY_OP 27 __add__
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x27, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x28, // LOAD_METHOD 'drain'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_asyncio_stream_stream_awrite = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_asyncio_stream_stream_awrite,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 63,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_asyncio_stream_stream_awrite + 9,
        .line_info_top = fun_data_asyncio_stream_stream_awrite + 9,
        .opcodes = fun_data_asyncio_stream_stream_awrite + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_asyncio_stream__lt_module_gt_[] = {
    &raw_code_asyncio_stream_Stream,
    &raw_code_asyncio_stream_open_connection,
    &raw_code_asyncio_stream_Server,
    &raw_code_asyncio_stream_start_server,
    &raw_code_asyncio_stream_stream_awrite,
};

static const mp_raw_code_t raw_code_asyncio_stream__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_asyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 90,
    #endif
    .children = (void *)&children_asyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_stream__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_stream__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_stream__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_stream[82] = {
    MP_QSTR_asyncio_slash_stream_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Stream,
    MP_QSTR_Server,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_open_connection,
    MP_QSTR_EINPROGRESS,
    MP_QSTR_errno,
    MP_QSTR_socket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_setblocking,
    MP_QSTR_connect,
    MP_QSTR_ssl,
    MP_QSTR_SSLContext,
    MP_QSTR_PROTOCOL_TLS_CLIENT,
    MP_QSTR_wrap_socket,
    MP_QSTR_server_hostname,
    MP_QSTR_do_handshake_on_connect,
    MP_QSTR__io_queue,
    MP_QSTR_queue_write,
    MP_QSTR_start_server,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_create_task,
    MP_QSTR__serve,
    MP_QSTR_task,
    MP_QSTR_sleep_ms,
    MP_QSTR_CancelledError,
    MP_QSTR_cancel,
    MP_QSTR_stream_awrite,
    MP_QSTR_write,
    MP_QSTR_drain,
    MP_QSTR___init__,
    MP_QSTR_s,
    MP_QSTR_e,
    MP_QSTR_out_buf,
    MP_QSTR_get_extra_info,
    MP_QSTR_close,
    MP_QSTR_read,
    MP_QSTR_queue_read,
    MP_QSTR_readinto,
    MP_QSTR_readexactly,
    MP_QSTR_readline,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR_state,
    MP_QSTR_accept,
    MP_QSTR_server_side,
    MP_QSTR_sys,
    MP_QSTR_print_exception,
    MP_QSTR_peername,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_host,
    MP_QSTR_port,
    MP_QSTR_OSError,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_self,
    MP_QSTR_buf,
    MP_QSTR_off,
    MP_QSTR_sz,
    MP_QSTR_memoryview,
    MP_QSTR_len,
    MP_QSTR_v,
    MP_QSTR_n,
    MP_QSTR_EOFError,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_stream[1] = {
    MP_ROM_PTR(&mp_const_empty_bytes_obj),
};

static const mp_frozen_module_t frozen_module_asyncio_stream = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_stream,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_stream,
    },
    .rc = &raw_code_asyncio_stream__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/uasyncio.mpy
// - frozen file name: uasyncio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio.py, scope uasyncio__lt_module_gt_
static const byte fun_data_uasyncio__lt_module_gt_[9] = {
    0x00,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x02, // STORE_NAME '__getattr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio__lt_module_gt_
// frozen bytecode for file uasyncio.py, scope uasyncio___getattr__
static const byte fun_data_uasyncio___getattr__[16] = {
    0x21,0x04, // prelude
    0x02,0x04, // names: __getattr__, attr
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'asyncio'
    0xc1, // STORE_FAST 1
    0x12,0x05, // LOAD_GLOBAL 'getattr'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio___getattr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio___getattr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 2,
        .line_info = fun_data_uasyncio___getattr__ + 4,
        .line_info_top = fun_data_uasyncio___getattr__ + 4,
        .opcodes = fun_data_uasyncio___getattr__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio__lt_module_gt_[] = {
    &raw_code_uasyncio___getattr__,
};

static const mp_raw_code_t raw_code_uasyncio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = (void *)&children_uasyncio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio__lt_module_gt_ + 3,
        .line_info_top = fun_data_uasyncio__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio[6] = {
    MP_QSTR_uasyncio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR___getattr__,
    MP_QSTR_asyncio,
    MP_QSTR_attr,
    MP_QSTR_getattr,
};

static const mp_frozen_module_t frozen_module_uasyncio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio,
        .obj_table = NULL,
    },
    .rc = &raw_code_uasyncio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module requests___init__
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/requests/__init__.mpy
// - frozen file name: requests/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file requests/__init__.py, scope requests___init____lt_module_gt_
static const byte fun_data_requests___init____lt_module_gt_[82] = {
    0x30,0x28, // prelude
    0x01, // names: <module>
    0x66,0x89,0x20,0x62,0x40,0x8d,0x86,0x64,0x20,0x64,0x20,0x64,0x20,0x64,0x20,0x64,0x20,0x64,0x20, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'usocket'
    0x16,0x02, // STORE_NAME 'usocket'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x03, // LOAD_CONST_STRING 'Response'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x03, // STORE_NAME 'Response'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2c,0x00, // BUILD_MAP 0
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x2a,0x07, // BUILD_TUPLE 7
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x05, // STORE_NAME 'request'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2b, // STORE_NAME 'head'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x2d, // STORE_NAME 'get'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x2e, // STORE_NAME 'post'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x30, // STORE_NAME 'put'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x32, // STORE_NAME 'patch'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x34, // STORE_NAME 'delete'
    0x10,0x04, // LOAD_CONST_STRING '0.8.1'
    0x16,0x3f, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___Response
static const byte fun_data_requests___init___Response[51] = {
    0x08,0x16, // prelude
    0x03, // names: Response
    0x68,0x20,0x64,0x40,0x64,0x60,0x88,0x0a,0x68,0x20, // code info
    0x11,0x40, // LOAD_NAME '__name__'
    0x16,0x41, // STORE_NAME '__module__'
    0x10,0x03, // LOAD_CONST_STRING 'Response'
    0x16,0x42, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x36, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x26, // STORE_NAME 'close'
    0x11,0x43, // LOAD_NAME 'property'
    0x32,0x02, // MAKE_FUNCTION 2
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x3a, // STORE_NAME 'content'
    0x11,0x43, // LOAD_NAME 'property'
    0x32,0x03, // MAKE_FUNCTION 3
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x3c, // STORE_NAME 'text'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3d, // STORE_NAME 'json'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response___init__
static const byte fun_data_requests___init___Response___init__[24] = {
    0x1a,0x0e, // prelude
    0x36,0x52,0x53, // names: __init__, self, f
    0x60,0x40,0x24,0x25, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x37, // STORE_ATTR 'raw'
    0x10,0x24, // LOAD_CONST_STRING 'utf-8'
    0xb0, // LOAD_FAST 0
    0x18,0x38, // STORE_ATTR 'encoding'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x39, // STORE_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___Response___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_requests___init___Response___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 54,
        .line_info = fun_data_requests___init___Response___init__ + 5,
        .line_info_top = fun_data_requests___init___Response___init__ + 9,
        .opcodes = fun_data_requests___init___Response___init__ + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_close
static const byte fun_data_requests___init___Response_close[32] = {
    0x11,0x0e, // prelude
    0x26,0x52, // names: close, self
    0x80,0x0a,0x25,0x28,0x24, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x37, // LOAD_ATTR 'raw'
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb0, // LOAD_FAST 0
    0x13,0x37, // LOAD_ATTR 'raw'
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x37, // STORE_ATTR 'raw'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x39, // STORE_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___Response_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___Response_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 32,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_requests___init___Response_close + 4,
        .line_info_top = fun_data_requests___init___Response_close + 9,
        .opcodes = fun_data_requests___init___Response_close + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_content
static const byte fun_data_requests___init___Response_content[48] = {
    0x2d,0x12, // prelude
    0x3a,0x52, // names: content, self
    0x80,0x11,0x27,0x22,0x4b,0x28,0x25, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x49,0x0b, // SETUP_FINALLY 11
    0xb0, // LOAD_FAST 0
    0x13,0x37, // LOAD_ATTR 'raw'
    0x14,0x3b, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x39, // STORE_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x37, // LOAD_ATTR 'raw'
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x37, // STORE_ATTR 'raw'
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR '_cached'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___Response_content = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___Response_content,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_requests___init___Response_content + 4,
        .line_info_top = fun_data_requests___init___Response_content + 11,
        .opcodes = fun_data_requests___init___Response_content + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_text
static const byte fun_data_requests___init___Response_text[17] = {
    0x19,0x08, // prelude
    0x3c,0x52, // names: text, self
    0x80,0x1b, // code info
    0x12,0x4c, // LOAD_GLOBAL 'str'
    0xb0, // LOAD_FAST 0
    0x13,0x3a, // LOAD_ATTR 'content'
    0xb0, // LOAD_FAST 0
    0x13,0x38, // LOAD_ATTR 'encoding'
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___Response_text = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___Response_text,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 60,
        .line_info = fun_data_requests___init___Response_text + 4,
        .line_info_top = fun_data_requests___init___Response_text + 6,
        .opcodes = fun_data_requests___init___Response_text + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_json
static const byte fun_data_requests___init___Response_json[21] = {
    0x21,0x0a, // prelude
    0x3d,0x52, // names: json, self
    0x80,0x1e,0x45, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x1e, // IMPORT_NAME 'ujson'
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x3e, // LOAD_METHOD 'loads'
    0xb0, // LOAD_FAST 0
    0x13,0x3a, // LOAD_ATTR 'content'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___Response_json = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___Response_json,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 61,
        .line_info = fun_data_requests___init___Response_json + 4,
        .line_info_top = fun_data_requests___init___Response_json + 7,
        .opcodes = fun_data_requests___init___Response_json + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_requests___init___Response[] = {
    &raw_code_requests___init___Response___init__,
    &raw_code_requests___init___Response_close,
    &raw_code_requests___init___Response_content,
    &raw_code_requests___init___Response_text,
    &raw_code_requests___init___Response_json,
};

static const mp_raw_code_t raw_code_requests___init___Response = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_requests___init___Response,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 51,
    #endif
    .children = (void *)&children_requests___init___Response,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_requests___init___Response + 3,
        .line_info_top = fun_data_requests___init___Response + 13,
        .opcodes = fun_data_requests___init___Response + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___request
static const byte fun_data_requests___init___request[1025] = {
    0xc5,0xa1,0x85,0x01,0xda,0x02, // prelude
    0x05,0x44,0x45,0x46,0x3d,0x2a,0x47,0x48,0x49,0x4a, // names: request, method, url, data, json, headers, stream, auth, timeout, parse_headers
    0x80,0x2e,0x22,0x57,0x26,0x45,0x25,0x29,0x32,0x4b,0x22,0x5a,0x2f,0x27,0x26,0x27,0x26,0x46,0x47,0x49,0x27,0x2f,0x48,0x31,0x46,0x23,0x26,0x44,0x54,0x66,0x48,0x23,0x2b,0x26,0x2f,0x2f,0x27,0x4c,0x26,0x29,0x29,0x2b,0x2b,0x26,0x28,0x46,0x28,0x29,0x23,0x23,0x4b,0x2f,0x29,0x24,0x23,0x26,0x30,0x29,0x2b,0x4b,0x48,0x48,0x2a,0x4a,0x2a,0x2a,0x24,0x2a,0x2a,0x20,0x28,0x2b,0x43,0x2a,0x27,0x33,0x3f,0x36,0x50,0x2c,0x25,0x22,0x25,0x2a,0x2f,0x4d,0x54,0x27,0x42,0x23,0x27,0x30,0x4c,0x4d,0x28,0x26,0x26,0x27,0x26, // code info
    0x51, // LOAD_CONST_NONE
    0xc9, // STORE_FAST 9
    0xb2, // LOAD_FAST 2
    0x46,0x13, // JUMP_IF_FALSE_OR_POP 19
    0x12,0x4b, // LOAD_GLOBAL 'getattr'
    0xb2, // LOAD_FAST 2
    0x10,0x06, // LOAD_CONST_STRING '__next__'
    0x51, // LOAD_CONST_NONE
    0x34,0x03, // CALL_FUNCTION 3
    0x46,0x09, // JUMP_IF_FALSE_OR_POP 9
    0x12,0x4b, // LOAD_GLOBAL 'getattr'
    0xb2, // LOAD_FAST 2
    0x10,0x07, // LOAD_CONST_STRING '__len__'
    0x51, // LOAD_CONST_NONE
    0x34,0x03, // CALL_FUNCTION 3
    0xd3, // UNARY_OP 3 <not>
    0xca, // STORE_FAST 10
    0xb6, // LOAD_FAST 6
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x70, // POP_JUMP_IF_FALSE 48
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'ubinascii'
    0xcb, // STORE_FAST 11
    0xb6, // LOAD_FAST 6
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xcc, // STORE_FAST 12
    0xcd, // STORE_FAST 13
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x14,0x09, // LOAD_METHOD 'format'
    0xbc, // LOAD_FAST 12
    0xbd, // LOAD_FAST 13
    0x36,0x02, // CALL_METHOD 2
    0xce, // STORE_FAST 14
    0x12,0x4c, // LOAD_GLOBAL 'str'
    0xbb, // LOAD_FAST 11
    0x14,0x0a, // LOAD_METHOD 'b2a_base64'
    0xbe, // LOAD_FAST 14
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x10,0x0b, // LOAD_CONST_STRING 'ascii'
    0x34,0x02, // CALL_FUNCTION 2
    0xce, // STORE_FAST 14
    0x10,0x0c, // LOAD_CONST_STRING 'Basic {}'
    0x14,0x09, // LOAD_METHOD 'format'
    0xbe, // LOAD_FAST 14
    0x36,0x01, // CALL_METHOD 1
    0xb4, // LOAD_FAST 4
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x56, // STORE_SUBSCR
    0x48,0x13, // SETUP_EXCEPT 19
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'split'
    0x10,0x0e, // LOAD_CONST_STRING '/'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x36,0x02, // CALL_METHOD 2
    0x30,0x04, // UNPACK_SEQUENCE 4
    0xcf, // STORE_FAST 15
    0x26,0x10, // STORE_FAST_N 16
    0x26,0x11, // STORE_FAST_N 17
    0x26,0x12, // STORE_FAST_N 18
    0x4a,0x1d, // POP_EXCEPT_JUMP 29
    0x57, // DUP_TOP
    0x12,0x4d, // LOAD_GLOBAL 'ValueError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'split'
    0x10,0x0e, // LOAD_CONST_STRING '/'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xcf, // STORE_FAST 15
    0x26,0x10, // STORE_FAST_N 16
    0x26,0x11, // STORE_FAST_N 17
    0x10,0x0f, // LOAD_CONST_STRING ''
    0x26,0x12, // STORE_FAST_N 18
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xbf, // LOAD_FAST 15
    0x10,0x10, // LOAD_CONST_STRING 'http:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x22,0x80,0x50, // LOAD_CONST_SMALL_INT 80
    0x26,0x13, // STORE_FAST_N 19
    0x42,0x5c, // JUMP 28
    0xbf, // LOAD_FAST 15
    0x10,0x11, // LOAD_CONST_STRING 'https:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x12, // IMPORT_NAME 'ussl'
    0x26,0x14, // STORE_FAST_N 20
    0x22,0x83,0x3b, // LOAD_CONST_SMALL_INT 443
    0x26,0x13, // STORE_FAST_N 19
    0x42,0x49, // JUMP 9
    0x12,0x4d, // LOAD_GLOBAL 'ValueError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xbf, // LOAD_FAST 15
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x10,0x13, // LOAD_CONST_STRING ':'
    0x24,0x11, // LOAD_FAST_N 17
    0xdd, // BINARY_OP 6 <in>
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0x24,0x11, // LOAD_FAST_N 17
    0x14,0x0d, // LOAD_METHOD 'split'
    0x10,0x13, // LOAD_CONST_STRING ':'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0x26,0x11, // STORE_FAST_N 17
    0x26,0x13, // STORE_FAST_N 19
    0x12,0x4e, // LOAD_GLOBAL 'int'
    0x24,0x13, // LOAD_FAST_N 19
    0x34,0x01, // CALL_FUNCTION 1
    0x26,0x13, // STORE_FAST_N 19
    0x12,0x02, // LOAD_GLOBAL 'usocket'
    0x14,0x14, // LOAD_METHOD 'getaddrinfo'
    0x24,0x11, // LOAD_FAST_N 17
    0x24,0x13, // LOAD_FAST_N 19
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x02, // LOAD_GLOBAL 'usocket'
    0x13,0x15, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0x26,0x15, // STORE_FAST_N 21
    0x24,0x15, // LOAD_FAST_N 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x26,0x15, // STORE_FAST_N 21
    0x51, // LOAD_CONST_NONE
    0x26,0x16, // STORE_FAST_N 22
    0xb8, // LOAD_FAST 8
    0x50, // LOAD_CONST_FALSE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x2c,0x00, // BUILD_MAP 0
    0x26,0x16, // STORE_FAST_N 22
    0x12,0x02, // LOAD_GLOBAL 'usocket'
    0x14,0x16, // LOAD_METHOD 'socket'
    0x24,0x15, // LOAD_FAST_N 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x12,0x02, // LOAD_GLOBAL 'usocket'
    0x13,0x15, // LOAD_ATTR 'SOCK_STREAM'
    0x24,0x15, // LOAD_FAST_N 21
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0x26,0x17, // STORE_FAST_N 23
    0xb7, // LOAD_FAST 7
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x17, // LOAD_METHOD 'settimeout'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0x94,0x04, // SETUP_EXCEPT 532
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x18, // LOAD_METHOD 'connect'
    0x24,0x15, // LOAD_FAST_N 21
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xbf, // LOAD_FAST 15
    0x10,0x11, // LOAD_CONST_STRING 'https:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x24,0x14, // LOAD_FAST_N 20
    0x14,0x19, // LOAD_METHOD 'wrap_socket'
    0x24,0x17, // LOAD_FAST_N 23
    0x10,0x1a, // LOAD_CONST_STRING 'server_hostname'
    0x24,0x11, // LOAD_FAST_N 17
    0x36,0x82,0x01, // CALL_METHOD 257
    0x26,0x17, // STORE_FAST_N 23
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xb0, // LOAD_FAST 0
    0x24,0x12, // LOAD_FAST_N 18
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x10,0x1c, // LOAD_CONST_STRING 'Host'
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x24,0x11, // LOAD_FAST_N 17
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x5f, // GET_ITER_STACK
    0x4b,0x2a, // FOR_ITER 42
    0x26,0x18, // STORE_FAST_N 24
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x24,0x18, // LOAD_FAST_N 24
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0xb4, // LOAD_FAST 4
    0x24,0x18, // LOAD_FAST_N 24
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x14, // JUMP -44
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x5f, // POP_JUMP_IF_FALSE 31
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x1d, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x1e, // IMPORT_NAME 'ujson'
    0x26,0x19, // STORE_FAST_N 25
    0x24,0x19, // LOAD_FAST_N 25
    0x14,0x1f, // LOAD_METHOD 'dumps'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x44,0x5d, // POP_JUMP_IF_FALSE 29
    0xba, // LOAD_FAST 10
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x4f, // JUMP 15
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x12,0x4f, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x44,0xc0,0x80, // POP_JUMP_IF_FALSE 64
    0xba, // LOAD_FAST 10
    0x44,0x75, // POP_JUMP_IF_FALSE 53
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x26, // FOR_ITER 38
    0x26,0x1a, // STORE_FAST_N 26
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x12,0x4f, // LOAD_GLOBAL 'len'
    0x24,0x1a, // LOAD_FAST_N 26
    0x34,0x01, // CALL_FUNCTION 1
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x24,0x1a, // LOAD_FAST_N 26
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x18, // JUMP -40
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0x10,0x20, // LOAD_CONST_STRING '0\r\n\r\n'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x48, // JUMP 8
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1b, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x21, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0x26,0x1b, // STORE_FAST_N 27
    0x24,0x1b, // LOAD_FAST_N 27
    0x14,0x0d, // LOAD_METHOD 'split'
    0x51, // LOAD_CONST_NONE
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0x26,0x1b, // STORE_FAST_N 27
    0x12,0x4f, // LOAD_GLOBAL 'len'
    0x24,0x1b, // LOAD_FAST_N 27
    0x34,0x01, // CALL_FUNCTION 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd7, // BINARY_OP 0 __lt__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x4d, // LOAD_GLOBAL 'ValueError'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0x24,0x1b, // LOAD_FAST_N 27
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x4e, // LOAD_GLOBAL 'int'
    0x24,0x1b, // LOAD_FAST_N 27
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x26,0x1c, // STORE_FAST_N 28
    0x10,0x0f, // LOAD_CONST_STRING ''
    0x26,0x1d, // STORE_FAST_N 29
    0x12,0x4f, // LOAD_GLOBAL 'len'
    0x24,0x1b, // LOAD_FAST_N 27
    0x34,0x01, // CALL_FUNCTION 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x24,0x1b, // LOAD_FAST_N 27
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x14,0x22, // LOAD_METHOD 'rstrip'
    0x36,0x00, // CALL_METHOD 0
    0x26,0x1d, // STORE_FAST_N 29
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x21, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0x26,0x1b, // STORE_FAST_N 27
    0x24,0x1b, // LOAD_FAST_N 27
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x24,0x1b, // LOAD_FAST_N 27
    0x23,0x06, // LOAD_CONST_OBJ 6
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x42,0xb2,0x81, // JUMP 178
    0x24,0x1b, // LOAD_FAST_N 27
    0x14,0x23, // LOAD_METHOD 'startswith'
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0x36,0x01, // CALL_METHOD 1
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0x24,0x1b, // LOAD_FAST_N 27
    0xdd, // BINARY_OP 6 <in>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x12,0x4d, // LOAD_GLOBAL 'ValueError'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0x12,0x4c, // LOAD_GLOBAL 'str'
    0x24,0x1b, // LOAD_FAST_N 27
    0x10,0x24, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0xd1,0x80, // JUMP 81
    0x24,0x1b, // LOAD_FAST_N 27
    0x14,0x23, // LOAD_METHOD 'startswith'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0x36,0x01, // CALL_METHOD 1
    0x44,0xc6,0x80, // POP_JUMP_IF_FALSE 70
    0x22,0x81,0x48, // LOAD_CONST_SMALL_INT 200
    0x24,0x1c, // LOAD_FAST_N 28
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xda, // BINARY_OP 3 __le__
    0x46,0x06, // JUMP_IF_FALSE_OR_POP 6
    0x22,0x82,0x2b, // LOAD_CONST_SMALL_INT 299
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x72, // POP_JUMP_IF_TRUE 50
    0x24,0x1c, // LOAD_FAST_N 28
    0x22,0x82,0x2d, // LOAD_CONST_SMALL_INT 301
    0x22,0x82,0x2e, // LOAD_CONST_SMALL_INT 302
    0x22,0x82,0x2f, // LOAD_CONST_SMALL_INT 303
    0x22,0x82,0x33, // LOAD_CONST_SMALL_INT 307
    0x22,0x82,0x34, // LOAD_CONST_SMALL_INT 308
    0x2b,0x05, // BUILD_LIST 5
    0xdd, // BINARY_OP 6 <in>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x12,0x4c, // LOAD_GLOBAL 'str'
    0x24,0x1b, // LOAD_FAST_N 27
    0x8a, // LOAD_CONST_SMALL_INT 10
    0x7e, // LOAD_CONST_SMALL_INT -2
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x10,0x24, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0xc9, // STORE_FAST 9
    0x42,0x4a, // JUMP 10
    0x12,0x50, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x11, // LOAD_CONST_OBJ 17
    0x24,0x1c, // LOAD_FAST_N 28
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0x40, // JUMP 0
    0xb8, // LOAD_FAST 8
    0x50, // LOAD_CONST_FALSE
    0xde, // BINARY_OP 7 <is>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x73, // JUMP 51
    0xb8, // LOAD_FAST 8
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x12,0x4c, // LOAD_GLOBAL 'str'
    0x24,0x1b, // LOAD_FAST_N 27
    0x10,0x24, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0x26,0x1b, // STORE_FAST_N 27
    0x24,0x1b, // LOAD_FAST_N 27
    0x14,0x0d, // LOAD_METHOD 'split'
    0x10,0x13, // LOAD_CONST_STRING ':'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0x26,0x18, // STORE_FAST_N 24
    0x26,0x1e, // STORE_FAST_N 30
    0x24,0x1e, // LOAD_FAST_N 30
    0x14,0x25, // LOAD_METHOD 'strip'
    0x36,0x00, // CALL_METHOD 0
    0x24,0x16, // LOAD_FAST_N 22
    0x24,0x18, // LOAD_FAST_N 24
    0x56, // STORE_SUBSCR
    0x42,0x48, // JUMP 8
    0xb8, // LOAD_FAST 8
    0x24,0x1b, // LOAD_FAST_N 27
    0x24,0x16, // LOAD_FAST_N 22
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x42,0xb8,0x7e, // JUMP -200
    0x4a,0x10, // POP_EXCEPT_JUMP 16
    0x57, // DUP_TOP
    0x12,0x51, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x64, // RAISE_LAST
    0x5d, // END_FINALLY
    0xb9, // LOAD_FAST 9
    0x44,0x70, // POP_JUMP_IF_FALSE 48
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x24,0x1c, // LOAD_FAST_N 28
    0x22,0x82,0x2d, // LOAD_CONST_SMALL_INT 301
    0x22,0x82,0x2e, // LOAD_CONST_SMALL_INT 302
    0x22,0x82,0x2f, // LOAD_CONST_SMALL_INT 303
    0x2b,0x03, // BUILD_LIST 3
    0xdd, // BINARY_OP 6 <in>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x27, // LOAD_CONST_STRING 'GET'
    0xb9, // LOAD_FAST 9
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x34,0x06, // CALL_FUNCTION 6
    0x63, // RETURN_VALUE
    0x12,0x05, // LOAD_GLOBAL 'request'
    0xb0, // LOAD_FAST 0
    0xb9, // LOAD_FAST 9
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x34,0x06, // CALL_FUNCTION 6
    0x63, // RETURN_VALUE
    0x42,0x64, // JUMP 36
    0x12,0x03, // LOAD_GLOBAL 'Response'
    0x24,0x17, // LOAD_FAST_N 23
    0x34,0x01, // CALL_FUNCTION 1
    0x26,0x1f, // STORE_FAST_N 31
    0x24,0x1c, // LOAD_FAST_N 28
    0x24,0x1f, // LOAD_FAST_N 31
    0x18,0x28, // STORE_ATTR 'status_code'
    0x24,0x1d, // LOAD_FAST_N 29
    0x24,0x1f, // LOAD_FAST_N 31
    0x18,0x29, // STORE_ATTR 'reason'
    0x24,0x16, // LOAD_FAST_N 22
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x24,0x16, // LOAD_FAST_N 22
    0x24,0x1f, // LOAD_FAST_N 31
    0x18,0x2a, // STORE_ATTR 'headers'
    0x24,0x1f, // LOAD_FAST_N 31
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___request = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 9,
    .fun_data = fun_data_requests___init___request,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 1025,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 41,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 9,
        .n_kwonly_args = 0,
        .n_def_pos_args = 7,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_requests___init___request + 16,
        .line_info_top = fun_data_requests___init___request + 115,
        .opcodes = fun_data_requests___init___request + 115,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___head
static const byte fun_data_requests___init___head[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x2b,0x45, // names: head, url
    0x80,0xaf, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x2c, // LOAD_CONST_STRING 'HEAD'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___head = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___head,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_requests___init___head + 6,
        .line_info_top = fun_data_requests___init___head + 8,
        .opcodes = fun_data_requests___init___head + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___get
static const byte fun_data_requests___init___get[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x2d,0x45, // names: get, url
    0x80,0xb3, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x27, // LOAD_CONST_STRING 'GET'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___get = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___get,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_requests___init___get + 6,
        .line_info_top = fun_data_requests___init___get + 8,
        .opcodes = fun_data_requests___init___get + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___post
static const byte fun_data_requests___init___post[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x2e,0x45, // names: post, url
    0x80,0xb7, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x2f, // LOAD_CONST_STRING 'POST'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___post = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___post,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_requests___init___post + 6,
        .line_info_top = fun_data_requests___init___post + 8,
        .opcodes = fun_data_requests___init___post + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___put
static const byte fun_data_requests___init___put[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x30,0x45, // names: put, url
    0x80,0xbb, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x31, // LOAD_CONST_STRING 'PUT'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___put = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___put,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 48,
        .line_info = fun_data_requests___init___put + 6,
        .line_info_top = fun_data_requests___init___put + 8,
        .opcodes = fun_data_requests___init___put + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___patch
static const byte fun_data_requests___init___patch[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x32,0x45, // names: patch, url
    0x80,0xbf, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x33, // LOAD_CONST_STRING 'PATCH'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___patch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___patch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_requests___init___patch + 6,
        .line_info_top = fun_data_requests___init___patch + 8,
        .opcodes = fun_data_requests___init___patch + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___delete
static const byte fun_data_requests___init___delete[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x34,0x45, // names: delete, url
    0x80,0xc3, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x35, // LOAD_CONST_STRING 'DELETE'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_requests___init___delete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 1,
    .fun_data = fun_data_requests___init___delete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 52,
        .line_info = fun_data_requests___init___delete + 6,
        .line_info_top = fun_data_requests___init___delete + 8,
        .opcodes = fun_data_requests___init___delete + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_requests___init____lt_module_gt_[] = {
    &raw_code_requests___init___Response,
    &raw_code_requests___init___request,
    &raw_code_requests___init___head,
    &raw_code_requests___init___get,
    &raw_code_requests___init___post,
    &raw_code_requests___init___put,
    &raw_code_requests___init___patch,
    &raw_code_requests___init___delete,
};

static const mp_raw_code_t raw_code_requests___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_requests___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 82,
    #endif
    .children = (void *)&children_requests___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 8,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_requests___init____lt_module_gt_ + 3,
        .line_info_top = fun_data_requests___init____lt_module_gt_ + 22,
        .opcodes = fun_data_requests___init____lt_module_gt_ + 22,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_requests___init__[84] = {
    MP_QSTR_requests_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_usocket,
    MP_QSTR_Response,
    MP_QSTR_0_dot_8_dot_1,
    MP_QSTR_request,
    MP_QSTR___next__,
    MP_QSTR___len__,
    MP_QSTR_ubinascii,
    MP_QSTR_format,
    MP_QSTR_b2a_base64,
    MP_QSTR_ascii,
    MP_QSTR_Basic_space__brace_open__brace_close_,
    MP_QSTR_split,
    MP_QSTR__slash_,
    MP_QSTR_,
    MP_QSTR_http_colon_,
    MP_QSTR_https_colon_,
    MP_QSTR_ussl,
    MP_QSTR__colon_,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_socket,
    MP_QSTR_settimeout,
    MP_QSTR_connect,
    MP_QSTR_wrap_socket,
    MP_QSTR_server_hostname,
    MP_QSTR_write,
    MP_QSTR_Host,
    MP_QSTR_AssertionError,
    MP_QSTR_ujson,
    MP_QSTR_dumps,
    MP_QSTR_0_0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR_readline,
    MP_QSTR_rstrip,
    MP_QSTR_startswith,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR_strip,
    MP_QSTR_close,
    MP_QSTR_GET,
    MP_QSTR_status_code,
    MP_QSTR_reason,
    MP_QSTR_headers,
    MP_QSTR_head,
    MP_QSTR_HEAD,
    MP_QSTR_get,
    MP_QSTR_post,
    MP_QSTR_POST,
    MP_QSTR_put,
    MP_QSTR_PUT,
    MP_QSTR_patch,
    MP_QSTR_PATCH,
    MP_QSTR_delete,
    MP_QSTR_DELETE,
    MP_QSTR___init__,
    MP_QSTR_raw,
    MP_QSTR_encoding,
    MP_QSTR__cached,
    MP_QSTR_content,
    MP_QSTR_read,
    MP_QSTR_text,
    MP_QSTR_json,
    MP_QSTR_loads,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_property,
    MP_QSTR_method,
    MP_QSTR_url,
    MP_QSTR_data,
    MP_QSTR_stream,
    MP_QSTR_auth,
    MP_QSTR_timeout,
    MP_QSTR_parse_headers,
    MP_QSTR_getattr,
    MP_QSTR_str,
    MP_QSTR_ValueError,
    MP_QSTR_int,
    MP_QSTR_len,
    MP_QSTR_NotImplementedError,
    MP_QSTR_OSError,
    MP_QSTR_self,
    MP_QSTR_f,
};

// constants
static const mp_obj_str_t const_obj_requests___init___0 = {{&mp_type_bytes}, 14943, 5, (const byte*)"\x7b\x7d\x3a\x7b\x7d"};
static const mp_obj_str_t const_obj_requests___init___3 = {{&mp_type_bytes}, 47477, 17, (const byte*)"\x25\x73\x20\x2f\x25\x73\x20\x48\x54\x54\x50\x2f\x31\x2e\x30\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___4 = {{&mp_type_bytes}, 35534, 10, (const byte*)"\x48\x6f\x73\x74\x3a\x20\x25\x73\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___5 = {{&mp_type_bytes}, 26975, 2, (const byte*)"\x3a\x20"};
static const mp_obj_str_t const_obj_requests___init___6 = {{&mp_type_bytes}, 27298, 2, (const byte*)"\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___7 = {{&mp_type_bytes}, 14729, 32, (const byte*)"\x43\x6f\x6e\x74\x65\x6e\x74\x2d\x54\x79\x70\x65\x3a\x20\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x6a\x73\x6f\x6e\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___8 = {{&mp_type_bytes}, 16551, 28, (const byte*)"\x54\x72\x61\x6e\x73\x66\x65\x72\x2d\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a\x20\x63\x68\x75\x6e\x6b\x65\x64\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___9 = {{&mp_type_bytes}, 8065, 20, (const byte*)"\x43\x6f\x6e\x74\x65\x6e\x74\x2d\x4c\x65\x6e\x67\x74\x68\x3a\x20\x25\x64\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___10 = {{&mp_type_bytes}, 54399, 21, (const byte*)"\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x63\x6c\x6f\x73\x65\x0d\x0a\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___11 = {{&mp_type_bytes}, 50079, 4, (const byte*)"\x25\x78\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___12 = {{&mp_type_str}, 62148, 29, (const byte*)"\x48\x54\x54\x50\x20\x65\x72\x72\x6f\x72\x3a\x20\x42\x61\x64\x53\x74\x61\x74\x75\x73\x4c\x69\x6e\x65\x3a\x0a\x25\x73"};
static const mp_obj_str_t const_obj_requests___init___13 = {{&mp_type_bytes}, 59642, 18, (const byte*)"\x54\x72\x61\x6e\x73\x66\x65\x72\x2d\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a"};
static const mp_obj_str_t const_obj_requests___init___14 = {{&mp_type_bytes}, 3583, 7, (const byte*)"\x63\x68\x75\x6e\x6b\x65\x64"};
static const mp_obj_str_t const_obj_requests___init___16 = {{&mp_type_bytes}, 1090, 9, (const byte*)"\x4c\x6f\x63\x61\x74\x69\x6f\x6e\x3a"};
static const mp_obj_str_t const_obj_requests___init___17 = {{&mp_type_str}, 18157, 29, (const byte*)"\x52\x65\x64\x69\x72\x65\x63\x74\x20\x25\x64\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_requests___init__[18] = {
    MP_ROM_PTR(&const_obj_requests___init___0),
    MP_ROM_QSTR(MP_QSTR_Authorization),
    MP_ROM_QSTR(MP_QSTR_Unsupported_space_protocol_colon__space_),
    MP_ROM_PTR(&const_obj_requests___init___3),
    MP_ROM_PTR(&const_obj_requests___init___4),
    MP_ROM_PTR(&const_obj_requests___init___5),
    MP_ROM_PTR(&const_obj_requests___init___6),
    MP_ROM_PTR(&const_obj_requests___init___7),
    MP_ROM_PTR(&const_obj_requests___init___8),
    MP_ROM_PTR(&const_obj_requests___init___9),
    MP_ROM_PTR(&const_obj_requests___init___10),
    MP_ROM_PTR(&const_obj_requests___init___11),
    MP_ROM_PTR(&const_obj_requests___init___12),
    MP_ROM_PTR(&const_obj_requests___init___13),
    MP_ROM_PTR(&const_obj_requests___init___14),
    MP_ROM_QSTR(MP_QSTR_Unsupported_space_),
    MP_ROM_PTR(&const_obj_requests___init___16),
    MP_ROM_PTR(&const_obj_requests___init___17),
};

static const mp_frozen_module_t frozen_module_requests___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_requests___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_requests___init__,
    },
    .rc = &raw_code_requests___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module mip___init__
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/mip/__init__.mpy
// - frozen file name: mip/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file mip/__init__.py, scope mip___init____lt_module_gt_
static const byte fun_data_mip___init____lt_module_gt_[81] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'micropython'
    0x1c,0x02, // IMPORT_FROM 'const'
    0x16,0x02, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'requests'
    0x16,0x04, // STORE_NAME 'requests'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'sys'
    0x16,0x05, // STORE_NAME 'sys'
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0x16,0x41, // STORE_NAME '_CHUNK_SIZE'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME '_ensure_path_exists'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0f, // STORE_NAME '_chunk'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x11, // STORE_NAME '_check_exists'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x1a, // STORE_NAME '_rewrite_url'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x1f, // STORE_NAME '_download_file'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x29, // STORE_NAME '_install_json'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x30, // STORE_NAME '_install_package'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x2a,0x04, // BUILD_TUPLE 4
    0x53, // LOAD_NULL
    0x33,0x07, // MAKE_FUNCTION_DEFARGS 7
    0x16,0x3c, // STORE_NAME 'install'
    0x10,0x06, // LOAD_CONST_STRING '0.2.0'
    0x16,0x42, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____ensure_path_exists
static const byte fun_data_mip___init____ensure_path_exists[97] = {
    0x65,0x04, // prelude
    0x07,0x3d, // names: _ensure_path_exists, path
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'os'
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x09, // LOAD_METHOD 'split'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0xb2, // LOAD_FAST 2
    0x14,0x0b, // LOAD_METHOD 'pop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0x10,0x0c, // LOAD_CONST_STRING ''
    0xc3, // STORE_FAST 3
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf3, // BINARY_OP 28 __sub__
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x65, // JUMP 37
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0xe5, // BINARY_OP 14 __iadd__
    0xc3, // STORE_FAST 3
    0x48,0x09, // SETUP_EXCEPT 9
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'stat'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x0e, // LOAD_METHOD 'mkdir'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xe5, // BINARY_OP 14 __iadd__
    0xc3, // STORE_FAST 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x16, // POP_JUMP_IF_TRUE -42
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____ensure_path_exists = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_mip___init____ensure_path_exists,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 97,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_mip___init____ensure_path_exists + 4,
        .line_info_top = fun_data_mip___init____ensure_path_exists + 4,
        .opcodes = fun_data_mip___init____ensure_path_exists + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____chunk
static const byte fun_data_mip___init____chunk[53] = {
    0x3a,0x06, // prelude
    0x0f,0x44,0x45, // names: _chunk, src, dest
     // code info
    0x12,0x46, // LOAD_GLOBAL 'memoryview'
    0x12,0x47, // LOAD_GLOBAL 'bytearray'
    0x12,0x41, // LOAD_GLOBAL '_CHUNK_SIZE'
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'readinto'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x55, // JUMP 21
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x12,0x41, // LOAD_GLOBAL '_CHUNK_SIZE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb2, // LOAD_FAST 2
    0x42,0x46, // JUMP 6
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xb3, // LOAD_FAST 3
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x1d, // JUMP -35
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____chunk = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_mip___init____chunk,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 53,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_mip___init____chunk + 5,
        .line_info_top = fun_data_mip___init____chunk + 5,
        .opcodes = fun_data_mip___init____chunk + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____check_exists
static const byte fun_data_mip___init____check_exists[88] = {
    0xf2,0x02,0x06, // prelude
    0x11,0x3d,0x48, // names: _check_exists, path, short_hash
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'os'
    0xc2, // STORE_FAST 2
    0x48,0x45, // SETUP_EXCEPT 69
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x12, // IMPORT_NAME 'binascii'
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x13, // IMPORT_NAME 'hashlib'
    0xc4, // STORE_FAST 4
    0x12,0x49, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x10,0x14, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x2e, // SETUP_WITH 46
    0xc5, // STORE_FAST 5
    0xb4, // LOAD_FAST 4
    0x14,0x15, // LOAD_METHOD 'sha256'
    0x36,0x00, // CALL_METHOD 0
    0xc6, // STORE_FAST 6
    0x12,0x0f, // LOAD_GLOBAL '_chunk'
    0xb5, // LOAD_FAST 5
    0xb6, // LOAD_FAST 6
    0x13,0x16, // LOAD_ATTR 'update'
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x4a, // LOAD_GLOBAL 'str'
    0xb3, // LOAD_FAST 3
    0x14,0x17, // LOAD_METHOD 'hexlify'
    0xb6, // LOAD_FAST 6
    0x14,0x18, // LOAD_METHOD 'digest'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x10,0x19, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0xb1, // LOAD_FAST 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x4a,0x04, // POP_EXCEPT_JUMP 4
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____check_exists = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_mip___init____check_exists,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 88,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_mip___init____check_exists + 6,
        .line_info_top = fun_data_mip___init____check_exists + 6,
        .opcodes = fun_data_mip___init____check_exists + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____rewrite_url
static const byte fun_data_mip___init____rewrite_url[71] = {
    0xba,0x01,0x06, // prelude
    0x1a,0x4b,0x4c, // names: _rewrite_url, url, branch
     // code info
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x10,0x1b, // LOAD_CONST_STRING 'HEAD'
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x1d, // LOAD_CONST_STRING 'github:'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x70, // POP_JUMP_IF_FALSE 48
    0xb0, // LOAD_FAST 0
    0x87, // LOAD_CONST_SMALL_INT 7
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'split'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb0, // LOAD_FAST 0
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x14,0x1e, // LOAD_METHOD 'join'
    0xb0, // LOAD_FAST 0
    0x82, // LOAD_CONST_SMALL_INT 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xf2, // BINARY_OP 27 __add__
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____rewrite_url = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_mip___init____rewrite_url,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 71,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_mip___init____rewrite_url + 6,
        .line_info_top = fun_data_mip___init____rewrite_url + 6,
        .opcodes = fun_data_mip___init____rewrite_url + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____download_file
static const byte fun_data_mip___init____download_file[89] = {
    0xda,0x02,0x06, // prelude
    0x1f,0x4b,0x45, // names: _download_file, url, dest
     // code info
    0x12,0x04, // LOAD_GLOBAL 'requests'
    0x14,0x20, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0x49,0x40, // SETUP_FINALLY 64
    0xb2, // LOAD_FAST 2
    0x13,0x21, // LOAD_ATTR 'status_code'
    0x22,0x81,0x48, // LOAD_CONST_SMALL_INT 200
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x10,0x22, // LOAD_CONST_STRING 'Error'
    0xb2, // LOAD_FAST 2
    0x13,0x21, // LOAD_ATTR 'status_code'
    0x10,0x23, // LOAD_CONST_STRING 'requesting'
    0xb0, // LOAD_FAST 0
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x10,0x24, // LOAD_CONST_STRING 'Copying:'
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x07, // LOAD_GLOBAL '_ensure_path_exists'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x49, // LOAD_GLOBAL 'open'
    0xb1, // LOAD_FAST 1
    0x10,0x25, // LOAD_CONST_STRING 'wb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x0d, // SETUP_WITH 13
    0xc3, // STORE_FAST 3
    0x12,0x0f, // LOAD_GLOBAL '_chunk'
    0xb2, // LOAD_FAST 2
    0x13,0x26, // LOAD_ATTR 'raw'
    0xb3, // LOAD_FAST 3
    0x13,0x27, // LOAD_ATTR 'write'
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x14,0x28, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____download_file = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_mip___init____download_file,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 89,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_mip___init____download_file + 6,
        .line_info_top = fun_data_mip___init____download_file + 6,
        .opcodes = fun_data_mip___init____download_file + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____install_json
static const byte fun_data_mip___init____install_json[225] = {
    0xbd,0x14,0x0c, // prelude
    0x29,0x4e,0x4f,0x50,0x51,0x52, // names: _install_json, package_json_url, index, target, version, mpy
     // code info
    0x12,0x04, // LOAD_GLOBAL 'requests'
    0x14,0x20, // LOAD_METHOD 'get'
    0x12,0x1a, // LOAD_GLOBAL '_rewrite_url'
    0xb0, // LOAD_FAST 0
    0xb3, // LOAD_FAST 3
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0xc5, // STORE_FAST 5
    0x49,0x1a, // SETUP_FINALLY 26
    0xb5, // LOAD_FAST 5
    0x13,0x21, // LOAD_ATTR 'status_code'
    0x22,0x81,0x48, // LOAD_CONST_SMALL_INT 200
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0xb5, // LOAD_FAST 5
    0x14,0x2a, // LOAD_METHOD 'json'
    0x36,0x00, // CALL_METHOD 0
    0xc6, // STORE_FAST 6
    0x51, // LOAD_CONST_NONE
    0xb5, // LOAD_FAST 5
    0x14,0x28, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0xb6, // LOAD_FAST 6
    0x14,0x20, // LOAD_METHOD 'get'
    0x10,0x2b, // LOAD_CONST_STRING 'hashes'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x5f, // GET_ITER_STACK
    0x4b,0x46, // FOR_ITER 70
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc7, // STORE_FAST 7
    0xc8, // STORE_FAST 8
    0xb2, // LOAD_FAST 2
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb7, // LOAD_FAST 7
    0xf2, // BINARY_OP 27 __add__
    0xc9, // STORE_FAST 9
    0x12,0x11, // LOAD_GLOBAL '_check_exists'
    0xb9, // LOAD_FAST 9
    0xb8, // LOAD_FAST 8
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x10,0x2c, // LOAD_CONST_STRING 'Exists:'
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x42,0x66, // JUMP 38
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb1, // LOAD_FAST 1
    0xb8, // LOAD_FAST 8
    0x51, // LOAD_CONST_NONE
    0x82, // LOAD_CONST_SMALL_INT 2
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xb8, // LOAD_FAST 8
    0x36,0x03, // CALL_METHOD 3
    0xca, // STORE_FAST 10
    0x12,0x1f, // LOAD_GLOBAL '_download_file'
    0xba, // LOAD_FAST 10
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x4f, // POP_JUMP_IF_TRUE 15
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x42,0xb8,0x7f, // JUMP -72
    0xb6, // LOAD_FAST 6
    0x14,0x20, // LOAD_METHOD 'get'
    0x10,0x2e, // LOAD_CONST_STRING 'urls'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x5f, // GET_ITER_STACK
    0x4b,0x29, // FOR_ITER 41
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc7, // STORE_FAST 7
    0xcb, // STORE_FAST 11
    0xb2, // LOAD_FAST 2
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb7, // LOAD_FAST 7
    0xf2, // BINARY_OP 27 __add__
    0xc9, // STORE_FAST 9
    0x12,0x1f, // LOAD_GLOBAL '_download_file'
    0x12,0x1a, // LOAD_GLOBAL '_rewrite_url'
    0xbb, // LOAD_FAST 11
    0xb3, // LOAD_FAST 3
    0x34,0x02, // CALL_FUNCTION 2
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x4f, // POP_JUMP_IF_TRUE 15
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb7, // LOAD_FAST 7
    0xbb, // LOAD_FAST 11
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x42,0x15, // JUMP -43
    0xb6, // LOAD_FAST 6
    0x14,0x20, // LOAD_METHOD 'get'
    0x10,0x2f, // LOAD_CONST_STRING 'deps'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x5f, // GET_ITER_STACK
    0x4b,0x13, // FOR_ITER 19
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xcc, // STORE_FAST 12
    0xcd, // STORE_FAST 13
    0x12,0x30, // LOAD_GLOBAL '_install_package'
    0xbc, // LOAD_FAST 12
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xbd, // LOAD_FAST 13
    0xb4, // LOAD_FAST 4
    0x34,0x05, // CALL_FUNCTION 5
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x42,0x2b, // JUMP -21
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____install_json = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_mip___init____install_json,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 225,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 24,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_mip___init____install_json + 9,
        .line_info_top = fun_data_mip___init____install_json + 9,
        .opcodes = fun_data_mip___init____install_json + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____install_package
static const byte fun_data_mip___init____install_package[208] = {
    0xe1,0x04,0x0c, // prelude
    0x30,0x53,0x4f,0x50,0x51,0x52, // names: _install_package, package, index, target, version, mpy
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x31, // LOAD_CONST_STRING 'http://'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x53, // POP_JUMP_IF_TRUE 19
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x32, // LOAD_CONST_STRING 'https://'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x4a, // POP_JUMP_IF_TRUE 10
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x1d, // LOAD_CONST_STRING 'github:'
    0x36,0x01, // CALL_METHOD 1
    0x44,0xe3,0x80, // POP_JUMP_IF_FALSE 99
    0xb0, // LOAD_FAST 0
    0x14,0x33, // LOAD_METHOD 'endswith'
    0x10,0x34, // LOAD_CONST_STRING '.py'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x49, // POP_JUMP_IF_TRUE 9
    0xb0, // LOAD_FAST 0
    0x14,0x33, // LOAD_METHOD 'endswith'
    0x10,0x35, // LOAD_CONST_STRING '.mpy'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x1f, // LOAD_GLOBAL '_download_file'
    0x12,0x1a, // LOAD_GLOBAL '_rewrite_url'
    0xb0, // LOAD_FAST 0
    0xb3, // LOAD_FAST 3
    0x34,0x02, // CALL_FUNCTION 2
    0xb2, // LOAD_FAST 2
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb0, // LOAD_FAST 0
    0x14,0x36, // LOAD_METHOD 'rsplit'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x33, // LOAD_METHOD 'endswith'
    0x10,0x37, // LOAD_CONST_STRING '.json'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x53, // POP_JUMP_IF_TRUE 19
    0xb0, // LOAD_FAST 0
    0x14,0x33, // LOAD_METHOD 'endswith'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb0, // LOAD_FAST 0
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xe5, // BINARY_OP 14 __iadd__
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xe5, // BINARY_OP 14 __iadd__
    0xc0, // STORE_FAST 0
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x7e, // JUMP 62
    0xb3, // LOAD_FAST 3
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x10,0x38, // LOAD_CONST_STRING 'latest'
    0xc3, // STORE_FAST 3
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb0, // LOAD_FAST 0
    0xb3, // LOAD_FAST 3
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x04, // CALL_METHOD 4
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0x12,0x54, // LOAD_GLOBAL 'hasattr'
    0x12,0x05, // LOAD_GLOBAL 'sys'
    0x13,0x39, // LOAD_ATTR 'implementation'
    0x10,0x3a, // LOAD_CONST_STRING '_mpy'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x05, // LOAD_GLOBAL 'sys'
    0x13,0x39, // LOAD_ATTR 'implementation'
    0x13,0x3a, // LOAD_ATTR '_mpy'
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0x42,0x42, // JUMP 2
    0x10,0x3b, // LOAD_CONST_STRING 'py'
    0xc5, // STORE_FAST 5
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x14,0x2d, // LOAD_METHOD 'format'
    0xb1, // LOAD_FAST 1
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0xb3, // LOAD_FAST 3
    0x36,0x04, // CALL_METHOD 4
    0xc0, // STORE_FAST 0
    0x12,0x29, // LOAD_GLOBAL '_install_json'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x34,0x05, // CALL_FUNCTION 5
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init____install_package = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_mip___init____install_package,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 208,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 48,
        .line_info = fun_data_mip___init____install_package + 9,
        .line_info_top = fun_data_mip___init____install_package + 9,
        .opcodes = fun_data_mip___init____install_package + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init___install
static const byte fun_data_mip___init___install[91] = {
    0xe1,0x84,0x80,0x01,0x0c, // prelude
    0x3c,0x53,0x4f,0x50,0x51,0x52, // names: install, package, index, target, version, mpy
     // code info
    0xb2, // LOAD_FAST 2
    0x43,0x64, // POP_JUMP_IF_TRUE 36
    0x12,0x05, // LOAD_GLOBAL 'sys'
    0x13,0x3d, // LOAD_ATTR 'path'
    0x5f, // GET_ITER_STACK
    0x4b,0x14, // FOR_ITER 20
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x33, // LOAD_METHOD 'endswith'
    0x10,0x3e, // LOAD_CONST_STRING '/lib'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb5, // LOAD_FAST 5
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x4b, // JUMP 11
    0x42,0x2a, // JUMP -22
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0xc1, // STORE_FAST 1
    0x12,0x30, // LOAD_GLOBAL '_install_package'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x14,0x3f, // LOAD_METHOD 'rstrip'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x34,0x05, // CALL_FUNCTION 5
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x10,0x40, // LOAD_CONST_STRING 'Done'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x47, // JUMP 7
    0x12,0x4d, // LOAD_GLOBAL 'print'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_mip___init___install = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_mip___init___install,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 91,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 4,
        .qstr_block_name_idx = 60,
        .line_info = fun_data_mip___init___install + 11,
        .line_info_top = fun_data_mip___init___install + 11,
        .opcodes = fun_data_mip___init___install + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_mip___init____lt_module_gt_[] = {
    &raw_code_mip___init____ensure_path_exists,
    &raw_code_mip___init____chunk,
    &raw_code_mip___init____check_exists,
    &raw_code_mip___init____rewrite_url,
    &raw_code_mip___init____download_file,
    &raw_code_mip___init____install_json,
    &raw_code_mip___init____install_package,
    &raw_code_mip___init___install,
};

static const mp_raw_code_t raw_code_mip___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_mip___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 81,
    #endif
    .children = (void *)&children_mip___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 8,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_mip___init____lt_module_gt_ + 3,
        .line_info_top = fun_data_mip___init____lt_module_gt_ + 3,
        .opcodes = fun_data_mip___init____lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_mip___init__[85] = {
    MP_QSTR_mip_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_requests,
    MP_QSTR_sys,
    MP_QSTR_0_dot_2_dot_0,
    MP_QSTR__ensure_path_exists,
    MP_QSTR_os,
    MP_QSTR_split,
    MP_QSTR__slash_,
    MP_QSTR_pop,
    MP_QSTR_,
    MP_QSTR_stat,
    MP_QSTR_mkdir,
    MP_QSTR__chunk,
    MP_QSTR_readinto,
    MP_QSTR__check_exists,
    MP_QSTR_binascii,
    MP_QSTR_hashlib,
    MP_QSTR_rb,
    MP_QSTR_sha256,
    MP_QSTR_update,
    MP_QSTR_hexlify,
    MP_QSTR_digest,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR__rewrite_url,
    MP_QSTR_HEAD,
    MP_QSTR_startswith,
    MP_QSTR_github_colon_,
    MP_QSTR_join,
    MP_QSTR__download_file,
    MP_QSTR_get,
    MP_QSTR_status_code,
    MP_QSTR_Error,
    MP_QSTR_requesting,
    MP_QSTR_Copying_colon_,
    MP_QSTR_wb,
    MP_QSTR_raw,
    MP_QSTR_write,
    MP_QSTR_close,
    MP_QSTR__install_json,
    MP_QSTR_json,
    MP_QSTR_hashes,
    MP_QSTR_Exists_colon_,
    MP_QSTR_format,
    MP_QSTR_urls,
    MP_QSTR_deps,
    MP_QSTR__install_package,
    MP_QSTR_http_colon__slash__slash_,
    MP_QSTR_https_colon__slash__slash_,
    MP_QSTR_endswith,
    MP_QSTR__dot_py,
    MP_QSTR__dot_mpy,
    MP_QSTR_rsplit,
    MP_QSTR__dot_json,
    MP_QSTR_latest,
    MP_QSTR_implementation,
    MP_QSTR__mpy,
    MP_QSTR_py,
    MP_QSTR_install,
    MP_QSTR_path,
    MP_QSTR__slash_lib,
    MP_QSTR_rstrip,
    MP_QSTR_Done,
    MP_QSTR__CHUNK_SIZE,
    MP_QSTR___version__,
    MP_QSTR_len,
    MP_QSTR_src,
    MP_QSTR_dest,
    MP_QSTR_memoryview,
    MP_QSTR_bytearray,
    MP_QSTR_short_hash,
    MP_QSTR_open,
    MP_QSTR_str,
    MP_QSTR_url,
    MP_QSTR_branch,
    MP_QSTR_print,
    MP_QSTR_package_json_url,
    MP_QSTR_index,
    MP_QSTR_target,
    MP_QSTR_version,
    MP_QSTR_mpy,
    MP_QSTR_package,
    MP_QSTR_hasattr,
};

// constants
static const mp_obj_str_t const_obj_mip___init___0 = {{&mp_type_str}, 18723, 34, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x72\x61\x77\x2e\x67\x69\x74\x68\x75\x62\x75\x73\x65\x72\x63\x6f\x6e\x74\x65\x6e\x74\x2e\x63\x6f\x6d\x2f"};
static const mp_obj_str_t const_obj_mip___init___7 = {{&mp_type_str}, 17480, 32, (const byte*)"\x49\x6e\x73\x74\x61\x6c\x6c\x69\x6e\x67\x20\x7b\x7d\x20\x28\x7b\x7d\x29\x20\x66\x72\x6f\x6d\x20\x7b\x7d\x20\x74\x6f\x20\x7b\x7d"};
static const mp_obj_str_t const_obj_mip___init___9 = {{&mp_type_str}, 43215, 34, (const byte*)"\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x6c\x69\x62\x20\x64\x69\x72\x20\x69\x6e\x20\x73\x79\x73\x2e\x70\x61\x74\x68"};
static const mp_obj_str_t const_obj_mip___init___10 = {{&mp_type_str}, 61939, 29, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x2e\x6f\x72\x67\x2f\x70\x69\x2f\x76\x32"};
static const mp_obj_str_t const_obj_mip___init___11 = {{&mp_type_str}, 57771, 34, (const byte*)"\x50\x61\x63\x6b\x61\x67\x65\x20\x6d\x61\x79\x20\x62\x65\x20\x70\x61\x72\x74\x69\x61\x6c\x6c\x79\x20\x69\x6e\x73\x74\x61\x6c\x6c\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_mip___init__[12] = {
    MP_ROM_PTR(&const_obj_mip___init___0),
    MP_ROM_QSTR(MP_QSTR_Package_space_not_space_found_colon_),
    MP_ROM_QSTR(MP_QSTR__brace_open__brace_close__slash_file_slash__brace_open__brace_close__slash__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_File_space_not_space_found_colon__space__brace_open__brace_close__space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_Downloading_space__brace_open__brace_close__space_to_space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_package_dot_json),
    MP_ROM_QSTR(MP_QSTR_Installing_space__brace_open__brace_close__space_to_space__brace_open__brace_close_),
    MP_ROM_PTR(&const_obj_mip___init___7),
    MP_ROM_QSTR(MP_QSTR__brace_open__brace_close__slash_package_slash__brace_open__brace_close__slash__brace_open__brace_close__slash__brace_open__brace_close__dot_json),
    MP_ROM_PTR(&const_obj_mip___init___9),
    MP_ROM_PTR(&const_obj_mip___init___10),
    MP_ROM_PTR(&const_obj_mip___init___11),
};

static const mp_frozen_module_t frozen_module_mip___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_mip___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_mip___init__,
    },
    .rc = &raw_code_mip___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ntptime
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/ntptime.mpy
// - frozen file name: ntptime.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ntptime.py, scope ntptime__lt_module_gt_
static const byte fun_data_ntptime__lt_module_gt_[70] = {
    0x24,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'utime'
    0x16,0x02, // STORE_NAME 'utime'
    0x48,0x08, // SETUP_EXCEPT 8
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'usocket'
    0x16,0x04, // STORE_NAME 'socket'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'socket'
    0x16,0x04, // STORE_NAME 'socket'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x48,0x08, // SETUP_EXCEPT 8
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'ustruct'
    0x16,0x06, // STORE_NAME 'struct'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'struct'
    0x16,0x06, // STORE_NAME 'struct'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x18, // STORE_NAME 'host'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x16,0x19, // STORE_NAME 'timeout'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME 'time'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x14, // STORE_NAME 'settime'
    0x10,0x07, // LOAD_CONST_STRING '0.1.0'
    0x16,0x1a, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ntptime__lt_module_gt_
// frozen bytecode for file ntptime.py, scope ntptime_time
static const byte fun_data_ntptime_time[146] = {
    0x74,0x02, // prelude
    0x08, // names: time
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'bytearray'
    0x22,0x30, // LOAD_CONST_SMALL_INT 48
    0x34,0x01, // CALL_FUNCTION 1
    0xc0, // STORE_FAST 0
    0x9b, // LOAD_CONST_SMALL_INT 27
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x14,0x09, // LOAD_METHOD 'getaddrinfo'
    0x12,0x18, // LOAD_GLOBAL 'host'
    0x22,0x80,0x7b, // LOAD_CONST_SMALL_INT 123
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x14,0x04, // LOAD_METHOD 'socket'
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x13,0x0a, // LOAD_ATTR 'AF_INET'
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x13,0x0b, // LOAD_ATTR 'SOCK_DGRAM'
    0x36,0x02, // CALL_METHOD 2
    0xc2, // STORE_FAST 2
    0x49,0x19, // SETUP_FINALLY 25
    0xb2, // LOAD_FAST 2
    0x14,0x0c, // LOAD_METHOD 'settimeout'
    0x12,0x19, // LOAD_GLOBAL 'timeout'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x14,0x0d, // LOAD_METHOD 'sendto'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0xc3, // STORE_FAST 3
    0xb2, // LOAD_FAST 2
    0x14,0x0e, // LOAD_METHOD 'recv'
    0x22,0x30, // LOAD_CONST_SMALL_INT 48
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0x51, // LOAD_CONST_NONE
    0xb2, // LOAD_FAST 2
    0x14,0x0f, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x12,0x06, // LOAD_GLOBAL 'struct'
    0x14,0x10, // LOAD_METHOD 'unpack'
    0x10,0x11, // LOAD_CONST_STRING '!I'
    0xb4, // LOAD_FAST 4
    0xa8, // LOAD_CONST_SMALL_INT 40
    0xac, // LOAD_CONST_SMALL_INT 44
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc5, // STORE_FAST 5
    0x12,0x02, // LOAD_GLOBAL 'utime'
    0x14,0x12, // LOAD_METHOD 'gmtime'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x22,0x8f,0x50, // LOAD_CONST_SMALL_INT 2000
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xc7, // STORE_FAST 7
    0x42,0x58, // JUMP 24
    0xb6, // LOAD_FAST 6
    0x22,0x8f,0x32, // LOAD_CONST_SMALL_INT 1970
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xc7, // STORE_FAST 7
    0x42,0x4c, // JUMP 12
    0x12,0x1c, // LOAD_GLOBAL 'Exception'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x14,0x13, // LOAD_METHOD 'format'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0xb7, // LOAD_FAST 7
    0xf3, // BINARY_OP 28 __sub__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ntptime_time = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ntptime_time,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 146,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_ntptime_time + 3,
        .line_info_top = fun_data_ntptime_time + 3,
        .opcodes = fun_data_ntptime_time + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ntptime__lt_module_gt_
// frozen bytecode for file ntptime.py, scope ntptime_settime
static const byte fun_data_ntptime_settime[59] = {
    0x60,0x02, // prelude
    0x14, // names: settime
     // code info
    0x12,0x08, // LOAD_GLOBAL 'time'
    0x34,0x00, // CALL_FUNCTION 0
    0xc0, // STORE_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x15, // IMPORT_NAME 'machine'
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'utime'
    0x14,0x12, // LOAD_METHOD 'gmtime'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x14,0x16, // LOAD_METHOD 'RTC'
    0x36,0x00, // CALL_METHOD 0
    0x14,0x17, // LOAD_METHOD 'datetime'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xb2, // LOAD_FAST 2
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x85, // LOAD_CONST_SMALL_INT 5
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x08, // BUILD_TUPLE 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ntptime_settime = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ntptime_settime,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 59,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_ntptime_settime + 3,
        .line_info_top = fun_data_ntptime_settime + 3,
        .opcodes = fun_data_ntptime_settime + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ntptime__lt_module_gt_[] = {
    &raw_code_ntptime_time,
    &raw_code_ntptime_settime,
};

static const mp_raw_code_t raw_code_ntptime__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ntptime__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 70,
    #endif
    .children = (void *)&children_ntptime__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ntptime__lt_module_gt_ + 3,
        .line_info_top = fun_data_ntptime__lt_module_gt_ + 3,
        .opcodes = fun_data_ntptime__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_ntptime[29] = {
    MP_QSTR_ntptime_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_utime,
    MP_QSTR_usocket,
    MP_QSTR_socket,
    MP_QSTR_ustruct,
    MP_QSTR_struct,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR_time,
    MP_QSTR_getaddrinfo,
    MP_QSTR_AF_INET,
    MP_QSTR_SOCK_DGRAM,
    MP_QSTR_settimeout,
    MP_QSTR_sendto,
    MP_QSTR_recv,
    MP_QSTR_close,
    MP_QSTR_unpack,
    MP_QSTR__bang_I,
    MP_QSTR_gmtime,
    MP_QSTR_format,
    MP_QSTR_settime,
    MP_QSTR_machine,
    MP_QSTR_RTC,
    MP_QSTR_datetime,
    MP_QSTR_host,
    MP_QSTR_timeout,
    MP_QSTR___version__,
    MP_QSTR_bytearray,
    MP_QSTR_Exception,
};

// constants
static const mp_obj_int_t const_obj_ntptime_1 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0xc200,0xbc17}}};
static const mp_obj_int_t const_obj_ntptime_2 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0x7e80,0x83aa}}};

// constant table
static const mp_rom_obj_t const_obj_table_data_ntptime[4] = {
    MP_ROM_QSTR(MP_QSTR_pool_dot_ntp_dot_org),
    MP_ROM_PTR(&const_obj_ntptime_1),
    MP_ROM_PTR(&const_obj_ntptime_2),
    MP_ROM_QSTR(MP_QSTR_Unsupported_space_epoch_colon__space__brace_open__brace_close_),
};

static const mp_frozen_module_t frozen_module_ntptime = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ntptime,
        .obj_table = (mp_obj_t *)&const_obj_table_data_ntptime,
    },
    .rc = &raw_code_ntptime__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module webrepl
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/webrepl.mpy
// - frozen file name: webrepl.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file webrepl.py, scope webrepl__lt_module_gt_
static const byte fun_data_webrepl__lt_module_gt_[128] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'binascii'
    0x16,0x02, // STORE_NAME 'binascii'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'hashlib'
    0x16,0x03, // STORE_NAME 'hashlib'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'micropython'
    0x1c,0x04, // IMPORT_FROM 'const'
    0x16,0x04, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'network'
    0x16,0x06, // STORE_NAME 'network'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'os'
    0x16,0x07, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'socket'
    0x16,0x08, // STORE_NAME 'socket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x09, // IMPORT_NAME 'sys'
    0x16,0x09, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0a, // IMPORT_NAME 'websocket'
    0x16,0x0a, // STORE_NAME 'websocket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0b, // IMPORT_NAME '_webrepl'
    0x16,0x0b, // STORE_NAME '_webrepl'
    0x51, // LOAD_CONST_NONE
    0x17,0x39, // STORE_GLOBAL 'listen_s'
    0x51, // LOAD_CONST_NONE
    0x17,0x3a, // STORE_GLOBAL 'client_s'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x16,0x3b, // STORE_NAME 'DEBUG'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x17,0x3c, // STORE_GLOBAL 'static_host'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0d, // STORE_NAME 'server_handshake'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x1b, // STORE_NAME 'send_html'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1d, // STORE_NAME 'setup_conn'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x2a, // STORE_NAME 'accept_conn'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x30, // STORE_NAME 'stop'
    0x22,0x80,0xc0,0x4a, // LOAD_CONST_SMALL_INT 8266
    0x51, // LOAD_CONST_NONE
    0x11,0x2a, // LOAD_NAME 'accept_conn'
    0x2a,0x03, // BUILD_TUPLE 3
    0x53, // LOAD_NULL
    0x33,0x05, // MAKE_FUNCTION_DEFARGS 5
    0x16,0x31, // STORE_NAME 'start'
    0x22,0x80,0xc0,0x4a, // LOAD_CONST_SMALL_INT 8266
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x36, // STORE_NAME 'start_foreground'
    0x10,0x0c, // LOAD_CONST_STRING '0.1.0'
    0x16,0x3d, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_server_handshake
static const byte fun_data_webrepl_server_handshake[251] = {
    0x71,0x04, // prelude
    0x0d,0x3e, // names: server_handshake, cl
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0e, // LOAD_METHOD 'makefile'
    0x10,0x0f, // LOAD_CONST_STRING 'rwb'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x10, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0x12,0x3b, // LOAD_GLOBAL 'DEBUG'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x09, // LOAD_GLOBAL 'sys'
    0x13,0x11, // LOAD_ATTR 'stdout'
    0x14,0x12, // LOAD_METHOD 'write'
    0x12,0x3f, // LOAD_GLOBAL 'repr'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xc3, // STORE_FAST 3
    0x50, // LOAD_CONST_FALSE
    0xc4, // STORE_FAST 4
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0xb1, // LOAD_FAST 1
    0x14,0x10, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x42,0xd8,0x80, // JUMP 88
    0x12,0x3b, // LOAD_GLOBAL 'DEBUG'
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x09, // LOAD_GLOBAL 'sys'
    0x13,0x11, // LOAD_ATTR 'stdout'
    0x14,0x12, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0xb2, // LOAD_FAST 2
    0x14,0x13, // LOAD_METHOD 'split'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc6, // STORE_FAST 6
    0xc7, // STORE_FAST 7
    0x12,0x3b, // LOAD_GLOBAL 'DEBUG'
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x40, // LOAD_GLOBAL 'print'
    0xb6, // LOAD_FAST 6
    0xb7, // LOAD_FAST 7
    0x2a,0x02, // BUILD_TUPLE 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb7, // LOAD_FAST 7
    0xc3, // STORE_FAST 3
    0x42,0x60, // JUMP 32
    0xb6, // LOAD_FAST 6
    0x23,0x04, // LOAD_CONST_OBJ 4
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xb7, // LOAD_FAST 7
    0xdd, // BINARY_OP 6 <in>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x52, // LOAD_CONST_TRUE
    0xc4, // STORE_FAST 4
    0x42,0x50, // JUMP 16
    0xb6, // LOAD_FAST 6
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb7, // LOAD_FAST 7
    0x23,0x06, // LOAD_CONST_OBJ 6
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0x42,0x40, // JUMP 0
    0x42,0x94,0x7f, // JUMP -108
    0xb4, // LOAD_FAST 4
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb5, // LOAD_FAST 5
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb3, // LOAD_FAST 3
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x3b, // LOAD_GLOBAL 'DEBUG'
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xb3, // LOAD_FAST 3
    0x12,0x41, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x03, // CALL_FUNCTION 3
    0x59, // POP_TOP
    0x12,0x03, // LOAD_GLOBAL 'hashlib'
    0x14,0x14, // LOAD_METHOD 'sha1'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0xc8, // STORE_FAST 8
    0xb8, // LOAD_FAST 8
    0x14,0x15, // LOAD_METHOD 'update'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb8, // LOAD_FAST 8
    0x14,0x16, // LOAD_METHOD 'digest'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0x12,0x02, // LOAD_GLOBAL 'binascii'
    0x14,0x17, // LOAD_METHOD 'b2a_base64'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc9, // STORE_FAST 9
    0x12,0x3b, // LOAD_GLOBAL 'DEBUG'
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x10,0x18, // LOAD_CONST_STRING 'respkey:'
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'send'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'send'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'send'
    0x10,0x1a, // LOAD_CONST_STRING '\r\n\r\n'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
// child of webrepl_server_handshake
// frozen bytecode for file webrepl.py, scope webrepl_server_handshake__lt_listcomp_gt_
static const byte fun_data_webrepl_server_handshake__lt_listcomp_gt_[21] = {
    0x41,0x04, // prelude
    0x37,0x46, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0a, // FOR_ITER 10
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x38, // LOAD_METHOD 'strip'
    0x36,0x00, // CALL_METHOD 0
    0x2f,0x14, // STORE_COMP 20
    0x42,0x34, // JUMP -12
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_server_handshake__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_server_handshake__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_webrepl_server_handshake__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_webrepl_server_handshake__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_webrepl_server_handshake__lt_listcomp_gt_ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_webrepl_server_handshake[] = {
    &raw_code_webrepl_server_handshake__lt_listcomp_gt_,
};

static const mp_raw_code_t raw_code_webrepl_server_handshake = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_server_handshake,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 251,
    #endif
    .children = (void *)&children_webrepl_server_handshake,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_webrepl_server_handshake + 4,
        .line_info_top = fun_data_webrepl_server_handshake + 4,
        .opcodes = fun_data_webrepl_server_handshake + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_send_html
static const byte fun_data_webrepl_send_html[36] = {
    0x19,0x04, // prelude
    0x1b,0x3e, // names: send_html, cl
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'send'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'send'
    0x12,0x3c, // LOAD_GLOBAL 'static_host'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'send'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_send_html = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_send_html,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 36,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_webrepl_send_html + 4,
        .line_info_top = fun_data_webrepl_send_html + 4,
        .opcodes = fun_data_webrepl_send_html + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_setup_conn
static const byte fun_data_webrepl_setup_conn[129] = {
    0x6a,0x06, // prelude
    0x1d,0x42,0x43, // names: setup_conn, port, accept_handler
     // code info
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x14,0x08, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0x17,0x39, // STORE_GLOBAL 'listen_s'
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x14,0x1e, // LOAD_METHOD 'setsockopt'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1f, // LOAD_ATTR 'SOL_SOCKET'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x20, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x14,0x21, // LOAD_METHOD 'getaddrinfo'
    0x10,0x22, // LOAD_CONST_STRING '0.0.0.0'
    0xb0, // LOAD_FAST 0
    0x36,0x02, // CALL_METHOD 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xc3, // STORE_FAST 3
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x14,0x23, // LOAD_METHOD 'bind'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x14,0x24, // LOAD_METHOD 'listen'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x14,0x1e, // LOAD_METHOD 'setsockopt'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1f, // LOAD_ATTR 'SOL_SOCKET'
    0x94, // LOAD_CONST_SMALL_INT 20
    0xb1, // LOAD_FAST 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x12,0x06, // LOAD_GLOBAL 'network'
    0x13,0x25, // LOAD_ATTR 'AP_IF'
    0x12,0x06, // LOAD_GLOBAL 'network'
    0x13,0x26, // LOAD_ATTR 'STA_IF'
    0x2a,0x02, // BUILD_TUPLE 2
    0x5f, // GET_ITER_STACK
    0x4b,0x24, // FOR_ITER 36
    0xc4, // STORE_FAST 4
    0x12,0x06, // LOAD_GLOBAL 'network'
    0x14,0x27, // LOAD_METHOD 'WLAN'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x28, // LOAD_METHOD 'active'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0xb5, // LOAD_FAST 5
    0x14,0x29, // LOAD_METHOD 'ifconfig'
    0x36,0x00, // CALL_METHOD 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x1a, // JUMP -38
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_conn = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_webrepl_setup_conn,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 129,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_webrepl_setup_conn + 5,
        .line_info_top = fun_data_webrepl_setup_conn + 5,
        .opcodes = fun_data_webrepl_setup_conn + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_accept_conn
static const byte fun_data_webrepl_accept_conn[135] = {
    0x49,0x04, // prelude
    0x2a,0x44, // names: accept_conn, listen_sock
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x2b, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc1, // STORE_FAST 1
    0xc2, // STORE_FAST 2
    0x12,0x0d, // LOAD_GLOBAL 'server_handshake'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x1b, // LOAD_GLOBAL 'send_html'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x2c, // LOAD_METHOD 'dupterm'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x2c, // LOAD_METHOD 'dupterm'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0xb2, // LOAD_FAST 2
    0x10,0x2d, // LOAD_CONST_STRING 'rejected'
    0x34,0x03, // CALL_FUNCTION 3
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x1c, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x17,0x3a, // STORE_GLOBAL 'client_s'
    0x12,0x0a, // LOAD_GLOBAL 'websocket'
    0x14,0x0a, // LOAD_METHOD 'websocket'
    0xb1, // LOAD_FAST 1
    0x52, // LOAD_CONST_TRUE
    0x36,0x02, // CALL_METHOD 2
    0xc4, // STORE_FAST 4
    0x12,0x0b, // LOAD_GLOBAL '_webrepl'
    0x14,0x0b, // LOAD_METHOD '_webrepl'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0xb1, // LOAD_FAST 1
    0x14,0x2e, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x45, // LOAD_GLOBAL 'hasattr'
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xb1, // LOAD_FAST 1
    0x14,0x1e, // LOAD_METHOD 'setsockopt'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1f, // LOAD_ATTR 'SOL_SOCKET'
    0x94, // LOAD_CONST_SMALL_INT 20
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x13,0x2f, // LOAD_ATTR 'dupterm_notify'
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x2c, // LOAD_METHOD 'dupterm'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_accept_conn = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_accept_conn,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 135,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_webrepl_accept_conn + 4,
        .line_info_top = fun_data_webrepl_accept_conn + 4,
        .opcodes = fun_data_webrepl_accept_conn + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_stop
static const byte fun_data_webrepl_stop[35] = {
    0x10,0x02, // prelude
    0x30, // names: stop
     // code info
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x2c, // LOAD_METHOD 'dupterm'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x3a, // LOAD_GLOBAL 'client_s'
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x3a, // LOAD_GLOBAL 'client_s'
    0x14,0x1c, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x39, // LOAD_GLOBAL 'listen_s'
    0x14,0x1c, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_stop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_webrepl_stop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 35,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 48,
        .line_info = fun_data_webrepl_stop + 3,
        .line_info_top = fun_data_webrepl_stop + 3,
        .opcodes = fun_data_webrepl_stop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_start
static const byte fun_data_webrepl_start[119] = {
    0xd7,0x81,0x01,0x08, // prelude
    0x31,0x42,0x35,0x43, // names: start, port, password, accept_handler
     // code info
    0x12,0x30, // LOAD_GLOBAL 'stop'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x48,0x19, // SETUP_EXCEPT 25
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x32, // IMPORT_NAME 'webrepl_cfg'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x13,0x33, // LOAD_ATTR 'PASS'
    0xc3, // STORE_FAST 3
    0x12,0x45, // LOAD_GLOBAL 'hasattr'
    0xb4, // LOAD_FAST 4
    0x10,0x34, // LOAD_CONST_STRING 'BASE'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb4, // LOAD_FAST 4
    0x13,0x34, // LOAD_ATTR 'BASE'
    0x17,0x3c, // STORE_GLOBAL 'static_host'
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x59, // POP_TOP
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x0b, // LOAD_GLOBAL '_webrepl'
    0x14,0x35, // LOAD_METHOD 'password'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x1d, // LOAD_GLOBAL 'setup_conn'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0xc5, // STORE_FAST 5
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x11, // LOAD_CONST_OBJ 17
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x12,0x2a, // LOAD_GLOBAL 'accept_conn'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x39, // POP_JUMP_IF_FALSE -7
    0x42,0x55, // JUMP 21
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x12, // LOAD_CONST_OBJ 18
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x47, // JUMP 7
    0x12,0x40, // LOAD_GLOBAL 'print'
    0x23,0x13, // LOAD_CONST_OBJ 19
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_start = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_webrepl_start,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 119,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 3,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_webrepl_start + 8,
        .line_info_top = fun_data_webrepl_start + 8,
        .opcodes = fun_data_webrepl_start + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_start_foreground
static const byte fun_data_webrepl_start_foreground[17] = {
    0xaa,0x80,0x01,0x06, // prelude
    0x36,0x42,0x35, // names: start_foreground, port, password
     // code info
    0x12,0x31, // LOAD_GLOBAL 'start'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x34,0x03, // CALL_FUNCTION 3
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_start_foreground = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_webrepl_start_foreground,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 54,
        .line_info = fun_data_webrepl_start_foreground + 7,
        .line_info_top = fun_data_webrepl_start_foreground + 7,
        .opcodes = fun_data_webrepl_start_foreground + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_webrepl__lt_module_gt_[] = {
    &raw_code_webrepl_server_handshake,
    &raw_code_webrepl_send_html,
    &raw_code_webrepl_setup_conn,
    &raw_code_webrepl_accept_conn,
    &raw_code_webrepl_stop,
    &raw_code_webrepl_start,
    &raw_code_webrepl_start_foreground,
};

static const mp_raw_code_t raw_code_webrepl__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_webrepl__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 128,
    #endif
    .children = (void *)&children_webrepl__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_webrepl__lt_module_gt_ + 3,
        .line_info_top = fun_data_webrepl__lt_module_gt_ + 3,
        .opcodes = fun_data_webrepl__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_webrepl[71] = {
    MP_QSTR_webrepl_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_binascii,
    MP_QSTR_hashlib,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_network,
    MP_QSTR_os,
    MP_QSTR_socket,
    MP_QSTR_sys,
    MP_QSTR_websocket,
    MP_QSTR__webrepl,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR_server_handshake,
    MP_QSTR_makefile,
    MP_QSTR_rwb,
    MP_QSTR_readline,
    MP_QSTR_stdout,
    MP_QSTR_write,
    MP_QSTR_split,
    MP_QSTR_sha1,
    MP_QSTR_update,
    MP_QSTR_digest,
    MP_QSTR_b2a_base64,
    MP_QSTR_respkey_colon_,
    MP_QSTR_send,
    MP_QSTR__0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR_send_html,
    MP_QSTR_close,
    MP_QSTR_setup_conn,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_getaddrinfo,
    MP_QSTR_0_dot_0_dot_0_dot_0,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_AP_IF,
    MP_QSTR_STA_IF,
    MP_QSTR_WLAN,
    MP_QSTR_active,
    MP_QSTR_ifconfig,
    MP_QSTR_accept_conn,
    MP_QSTR_accept,
    MP_QSTR_dupterm,
    MP_QSTR_rejected,
    MP_QSTR_setblocking,
    MP_QSTR_dupterm_notify,
    MP_QSTR_stop,
    MP_QSTR_start,
    MP_QSTR_webrepl_cfg,
    MP_QSTR_PASS,
    MP_QSTR_BASE,
    MP_QSTR_password,
    MP_QSTR_start_foreground,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_strip,
    MP_QSTR_listen_s,
    MP_QSTR_client_s,
    MP_QSTR_DEBUG,
    MP_QSTR_static_host,
    MP_QSTR___version__,
    MP_QSTR_cl,
    MP_QSTR_repr,
    MP_QSTR_print,
    MP_QSTR_len,
    MP_QSTR_port,
    MP_QSTR_accept_handler,
    MP_QSTR_listen_sock,
    MP_QSTR_hasattr,
    MP_QSTR__star_,
};

// constants
static const mp_obj_str_t const_obj_webrepl_0 = {{&mp_type_str}, 33749, 32, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x2e\x6f\x72\x67\x2f\x77\x65\x62\x72\x65\x70\x6c\x2f"};
static const mp_obj_str_t const_obj_webrepl_1 = {{&mp_type_bytes}, 27298, 2, (const byte*)"\x0d\x0a"};
static const mp_obj_str_t const_obj_webrepl_2 = {{&mp_type_bytes}, 46495, 1, (const byte*)"\x3a"};
static const mp_obj_str_t const_obj_webrepl_3 = {{&mp_type_bytes}, 24914, 17, (const byte*)"\x53\x65\x63\x2d\x57\x65\x62\x53\x6f\x63\x6b\x65\x74\x2d\x4b\x65\x79"};
static const mp_obj_str_t const_obj_webrepl_4 = {{&mp_type_bytes}, 42451, 10, (const byte*)"\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e"};
static const mp_obj_str_t const_obj_webrepl_5 = {{&mp_type_bytes}, 6069, 7, (const byte*)"\x55\x70\x67\x72\x61\x64\x65"};
static const mp_obj_str_t const_obj_webrepl_6 = {{&mp_type_bytes}, 36240, 9, (const byte*)"\x77\x65\x62\x73\x6f\x63\x6b\x65\x74"};
static const mp_obj_str_t const_obj_webrepl_8 = {{&mp_type_bytes}, 43888, 36, (const byte*)"\x32\x35\x38\x45\x41\x46\x41\x35\x2d\x45\x39\x31\x34\x2d\x34\x37\x44\x41\x2d\x39\x35\x43\x41\x2d\x43\x35\x41\x42\x30\x44\x43\x38\x35\x42\x31\x31"};
static const mp_obj_str_t const_obj_webrepl_9 = {{&mp_type_bytes}, 65413, 97, (const byte*)"\x48\x54\x54\x50\x2f\x31\x2e\x31\x20\x31\x30\x31\x20\x53\x77\x69\x74\x63\x68\x69\x6e\x67\x20\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x73\x0d\x0a\x55\x70\x67\x72\x61\x64\x65\x3a\x20\x77\x65\x62\x73\x6f\x63\x6b\x65\x74\x0d\x0a\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x55\x70\x67\x72\x61\x64\x65\x0d\x0a\x53\x65\x63\x2d\x57\x65\x62\x53\x6f\x63\x6b\x65\x74\x2d\x41\x63\x63\x65\x70\x74\x3a\x20"};
static const mp_obj_str_t const_obj_webrepl_10 = {{&mp_type_bytes}, 46084, 31, (const byte*)"\x48\x54\x54\x50\x2f\x31\x2e\x30\x20\x32\x30\x30\x20\x4f\x4b\x0d\x0a\x0d\x0a\x3c\x62\x61\x73\x65\x20\x68\x72\x65\x66\x3d\x22"};
static const mp_obj_str_t const_obj_webrepl_11 = {{&mp_type_bytes}, 1387, 55, (const byte*)"\x22\x3e\x3c\x2f\x62\x61\x73\x65\x3e\x0d\x0a\x3c\x73\x63\x72\x69\x70\x74\x20\x73\x72\x63\x3d\x22\x77\x65\x62\x72\x65\x70\x6c\x5f\x63\x6f\x6e\x74\x65\x6e\x74\x2e\x6a\x73\x22\x3e\x3c\x2f\x73\x63\x72\x69\x70\x74\x3e\x0d\x0a"};
static const mp_obj_str_t const_obj_webrepl_12 = {{&mp_type_str}, 9563, 39, (const byte*)"\x57\x65\x62\x52\x45\x50\x4c\x20\x73\x65\x72\x76\x65\x72\x20\x73\x74\x61\x72\x74\x65\x64\x20\x6f\x6e\x20\x68\x74\x74\x70\x3a\x2f\x2f\x25\x73\x3a\x25\x64\x2f"};
static const mp_obj_str_t const_obj_webrepl_13 = {{&mp_type_str}, 16607, 35, (const byte*)"\x0a\x43\x6f\x6e\x63\x75\x72\x72\x65\x6e\x74\x20\x57\x65\x62\x52\x45\x50\x4c\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x6d"};
static const mp_obj_str_t const_obj_webrepl_14 = {{&mp_type_str}, 13454, 25, (const byte*)"\x0a\x57\x65\x62\x52\x45\x50\x4c\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x6d\x3a"};
static const mp_obj_str_t const_obj_webrepl_16 = {{&mp_type_str}, 39750, 53, (const byte*)"\x57\x65\x62\x52\x45\x50\x4c\x20\x69\x73\x20\x6e\x6f\x74\x20\x63\x6f\x6e\x66\x69\x67\x75\x72\x65\x64\x2c\x20\x72\x75\x6e\x20\x27\x69\x6d\x70\x6f\x72\x74\x20\x77\x65\x62\x72\x65\x70\x6c\x5f\x73\x65\x74\x75\x70\x27"};
static const mp_obj_str_t const_obj_webrepl_17 = {{&mp_type_str}, 51073, 35, (const byte*)"\x53\x74\x61\x72\x74\x69\x6e\x67\x20\x77\x65\x62\x72\x65\x70\x6c\x20\x69\x6e\x20\x66\x6f\x72\x65\x67\x72\x6f\x75\x6e\x64\x20\x6d\x6f\x64\x65"};
static const mp_obj_str_t const_obj_webrepl_18 = {{&mp_type_str}, 16616, 30, (const byte*)"\x53\x74\x61\x72\x74\x65\x64\x20\x77\x65\x62\x72\x65\x70\x6c\x20\x69\x6e\x20\x6e\x6f\x72\x6d\x61\x6c\x20\x6d\x6f\x64\x65"};
static const mp_obj_str_t const_obj_webrepl_19 = {{&mp_type_str}, 57813, 39, (const byte*)"\x53\x74\x61\x72\x74\x65\x64\x20\x77\x65\x62\x72\x65\x70\x6c\x20\x69\x6e\x20\x6d\x61\x6e\x75\x61\x6c\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x6d\x6f\x64\x65"};

// constant table
static const mp_rom_obj_t const_obj_table_data_webrepl[20] = {
    MP_ROM_PTR(&const_obj_webrepl_0),
    MP_ROM_PTR(&const_obj_webrepl_1),
    MP_ROM_PTR(&const_obj_webrepl_2),
    MP_ROM_PTR(&const_obj_webrepl_3),
    MP_ROM_PTR(&const_obj_webrepl_4),
    MP_ROM_PTR(&const_obj_webrepl_5),
    MP_ROM_PTR(&const_obj_webrepl_6),
    MP_ROM_QSTR(MP_QSTR_Sec_hyphen_WebSocket_hyphen_Key_colon_),
    MP_ROM_PTR(&const_obj_webrepl_8),
    MP_ROM_PTR(&const_obj_webrepl_9),
    MP_ROM_PTR(&const_obj_webrepl_10),
    MP_ROM_PTR(&const_obj_webrepl_11),
    MP_ROM_PTR(&const_obj_webrepl_12),
    MP_ROM_PTR(&const_obj_webrepl_13),
    MP_ROM_PTR(&const_obj_webrepl_14),
    MP_ROM_QSTR(MP_QSTR_dupterm_notify),
    MP_ROM_PTR(&const_obj_webrepl_16),
    MP_ROM_PTR(&const_obj_webrepl_17),
    MP_ROM_PTR(&const_obj_webrepl_18),
    MP_ROM_PTR(&const_obj_webrepl_19),
};

static const mp_frozen_module_t frozen_module_webrepl = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_webrepl,
        .obj_table = (mp_obj_t *)&const_obj_table_data_webrepl,
    },
    .rc = &raw_code_webrepl__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module webrepl_setup
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/webrepl_setup.mpy
// - frozen file name: webrepl_setup.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file webrepl_setup.py, scope webrepl_setup__lt_module_gt_
static const byte fun_data_webrepl_setup__lt_module_gt_[68] = {
    0x08,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'os'
    0x16,0x03, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'machine'
    0x16,0x04, // STORE_NAME 'machine'
    0x10,0x05, // LOAD_CONST_STRING './boot.py'
    0x16,0x20, // STORE_NAME 'RC'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x21, // STORE_NAME 'CONFIG'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME 'input_choice'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x08, // STORE_NAME 'getpass'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x09, // STORE_NAME 'input_pass'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0a, // STORE_NAME 'exists'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0b, // STORE_NAME 'get_daemon_status'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x0f, // STORE_NAME 'change_daemon'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x15, // STORE_NAME 'main'
    0x11,0x15, // LOAD_NAME 'main'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x10,0x06, // LOAD_CONST_STRING '0.1.0'
    0x16,0x22, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_input_choice
static const byte fun_data_webrepl_setup_input_choice[22] = {
    0x22,0x06, // prelude
    0x07,0x23,0x24, // names: input_choice, prompt, choices
     // code info
    0x12,0x25, // LOAD_GLOBAL 'input'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0xdd, // BINARY_OP 6 <in>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
    0x42,0x31, // JUMP -15
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_input_choice = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_webrepl_setup_input_choice,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_webrepl_setup_input_choice + 5,
        .line_info_top = fun_data_webrepl_setup_input_choice + 5,
        .opcodes = fun_data_webrepl_setup_input_choice + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_getpass
static const byte fun_data_webrepl_setup_getpass[10] = {
    0x11,0x04, // prelude
    0x08,0x23, // names: getpass, prompt
     // code info
    0x12,0x25, // LOAD_GLOBAL 'input'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_getpass = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_setup_getpass,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_webrepl_setup_getpass + 4,
        .line_info_top = fun_data_webrepl_setup_getpass + 4,
        .opcodes = fun_data_webrepl_setup_getpass + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_input_pass
static const byte fun_data_webrepl_setup_input_pass[62] = {
    0x18,0x02, // prelude
    0x09, // names: input_pass
     // code info
    0x12,0x08, // LOAD_GLOBAL 'getpass'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc0, // STORE_FAST 0
    0x12,0x26, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x84, // LOAD_CONST_SMALL_INT 4
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x49, // POP_JUMP_IF_TRUE 9
    0x12,0x26, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x89, // LOAD_CONST_SMALL_INT 9
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x55, // JUMP 21
    0x12,0x08, // LOAD_GLOBAL 'getpass'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x07, // JUMP -57
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_input_pass = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_webrepl_setup_input_pass,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 62,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_webrepl_setup_input_pass + 3,
        .line_info_top = fun_data_webrepl_setup_input_pass + 3,
        .opcodes = fun_data_webrepl_setup_input_pass + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_exists
static const byte fun_data_webrepl_setup_exists[32] = {
    0xb1,0x02,0x04, // prelude
    0x0a,0x28, // names: exists, fname
     // code info
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x29, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x47,0x02, // SETUP_WITH 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
    0x57, // DUP_TOP
    0x12,0x2a, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_exists = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_setup_exists,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 32,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_webrepl_setup_exists + 5,
        .line_info_top = fun_data_webrepl_setup_exists + 5,
        .opcodes = fun_data_webrepl_setup_exists + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_get_daemon_status
static const byte fun_data_webrepl_setup_get_daemon_status[44] = {
    0x54,0x02, // prelude
    0x0b, // names: get_daemon_status
     // code info
    0x12,0x29, // LOAD_GLOBAL 'open'
    0x12,0x20, // LOAD_GLOBAL 'RC'
    0x34,0x01, // CALL_FUNCTION 1
    0x47,0x1d, // SETUP_WITH 29
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x16, // FOR_ITER 22
    0xc1, // STORE_FAST 1
    0x10,0x0c, // LOAD_CONST_STRING 'webrepl'
    0xb1, // LOAD_FAST 1
    0xdd, // BINARY_OP 6 <in>
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'startswith'
    0x10,0x0e, // LOAD_CONST_STRING '#'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
    0x42,0x28, // JUMP -24
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_get_daemon_status = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_webrepl_setup_get_daemon_status,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 44,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_webrepl_setup_get_daemon_status + 3,
        .line_info_top = fun_data_webrepl_setup_get_daemon_status + 3,
        .opcodes = fun_data_webrepl_setup_get_daemon_status + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_change_daemon
static const byte fun_data_webrepl_setup_change_daemon[144] = {
    0xa9,0x12,0x04, // prelude
    0x0f,0x2b, // names: change_daemon, action
     // code info
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xc1, // STORE_FAST 1
    0x12,0x29, // LOAD_GLOBAL 'open'
    0x12,0x20, // LOAD_GLOBAL 'RC'
    0x34,0x01, // CALL_FUNCTION 1
    0x47,0x65, // SETUP_WITH 101
    0xc2, // STORE_FAST 2
    0x12,0x29, // LOAD_GLOBAL 'open'
    0x12,0x20, // LOAD_GLOBAL 'RC'
    0x10,0x10, // LOAD_CONST_STRING '.tmp'
    0xf2, // BINARY_OP 27 __add__
    0x10,0x11, // LOAD_CONST_STRING 'w'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x54, // SETUP_WITH 84
    0xc3, // STORE_FAST 3
    0x50, // LOAD_CONST_FALSE
    0xc4, // STORE_FAST 4
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x41, // FOR_ITER 65
    0xc5, // STORE_FAST 5
    0xb1, // LOAD_FAST 1
    0x5f, // GET_ITER_STACK
    0x4b,0x32, // FOR_ITER 50
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0xb5, // LOAD_FAST 5
    0xdd, // BINARY_OP 6 <in>
    0x44,0x6a, // POP_JUMP_IF_FALSE 42
    0x52, // LOAD_CONST_TRUE
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb5, // LOAD_FAST 5
    0x14,0x0d, // LOAD_METHOD 'startswith'
    0x10,0x0e, // LOAD_CONST_STRING '#'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb5, // LOAD_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc5, // STORE_FAST 5
    0x42,0x53, // JUMP 19
    0xb0, // LOAD_FAST 0
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0xb5, // LOAD_FAST 5
    0x14,0x0d, // LOAD_METHOD 'startswith'
    0x10,0x0e, // LOAD_CONST_STRING '#'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x10,0x0e, // LOAD_CONST_STRING '#'
    0xb5, // LOAD_FAST 5
    0xf2, // BINARY_OP 27 __add__
    0xc5, // STORE_FAST 5
    0x42,0x40, // JUMP 0
    0x42,0x0c, // JUMP -52
    0xb3, // LOAD_FAST 3
    0x14,0x12, // LOAD_METHOD 'write'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xbd,0x7f, // JUMP -67
    0xb4, // LOAD_FAST 4
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0xb3, // LOAD_FAST 3
    0x14,0x12, // LOAD_METHOD 'write'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x13, // LOAD_METHOD 'remove'
    0x12,0x20, // LOAD_GLOBAL 'RC'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x14, // LOAD_METHOD 'rename'
    0x12,0x20, // LOAD_GLOBAL 'RC'
    0x10,0x10, // LOAD_CONST_STRING '.tmp'
    0xf2, // BINARY_OP 27 __add__
    0x12,0x20, // LOAD_GLOBAL 'RC'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_change_daemon = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_webrepl_setup_change_daemon,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 144,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 22,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_webrepl_setup_change_daemon + 5,
        .line_info_top = fun_data_webrepl_setup_change_daemon + 5,
        .opcodes = fun_data_webrepl_setup_change_daemon + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of webrepl_setup__lt_module_gt_
// frozen bytecode for file webrepl_setup.py, scope webrepl_setup_main
static const byte fun_data_webrepl_setup_main[199] = {
    0x54,0x02, // prelude
    0x15, // names: main
     // code info
    0x12,0x0b, // LOAD_GLOBAL 'get_daemon_status'
    0x34,0x00, // CALL_FUNCTION 0
    0xc0, // STORE_FAST 0
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xb0, // LOAD_FAST 0
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x10,0x16, // LOAD_CONST_STRING 'enabled'
    0x42,0x42, // JUMP 2
    0x10,0x17, // LOAD_CONST_STRING 'disabled'
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x25, // LOAD_GLOBAL 'input'
    0x10,0x18, // LOAD_CONST_STRING '> '
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x19, // LOAD_METHOD 'upper'
    0x36,0x00, // CALL_METHOD 0
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x10,0x1a, // LOAD_CONST_STRING 'E'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0xc0,0x80, // POP_JUMP_IF_FALSE 64
    0x12,0x0a, // LOAD_GLOBAL 'exists'
    0x12,0x21, // LOAD_GLOBAL 'CONFIG'
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x07, // LOAD_GLOBAL 'input_choice'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x34,0x02, // CALL_FUNCTION 2
    0xc2, // STORE_FAST 2
    0x42,0x4a, // JUMP 10
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x10,0x1b, // LOAD_CONST_STRING 'y'
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x10,0x1b, // LOAD_CONST_STRING 'y'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x5d, // POP_JUMP_IF_FALSE 29
    0x12,0x09, // LOAD_GLOBAL 'input_pass'
    0x34,0x00, // CALL_FUNCTION 0
    0xc3, // STORE_FAST 3
    0x12,0x29, // LOAD_GLOBAL 'open'
    0x12,0x21, // LOAD_GLOBAL 'CONFIG'
    0x10,0x11, // LOAD_CONST_STRING 'w'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x0c, // SETUP_WITH 12
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x14,0x12, // LOAD_METHOD 'write'
    0x10,0x1c, // LOAD_CONST_STRING 'PASS = %r\n'
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0xb1, // LOAD_FAST 1
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x43,0x52, // POP_JUMP_IF_TRUE 18
    0xb1, // LOAD_FAST 1
    0x10,0x1d, // LOAD_CONST_STRING 'D'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb0, // LOAD_FAST 0
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb1, // LOAD_FAST 1
    0x10,0x1a, // LOAD_CONST_STRING 'E'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x51, // POP_JUMP_IF_FALSE 17
    0xb0, // LOAD_FAST 0
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x14,0x1e, // LOAD_METHOD 'exit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x12,0x0f, // LOAD_GLOBAL 'change_daemon'
    0xb1, // LOAD_FAST 1
    0x10,0x1a, // LOAD_CONST_STRING 'E'
    0xd9, // BINARY_OP 2 __eq__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x27, // LOAD_GLOBAL 'print'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x07, // LOAD_GLOBAL 'input_choice'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x34,0x02, // CALL_FUNCTION 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x10,0x1b, // LOAD_CONST_STRING 'y'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x04, // LOAD_GLOBAL 'machine'
    0x14,0x1f, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_webrepl_setup_main = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_webrepl_setup_main,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 199,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_webrepl_setup_main + 3,
        .line_info_top = fun_data_webrepl_setup_main + 3,
        .opcodes = fun_data_webrepl_setup_main + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_webrepl_setup__lt_module_gt_[] = {
    &raw_code_webrepl_setup_input_choice,
    &raw_code_webrepl_setup_getpass,
    &raw_code_webrepl_setup_input_pass,
    &raw_code_webrepl_setup_exists,
    &raw_code_webrepl_setup_get_daemon_status,
    &raw_code_webrepl_setup_change_daemon,
    &raw_code_webrepl_setup_main,
};

static const mp_raw_code_t raw_code_webrepl_setup__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_webrepl_setup__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 68,
    #endif
    .children = (void *)&children_webrepl_setup__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_webrepl_setup__lt_module_gt_ + 3,
        .line_info_top = fun_data_webrepl_setup__lt_module_gt_ + 3,
        .opcodes = fun_data_webrepl_setup__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_webrepl_setup[44] = {
    MP_QSTR_webrepl_setup_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_os,
    MP_QSTR_machine,
    MP_QSTR__dot__slash_boot_dot_py,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR_input_choice,
    MP_QSTR_getpass,
    MP_QSTR_input_pass,
    MP_QSTR_exists,
    MP_QSTR_get_daemon_status,
    MP_QSTR_webrepl,
    MP_QSTR_startswith,
    MP_QSTR__hash_,
    MP_QSTR_change_daemon,
    MP_QSTR__dot_tmp,
    MP_QSTR_w,
    MP_QSTR_write,
    MP_QSTR_remove,
    MP_QSTR_rename,
    MP_QSTR_main,
    MP_QSTR_enabled,
    MP_QSTR_disabled,
    MP_QSTR__gt__space_,
    MP_QSTR_upper,
    MP_QSTR_E,
    MP_QSTR_y,
    MP_QSTR_PASS_space__equals__space__percent_r_0x0a_,
    MP_QSTR_D,
    MP_QSTR_exit,
    MP_QSTR_reset,
    MP_QSTR_RC,
    MP_QSTR_CONFIG,
    MP_QSTR___version__,
    MP_QSTR_prompt,
    MP_QSTR_choices,
    MP_QSTR_input,
    MP_QSTR_len,
    MP_QSTR_print,
    MP_QSTR_fname,
    MP_QSTR_open,
    MP_QSTR_OSError,
    MP_QSTR_action,
};

// constants
static const mp_obj_str_t const_obj_webrepl_setup_1 = {{&mp_type_str}, 12822, 26, (const byte*)"\x4e\x65\x77\x20\x70\x61\x73\x73\x77\x6f\x72\x64\x20\x28\x34\x2d\x39\x20\x63\x68\x61\x72\x73\x29\x3a\x20"};
static const mp_rom_obj_tuple_t const_obj_webrepl_setup_5 = {{&mp_type_tuple}, 2, {
    MP_ROM_QSTR(MP_QSTR_import_space_webrepl),
    MP_ROM_QSTR(MP_QSTR_webrepl_dot_start_paren_open__paren_close_),
}};
static const mp_obj_str_t const_obj_webrepl_setup_6 = {{&mp_type_str}, 34423, 31, (const byte*)"\x69\x6d\x70\x6f\x72\x74\x20\x77\x65\x62\x72\x65\x70\x6c\x0a\x77\x65\x62\x72\x65\x70\x6c\x2e\x73\x74\x61\x72\x74\x28\x29\x0a"};
static const mp_obj_str_t const_obj_webrepl_setup_7 = {{&mp_type_str}, 24126, 33, (const byte*)"\x57\x65\x62\x52\x45\x50\x4c\x20\x64\x61\x65\x6d\x6f\x6e\x20\x61\x75\x74\x6f\x2d\x73\x74\x61\x72\x74\x20\x73\x74\x61\x74\x75\x73\x3a"};
static const mp_obj_str_t const_obj_webrepl_setup_8 = {{&mp_type_str}, 9123, 60, (const byte*)"\x0a\x57\x6f\x75\x6c\x64\x20\x79\x6f\x75\x20\x6c\x69\x6b\x65\x20\x74\x6f\x20\x28\x45\x29\x6e\x61\x62\x6c\x65\x20\x6f\x72\x20\x28\x44\x29\x69\x73\x61\x62\x6c\x65\x20\x69\x74\x20\x72\x75\x6e\x6e\x69\x6e\x67\x20\x6f\x6e\x20\x62\x6f\x6f\x74\x3f"};
static const mp_obj_str_t const_obj_webrepl_setup_10 = {{&mp_type_str}, 49111, 49, (const byte*)"\x57\x6f\x75\x6c\x64\x20\x79\x6f\x75\x20\x6c\x69\x6b\x65\x20\x74\x6f\x20\x63\x68\x61\x6e\x67\x65\x20\x57\x65\x62\x52\x45\x50\x4c\x20\x70\x61\x73\x73\x77\x6f\x72\x64\x3f\x20\x28\x79\x2f\x6e\x29\x20"};
static const mp_rom_obj_tuple_t const_obj_webrepl_setup_11 = {{&mp_type_tuple}, 3, {
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_n),
    MP_ROM_QSTR(MP_QSTR_),
}};
static const mp_obj_str_t const_obj_webrepl_setup_12 = {{&mp_type_str}, 7023, 47, (const byte*)"\x54\x6f\x20\x65\x6e\x61\x62\x6c\x65\x20\x57\x65\x62\x52\x45\x50\x4c\x2c\x20\x79\x6f\x75\x20\x6d\x75\x73\x74\x20\x73\x65\x74\x20\x70\x61\x73\x73\x77\x6f\x72\x64\x20\x66\x6f\x72\x20\x69\x74"};
static const mp_rom_obj_tuple_t const_obj_webrepl_setup_13 = {{&mp_type_tuple}, 2, {
    MP_ROM_QSTR(MP_QSTR_D),
    MP_ROM_QSTR(MP_QSTR_E),
}};
static const mp_obj_str_t const_obj_webrepl_setup_14 = {{&mp_type_str}, 24025, 26, (const byte*)"\x4e\x6f\x20\x66\x75\x72\x74\x68\x65\x72\x20\x61\x63\x74\x69\x6f\x6e\x20\x72\x65\x71\x75\x69\x72\x65\x64"};
static const mp_obj_str_t const_obj_webrepl_setup_15 = {{&mp_type_str}, 15057, 38, (const byte*)"\x43\x68\x61\x6e\x67\x65\x73\x20\x77\x69\x6c\x6c\x20\x62\x65\x20\x61\x63\x74\x69\x76\x61\x74\x65\x64\x20\x61\x66\x74\x65\x72\x20\x72\x65\x62\x6f\x6f\x74"};
static const mp_obj_str_t const_obj_webrepl_setup_16 = {{&mp_type_str}, 7554, 36, (const byte*)"\x57\x6f\x75\x6c\x64\x20\x79\x6f\x75\x20\x6c\x69\x6b\x65\x20\x74\x6f\x20\x72\x65\x62\x6f\x6f\x74\x20\x6e\x6f\x77\x3f\x20\x28\x79\x2f\x6e\x29\x20"};

// constant table
static const mp_rom_obj_t const_obj_table_data_webrepl_setup[17] = {
    MP_ROM_QSTR(MP_QSTR__dot__slash_webrepl_cfg_dot_py),
    MP_ROM_PTR(&const_obj_webrepl_setup_1),
    MP_ROM_QSTR(MP_QSTR_Invalid_space_password_space_length),
    MP_ROM_QSTR(MP_QSTR_Confirm_space_password_colon__space_),
    MP_ROM_QSTR(MP_QSTR_Passwords_space_do_space_not_space_match),
    MP_ROM_PTR(&const_obj_webrepl_setup_5),
    MP_ROM_PTR(&const_obj_webrepl_setup_6),
    MP_ROM_PTR(&const_obj_webrepl_setup_7),
    MP_ROM_PTR(&const_obj_webrepl_setup_8),
    MP_ROM_QSTR(MP_QSTR__paren_open_Empty_space_line_space_to_space_quit_paren_close_),
    MP_ROM_PTR(&const_obj_webrepl_setup_10),
    MP_ROM_PTR(&const_obj_webrepl_setup_11),
    MP_ROM_PTR(&const_obj_webrepl_setup_12),
    MP_ROM_PTR(&const_obj_webrepl_setup_13),
    MP_ROM_PTR(&const_obj_webrepl_setup_14),
    MP_ROM_PTR(&const_obj_webrepl_setup_15),
    MP_ROM_PTR(&const_obj_webrepl_setup_16),
};

static const mp_frozen_module_t frozen_module_webrepl_setup = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_webrepl_setup,
        .obj_table = (mp_obj_t *)&const_obj_table_data_webrepl_setup,
    },
    .rc = &raw_code_webrepl_setup__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module urequests
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/urequests.mpy
// - frozen file name: urequests.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file urequests.py, scope urequests__lt_module_gt_
static const byte fun_data_urequests__lt_module_gt_[17] = {
    0x00,0x0a, // prelude
    0x01, // names: <module>
    0x60,0x20,0x64,0x60, // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x03, // STORE_NAME '__getattr__'
    0x10,0x02, // LOAD_CONST_STRING '0.8.0'
    0x16,0x05, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of urequests__lt_module_gt_
// frozen bytecode for file urequests.py, scope urequests___getattr__
static const byte fun_data_urequests___getattr__[19] = {
    0x21,0x0a, // prelude
    0x03,0x06, // names: __getattr__, attr
    0x60,0x40,0x45, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'requests'
    0xc1, // STORE_FAST 1
    0x12,0x07, // LOAD_GLOBAL 'getattr'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_urequests___getattr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_urequests___getattr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_urequests___getattr__ + 4,
        .line_info_top = fun_data_urequests___getattr__ + 7,
        .opcodes = fun_data_urequests___getattr__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_urequests__lt_module_gt_[] = {
    &raw_code_urequests___getattr__,
};

static const mp_raw_code_t raw_code_urequests__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_urequests__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = (void *)&children_urequests__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_urequests__lt_module_gt_ + 3,
        .line_info_top = fun_data_urequests__lt_module_gt_ + 7,
        .opcodes = fun_data_urequests__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_urequests[8] = {
    MP_QSTR_urequests_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_0_dot_8_dot_0,
    MP_QSTR___getattr__,
    MP_QSTR_requests,
    MP_QSTR___version__,
    MP_QSTR_attr,
    MP_QSTR_getattr,
};

static const mp_frozen_module_t frozen_module_urequests = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_urequests,
        .obj_table = NULL,
    },
    .rc = &raw_code_urequests__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module aioespnow
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/aioespnow.mpy
// - frozen file name: aioespnow.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file aioespnow.py, scope aioespnow__lt_module_gt_
static const byte fun_data_aioespnow__lt_module_gt_[40] = {
    0x18,0x0e, // prelude
    0x01, // names: <module>
    0x60,0x26,0x66,0x40,0x8d,0x18, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'uasyncio'
    0x16,0x13, // STORE_NAME 'asyncio'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'espnow'
    0x16,0x03, // STORE_NAME 'espnow'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'AIOESPNow'
    0x11,0x03, // LOAD_NAME 'espnow'
    0x13,0x05, // LOAD_ATTR 'ESPNow'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x04, // STORE_NAME 'AIOESPNow'
    0x10,0x06, // LOAD_CONST_STRING '0.1.0'
    0x16,0x14, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of aioespnow__lt_module_gt_
// frozen bytecode for file aioespnow.py, scope aioespnow_AIOESPNow
static const byte fun_data_aioespnow_AIOESPNow[47] = {
    0x08,0x14, // prelude
    0x04, // names: AIOESPNow
    0x88,0x0b,0x64,0x20,0x64,0x20,0x89,0x07,0x64, // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'AIOESPNow'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME 'arecv'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0c, // STORE_NAME 'airecv'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x02, // MAKE_FUNCTION_DEFARGS 2
    0x16,0x0e, // STORE_NAME 'asend'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x11, // STORE_NAME '__aiter__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x12, // STORE_NAME '__anext__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of aioespnow_AIOESPNow
// frozen bytecode for file aioespnow.py, scope aioespnow_AIOESPNow_arecv
static const byte fun_data_aioespnow_AIOESPNow_arecv[28] = {
    0x99,0x40,0x0a, // prelude
    0x07,0x18, // names: arecv, self
    0x80,0x0c,0x2d, // code info
    0x12,0x13, // LOAD_GLOBAL 'asyncio'
    0x13,0x08, // LOAD_ATTR 'core'
    0x13,0x09, // LOAD_ATTR '_io_queue'
    0x14,0x0a, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'recv'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_aioespnow_AIOESPNow_arecv = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_aioespnow_AIOESPNow_arecv,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_aioespnow_AIOESPNow_arecv + 5,
        .line_info_top = fun_data_aioespnow_AIOESPNow_arecv + 8,
        .opcodes = fun_data_aioespnow_AIOESPNow_arecv + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of aioespnow_AIOESPNow
// frozen bytecode for file aioespnow.py, scope aioespnow_AIOESPNow_airecv
static const byte fun_data_aioespnow_AIOESPNow_airecv[28] = {
    0x99,0x40,0x0a, // prelude
    0x0c,0x18, // names: airecv, self
    0x80,0x10,0x2d, // code info
    0x12,0x13, // LOAD_GLOBAL 'asyncio'
    0x13,0x08, // LOAD_ATTR 'core'
    0x13,0x09, // LOAD_ATTR '_io_queue'
    0x14,0x0a, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x0d, // LOAD_METHOD 'irecv'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_aioespnow_AIOESPNow_airecv = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_aioespnow_AIOESPNow_airecv,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_aioespnow_AIOESPNow_airecv + 5,
        .line_info_top = fun_data_aioespnow_AIOESPNow_airecv + 8,
        .opcodes = fun_data_aioespnow_AIOESPNow_airecv + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of aioespnow_AIOESPNow
// frozen bytecode for file aioespnow.py, scope aioespnow_AIOESPNow_asend
static const byte fun_data_aioespnow_AIOESPNow_asend[46] = {
    0xc0,0xc4,0x01,0x14, // prelude
    0x0e,0x18,0x19,0x1a,0x1b, // names: asend, self, mac, msg, sync
    0x80,0x14,0x25,0x25,0x2d, // code info
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x5a, // ROT_TWO
    0xc2, // STORE_FAST 2
    0xc1, // STORE_FAST 1
    0x12,0x13, // LOAD_GLOBAL 'asyncio'
    0x13,0x08, // LOAD_ATTR 'core'
    0x13,0x09, // LOAD_ATTR '_io_queue'
    0x14,0x0f, // LOAD_METHOD 'queue_write'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'send'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0x36,0x03, // CALL_METHOD 3
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_aioespnow_AIOESPNow_asend = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_aioespnow_AIOESPNow_asend,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_aioespnow_AIOESPNow_asend + 9,
        .line_info_top = fun_data_aioespnow_AIOESPNow_asend + 14,
        .opcodes = fun_data_aioespnow_AIOESPNow_asend + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of aioespnow_AIOESPNow
// frozen bytecode for file aioespnow.py, scope aioespnow_AIOESPNow___aiter__
static const byte fun_data_aioespnow_AIOESPNow___aiter__[8] = {
    0x09,0x08, // prelude
    0x11,0x18, // names: __aiter__, self
    0x80,0x1b, // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_aioespnow_AIOESPNow___aiter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_aioespnow_AIOESPNow___aiter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_aioespnow_AIOESPNow___aiter__ + 4,
        .line_info_top = fun_data_aioespnow_AIOESPNow___aiter__ + 6,
        .opcodes = fun_data_aioespnow_AIOESPNow___aiter__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of aioespnow_AIOESPNow
// frozen bytecode for file aioespnow.py, scope aioespnow_AIOESPNow___anext__
static const byte fun_data_aioespnow_AIOESPNow___anext__[16] = {
    0x91,0x40,0x08, // prelude
    0x12,0x18, // names: __anext__, self
    0x80,0x1e, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0c, // LOAD_METHOD 'airecv'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_aioespnow_AIOESPNow___anext__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_aioespnow_AIOESPNow___anext__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_aioespnow_AIOESPNow___anext__ + 5,
        .line_info_top = fun_data_aioespnow_AIOESPNow___anext__ + 7,
        .opcodes = fun_data_aioespnow_AIOESPNow___anext__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_aioespnow_AIOESPNow[] = {
    &raw_code_aioespnow_AIOESPNow_arecv,
    &raw_code_aioespnow_AIOESPNow_airecv,
    &raw_code_aioespnow_AIOESPNow_asend,
    &raw_code_aioespnow_AIOESPNow___aiter__,
    &raw_code_aioespnow_AIOESPNow___anext__,
};

static const mp_raw_code_t raw_code_aioespnow_AIOESPNow = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_aioespnow_AIOESPNow,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 47,
    #endif
    .children = (void *)&children_aioespnow_AIOESPNow,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_aioespnow_AIOESPNow + 3,
        .line_info_top = fun_data_aioespnow_AIOESPNow + 12,
        .opcodes = fun_data_aioespnow_AIOESPNow + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_aioespnow__lt_module_gt_[] = {
    &raw_code_aioespnow_AIOESPNow,
};

static const mp_raw_code_t raw_code_aioespnow__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_aioespnow__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 40,
    #endif
    .children = (void *)&children_aioespnow__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_aioespnow__lt_module_gt_ + 3,
        .line_info_top = fun_data_aioespnow__lt_module_gt_ + 9,
        .opcodes = fun_data_aioespnow__lt_module_gt_ + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_aioespnow[28] = {
    MP_QSTR_aioespnow_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_uasyncio,
    MP_QSTR_espnow,
    MP_QSTR_AIOESPNow,
    MP_QSTR_ESPNow,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR_arecv,
    MP_QSTR_core,
    MP_QSTR__io_queue,
    MP_QSTR_queue_read,
    MP_QSTR_recv,
    MP_QSTR_airecv,
    MP_QSTR_irecv,
    MP_QSTR_asend,
    MP_QSTR_queue_write,
    MP_QSTR_send,
    MP_QSTR___aiter__,
    MP_QSTR___anext__,
    MP_QSTR_asyncio,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_mac,
    MP_QSTR_msg,
    MP_QSTR_sync,
};

static const mp_frozen_module_t frozen_module_aioespnow = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_aioespnow,
        .obj_table = NULL,
    },
    .rc = &raw_code_aioespnow__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module dht
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/dht.mpy
// - frozen file name: dht.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file dht.py, scope dht__lt_module_gt_
static const byte fun_data_dht__lt_module_gt_[139] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x16,0x03, // STORE_NAME 'machine'
    0x11,0x14, // LOAD_NAME 'hasattr'
    0x11,0x03, // LOAD_NAME 'machine'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x1c,0x04, // IMPORT_FROM 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x7d, // JUMP 61
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x05, // LOAD_ATTR 'platform'
    0x14,0x06, // LOAD_METHOD 'startswith'
    0x10,0x07, // LOAD_CONST_STRING 'esp'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x07, // IMPORT_NAME 'esp'
    0x1c,0x04, // IMPORT_FROM 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x05, // LOAD_ATTR 'platform'
    0x10,0x08, // LOAD_CONST_STRING 'pyboard'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x09, // IMPORT_NAME 'pyb'
    0x1c,0x04, // IMPORT_FROM 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x4c, // JUMP 12
    0x11,0x15, // LOAD_NAME '__import__'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x05, // LOAD_ATTR 'platform'
    0x34,0x01, // CALL_FUNCTION 1
    0x13,0x04, // LOAD_ATTR 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x19,0x03, // DELETE_NAME 'machine'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0a, // LOAD_CONST_STRING 'DHTBase'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'DHTBase'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0b, // LOAD_CONST_STRING 'DHT11'
    0x11,0x0a, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0b, // STORE_NAME 'DHT11'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x0c, // LOAD_CONST_STRING 'DHT22'
    0x11,0x0a, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'DHT22'
    0x10,0x0d, // LOAD_CONST_STRING '0.1.0'
    0x16,0x16, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHTBase
static const byte fun_data_dht_DHTBase[21] = {
    0x00,0x02, // prelude
    0x0a, // names: DHTBase
     // code info
    0x11,0x17, // LOAD_NAME '__name__'
    0x16,0x18, // STORE_NAME '__module__'
    0x10,0x0a, // LOAD_CONST_STRING 'DHTBase'
    0x16,0x19, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0e, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x11, // STORE_NAME 'measure'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase___init__
static const byte fun_data_dht_DHTBase___init__[19] = {
    0x1a,0x06, // prelude
    0x0e,0x1a,0x0f, // names: __init__, self, pin
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x0f, // STORE_ATTR 'pin'
    0x12,0x1b, // LOAD_GLOBAL 'bytearray'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHTBase___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_dht_DHTBase___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_dht_DHTBase___init__ + 5,
        .line_info_top = fun_data_dht_DHTBase___init__ + 5,
        .opcodes = fun_data_dht_DHTBase___init__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase_measure
static const byte fun_data_dht_DHTBase_measure[51] = {
    0x21,0x04, // prelude
    0x11,0x1a, // names: measure, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0xc1, // STORE_FAST 1
    0x12,0x04, // LOAD_GLOBAL 'dht_readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xb1, // LOAD_FAST 1
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1c, // LOAD_GLOBAL 'Exception'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHTBase_measure = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHTBase_measure,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 51,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_dht_DHTBase_measure + 4,
        .line_info_top = fun_data_dht_DHTBase_measure + 4,
        .opcodes = fun_data_dht_DHTBase_measure + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht_DHTBase[] = {
    &raw_code_dht_DHTBase___init__,
    &raw_code_dht_DHTBase_measure,
};

static const mp_raw_code_t raw_code_dht_DHTBase = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_dht_DHTBase + 3,
        .line_info_top = fun_data_dht_DHTBase + 3,
        .opcodes = fun_data_dht_DHTBase + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT11
static const byte fun_data_dht_DHT11[21] = {
    0x00,0x02, // prelude
    0x0b, // names: DHT11
     // code info
    0x11,0x17, // LOAD_NAME '__name__'
    0x16,0x18, // STORE_NAME '__module__'
    0x10,0x0b, // LOAD_CONST_STRING 'DHT11'
    0x16,0x19, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x12, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x13, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_humidity
static const byte fun_data_dht_DHT11_humidity[10] = {
    0x11,0x04, // prelude
    0x12,0x1a, // names: humidity, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT11_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT11_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_dht_DHT11_humidity + 4,
        .line_info_top = fun_data_dht_DHT11_humidity + 4,
        .opcodes = fun_data_dht_DHT11_humidity + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_temperature
static const byte fun_data_dht_DHT11_temperature[10] = {
    0x11,0x04, // prelude
    0x13,0x1a, // names: temperature, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT11_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT11_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT11_temperature + 4,
        .line_info_top = fun_data_dht_DHT11_temperature + 4,
        .opcodes = fun_data_dht_DHT11_temperature + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht_DHT11[] = {
    &raw_code_dht_DHT11_humidity,
    &raw_code_dht_DHT11_temperature,
};

static const mp_raw_code_t raw_code_dht_DHT11 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_dht_DHT11 + 3,
        .line_info_top = fun_data_dht_DHT11 + 3,
        .opcodes = fun_data_dht_DHT11 + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT22
static const byte fun_data_dht_DHT22[21] = {
    0x00,0x02, // prelude
    0x0c, // names: DHT22
     // code info
    0x11,0x17, // LOAD_NAME '__name__'
    0x16,0x18, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'DHT22'
    0x16,0x19, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x12, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x13, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_humidity
static const byte fun_data_dht_DHT22_humidity[21] = {
    0x19,0x04, // prelude
    0x12,0x1a, // names: humidity, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT22_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT22_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_dht_DHT22_humidity + 4,
        .line_info_top = fun_data_dht_DHT22_humidity + 4,
        .opcodes = fun_data_dht_DHT22_humidity + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_temperature
static const byte fun_data_dht_DHT22_temperature[41] = {
    0x21,0x04, // prelude
    0x13,0x1a, // names: temperature, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xf4, // BINARY_OP 29 __mul__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xef, // BINARY_OP 24 __and__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb1, // LOAD_FAST 1
    0xd1, // UNARY_OP 1 __neg__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT22_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT22_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT22_temperature + 4,
        .line_info_top = fun_data_dht_DHT22_temperature + 4,
        .opcodes = fun_data_dht_DHT22_temperature + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht_DHT22[] = {
    &raw_code_dht_DHT22_humidity,
    &raw_code_dht_DHT22_temperature,
};

static const mp_raw_code_t raw_code_dht_DHT22 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_dht_DHT22 + 3,
        .line_info_top = fun_data_dht_DHT22 + 3,
        .opcodes = fun_data_dht_DHT22 + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht__lt_module_gt_[] = {
    &raw_code_dht_DHTBase,
    &raw_code_dht_DHT11,
    &raw_code_dht_DHT22,
};

static const mp_raw_code_t raw_code_dht__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 139,
    #endif
    .children = (void *)&children_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_dht__lt_module_gt_ + 3,
        .line_info_top = fun_data_dht__lt_module_gt_ + 3,
        .opcodes = fun_data_dht__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_dht[29] = {
    MP_QSTR_dht_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_machine,
    MP_QSTR_dht_readinto,
    MP_QSTR_platform,
    MP_QSTR_startswith,
    MP_QSTR_esp,
    MP_QSTR_pyboard,
    MP_QSTR_pyb,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_buf,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR_hasattr,
    MP_QSTR___import__,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_Exception,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_dht_2 = {{&mp_type_float}, (mp_float_t)0.1};
#define const_obj_dht_2_macro MP_ROM_PTR(&const_obj_dht_2)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_dht_2_macro ((mp_rom_obj_t)(0xbe4cccce))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_dht_2_macro ((mp_rom_obj_t)(0xbfbd99999999999a))
#endif

// constant table
static const mp_rom_obj_t const_obj_table_data_dht[3] = {
    MP_ROM_QSTR(MP_QSTR_dht_readinto),
    MP_ROM_QSTR(MP_QSTR_checksum_space_error),
    const_obj_dht_2_macro,
};

static const mp_frozen_module_t frozen_module_dht = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_dht,
        .obj_table = (mp_obj_t *)&const_obj_table_data_dht,
    },
    .rc = &raw_code_dht__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module onewire
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/onewire.mpy
// - frozen file name: onewire.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt_
static const byte fun_data_onewire__lt_module_gt_[35] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME '_onewire'
    0x16,0x18, // STORE_NAME '_ow'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x11,0x19, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x03, // STORE_NAME 'OneWireError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'OneWire'
    0x10,0x05, // LOAD_CONST_STRING '0.1.0'
    0x16,0x1a, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWireError
static const byte fun_data_onewire_OneWireError[13] = {
    0x00,0x02, // prelude
    0x03, // names: OneWireError
     // code info
    0x11,0x1b, // LOAD_NAME '__name__'
    0x16,0x1c, // STORE_NAME '__module__'
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x16,0x1d, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWireError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire_OneWireError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_onewire_OneWireError + 3,
        .line_info_top = fun_data_onewire_OneWireError + 3,
        .opcodes = fun_data_onewire_OneWireError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWire
static const byte fun_data_onewire_OneWire[80] = {
    0x08,0x02, // prelude
    0x04, // names: OneWire
     // code info
    0x11,0x1b, // LOAD_NAME '__name__'
    0x16,0x1c, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x16,0x1d, // STORE_NAME '__qualname__'
    0x22,0x81,0x70, // LOAD_CONST_SMALL_INT 240
    0x16,0x16, // STORE_NAME 'SEARCH_ROM'
    0x22,0x80,0x55, // LOAD_CONST_SMALL_INT 85
    0x16,0x13, // STORE_NAME 'MATCH_ROM'
    0x22,0x81,0x4c, // LOAD_CONST_SMALL_INT 204
    0x16,0x1e, // STORE_NAME 'SKIP_ROM'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x06, // STORE_NAME '__init__'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0b, // STORE_NAME 'reset'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0c, // STORE_NAME 'readbit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'readbyte'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0e, // STORE_NAME 'readinto'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x0f, // STORE_NAME 'writebit'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x10, // STORE_NAME 'writebyte'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x11, // STORE_NAME 'write'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x12, // STORE_NAME 'select_rom'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x14, // STORE_NAME 'scan'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x15, // STORE_NAME '_search_rom'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x17, // STORE_NAME 'crc8'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire___init__
static const byte fun_data_onewire_OneWire___init__[25] = {
    0x2a,0x06, // prelude
    0x06,0x1f,0x07, // names: __init__, self, pin
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'pin'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x14,0x08, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x09, // LOAD_ATTR 'OPEN_DRAIN'
    0xb1, // LOAD_FAST 1
    0x13,0x0a, // LOAD_ATTR 'PULL_UP'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_onewire_OneWire___init__ + 5,
        .line_info_top = fun_data_onewire_OneWire___init__ + 5,
        .opcodes = fun_data_onewire_OneWire___init__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_reset
static const byte fun_data_onewire_OneWire_reset[27] = {
    0xaa,0x01,0x06, // prelude
    0x0b,0x1f,0x20, // names: reset, self, required
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb2, // LOAD_FAST 2
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x03, // LOAD_GLOBAL 'OneWireError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_onewire_OneWire_reset + 6,
        .line_info_top = fun_data_onewire_OneWire_reset + 6,
        .opcodes = fun_data_onewire_OneWire_reset + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbit
static const byte fun_data_onewire_OneWire_readbit[14] = {
    0x19,0x04, // prelude
    0x0c,0x1f, // names: readbit, self
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0c, // LOAD_METHOD 'readbit'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_readbit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_readbit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_onewire_OneWire_readbit + 4,
        .line_info_top = fun_data_onewire_OneWire_readbit + 4,
        .opcodes = fun_data_onewire_OneWire_readbit + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbyte
static const byte fun_data_onewire_OneWire_readbyte[14] = {
    0x19,0x04, // prelude
    0x0d,0x1f, // names: readbyte, self
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0d, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_readbyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_readbyte,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_onewire_OneWire_readbyte + 4,
        .line_info_top = fun_data_onewire_OneWire_readbyte + 4,
        .opcodes = fun_data_onewire_OneWire_readbyte + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readinto
static const byte fun_data_onewire_OneWire_readinto[38] = {
    0x3a,0x06, // prelude
    0x0e,0x1f,0x21, // names: readinto, self, buf
     // code info
    0x12,0x22, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x50, // JUMP 16
    0x57, // DUP_TOP
    0xc2, // STORE_FAST 2
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0d, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x2b, // POP_JUMP_IF_TRUE -21
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 38,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_onewire_OneWire_readinto + 5,
        .line_info_top = fun_data_onewire_OneWire_readinto + 5,
        .opcodes = fun_data_onewire_OneWire_readinto + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebit
static const byte fun_data_onewire_OneWire_writebit[16] = {
    0x2a,0x06, // prelude
    0x0f,0x1f,0x23, // names: writebit, self, value
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0f, // LOAD_METHOD 'writebit'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_writebit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_writebit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_onewire_OneWire_writebit + 5,
        .line_info_top = fun_data_onewire_OneWire_writebit + 5,
        .opcodes = fun_data_onewire_OneWire_writebit + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebyte
static const byte fun_data_onewire_OneWire_writebyte[16] = {
    0x2a,0x06, // prelude
    0x10,0x1f,0x23, // names: writebyte, self, value
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_writebyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_writebyte,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_onewire_OneWire_writebyte + 5,
        .line_info_top = fun_data_onewire_OneWire_writebyte + 5,
        .opcodes = fun_data_onewire_OneWire_writebyte + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_write
static const byte fun_data_onewire_OneWire_write[25] = {
    0x52,0x06, // prelude
    0x11,0x1f,0x21, // names: write, self, buf
     // code info
    0xb1, // LOAD_FAST 1
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc2, // STORE_FAST 2
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x30, // JUMP -16
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_onewire_OneWire_write + 5,
        .line_info_top = fun_data_onewire_OneWire_write + 5,
        .opcodes = fun_data_onewire_OneWire_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_select_rom
static const byte fun_data_onewire_OneWire_select_rom[29] = {
    0x22,0x06, // prelude
    0x12,0x1f,0x24, // names: select_rom, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR 'MATCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x11, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_select_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_select_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 29,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_onewire_OneWire_select_rom + 5,
        .line_info_top = fun_data_onewire_OneWire_select_rom + 5,
        .opcodes = fun_data_onewire_OneWire_select_rom + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_scan
static const byte fun_data_onewire_OneWire_scan[57] = {
    0x49,0x04, // prelude
    0x14,0x1f, // names: scan, self
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xc1, // STORE_FAST 1
    0x22,0x80,0x41, // LOAD_CONST_SMALL_INT 65
    0xc2, // STORE_FAST 2
    0x50, // LOAD_CONST_FALSE
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5f, // JUMP 31
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x15, // LOAD_METHOD '_search_rom'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x2b,0x01, // BUILD_LIST 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x49, // JUMP 9
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1a, // POP_JUMP_IF_TRUE -38
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 57,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_onewire_OneWire_scan + 4,
        .line_info_top = fun_data_onewire_OneWire_scan + 4,
        .opcodes = fun_data_onewire_OneWire_scan + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire__search_rom
static const byte fun_data_onewire_OneWire__search_rom[154] = {
    0x73,0x08, // prelude
    0x15,0x1f,0x25,0x26, // names: _search_rom, self, l_rom, diff
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'SEARCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0x12,0x27, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x12,0x27, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc4, // STORE_FAST 4
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0xc5, // STORE_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xdc,0x80, // JUMP 92
    0x57, // DUP_TOP
    0xc6, // STORE_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc7, // STORE_FAST 7
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc7,0x80, // JUMP 71
    0x57, // DUP_TOP
    0xc8, // STORE_FAST 8
    0xb0, // LOAD_FAST 0
    0x14,0x0c, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb0, // LOAD_FAST 0
    0x14,0x0c, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb9, // LOAD_FAST 9
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0x42,0x5a, // JUMP 26
    0xb9, // LOAD_FAST 9
    0x43,0x57, // POP_JUMP_IF_TRUE 23
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0xb1, // LOAD_FAST 1
    0xb6, // LOAD_FAST 6
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xef, // BINARY_OP 24 __and__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc9, // STORE_FAST 9
    0xb5, // LOAD_FAST 5
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'writebit'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb9, // LOAD_FAST 9
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0xc7, // STORE_FAST 7
    0xb5, // LOAD_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0xc5, // STORE_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb3,0x7f, // POP_JUMP_IF_TRUE -77
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xb6, // LOAD_FAST 6
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x9e,0x7f, // POP_JUMP_IF_TRUE -98
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire__search_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_onewire_OneWire__search_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 154,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_onewire_OneWire__search_rom + 6,
        .line_info_top = fun_data_onewire_OneWire__search_rom + 6,
        .opcodes = fun_data_onewire_OneWire__search_rom + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_crc8
static const byte fun_data_onewire_OneWire_crc8[13] = {
    0x22,0x06, // prelude
    0x17,0x1f,0x28, // names: crc8, self, data
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x17, // LOAD_METHOD 'crc8'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_crc8 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_crc8,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_onewire_OneWire_crc8 + 5,
        .line_info_top = fun_data_onewire_OneWire_crc8 + 5,
        .opcodes = fun_data_onewire_OneWire_crc8 + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_onewire_OneWire[] = {
    &raw_code_onewire_OneWire___init__,
    &raw_code_onewire_OneWire_reset,
    &raw_code_onewire_OneWire_readbit,
    &raw_code_onewire_OneWire_readbyte,
    &raw_code_onewire_OneWire_readinto,
    &raw_code_onewire_OneWire_writebit,
    &raw_code_onewire_OneWire_writebyte,
    &raw_code_onewire_OneWire_write,
    &raw_code_onewire_OneWire_select_rom,
    &raw_code_onewire_OneWire_scan,
    &raw_code_onewire_OneWire__search_rom,
    &raw_code_onewire_OneWire_crc8,
};

static const mp_raw_code_t raw_code_onewire_OneWire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 80,
    #endif
    .children = (void *)&children_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_onewire_OneWire + 3,
        .line_info_top = fun_data_onewire_OneWire + 3,
        .opcodes = fun_data_onewire_OneWire + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_onewire__lt_module_gt_[] = {
    &raw_code_onewire_OneWireError,
    &raw_code_onewire_OneWire,
};

static const mp_raw_code_t raw_code_onewire__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 35,
    #endif
    .children = (void *)&children_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_onewire__lt_module_gt_ + 3,
        .line_info_top = fun_data_onewire__lt_module_gt_ + 3,
        .opcodes = fun_data_onewire__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_onewire[41] = {
    MP_QSTR_onewire_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__onewire,
    MP_QSTR_OneWireError,
    MP_QSTR_OneWire,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_init,
    MP_QSTR_OPEN_DRAIN,
    MP_QSTR_PULL_UP,
    MP_QSTR_reset,
    MP_QSTR_readbit,
    MP_QSTR_readbyte,
    MP_QSTR_readinto,
    MP_QSTR_writebit,
    MP_QSTR_writebyte,
    MP_QSTR_write,
    MP_QSTR_select_rom,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_scan,
    MP_QSTR__search_rom,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_crc8,
    MP_QSTR__ow,
    MP_QSTR_Exception,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_self,
    MP_QSTR_required,
    MP_QSTR_buf,
    MP_QSTR_len,
    MP_QSTR_value,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
    MP_QSTR_bytearray,
    MP_QSTR_data,
};

// constants
static const mp_rom_obj_tuple_t const_obj_onewire_0 = {{&mp_type_tuple}, 2, {
    MP_ROM_NONE,
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_onewire[1] = {
    MP_ROM_PTR(&const_obj_onewire_0),
};

static const mp_frozen_module_t frozen_module_onewire = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_onewire,
        .obj_table = (mp_obj_t *)&const_obj_table_data_onewire,
    },
    .rc = &raw_code_onewire__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ds18x20
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/ds18x20.mpy
// - frozen file name: ds18x20.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ds18x20.py, scope ds18x20__lt_module_gt_
static const byte fun_data_ds18x20__lt_module_gt_[30] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'micropython'
    0x1c,0x02, // IMPORT_FROM 'const'
    0x16,0x02, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'DS18X20'
    0x10,0x05, // LOAD_CONST_STRING '0.1.0'
    0x16,0x17, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20__lt_module_gt_
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20
static const byte fun_data_ds18x20_DS18X20[37] = {
    0x00,0x02, // prelude
    0x04, // names: DS18X20
     // code info
    0x11,0x18, // LOAD_NAME '__name__'
    0x16,0x19, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x16,0x1a, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x06, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x09, // STORE_NAME 'scan'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'convert_temp'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0e, // STORE_NAME 'read_scratch'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'write_scratch'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x15, // STORE_NAME 'read_temp'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20___init__
static const byte fun_data_ds18x20_DS18X20___init__[19] = {
    0x1a,0x06, // prelude
    0x06,0x1b,0x1c, // names: __init__, self, onewire
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'ow'
    0x12,0x1d, // LOAD_GLOBAL 'bytearray'
    0x89, // LOAD_CONST_SMALL_INT 9
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_ds18x20_DS18X20___init__ + 5,
        .line_info_top = fun_data_ds18x20_DS18X20___init__ + 5,
        .opcodes = fun_data_ds18x20_DS18X20___init__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan
static const byte fun_data_ds18x20_DS18X20_scan[16] = {
    0x19,0x04, // prelude
    0x09,0x1b, // names: scan, self
     // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x09, // LOAD_METHOD 'scan'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20_scan
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan__lt_listcomp_gt_
static const byte fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_[25] = {
    0x41,0x04, // prelude
    0x16,0x20, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xdd, // BINARY_OP 6 <in>
    0x44,0x35, // POP_JUMP_IF_FALSE -11
    0xb1, // LOAD_FAST 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x30, // JUMP -16
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_scan__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ds18x20_DS18X20_scan[] = {
    &raw_code_ds18x20_DS18X20_scan__lt_listcomp_gt_,
};

static const mp_raw_code_t raw_code_ds18x20_DS18X20_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = (void *)&children_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_ds18x20_DS18X20_scan + 4,
        .line_info_top = fun_data_ds18x20_DS18X20_scan + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_convert_temp
static const byte fun_data_ds18x20_DS18X20_convert_temp[39] = {
    0x19,0x04, // prelude
    0x0a,0x1b, // names: convert_temp, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x13,0x0d, // LOAD_ATTR 'SKIP_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x44, // LOAD_CONST_SMALL_INT 68
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_convert_temp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_convert_temp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 39,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_ds18x20_DS18X20_convert_temp + 4,
        .line_info_top = fun_data_ds18x20_DS18X20_convert_temp + 4,
        .opcodes = fun_data_ds18x20_DS18X20_convert_temp + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_scratch
static const byte fun_data_ds18x20_DS18X20_read_scratch[68] = {
    0x22,0x06, // prelude
    0x0e,0x1b,0x1e, // names: read_scratch, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0f, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0x22,0x81,0x3e, // LOAD_CONST_SMALL_INT 190
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x10, // LOAD_METHOD 'readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x11, // LOAD_METHOD 'crc8'
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1f, // LOAD_GLOBAL 'Exception'
    0x10,0x12, // LOAD_CONST_STRING 'CRC error'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'buf'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_read_scratch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20_read_scratch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 68,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_ds18x20_DS18X20_read_scratch + 5,
        .line_info_top = fun_data_ds18x20_DS18X20_read_scratch + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_scratch + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_write_scratch
static const byte fun_data_ds18x20_DS18X20_write_scratch[46] = {
    0x2b,0x08, // prelude
    0x13,0x1b,0x1e,0x08, // names: write_scratch, self, rom, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0f, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x4e, // LOAD_CONST_SMALL_INT 78
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x14, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_write_scratch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_ds18x20_DS18X20_write_scratch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_ds18x20_DS18X20_write_scratch + 6,
        .line_info_top = fun_data_ds18x20_DS18X20_write_scratch + 6,
        .opcodes = fun_data_ds18x20_DS18X20_write_scratch + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_temp
static const byte fun_data_ds18x20_DS18X20_read_temp[103] = {
    0x3a,0x06, // prelude
    0x15,0x1b,0x1e, // names: read_temp, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0e, // LOAD_METHOD 'read_scratch'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x90, // LOAD_CONST_SMALL_INT 16
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x72, // POP_JUMP_IF_FALSE 50
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0xd2, // UNARY_OP 2 __invert__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0x42,0x46, // JUMP 6
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0x55, // LOAD_SUBSCR
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xf7, // BINARY_OP 32 __truediv__
    0xf2, // BINARY_OP 27 __add__
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x22,0x82,0x80,0x00, // LOAD_CONST_SMALL_INT 32768
    0xef, // BINARY_OP 24 __and__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0x22,0x83,0xff,0x7f, // LOAD_CONST_SMALL_INT 65535
    0xee, // BINARY_OP 23 __xor__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf7, // BINARY_OP 32 __truediv__
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_read_temp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20_read_temp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 103,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_ds18x20_DS18X20_read_temp + 5,
        .line_info_top = fun_data_ds18x20_DS18X20_read_temp + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_temp + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ds18x20_DS18X20[] = {
    &raw_code_ds18x20_DS18X20___init__,
    &raw_code_ds18x20_DS18X20_scan,
    &raw_code_ds18x20_DS18X20_convert_temp,
    &raw_code_ds18x20_DS18X20_read_scratch,
    &raw_code_ds18x20_DS18X20_write_scratch,
    &raw_code_ds18x20_DS18X20_read_temp,
};

static const mp_raw_code_t raw_code_ds18x20_DS18X20 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_ds18x20_DS18X20 + 3,
        .line_info_top = fun_data_ds18x20_DS18X20 + 3,
        .opcodes = fun_data_ds18x20_DS18X20 + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ds18x20__lt_module_gt_[] = {
    &raw_code_ds18x20_DS18X20,
};

static const mp_raw_code_t raw_code_ds18x20__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = (void *)&children_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ds18x20__lt_module_gt_ + 3,
        .line_info_top = fun_data_ds18x20__lt_module_gt_ + 3,
        .opcodes = fun_data_ds18x20__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_ds18x20[33] = {
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_DS18X20,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_ow,
    MP_QSTR_buf,
    MP_QSTR_scan,
    MP_QSTR_convert_temp,
    MP_QSTR_reset,
    MP_QSTR_writebyte,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_read_scratch,
    MP_QSTR_select_rom,
    MP_QSTR_readinto,
    MP_QSTR_crc8,
    MP_QSTR_CRC_space_error,
    MP_QSTR_write_scratch,
    MP_QSTR_write,
    MP_QSTR_read_temp,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_onewire,
    MP_QSTR_bytearray,
    MP_QSTR_rom,
    MP_QSTR_Exception,
    MP_QSTR__star_,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_ds18x20_0 = {{&mp_type_float}, (mp_float_t)0.25};
#define const_obj_ds18x20_0_macro MP_ROM_PTR(&const_obj_ds18x20_0)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_ds18x20_0_macro ((mp_rom_obj_t)(0xbf000002))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_ds18x20_0_macro ((mp_rom_obj_t)(0xbfd4000000000000))
#endif
static const mp_rom_obj_tuple_t const_obj_ds18x20_1 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(16),
    MP_ROM_INT(34),
    MP_ROM_INT(40),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_ds18x20[2] = {
    const_obj_ds18x20_0_macro,
    MP_ROM_PTR(&const_obj_ds18x20_1),
};

static const mp_frozen_module_t frozen_module_ds18x20 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ds18x20,
        .obj_table = (mp_obj_t *)&const_obj_table_data_ds18x20,
    },
    .rc = &raw_code_ds18x20__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module neopixel
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/neopixel.mpy
// - frozen file name: neopixel.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file neopixel.py, scope neopixel__lt_module_gt_
static const byte fun_data_neopixel__lt_module_gt_[30] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'bitstream'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x1c,0x02, // IMPORT_FROM 'bitstream'
    0x16,0x02, // STORE_NAME 'bitstream'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'NeoPixel'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'NeoPixel'
    0x10,0x05, // LOAD_CONST_STRING '0.1.0'
    0x16,0x15, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel__lt_module_gt_
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel
static const byte fun_data_neopixel_NeoPixel[46] = {
    0x08,0x02, // prelude
    0x04, // names: NeoPixel
     // code info
    0x11,0x16, // LOAD_NAME '__name__'
    0x16,0x17, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'NeoPixel'
    0x16,0x18, // STORE_NAME '__qualname__'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x10, // STORE_NAME 'ORDER'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x06, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0e, // STORE_NAME '__len__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0f, // STORE_NAME '__setitem__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x11, // STORE_NAME '__getitem__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x12, // STORE_NAME 'fill'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x13, // STORE_NAME 'write'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___init__
static const byte fun_data_neopixel_NeoPixel___init__[69] = {
    0xb9,0x84,0x01,0x0c, // prelude
    0x06,0x19,0x07,0x08,0x09,0x0d, // names: __init__, self, pin, n, bpp, timing
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'n'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'bpp'
    0x12,0x1a, // LOAD_GLOBAL 'bytearray'
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x0a, // STORE_ATTR 'buf'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x14,0x0b, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x0c, // LOAD_ATTR 'OUT'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x1b, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x1c, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0xb4, // LOAD_FAST 4
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x42,0x42, // JUMP 2
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x42,0x41, // JUMP 1
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x0d, // STORE_ATTR 'timing'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_neopixel_NeoPixel___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 69,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_neopixel_NeoPixel___init__ + 10,
        .line_info_top = fun_data_neopixel_NeoPixel___init__ + 10,
        .opcodes = fun_data_neopixel_NeoPixel___init__ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___len__
static const byte fun_data_neopixel_NeoPixel___len__[8] = {
    0x09,0x04, // prelude
    0x0e,0x19, // names: __len__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'n'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___len__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_neopixel_NeoPixel___len__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_neopixel_NeoPixel___len__ + 4,
        .line_info_top = fun_data_neopixel_NeoPixel___len__ + 4,
        .opcodes = fun_data_neopixel_NeoPixel___len__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___setitem__
static const byte fun_data_neopixel_NeoPixel___setitem__[45] = {
    0x53,0x08, // prelude
    0x0f,0x19,0x1d,0x1e, // names: __setitem__, self, i, v
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0xf4, // BINARY_OP 29 __mul__
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x52, // JUMP 18
    0x57, // DUP_TOP
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'ORDER'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x29, // POP_JUMP_IF_TRUE -23
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___setitem__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_neopixel_NeoPixel___setitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 45,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_neopixel_NeoPixel___setitem__ + 6,
        .line_info_top = fun_data_neopixel_NeoPixel___setitem__ + 6,
        .opcodes = fun_data_neopixel_NeoPixel___setitem__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___getitem__
static const byte fun_data_neopixel_NeoPixel___getitem__[37] = {
    0x32,0x86,0x01, // prelude
    0x11,0x19,0x1d, // names: __getitem__, self, i
    0x00,0x02, // code info
    0xb1, // LOAD_FAST 1
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0xf4, // BINARY_OP 29 __mul__
    0x27,0x02, // STORE_DEREF 2
    0x12,0x1f, // LOAD_GLOBAL 'tuple'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x20,0x00,0x02, // MAKE_CLOSURE 0
    0x12,0x20, // LOAD_GLOBAL 'range'
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of neopixel_NeoPixel___getitem__
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___getitem____lt_genexpr_gt_
static const byte fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_[34] = {
    0xdb,0x40,0x08, // prelude
    0x14,0x22,0x22,0x22, // names: <genexpr>, *, *, *
     // code info
    0x53, // LOAD_NULL
    0xb2, // LOAD_FAST 2
    0x53, // LOAD_NULL
    0x53, // LOAD_NULL
    0x4b,0x13, // FOR_ITER 19
    0xc3, // STORE_FAST 3
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0x25,0x01, // LOAD_DEREF 1
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x10, // LOAD_ATTR 'ORDER'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x55, // LOAD_SUBSCR
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x42,0x2b, // JUMP -21
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___getitem____lt_genexpr_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 34,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
        .line_info_top = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
        .opcodes = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_neopixel_NeoPixel___getitem__[] = {
    &raw_code_neopixel_NeoPixel___getitem____lt_genexpr_gt_,
};

static const mp_raw_code_t raw_code_neopixel_NeoPixel___getitem__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_neopixel_NeoPixel___getitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_neopixel_NeoPixel___getitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_neopixel_NeoPixel___getitem__ + 6,
        .line_info_top = fun_data_neopixel_NeoPixel___getitem__ + 6,
        .opcodes = fun_data_neopixel_NeoPixel___getitem__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel_fill
static const byte fun_data_neopixel_NeoPixel_fill[63] = {
    0x62,0x06, // prelude
    0x12,0x19,0x1e, // names: fill, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0xc2, // STORE_FAST 2
    0x12,0x21, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5d, // JUMP 29
    0x57, // DUP_TOP
    0xc5, // STORE_FAST 5
    0xb1, // LOAD_FAST 1
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'ORDER'
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xc7, // STORE_FAST 7
    0x42,0x48, // JUMP 8
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb7, // LOAD_FAST 7
    0xb4, // LOAD_FAST 4
    0xe5, // BINARY_OP 14 __iadd__
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x33, // POP_JUMP_IF_TRUE -13
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1e, // POP_JUMP_IF_TRUE -34
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel_fill = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_neopixel_NeoPixel_fill,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 63,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_neopixel_NeoPixel_fill + 5,
        .line_info_top = fun_data_neopixel_NeoPixel_fill + 5,
        .opcodes = fun_data_neopixel_NeoPixel_fill + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel_write
static const byte fun_data_neopixel_NeoPixel_write[21] = {
    0x29,0x04, // prelude
    0x13,0x19, // names: write, self
     // code info
    0x12,0x02, // LOAD_GLOBAL 'bitstream'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x13,0x0d, // LOAD_ATTR 'timing'
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_neopixel_NeoPixel_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_neopixel_NeoPixel_write + 4,
        .line_info_top = fun_data_neopixel_NeoPixel_write + 4,
        .opcodes = fun_data_neopixel_NeoPixel_write + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_neopixel_NeoPixel[] = {
    &raw_code_neopixel_NeoPixel___init__,
    &raw_code_neopixel_NeoPixel___len__,
    &raw_code_neopixel_NeoPixel___setitem__,
    &raw_code_neopixel_NeoPixel___getitem__,
    &raw_code_neopixel_NeoPixel_fill,
    &raw_code_neopixel_NeoPixel_write,
};

static const mp_raw_code_t raw_code_neopixel_NeoPixel = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_neopixel_NeoPixel,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = (void *)&children_neopixel_NeoPixel,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_neopixel_NeoPixel + 3,
        .line_info_top = fun_data_neopixel_NeoPixel + 3,
        .opcodes = fun_data_neopixel_NeoPixel + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_neopixel__lt_module_gt_[] = {
    &raw_code_neopixel_NeoPixel,
};

static const mp_raw_code_t raw_code_neopixel__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_neopixel__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = (void *)&children_neopixel__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_neopixel__lt_module_gt_ + 3,
        .line_info_top = fun_data_neopixel__lt_module_gt_ + 3,
        .opcodes = fun_data_neopixel__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_neopixel[35] = {
    MP_QSTR_neopixel_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_bitstream,
    MP_QSTR_machine,
    MP_QSTR_NeoPixel,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_n,
    MP_QSTR_bpp,
    MP_QSTR_buf,
    MP_QSTR_init,
    MP_QSTR_OUT,
    MP_QSTR_timing,
    MP_QSTR___len__,
    MP_QSTR___setitem__,
    MP_QSTR_ORDER,
    MP_QSTR___getitem__,
    MP_QSTR_fill,
    MP_QSTR_write,
    MP_QSTR__lt_genexpr_gt_,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_isinstance,
    MP_QSTR_int,
    MP_QSTR_i,
    MP_QSTR_v,
    MP_QSTR_tuple,
    MP_QSTR_range,
    MP_QSTR_len,
    MP_QSTR__star_,
};

// constants
static const mp_rom_obj_tuple_t const_obj_neopixel_0 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(1),
    MP_ROM_INT(0),
    MP_ROM_INT(2),
    MP_ROM_INT(3),
}};
static const mp_rom_obj_tuple_t const_obj_neopixel_1 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(400),
    MP_ROM_INT(850),
    MP_ROM_INT(800),
    MP_ROM_INT(450),
}};
static const mp_rom_obj_tuple_t const_obj_neopixel_2 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(800),
    MP_ROM_INT(1700),
    MP_ROM_INT(1600),
    MP_ROM_INT(900),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_neopixel[3] = {
    MP_ROM_PTR(&const_obj_neopixel_0),
    MP_ROM_PTR(&const_obj_neopixel_1),
    MP_ROM_PTR(&const_obj_neopixel_2),
};

static const mp_frozen_module_t frozen_module_neopixel = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_neopixel,
        .obj_table = (mp_obj_t *)&const_obj_table_data_neopixel,
    },
    .rc = &raw_code_neopixel__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module umqtt_robust
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/umqtt/robust.mpy
// - frozen file name: umqtt/robust.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file umqtt/robust.py, scope umqtt_robust__lt_module_gt_
static const byte fun_data_umqtt_robust__lt_module_gt_[44] = {
    0x18,0x0a, // prelude
    0x01, // names: <module>
    0x26,0x6c,0x8d,0x33, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'utime'
    0x16,0x02, // STORE_NAME 'utime'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x03, // LOAD_CONST_STRING 'simple'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x04, // IMPORT_NAME ''
    0x1c,0x03, // IMPORT_FROM 'simple'
    0x16,0x03, // STORE_NAME 'simple'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x05, // LOAD_CONST_STRING 'MQTTClient'
    0x11,0x03, // LOAD_NAME 'simple'
    0x13,0x05, // LOAD_ATTR 'MQTTClient'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x05, // STORE_NAME 'MQTTClient'
    0x10,0x06, // LOAD_CONST_STRING '1.0.2'
    0x16,0x14, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of umqtt_robust__lt_module_gt_
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient
static const byte fun_data_umqtt_robust_MQTTClient[74] = {
    0x18,0x1d, // prelude
    0x05, // names: MQTTClient
    0x68,0x40,0x23,0x43,0x64,0x84,0x07,0x86,0x0a,0x8b,0x08,0x86,0x08,0x00, // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'MQTTClient'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x16,0x09, // STORE_NAME 'DELAY'
    0x50, // LOAD_CONST_FALSE
    0x16,0x0b, // STORE_NAME 'DEBUG'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME 'delay'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0a, // STORE_NAME 'log'
    0xb0, // LOAD_FAST 0
    0x20,0x02,0x01, // MAKE_CLOSURE 2
    0x16,0x0d, // STORE_NAME 'reconnect'
    0x50, // LOAD_CONST_FALSE
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0xb0, // LOAD_FAST 0
    0x21,0x03,0x01, // MAKE_CLOSURE_DEFARGS 3
    0x16,0x0f, // STORE_NAME 'publish'
    0xb0, // LOAD_FAST 0
    0x20,0x04,0x01, // MAKE_CLOSURE 4
    0x16,0x10, // STORE_NAME 'wait_msg'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0xb0, // LOAD_FAST 0
    0x21,0x05,0x01, // MAKE_CLOSURE_DEFARGS 5
    0x16,0x11, // STORE_NAME 'check_msg'
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
// child of umqtt_robust_MQTTClient
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient_delay
static const byte fun_data_umqtt_robust_MQTTClient_delay[19] = {
    0x22,0x0a, // prelude
    0x07,0x18,0x19, // names: delay, self, i
    0x80,0x09, // code info
    0x12,0x02, // LOAD_GLOBAL 'utime'
    0x14,0x08, // LOAD_METHOD 'sleep'
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'DELAY'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient_delay = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_umqtt_robust_MQTTClient_delay,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_umqtt_robust_MQTTClient_delay + 5,
        .line_info_top = fun_data_umqtt_robust_MQTTClient_delay + 7,
        .opcodes = fun_data_umqtt_robust_MQTTClient_delay + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_robust_MQTTClient
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient_log
static const byte fun_data_umqtt_robust_MQTTClient_log[41] = {
    0x2b,0x12, // prelude
    0x0a,0x18,0x1a,0x1b, // names: log, self, in_reconnect, e
    0x80,0x0c,0x25,0x23,0x4b, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'DEBUG'
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0xb1, // LOAD_FAST 1
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x1c, // LOAD_GLOBAL 'print'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb2, // LOAD_FAST 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x49, // JUMP 9
    0x12,0x1c, // LOAD_GLOBAL 'print'
    0x10,0x0c, // LOAD_CONST_STRING 'mqtt: %r'
    0xb2, // LOAD_FAST 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient_log = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_umqtt_robust_MQTTClient_log,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_umqtt_robust_MQTTClient_log + 6,
        .line_info_top = fun_data_umqtt_robust_MQTTClient_log + 11,
        .opcodes = fun_data_umqtt_robust_MQTTClient_log + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_robust_MQTTClient
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient_reconnect
static const byte fun_data_umqtt_robust_MQTTClient_reconnect[70] = {
    0xd2,0x02,0x16, // prelude
    0x0d,0x1d,0x18, // names: reconnect, *, self
    0x80,0x13,0x22,0x20,0x22,0x54,0x28,0x24, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x48,0x0b, // SETUP_EXCEPT 11
    0x12,0x1e, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x0e, // LOAD_SUPER_METHOD 'connect'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
    0x57, // DUP_TOP
    0x12,0x1f, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x5e, // POP_JUMP_IF_FALSE 30
    0xc3, // STORE_FAST 3
    0x49,0x14, // SETUP_FINALLY 20
    0xb1, // LOAD_FAST 1
    0x14,0x0a, // LOAD_METHOD 'log'
    0x52, // LOAD_CONST_TRUE
    0xb3, // LOAD_FAST 3
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x14,0x07, // LOAD_METHOD 'delay'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc3, // STORE_FAST 3
    0x28,0x03, // DELETE_FAST 3
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0x0c, // JUMP -52
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient_reconnect = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_umqtt_robust_MQTTClient_reconnect,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 70,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_umqtt_robust_MQTTClient_reconnect + 6,
        .line_info_top = fun_data_umqtt_robust_MQTTClient_reconnect + 14,
        .opcodes = fun_data_umqtt_robust_MQTTClient_reconnect + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_robust_MQTTClient
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient_publish
static const byte fun_data_umqtt_robust_MQTTClient_publish[69] = {
    0xea,0x86,0x01,0x1a, // prelude
    0x0f,0x1d,0x18,0x20,0x21,0x22,0x23, // names: publish, *, self, topic, msg, retain, qos
    0x80,0x1d,0x20,0x22,0x57,0x31, // code info
    0x48,0x0e, // SETUP_EXCEPT 14
    0x12,0x1e, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x0f, // LOAD_SUPER_METHOD 'publish'
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x36,0x04, // CALL_METHOD 4
    0x63, // RETURN_VALUE
    0x57, // DUP_TOP
    0x12,0x1f, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0xc6, // STORE_FAST 6
    0x49,0x09, // SETUP_FINALLY 9
    0xb1, // LOAD_FAST 1
    0x14,0x0a, // LOAD_METHOD 'log'
    0x50, // LOAD_CONST_FALSE
    0xb6, // LOAD_FAST 6
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'reconnect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x0e, // JUMP -50
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient_publish = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 6,
    .fun_data = fun_data_umqtt_robust_MQTTClient_publish,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 69,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 6,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_umqtt_robust_MQTTClient_publish + 11,
        .line_info_top = fun_data_umqtt_robust_MQTTClient_publish + 17,
        .opcodes = fun_data_umqtt_robust_MQTTClient_publish + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_robust_MQTTClient
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient_wait_msg
static const byte fun_data_umqtt_robust_MQTTClient_wait_msg[60] = {
    0xca,0x02,0x12, // prelude
    0x10,0x1d,0x18, // names: wait_msg, *, self
    0x80,0x25,0x20,0x22,0x53,0x31, // code info
    0x48,0x0a, // SETUP_EXCEPT 10
    0x12,0x1e, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x10, // LOAD_SUPER_METHOD 'wait_msg'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
    0x57, // DUP_TOP
    0x12,0x1f, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0xc2, // STORE_FAST 2
    0x49,0x09, // SETUP_FINALLY 9
    0xb1, // LOAD_FAST 1
    0x14,0x0a, // LOAD_METHOD 'log'
    0x50, // LOAD_CONST_FALSE
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0x28,0x02, // DELETE_FAST 2
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'reconnect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x12, // JUMP -46
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient_wait_msg = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_umqtt_robust_MQTTClient_wait_msg,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 60,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_umqtt_robust_MQTTClient_wait_msg + 6,
        .line_info_top = fun_data_umqtt_robust_MQTTClient_wait_msg + 12,
        .opcodes = fun_data_umqtt_robust_MQTTClient_wait_msg + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_robust_MQTTClient
// frozen bytecode for file umqtt/robust.py, scope umqtt_robust_MQTTClient_check_msg
static const byte fun_data_umqtt_robust_MQTTClient_check_msg[79] = {
    0xd3,0x03,0x18, // prelude
    0x11,0x1d,0x18,0x24, // names: check_msg, *, self, attempts
    0x80,0x2d,0x22,0x29,0x22,0x53,0x31,0x26, // code info
    0x42,0x79, // JUMP 57
    0xb1, // LOAD_FAST 1
    0x13,0x12, // LOAD_ATTR 'sock'
    0x14,0x13, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0x0a, // SETUP_EXCEPT 10
    0x12,0x1e, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x10, // LOAD_SUPER_METHOD 'wait_msg'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
    0x57, // DUP_TOP
    0x12,0x1f, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0xc3, // STORE_FAST 3
    0x49,0x09, // SETUP_FINALLY 9
    0xb1, // LOAD_FAST 1
    0x14,0x0a, // LOAD_METHOD 'log'
    0x50, // LOAD_CONST_FALSE
    0xb3, // LOAD_FAST 3
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc3, // STORE_FAST 3
    0x28,0x03, // DELETE_FAST 3
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'reconnect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x43,0x04, // POP_JUMP_IF_TRUE -60
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient_check_msg = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_umqtt_robust_MQTTClient_check_msg,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 79,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_umqtt_robust_MQTTClient_check_msg + 7,
        .line_info_top = fun_data_umqtt_robust_MQTTClient_check_msg + 15,
        .opcodes = fun_data_umqtt_robust_MQTTClient_check_msg + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_umqtt_robust_MQTTClient[] = {
    &raw_code_umqtt_robust_MQTTClient_delay,
    &raw_code_umqtt_robust_MQTTClient_log,
    &raw_code_umqtt_robust_MQTTClient_reconnect,
    &raw_code_umqtt_robust_MQTTClient_publish,
    &raw_code_umqtt_robust_MQTTClient_wait_msg,
    &raw_code_umqtt_robust_MQTTClient_check_msg,
};

static const mp_raw_code_t raw_code_umqtt_robust_MQTTClient = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_umqtt_robust_MQTTClient,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 74,
    #endif
    .children = (void *)&children_umqtt_robust_MQTTClient,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_umqtt_robust_MQTTClient + 3,
        .line_info_top = fun_data_umqtt_robust_MQTTClient + 16,
        .opcodes = fun_data_umqtt_robust_MQTTClient + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_umqtt_robust__lt_module_gt_[] = {
    &raw_code_umqtt_robust_MQTTClient,
};

static const mp_raw_code_t raw_code_umqtt_robust__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_umqtt_robust__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 44,
    #endif
    .children = (void *)&children_umqtt_robust__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_umqtt_robust__lt_module_gt_ + 3,
        .line_info_top = fun_data_umqtt_robust__lt_module_gt_ + 7,
        .opcodes = fun_data_umqtt_robust__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_umqtt_robust[37] = {
    MP_QSTR_umqtt_slash_robust_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_utime,
    MP_QSTR_simple,
    MP_QSTR_,
    MP_QSTR_MQTTClient,
    MP_QSTR_1_dot_0_dot_2,
    MP_QSTR_delay,
    MP_QSTR_sleep,
    MP_QSTR_DELAY,
    MP_QSTR_log,
    MP_QSTR_DEBUG,
    MP_QSTR_mqtt_colon__space__percent_r,
    MP_QSTR_reconnect,
    MP_QSTR_connect,
    MP_QSTR_publish,
    MP_QSTR_wait_msg,
    MP_QSTR_check_msg,
    MP_QSTR_sock,
    MP_QSTR_setblocking,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_i,
    MP_QSTR_in_reconnect,
    MP_QSTR_e,
    MP_QSTR_print,
    MP_QSTR__star_,
    MP_QSTR_super,
    MP_QSTR_OSError,
    MP_QSTR_topic,
    MP_QSTR_msg,
    MP_QSTR_retain,
    MP_QSTR_qos,
    MP_QSTR_attempts,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_umqtt_robust[1] = {
    MP_ROM_QSTR(MP_QSTR_mqtt_space_reconnect_colon__space__percent_r),
};

static const mp_frozen_module_t frozen_module_umqtt_robust = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_umqtt_robust,
        .obj_table = (mp_obj_t *)&const_obj_table_data_umqtt_robust,
    },
    .rc = &raw_code_umqtt_robust__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module umqtt_simple
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/umqtt/simple.mpy
// - frozen file name: umqtt/simple.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file umqtt/simple.py, scope umqtt_simple__lt_module_gt_
static const byte fun_data_umqtt_simple__lt_module_gt_[60] = {
    0x18,0x10, // prelude
    0x01, // names: <module>
    0x26,0x26,0x6c,0x6b,0x20,0x89,0xd1, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'usocket'
    0x16,0x23, // STORE_NAME 'socket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'ustruct'
    0x16,0x33, // STORE_NAME 'struct'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'hexlify'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'ubinascii'
    0x1c,0x04, // IMPORT_FROM 'hexlify'
    0x16,0x04, // STORE_NAME 'hexlify'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x06, // LOAD_CONST_STRING 'MQTTException'
    0x11,0x34, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'MQTTException'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x07, // LOAD_CONST_STRING 'MQTTClient'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x07, // STORE_NAME 'MQTTClient'
    0x10,0x08, // LOAD_CONST_STRING '1.3.4'
    0x16,0x35, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of umqtt_simple__lt_module_gt_
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTException
static const byte fun_data_umqtt_simple_MQTTException[15] = {
    0x00,0x06, // prelude
    0x06, // names: MQTTException
    0x68,0x60, // code info
    0x11,0x36, // LOAD_NAME '__name__'
    0x16,0x37, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'MQTTException'
    0x16,0x38, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTException = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_umqtt_simple_MQTTException,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_umqtt_simple_MQTTException + 3,
        .line_info_top = fun_data_umqtt_simple_MQTTException + 5,
        .opcodes = fun_data_umqtt_simple_MQTTException + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple__lt_module_gt_
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient
static const byte fun_data_umqtt_simple_MQTTClient[113] = {
    0x28,0x32, // prelude
    0x07, // names: MQTTClient
    0x88,0x0a,0x85,0x09,0x89,0x14,0x64,0x20,0x84,0x0a,0x64,0x89,0x08,0x88,0x30,0x64,0x20,0x64,0x89,0x23,0x88,0x17,0x84,0x24, // code info
    0x11,0x36, // LOAD_NAME '__name__'
    0x16,0x37, // STORE_NAME '__module__'
    0x10,0x07, // LOAD_CONST_STRING 'MQTTClient'
    0x16,0x38, // STORE_NAME '__qualname__'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x80, // LOAD_CONST_SMALL_INT 0
    0x50, // LOAD_CONST_FALSE
    0x2c,0x00, // BUILD_MAP 0
    0x2a,0x06, // BUILD_TUPLE 6
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x09, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x19, // STORE_NAME '_send_str'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1d, // STORE_NAME '_recv_len'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x1f, // STORE_NAME 'set_callback'
    0x50, // LOAD_CONST_FALSE
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x20, // STORE_NAME 'set_last_will'
    0x52, // LOAD_CONST_TRUE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x05, // MAKE_FUNCTION_DEFARGS 5
    0x16,0x22, // STORE_NAME 'connect'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x27, // STORE_NAME 'disconnect'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x29, // STORE_NAME 'ping'
    0x50, // LOAD_CONST_FALSE
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x2a, // STORE_NAME 'publish'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x09, // MAKE_FUNCTION_DEFARGS 9
    0x16,0x2d, // STORE_NAME 'subscribe'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x2c, // STORE_NAME 'wait_msg'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x32, // STORE_NAME 'check_msg'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient___init__
static const byte fun_data_umqtt_simple_MQTTClient___init__[113] = {
    0xd1,0x80,0x85,0x01,0x38, // prelude
    0x09,0x39,0x0a,0x0c,0x0d,0x12,0x3a,0x14,0x0e,0x0f, // names: __init__, self, client_id, server, port, user, password, keepalive, ssl, ssl_params
    0x80,0x15,0x25,0x2d,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24, // code info
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0xb7, // LOAD_FAST 7
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x22,0x80,0xc5,0x33, // LOAD_CONST_SMALL_INT 8883
    0x42,0x43, // JUMP 3
    0x22,0x8e,0x5b, // LOAD_CONST_SMALL_INT 1883
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x0a, // STORE_ATTR 'client_id'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'sock'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x0c, // STORE_ATTR 'server'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x0d, // STORE_ATTR 'port'
    0xb7, // LOAD_FAST 7
    0xb0, // LOAD_FAST 0
    0x18,0x0e, // STORE_ATTR 'ssl'
    0xb8, // LOAD_FAST 8
    0xb0, // LOAD_FAST 0
    0x18,0x0f, // STORE_ATTR 'ssl_params'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR 'pid'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x11, // STORE_ATTR 'cb'
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x12, // STORE_ATTR 'user'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x18,0x13, // STORE_ATTR 'pswd'
    0xb6, // LOAD_FAST 6
    0xb0, // LOAD_FAST 0
    0x18,0x14, // STORE_ATTR 'keepalive'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'lw_topic'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x16, // STORE_ATTR 'lw_msg'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x17, // STORE_ATTR 'lw_qos'
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x18, // STORE_ATTR 'lw_retain'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 9,
    .fun_data = fun_data_umqtt_simple_MQTTClient___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 113,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 9,
        .n_kwonly_args = 0,
        .n_def_pos_args = 6,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_umqtt_simple_MQTTClient___init__ + 15,
        .line_info_top = fun_data_umqtt_simple_MQTTClient___init__ + 33,
        .opcodes = fun_data_umqtt_simple_MQTTClient___init__ + 33,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient__send_str
static const byte fun_data_umqtt_simple_MQTTClient__send_str[40] = {
    0x42,0x0c, // prelude
    0x19,0x39,0x3b, // names: _send_str, self, s
    0x80,0x28,0x35, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0x12,0x33, // LOAD_GLOBAL 'struct'
    0x14,0x1b, // LOAD_METHOD 'pack'
    0x10,0x1c, // LOAD_CONST_STRING '!H'
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x36,0x02, // CALL_METHOD 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient__send_str = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_umqtt_simple_MQTTClient__send_str,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 40,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 25,
        .line_info = fun_data_umqtt_simple_MQTTClient__send_str + 5,
        .line_info_top = fun_data_umqtt_simple_MQTTClient__send_str + 8,
        .opcodes = fun_data_umqtt_simple_MQTTClient__send_str + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient__recv_len
static const byte fun_data_umqtt_simple_MQTTClient__recv_len[55] = {
    0x31,0x16, // prelude
    0x1d,0x39, // names: _recv_len, self
    0x80,0x2c,0x22,0x22,0x20,0x2b,0x2a,0x27,0x22, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0xb2, // LOAD_FAST 2
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb3, // LOAD_FAST 3
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xef, // BINARY_OP 24 __and__
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0x42,0x1c, // JUMP -36
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient__recv_len = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_umqtt_simple_MQTTClient__recv_len,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 55,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_umqtt_simple_MQTTClient__recv_len + 4,
        .line_info_top = fun_data_umqtt_simple_MQTTClient__recv_len + 13,
        .opcodes = fun_data_umqtt_simple_MQTTClient__recv_len + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_set_callback
static const byte fun_data_umqtt_simple_MQTTClient_set_callback[13] = {
    0x1a,0x0a, // prelude
    0x1f,0x39,0x3d, // names: set_callback, self, f
    0x80,0x36, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x11, // STORE_ATTR 'cb'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_set_callback = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_umqtt_simple_MQTTClient_set_callback,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_umqtt_simple_MQTTClient_set_callback + 5,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_set_callback + 7,
        .opcodes = fun_data_umqtt_simple_MQTTClient_set_callback + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_set_last_will
static const byte fun_data_umqtt_simple_MQTTClient_set_last_will[59] = {
    0xb9,0x84,0x01,0x1a, // prelude
    0x20,0x39,0x3e,0x3f,0x40,0x41, // names: set_last_will, self, topic, msg, retain, qos
    0x80,0x39,0x32,0x26,0x24,0x24,0x24, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb4, // LOAD_FAST 4
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xda, // BINARY_OP 3 __le__
    0x46,0x04, // JUMP_IF_FALSE_OR_POP 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'lw_topic'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x16, // STORE_ATTR 'lw_msg'
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x17, // STORE_ATTR 'lw_qos'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x18, // STORE_ATTR 'lw_retain'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_set_last_will = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_umqtt_simple_MQTTClient_set_last_will,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 59,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 32,
        .line_info = fun_data_umqtt_simple_MQTTClient_set_last_will + 10,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_set_last_will + 17,
        .opcodes = fun_data_umqtt_simple_MQTTClient_set_last_will + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_connect
static const byte fun_data_umqtt_simple_MQTTClient_connect[450] = {
    0xf2,0x01,0x5a, // prelude
    0x22,0x39,0x42, // names: connect, self, clean_session
    0x80,0x41,0x29,0x31,0x29,0x25,0x45,0x31,0x27,0x47,0x2c,0x26,0x28,0x36,0x2a,0x25,0x2d,0x2c,0x2e,0x25,0x36,0x38,0x4c,0x22,0x22,0x2c,0x24,0x2b,0x44,0x2c,0x49,0x29,0x25,0x29,0x29,0x28,0x29,0x29,0x29,0x31,0x27,0x28, // code info
    0x12,0x23, // LOAD_GLOBAL 'socket'
    0x14,0x23, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'sock'
    0x12,0x23, // LOAD_GLOBAL 'socket'
    0x14,0x24, // LOAD_METHOD 'getaddrinfo'
    0xb0, // LOAD_FAST 0
    0x13,0x0c, // LOAD_ATTR 'server'
    0xb0, // LOAD_FAST 0
    0x13,0x0d, // LOAD_ATTR 'port'
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x22, // LOAD_METHOD 'connect'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0e, // LOAD_ATTR 'ssl'
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x25, // IMPORT_NAME 'ussl'
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x26, // LOAD_METHOD 'wrap_socket'
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x53, // LOAD_NULL
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'ssl_params'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x37,0x82,0x01, // CALL_METHOD_VAR_KW 257
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'sock'
    0x12,0x43, // LOAD_GLOBAL 'bytearray'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0xc4, // STORE_FAST 4
    0x12,0x43, // LOAD_GLOBAL 'bytearray'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc5, // STORE_FAST 5
    0x8a, // LOAD_CONST_SMALL_INT 10
    0x82, // LOAD_CONST_SMALL_INT 2
    0xf2, // BINARY_OP 27 __add__
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'client_id'
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0xc6, // STORE_FAST 6
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf0, // BINARY_OP 25 __lshift__
    0xb5, // LOAD_FAST 5
    0x86, // LOAD_CONST_SMALL_INT 6
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR 'user'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0xb6, // LOAD_FAST 6
    0x82, // LOAD_CONST_SMALL_INT 2
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR 'user'
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0x82, // LOAD_CONST_SMALL_INT 2
    0xf2, // BINARY_OP 27 __add__
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR 'pswd'
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0xe5, // BINARY_OP 14 __iadd__
    0xc6, // STORE_FAST 6
    0xb5, // LOAD_FAST 5
    0x86, // LOAD_CONST_SMALL_INT 6
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x40, // LOAD_CONST_SMALL_INT 192
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x14, // LOAD_ATTR 'keepalive'
    0x44,0x67, // POP_JUMP_IF_FALSE 39
    0xb0, // LOAD_FAST 0
    0x13,0x14, // LOAD_ATTR 'keepalive'
    0x22,0x84,0x80,0x00, // LOAD_CONST_SMALL_INT 65536
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x87, // LOAD_CONST_SMALL_INT 7
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x14, // LOAD_ATTR 'keepalive'
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf1, // BINARY_OP 26 __rshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb5, // LOAD_FAST 5
    0x88, // LOAD_CONST_SMALL_INT 8
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x14, // LOAD_ATTR 'keepalive'
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'lw_topic'
    0x44,0x7a, // POP_JUMP_IF_FALSE 58
    0xb6, // LOAD_FAST 6
    0x82, // LOAD_CONST_SMALL_INT 2
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'lw_topic'
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0x82, // LOAD_CONST_SMALL_INT 2
    0xf2, // BINARY_OP 27 __add__
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'lw_msg'
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0xe5, // BINARY_OP 14 __iadd__
    0xc6, // STORE_FAST 6
    0xb5, // LOAD_FAST 5
    0x86, // LOAD_CONST_SMALL_INT 6
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0x84, // LOAD_CONST_SMALL_INT 4
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR 'lw_qos'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xef, // BINARY_OP 24 __and__
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR 'lw_qos'
    0x82, // LOAD_CONST_SMALL_INT 2
    0xef, // BINARY_OP 24 __and__
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb5, // LOAD_FAST 5
    0x86, // LOAD_CONST_SMALL_INT 6
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x18, // LOAD_ATTR 'lw_retain'
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc7, // STORE_FAST 7
    0x42,0x54, // JUMP 20
    0xb6, // LOAD_FAST 6
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xed, // BINARY_OP 22 __or__
    0xb4, // LOAD_FAST 4
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb6, // LOAD_FAST 6
    0x87, // LOAD_CONST_SMALL_INT 7
    0xe4, // BINARY_OP 13 __irshift__
    0xc6, // STORE_FAST 6
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc7, // STORE_FAST 7
    0xb6, // LOAD_FAST 6
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x25, // POP_JUMP_IF_TRUE -27
    0xb6, // LOAD_FAST 6
    0xb4, // LOAD_FAST 4
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb4, // LOAD_FAST 4
    0xb7, // LOAD_FAST 7
    0x82, // LOAD_CONST_SMALL_INT 2
    0xf2, // BINARY_OP 27 __add__
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'client_id'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'lw_topic'
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'lw_topic'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'lw_msg'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR 'user'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR 'user'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR 'pswd'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x36,0x01, // CALL_METHOD 1
    0xc8, // STORE_FAST 8
    0xb8, // LOAD_FAST 8
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb8, // LOAD_FAST 8
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb8, // LOAD_FAST 8
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x06, // LOAD_GLOBAL 'MQTTException'
    0xb8, // LOAD_FAST 8
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb8, // LOAD_FAST 8
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xef, // BINARY_OP 24 __and__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_connect = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_umqtt_simple_MQTTClient_connect,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 450,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_umqtt_simple_MQTTClient_connect + 6,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_connect + 48,
        .opcodes = fun_data_umqtt_simple_MQTTClient_connect + 48,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_disconnect
static const byte fun_data_umqtt_simple_MQTTClient_disconnect[27] = {
    0x19,0x0a, // prelude
    0x27,0x39, // names: disconnect, self
    0x80,0x71,0x2a, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x28, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_disconnect = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_umqtt_simple_MQTTClient_disconnect,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_umqtt_simple_MQTTClient_disconnect + 4,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_disconnect + 7,
        .opcodes = fun_data_umqtt_simple_MQTTClient_disconnect + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_ping
static const byte fun_data_umqtt_simple_MQTTClient_ping[18] = {
    0x19,0x08, // prelude
    0x29,0x39, // names: ping, self
    0x80,0x75, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_ping = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_umqtt_simple_MQTTClient_ping,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_umqtt_simple_MQTTClient_ping + 4,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_ping + 6,
        .opcodes = fun_data_umqtt_simple_MQTTClient_ping + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_publish
static const byte fun_data_umqtt_simple_MQTTClient_publish[278] = {
    0x81,0x94,0x01,0x4e, // prelude
    0x2a,0x39,0x3e,0x3f,0x40,0x41, // names: publish, self, topic, msg, retain, qos
    0x80,0x78,0x27,0x2c,0x2e,0x25,0x24,0x2c,0x22,0x22,0x2c,0x24,0x2b,0x44,0x2c,0x27,0x25,0x29,0x24,0x2c,0x2a,0x29,0x25,0x20,0x26,0x27,0x29,0x29,0x29,0x2a,0x25,0x26,0x25, // code info
    0x12,0x43, // LOAD_GLOBAL 'bytearray'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x34,0x01, // CALL_FUNCTION 1
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf0, // BINARY_OP 25 __lshift__
    0xb3, // LOAD_FAST 3
    0xed, // BINARY_OP 22 __or__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x82, // LOAD_CONST_SMALL_INT 2
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0xc6, // STORE_FAST 6
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb6, // LOAD_FAST 6
    0x82, // LOAD_CONST_SMALL_INT 2
    0xe5, // BINARY_OP 14 __iadd__
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x22,0x81,0x80,0x80,0x00, // LOAD_CONST_SMALL_INT 2097152
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc7, // STORE_FAST 7
    0x42,0x54, // JUMP 20
    0xb6, // LOAD_FAST 6
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xed, // BINARY_OP 22 __or__
    0xb5, // LOAD_FAST 5
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb6, // LOAD_FAST 6
    0x87, // LOAD_CONST_SMALL_INT 7
    0xe4, // BINARY_OP 13 __irshift__
    0xc6, // STORE_FAST 6
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc7, // STORE_FAST 7
    0xb6, // LOAD_FAST 6
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x25, // POP_JUMP_IF_TRUE -27
    0xb6, // LOAD_FAST 6
    0xb5, // LOAD_FAST 5
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb5, // LOAD_FAST 5
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x63, // POP_JUMP_IF_FALSE 35
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x10, // LOAD_ATTR 'pid'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x10, // STORE_ATTR 'pid'
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'pid'
    0xc8, // STORE_FAST 8
    0x12,0x33, // LOAD_GLOBAL 'struct'
    0x14,0x2b, // LOAD_METHOD 'pack_into'
    0x10,0x1c, // LOAD_CONST_STRING '!H'
    0xb5, // LOAD_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb8, // LOAD_FAST 8
    0x36,0x04, // CALL_METHOD 4
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb5, // LOAD_FAST 5
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x7d, // POP_JUMP_IF_FALSE 61
    0xb0, // LOAD_FAST 0
    0x14,0x2c, // LOAD_METHOD 'wait_msg'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb9, // LOAD_FAST 9
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x6c, // POP_JUMP_IF_FALSE 44
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x01, // CALL_METHOD 1
    0xca, // STORE_FAST 10
    0xba, // LOAD_FAST 10
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xba, // LOAD_FAST 10
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xca, // STORE_FAST 10
    0xb8, // LOAD_FAST 8
    0xba, // LOAD_FAST 10
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x42,0x05, // JUMP -59
    0x42,0x4a, // JUMP 10
    0xb4, // LOAD_FAST 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x42,0x40, // JUMP 0
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_publish = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_umqtt_simple_MQTTClient_publish,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 278,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 17,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_umqtt_simple_MQTTClient_publish + 10,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_publish + 43,
        .opcodes = fun_data_umqtt_simple_MQTTClient_publish + 43,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_subscribe
static const byte fun_data_umqtt_simple_MQTTClient_subscribe[177] = {
    0xeb,0x01,0x28, // prelude
    0x2d,0x39,0x3e,0x41, // names: subscribe, self, topic, qos
    0x80,0x9b,0x2f,0x27,0x29,0x59,0x29,0x27,0x30,0x20,0x26,0x27,0x49,0x35,0x29,0x28, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'cb'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x43, // LOAD_GLOBAL 'bytearray'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x10, // LOAD_ATTR 'pid'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x10, // STORE_ATTR 'pid'
    0x12,0x33, // LOAD_GLOBAL 'struct'
    0x14,0x2b, // LOAD_METHOD 'pack_into'
    0x10,0x2e, // LOAD_CONST_STRING '!BH'
    0xb3, // LOAD_FAST 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0x82, // LOAD_CONST_SMALL_INT 2
    0xf2, // BINARY_OP 27 __add__
    0x12,0x3c, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xf2, // BINARY_OP 27 __add__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'pid'
    0x36,0x05, // CALL_METHOD 5
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD '_send_str'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x14,0x2f, // LOAD_METHOD 'to_bytes'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x30, // LOAD_CONST_STRING 'little'
    0x36,0x02, // CALL_METHOD 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x2c, // LOAD_METHOD 'wait_msg'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x22,0x81,0x10, // LOAD_CONST_SMALL_INT 144
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x71, // POP_JUMP_IF_FALSE 49
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x36,0x01, // CALL_METHOD 1
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb3, // LOAD_FAST 3
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb5, // LOAD_FAST 5
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xb3, // LOAD_FAST 3
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x06, // LOAD_GLOBAL 'MQTTException'
    0xb5, // LOAD_FAST 5
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x42,0x00, // JUMP -64
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_subscribe = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_umqtt_simple_MQTTClient_subscribe,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 177,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_umqtt_simple_MQTTClient_subscribe + 7,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_subscribe + 23,
        .opcodes = fun_data_umqtt_simple_MQTTClient_subscribe + 23,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_wait_msg
static const byte fun_data_umqtt_simple_MQTTClient_wait_msg[252] = {
    0x71,0x44, // prelude
    0x2c,0x39, // names: wait_msg, self
    0x80,0xb2,0x29,0x29,0x25,0x22,0x26,0x26,0x26,0x2b,0x28,0x22,0x24,0x2a,0x22,0x26,0x29,0x2a,0x29,0x26,0x25,0x29,0x2a,0x24,0x29,0x28,0x27,0x27,0x2c,0x2b,0x27,0x25, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x31, // LOAD_METHOD 'setblocking'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0x23,0x08, // LOAD_CONST_OBJ 8
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x44, // LOAD_GLOBAL 'OSError'
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb1, // LOAD_FAST 1
    0x23,0x09, // LOAD_CONST_OBJ 9
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x55, // POP_JUMP_IF_FALSE 21
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x22,0x81,0x70, // LOAD_CONST_SMALL_INT 240
    0xef, // BINARY_OP 24 __and__
    0x22,0x30, // LOAD_CONST_SMALL_INT 48
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x1d, // LOAD_METHOD '_recv_len'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0xc5, // STORE_FAST 5
    0xb2, // LOAD_FAST 2
    0xb4, // LOAD_FAST 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0xf2, // BINARY_OP 27 __add__
    0xe6, // BINARY_OP 15 __isub__
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x86, // LOAD_CONST_SMALL_INT 6
    0xef, // BINARY_OP 24 __and__
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x01, // CALL_METHOD 1
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb6, // LOAD_FAST 6
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xc6, // STORE_FAST 6
    0xb2, // LOAD_FAST 2
    0x82, // LOAD_CONST_SMALL_INT 2
    0xe6, // BINARY_OP 15 __isub__
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1e, // LOAD_METHOD 'read'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0xc7, // STORE_FAST 7
    0xb0, // LOAD_FAST 0
    0x14,0x11, // LOAD_METHOD 'cb'
    0xb5, // LOAD_FAST 5
    0xb7, // LOAD_FAST 7
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x86, // LOAD_CONST_SMALL_INT 6
    0xef, // BINARY_OP 24 __and__
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x5e, // POP_JUMP_IF_FALSE 30
    0x12,0x43, // LOAD_GLOBAL 'bytearray'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x34,0x01, // CALL_FUNCTION 1
    0xc8, // STORE_FAST 8
    0x12,0x33, // LOAD_GLOBAL 'struct'
    0x14,0x2b, // LOAD_METHOD 'pack_into'
    0x10,0x1c, // LOAD_CONST_STRING '!H'
    0xb8, // LOAD_FAST 8
    0x82, // LOAD_CONST_SMALL_INT 2
    0xb6, // LOAD_FAST 6
    0x36,0x04, // CALL_METHOD 4
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x1a, // LOAD_METHOD 'write'
    0xb8, // LOAD_FAST 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x4c, // JUMP 12
    0xb3, // LOAD_FAST 3
    0x86, // LOAD_CONST_SMALL_INT 6
    0xef, // BINARY_OP 24 __and__
    0x84, // LOAD_CONST_SMALL_INT 4
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x42,0x40, // JUMP 0
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_wait_msg = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_umqtt_simple_MQTTClient_wait_msg,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 252,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 44,
        .line_info = fun_data_umqtt_simple_MQTTClient_wait_msg + 4,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_wait_msg + 36,
        .opcodes = fun_data_umqtt_simple_MQTTClient_wait_msg + 36,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of umqtt_simple_MQTTClient
// frozen bytecode for file umqtt/simple.py, scope umqtt_simple_MQTTClient_check_msg
static const byte fun_data_umqtt_simple_MQTTClient_check_msg[22] = {
    0x19,0x0a, // prelude
    0x32,0x39, // names: check_msg, self
    0x80,0xd6,0x29, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'sock'
    0x14,0x31, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x2c, // LOAD_METHOD 'wait_msg'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient_check_msg = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_umqtt_simple_MQTTClient_check_msg,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_umqtt_simple_MQTTClient_check_msg + 4,
        .line_info_top = fun_data_umqtt_simple_MQTTClient_check_msg + 7,
        .opcodes = fun_data_umqtt_simple_MQTTClient_check_msg + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_umqtt_simple_MQTTClient[] = {
    &raw_code_umqtt_simple_MQTTClient___init__,
    &raw_code_umqtt_simple_MQTTClient__send_str,
    &raw_code_umqtt_simple_MQTTClient__recv_len,
    &raw_code_umqtt_simple_MQTTClient_set_callback,
    &raw_code_umqtt_simple_MQTTClient_set_last_will,
    &raw_code_umqtt_simple_MQTTClient_connect,
    &raw_code_umqtt_simple_MQTTClient_disconnect,
    &raw_code_umqtt_simple_MQTTClient_ping,
    &raw_code_umqtt_simple_MQTTClient_publish,
    &raw_code_umqtt_simple_MQTTClient_subscribe,
    &raw_code_umqtt_simple_MQTTClient_wait_msg,
    &raw_code_umqtt_simple_MQTTClient_check_msg,
};

static const mp_raw_code_t raw_code_umqtt_simple_MQTTClient = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_umqtt_simple_MQTTClient,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 113,
    #endif
    .children = (void *)&children_umqtt_simple_MQTTClient,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_umqtt_simple_MQTTClient + 3,
        .line_info_top = fun_data_umqtt_simple_MQTTClient + 27,
        .opcodes = fun_data_umqtt_simple_MQTTClient + 27,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_umqtt_simple__lt_module_gt_[] = {
    &raw_code_umqtt_simple_MQTTException,
    &raw_code_umqtt_simple_MQTTClient,
};

static const mp_raw_code_t raw_code_umqtt_simple__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_umqtt_simple__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 60,
    #endif
    .children = (void *)&children_umqtt_simple__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_umqtt_simple__lt_module_gt_ + 3,
        .line_info_top = fun_data_umqtt_simple__lt_module_gt_ + 10,
        .opcodes = fun_data_umqtt_simple__lt_module_gt_ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_umqtt_simple[69] = {
    MP_QSTR_umqtt_slash_simple_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_usocket,
    MP_QSTR_ustruct,
    MP_QSTR_hexlify,
    MP_QSTR_ubinascii,
    MP_QSTR_MQTTException,
    MP_QSTR_MQTTClient,
    MP_QSTR_1_dot_3_dot_4,
    MP_QSTR___init__,
    MP_QSTR_client_id,
    MP_QSTR_sock,
    MP_QSTR_server,
    MP_QSTR_port,
    MP_QSTR_ssl,
    MP_QSTR_ssl_params,
    MP_QSTR_pid,
    MP_QSTR_cb,
    MP_QSTR_user,
    MP_QSTR_pswd,
    MP_QSTR_keepalive,
    MP_QSTR_lw_topic,
    MP_QSTR_lw_msg,
    MP_QSTR_lw_qos,
    MP_QSTR_lw_retain,
    MP_QSTR__send_str,
    MP_QSTR_write,
    MP_QSTR_pack,
    MP_QSTR__bang_H,
    MP_QSTR__recv_len,
    MP_QSTR_read,
    MP_QSTR_set_callback,
    MP_QSTR_set_last_will,
    MP_QSTR_AssertionError,
    MP_QSTR_connect,
    MP_QSTR_socket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_ussl,
    MP_QSTR_wrap_socket,
    MP_QSTR_disconnect,
    MP_QSTR_close,
    MP_QSTR_ping,
    MP_QSTR_publish,
    MP_QSTR_pack_into,
    MP_QSTR_wait_msg,
    MP_QSTR_subscribe,
    MP_QSTR__bang_BH,
    MP_QSTR_to_bytes,
    MP_QSTR_little,
    MP_QSTR_setblocking,
    MP_QSTR_check_msg,
    MP_QSTR_struct,
    MP_QSTR_Exception,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_password,
    MP_QSTR_s,
    MP_QSTR_len,
    MP_QSTR_f,
    MP_QSTR_topic,
    MP_QSTR_msg,
    MP_QSTR_retain,
    MP_QSTR_qos,
    MP_QSTR_clean_session,
    MP_QSTR_bytearray,
    MP_QSTR_OSError,
};

// constants
static const mp_obj_str_t const_obj_umqtt_simple_0 = {{&mp_type_bytes}, 36565, 6, (const byte*)"\x10\x00\x00\x00\x00\x00"};
static const mp_obj_str_t const_obj_umqtt_simple_1 = {{&mp_type_bytes}, 14619, 9, (const byte*)"\x04\x4d\x51\x54\x54\x04\x02\x00\x00"};
static const mp_obj_str_t const_obj_umqtt_simple_2 = {{&mp_type_bytes}, 24037, 2, (const byte*)"\xe0\x00"};
static const mp_obj_str_t const_obj_umqtt_simple_3 = {{&mp_type_bytes}, 25093, 2, (const byte*)"\xc0\x00"};
static const mp_obj_str_t const_obj_umqtt_simple_4 = {{&mp_type_bytes}, 18805, 4, (const byte*)"\x30\x00\x00\x00"};
static const mp_obj_str_t const_obj_umqtt_simple_5 = {{&mp_type_bytes}, 46503, 1, (const byte*)"\x02"};
static const mp_obj_str_t const_obj_umqtt_simple_6 = {{&mp_type_str}, 9577, 29, (const byte*)"\x53\x75\x62\x73\x63\x72\x69\x62\x65\x20\x63\x61\x6c\x6c\x62\x61\x63\x6b\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x65\x74"};
static const mp_obj_str_t const_obj_umqtt_simple_7 = {{&mp_type_bytes}, 63431, 4, (const byte*)"\x82\x00\x00\x00"};
static const mp_obj_str_t const_obj_umqtt_simple_9 = {{&mp_type_bytes}, 46453, 1, (const byte*)"\xd0"};
static const mp_obj_str_t const_obj_umqtt_simple_10 = {{&mp_type_bytes}, 12359, 4, (const byte*)"\x40\x02\x00\x00"};

// constant table
static const mp_rom_obj_t const_obj_table_data_umqtt_simple[11] = {
    MP_ROM_PTR(&const_obj_umqtt_simple_0),
    MP_ROM_PTR(&const_obj_umqtt_simple_1),
    MP_ROM_PTR(&const_obj_umqtt_simple_2),
    MP_ROM_PTR(&const_obj_umqtt_simple_3),
    MP_ROM_PTR(&const_obj_umqtt_simple_4),
    MP_ROM_PTR(&const_obj_umqtt_simple_5),
    MP_ROM_PTR(&const_obj_umqtt_simple_6),
    MP_ROM_PTR(&const_obj_umqtt_simple_7),
    MP_ROM_PTR(&mp_const_empty_bytes_obj),
    MP_ROM_PTR(&const_obj_umqtt_simple_9),
    MP_ROM_PTR(&const_obj_umqtt_simple_10),
};

static const mp_frozen_module_t frozen_module_umqtt_simple = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_umqtt_simple,
        .obj_table = (mp_obj_t *)&const_obj_table_data_umqtt_simple,
    },
    .rc = &raw_code_umqtt_simple__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module upysh
// - original source file: /home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/frozen_mpy/upysh.mpy
// - frozen file name: upysh.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file upysh.py, scope upysh__lt_module_gt_
static const byte fun_data_upysh__lt_module_gt_[169] = {
    0x10,0x3c, // prelude
    0x01, // names: <module>
    0x26,0x66,0x89,0x18,0x89,0x08,0x89,0x08,0x88,0x09,0x64,0x20,0x84,0x10,0x84,0x0c,0x88,0x0d,0x89,0x0f,0x26,0x26,0x26,0x46,0x26,0x26,0x26,0x46,0x67, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'os'
    0x16,0x03, // STORE_NAME 'os'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'LS'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'LS'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x05, // LOAD_CONST_STRING 'PWD'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME 'PWD'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x06, // LOAD_CONST_STRING 'CLEAR'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x06, // STORE_NAME 'CLEAR'
    0x8a, // LOAD_CONST_SMALL_INT 10
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x0e, // STORE_NAME 'head'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x12, // STORE_NAME 'cat'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x13, // STORE_NAME 'cp'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x1a, // STORE_NAME 'newfile'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x07, // MAKE_FUNCTION_DEFARGS 7
    0x16,0x1d, // STORE_NAME 'rm'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x08, // MAKE_FUNCTION 8
    0x10,0x07, // LOAD_CONST_STRING 'Man'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x07, // STORE_NAME 'Man'
    0x11,0x07, // LOAD_NAME 'Man'
    0x34,0x00, // CALL_FUNCTION 0
    0x16,0x2b, // STORE_NAME 'man'
    0x11,0x05, // LOAD_NAME 'PWD'
    0x34,0x00, // CALL_FUNCTION 0
    0x16,0x2c, // STORE_NAME 'pwd'
    0x11,0x04, // LOAD_NAME 'LS'
    0x34,0x00, // CALL_FUNCTION 0
    0x16,0x2d, // STORE_NAME 'ls'
    0x11,0x06, // LOAD_NAME 'CLEAR'
    0x34,0x00, // CALL_FUNCTION 0
    0x16,0x2e, // STORE_NAME 'clear'
    0x11,0x03, // LOAD_NAME 'os'
    0x13,0x08, // LOAD_ATTR 'chdir'
    0x16,0x2f, // STORE_NAME 'cd'
    0x11,0x03, // LOAD_NAME 'os'
    0x13,0x09, // LOAD_ATTR 'mkdir'
    0x16,0x09, // STORE_NAME 'mkdir'
    0x11,0x03, // LOAD_NAME 'os'
    0x13,0x0a, // LOAD_ATTR 'rename'
    0x16,0x30, // STORE_NAME 'mv'
    0x11,0x03, // LOAD_NAME 'os'
    0x13,0x0b, // LOAD_ATTR 'rmdir'
    0x16,0x0b, // STORE_NAME 'rmdir'
    0x11,0x31, // LOAD_NAME 'print'
    0x11,0x2b, // LOAD_NAME 'man'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x10,0x0c, // LOAD_CONST_STRING '0.6.1'
    0x16,0x32, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_LS
static const byte fun_data_upysh_LS[30] = {
    0x08,0x0a, // prelude
    0x04, // names: LS
    0x68,0x40,0x64,0x20, // code info
    0x11,0x33, // LOAD_NAME '__name__'
    0x16,0x34, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'LS'
    0x16,0x35, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x22, // STORE_NAME '__repr__'
    0x10,0x0d, // LOAD_CONST_STRING '.'
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x23, // STORE_NAME '__call__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upysh_LS
// frozen bytecode for file upysh.py, scope upysh_LS___repr__
static const byte fun_data_upysh_LS___repr__[16] = {
    0x11,0x0a, // prelude
    0x22,0x43, // names: __repr__, self
    0x60,0x60,0x26, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x23, // LOAD_METHOD '__call__'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x10,0x24, // LOAD_CONST_STRING ''
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_LS___repr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_LS___repr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_upysh_LS___repr__ + 4,
        .line_info_top = fun_data_upysh_LS___repr__ + 7,
        .opcodes = fun_data_upysh_LS___repr__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh_LS
// frozen bytecode for file upysh.py, scope upysh_LS___call__
static const byte fun_data_upysh_LS___call__[162] = {
    0xee,0x01,0x24, // prelude
    0x23,0x43,0x3e, // names: __call__, self, path
    0x80,0x0a,0x2c,0x26,0x25,0x2a,0x2d,0x25,0x2a,0x29,0x52,0x2d,0x22,0x28,0x59, // code info
    0x12,0x44, // LOAD_GLOBAL 'list'
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x1e, // LOAD_METHOD 'ilistdir'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x14,0x25, // LOAD_METHOD 'sort'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x18, // FOR_ITER 24
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x80,0x00, // LOAD_CONST_SMALL_INT 16384
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x31, // LOAD_GLOBAL 'print'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x26, // JUMP -26
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x33, // FOR_ITER 51
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x80,0x00, // LOAD_CONST_SMALL_INT 16384
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x12,0x45, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x31, // LOAD_GLOBAL 'print'
    0x10,0x26, // LOAD_CONST_STRING '% 9d %s'
    0xb3, // LOAD_FAST 3
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x4b, // JUMP 11
    0x12,0x31, // LOAD_GLOBAL 'print'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x0b, // JUMP -53
    0x48,0x20, // SETUP_EXCEPT 32
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x27, // LOAD_METHOD 'statvfs'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0x12,0x31, // LOAD_GLOBAL 'print'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x14,0x28, // LOAD_METHOD 'format'
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xf4, // BINARY_OP 29 __mul__
    0x22,0x88,0x00, // LOAD_CONST_SMALL_INT 1024
    0xf6, // BINARY_OP 31 __floordiv__
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x4a,0x04, // POP_EXCEPT_JUMP 4
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_LS___call__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upysh_LS___call__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 162,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 35,
        .line_info = fun_data_upysh_LS___call__ + 6,
        .line_info_top = fun_data_upysh_LS___call__ + 21,
        .opcodes = fun_data_upysh_LS___call__ + 21,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upysh_LS[] = {
    &raw_code_upysh_LS___repr__,
    &raw_code_upysh_LS___call__,
};

static const mp_raw_code_t raw_code_upysh_LS = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upysh_LS,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = (void *)&children_upysh_LS,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_upysh_LS + 3,
        .line_info_top = fun_data_upysh_LS + 7,
        .opcodes = fun_data_upysh_LS + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_PWD
static const byte fun_data_upysh_PWD[24] = {
    0x00,0x08, // prelude
    0x05, // names: PWD
    0x88,0x1d,0x64, // code info
    0x11,0x33, // LOAD_NAME '__name__'
    0x16,0x34, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'PWD'
    0x16,0x35, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x22, // STORE_NAME '__repr__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x23, // STORE_NAME '__call__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upysh_PWD
// frozen bytecode for file upysh.py, scope upysh_PWD___repr__
static const byte fun_data_upysh_PWD___repr__[13] = {
    0x11,0x08, // prelude
    0x22,0x43, // names: __repr__, self
    0x80,0x1e, // code info
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x29, // LOAD_METHOD 'getcwd'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_PWD___repr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_PWD___repr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_upysh_PWD___repr__ + 4,
        .line_info_top = fun_data_upysh_PWD___repr__ + 6,
        .opcodes = fun_data_upysh_PWD___repr__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh_PWD
// frozen bytecode for file upysh.py, scope upysh_PWD___call__
static const byte fun_data_upysh_PWD___call__[12] = {
    0x11,0x08, // prelude
    0x23,0x43, // names: __call__, self
    0x80,0x21, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x22, // LOAD_METHOD '__repr__'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_PWD___call__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_PWD___call__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 35,
        .line_info = fun_data_upysh_PWD___call__ + 4,
        .line_info_top = fun_data_upysh_PWD___call__ + 6,
        .opcodes = fun_data_upysh_PWD___call__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upysh_PWD[] = {
    &raw_code_upysh_PWD___repr__,
    &raw_code_upysh_PWD___call__,
};

static const mp_raw_code_t raw_code_upysh_PWD = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upysh_PWD,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = (void *)&children_upysh_PWD,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_upysh_PWD + 3,
        .line_info_top = fun_data_upysh_PWD + 6,
        .opcodes = fun_data_upysh_PWD + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_CLEAR
static const byte fun_data_upysh_CLEAR[24] = {
    0x00,0x08, // prelude
    0x06, // names: CLEAR
    0x88,0x25,0x64, // code info
    0x11,0x33, // LOAD_NAME '__name__'
    0x16,0x34, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'CLEAR'
    0x16,0x35, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x22, // STORE_NAME '__repr__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x23, // STORE_NAME '__call__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upysh_CLEAR
// frozen bytecode for file upysh.py, scope upysh_CLEAR___repr__
static const byte fun_data_upysh_CLEAR___repr__[9] = {
    0x09,0x08, // prelude
    0x22,0x43, // names: __repr__, self
    0x80,0x26, // code info
    0x10,0x2a, // LOAD_CONST_STRING '\x1b[2J\x1b[H'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_CLEAR___repr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_CLEAR___repr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_upysh_CLEAR___repr__ + 4,
        .line_info_top = fun_data_upysh_CLEAR___repr__ + 6,
        .opcodes = fun_data_upysh_CLEAR___repr__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh_CLEAR
// frozen bytecode for file upysh.py, scope upysh_CLEAR___call__
static const byte fun_data_upysh_CLEAR___call__[12] = {
    0x11,0x08, // prelude
    0x23,0x43, // names: __call__, self
    0x80,0x29, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x22, // LOAD_METHOD '__repr__'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_CLEAR___call__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_CLEAR___call__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 35,
        .line_info = fun_data_upysh_CLEAR___call__ + 4,
        .line_info_top = fun_data_upysh_CLEAR___call__ + 6,
        .opcodes = fun_data_upysh_CLEAR___call__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upysh_CLEAR[] = {
    &raw_code_upysh_CLEAR___repr__,
    &raw_code_upysh_CLEAR___call__,
};

static const mp_raw_code_t raw_code_upysh_CLEAR = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upysh_CLEAR,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = (void *)&children_upysh_CLEAR,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_upysh_CLEAR + 3,
        .line_info_top = fun_data_upysh_CLEAR + 6,
        .opcodes = fun_data_upysh_CLEAR + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_head
static const byte fun_data_upysh_head[62] = {
    0xd6,0x01,0x14, // prelude
    0x0e,0x36,0x37, // names: head, f, n
    0x80,0x2d,0x28,0x26,0x26,0x23,0x22, // code info
    0x12,0x38, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x47,0x26, // SETUP_WITH 38
    0xc0, // STORE_FAST 0
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x59, // JUMP 25
    0x57, // DUP_TOP
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x42,0x51, // JUMP 17
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x10, // LOAD_ATTR 'stdout'
    0x14,0x11, // LOAD_METHOD 'write'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x22, // POP_JUMP_IF_TRUE -30
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_head = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upysh_head,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 62,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_upysh_head + 6,
        .line_info_top = fun_data_upysh_head + 13,
        .opcodes = fun_data_upysh_head + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_cat
static const byte fun_data_upysh_cat[16] = {
    0x19,0x08, // prelude
    0x12,0x36, // names: cat, f
    0x80,0x36, // code info
    0x12,0x0e, // LOAD_GLOBAL 'head'
    0xb0, // LOAD_FAST 0
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_cat = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_cat,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_upysh_cat + 4,
        .line_info_top = fun_data_upysh_cat + 6,
        .opcodes = fun_data_upysh_cat + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_cp
static const byte fun_data_upysh_cp[132] = {
    0xea,0x02,0x20, // prelude
    0x13,0x39,0x3a, // names: cp, s, t
    0x80,0x3a,0x22,0x30,0x56,0x23,0x28,0x26,0x34,0x20,0x27,0x25,0x22, // code info
    0x48,0x1f, // SETUP_EXCEPT 31
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x14, // LOAD_METHOD 'stat'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x80,0x00, // LOAD_CONST_SMALL_INT 16384
    0xef, // BINARY_OP 24 __and__
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0xb1, // LOAD_FAST 1
    0x14,0x15, // LOAD_METHOD 'rstrip'
    0x10,0x16, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x10,0x16, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb0, // LOAD_FAST 0
    0xf2, // BINARY_OP 27 __add__
    0xc1, // STORE_FAST 1
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x12,0x3b, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x3c, // LOAD_GLOBAL 'bytearray'
    0x22,0x84,0x00, // LOAD_CONST_SMALL_INT 512
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0x12,0x3d, // LOAD_GLOBAL 'memoryview'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x12,0x38, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x10,0x17, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x2b, // SETUP_WITH 43
    0xc0, // STORE_FAST 0
    0x12,0x38, // LOAD_GLOBAL 'open'
    0xb1, // LOAD_FAST 1
    0x10,0x18, // LOAD_CONST_STRING 'wb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x1e, // SETUP_WITH 30
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x19, // LOAD_METHOD 'readinto'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xda, // BINARY_OP 3 __le__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x4e, // JUMP 14
    0xb1, // LOAD_FAST 1
    0x14,0x11, // LOAD_METHOD 'write'
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x24, // JUMP -28
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_cp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upysh_cp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 132,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_upysh_cp + 6,
        .line_info_top = fun_data_upysh_cp + 19,
        .opcodes = fun_data_upysh_cp + 19,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_newfile
static const byte fun_data_upysh_newfile[73] = {
    0xd1,0x02,0x16, // prelude
    0x1a,0x3e, // names: newfile, path
    0x80,0x4a,0x27,0x2a,0x20,0x22,0x4e,0x24,0x27, // code info
    0x12,0x31, // LOAD_GLOBAL 'print'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x38, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x10,0x1b, // LOAD_CONST_STRING 'w'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x27, // SETUP_WITH 39
    0xc1, // STORE_FAST 1
    0x48,0x07, // SETUP_EXCEPT 7
    0x12,0x3f, // LOAD_GLOBAL 'input'
    0x34,0x00, // CALL_FUNCTION 0
    0xc2, // STORE_FAST 2
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x57, // DUP_TOP
    0x12,0x40, // LOAD_GLOBAL 'EOFError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x59, // POP_TOP
    0x40,0x53,0x01, // UNWIND_JUMP 19
    0x5d, // END_FINALLY
    0xb1, // LOAD_FAST 1
    0x14,0x11, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x11, // LOAD_METHOD 'write'
    0x10,0x1c, // LOAD_CONST_STRING '\n'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x1b, // JUMP -37
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_newfile = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_newfile,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 73,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_upysh_newfile + 5,
        .line_info_top = fun_data_upysh_newfile + 14,
        .opcodes = fun_data_upysh_newfile + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_rm
static const byte fun_data_upysh_rm[117] = {
    0xe6,0x01,0x18, // prelude
    0x1d,0x41,0x42, // names: rm, d, recursive
    0x80,0x56,0x22,0x33,0x2b,0x30,0x33,0x4a,0x4b, // code info
    0x48,0x55, // SETUP_EXCEPT 85
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x14, // LOAD_METHOD 'stat'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x80,0x00, // LOAD_CONST_SMALL_INT 16384
    0xef, // BINARY_OP 24 __and__
    0x44,0x7b, // POP_JUMP_IF_FALSE 59
    0xb1, // LOAD_FAST 1
    0x44,0x78, // POP_JUMP_IF_FALSE 56
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x1e, // LOAD_METHOD 'ilistdir'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x24, // FOR_ITER 36
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x10,0x0d, // LOAD_CONST_STRING '.'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x59, // POP_JUMP_IF_FALSE 25
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x10,0x1f, // LOAD_CONST_STRING '..'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x51, // POP_JUMP_IF_FALSE 17
    0x12,0x1d, // LOAD_GLOBAL 'rm'
    0x10,0x16, // LOAD_CONST_STRING '/'
    0x14,0x20, // LOAD_METHOD 'join'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x2a,0x02, // BUILD_TUPLE 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x1a, // JUMP -38
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x0b, // LOAD_METHOD 'rmdir'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x48, // JUMP 8
    0x12,0x03, // LOAD_GLOBAL 'os'
    0x14,0x21, // LOAD_METHOD 'remove'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x0d, // POP_EXCEPT_JUMP 13
    0x59, // POP_TOP
    0x12,0x31, // LOAD_GLOBAL 'print'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xb0, // LOAD_FAST 0
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_rm = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upysh_rm,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 117,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_upysh_rm + 6,
        .line_info_top = fun_data_upysh_rm + 15,
        .opcodes = fun_data_upysh_rm + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upysh__lt_module_gt_
// frozen bytecode for file upysh.py, scope upysh_Man
static const byte fun_data_upysh_Man[19] = {
    0x00,0x06, // prelude
    0x07, // names: Man
    0x88,0x63, // code info
    0x11,0x33, // LOAD_NAME '__name__'
    0x16,0x34, // STORE_NAME '__module__'
    0x10,0x07, // LOAD_CONST_STRING 'Man'
    0x16,0x35, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x22, // STORE_NAME '__repr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upysh_Man
// frozen bytecode for file upysh.py, scope upysh_Man___repr__
static const byte fun_data_upysh_Man___repr__[9] = {
    0x09,0x08, // prelude
    0x22,0x43, // names: __repr__, self
    0x80,0x64, // code info
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upysh_Man___repr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upysh_Man___repr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_upysh_Man___repr__ + 4,
        .line_info_top = fun_data_upysh_Man___repr__ + 6,
        .opcodes = fun_data_upysh_Man___repr__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upysh_Man[] = {
    &raw_code_upysh_Man___repr__,
};

static const mp_raw_code_t raw_code_upysh_Man = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upysh_Man,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = (void *)&children_upysh_Man,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_upysh_Man + 3,
        .line_info_top = fun_data_upysh_Man + 5,
        .opcodes = fun_data_upysh_Man + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upysh__lt_module_gt_[] = {
    &raw_code_upysh_LS,
    &raw_code_upysh_PWD,
    &raw_code_upysh_CLEAR,
    &raw_code_upysh_head,
    &raw_code_upysh_cat,
    &raw_code_upysh_cp,
    &raw_code_upysh_newfile,
    &raw_code_upysh_rm,
    &raw_code_upysh_Man,
};

static const mp_raw_code_t raw_code_upysh__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upysh__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 169,
    #endif
    .children = (void *)&children_upysh__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 9,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_upysh__lt_module_gt_ + 3,
        .line_info_top = fun_data_upysh__lt_module_gt_ + 32,
        .opcodes = fun_data_upysh__lt_module_gt_ + 32,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_upysh[70] = {
    MP_QSTR_upysh_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_os,
    MP_QSTR_LS,
    MP_QSTR_PWD,
    MP_QSTR_CLEAR,
    MP_QSTR_Man,
    MP_QSTR_chdir,
    MP_QSTR_mkdir,
    MP_QSTR_rename,
    MP_QSTR_rmdir,
    MP_QSTR_0_dot_6_dot_1,
    MP_QSTR__dot_,
    MP_QSTR_head,
    MP_QSTR_readline,
    MP_QSTR_stdout,
    MP_QSTR_write,
    MP_QSTR_cat,
    MP_QSTR_cp,
    MP_QSTR_stat,
    MP_QSTR_rstrip,
    MP_QSTR__slash_,
    MP_QSTR_rb,
    MP_QSTR_wb,
    MP_QSTR_readinto,
    MP_QSTR_newfile,
    MP_QSTR_w,
    MP_QSTR__0x0a_,
    MP_QSTR_rm,
    MP_QSTR_ilistdir,
    MP_QSTR__dot__dot_,
    MP_QSTR_join,
    MP_QSTR_remove,
    MP_QSTR___repr__,
    MP_QSTR___call__,
    MP_QSTR_,
    MP_QSTR_sort,
    MP_QSTR__percent__space_9d_space__percent_s,
    MP_QSTR_statvfs,
    MP_QSTR_format,
    MP_QSTR_getcwd,
    MP_QSTR__0x1b__bracket_open_2J_0x1b__bracket_open_H,
    MP_QSTR_man,
    MP_QSTR_pwd,
    MP_QSTR_ls,
    MP_QSTR_clear,
    MP_QSTR_cd,
    MP_QSTR_mv,
    MP_QSTR_print,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_f,
    MP_QSTR_n,
    MP_QSTR_open,
    MP_QSTR_s,
    MP_QSTR_t,
    MP_QSTR_OSError,
    MP_QSTR_bytearray,
    MP_QSTR_memoryview,
    MP_QSTR_path,
    MP_QSTR_input,
    MP_QSTR_EOFError,
    MP_QSTR_d,
    MP_QSTR_recursive,
    MP_QSTR_self,
    MP_QSTR_list,
    MP_QSTR_len,
};

// constants
static const mp_obj_int_t const_obj_upysh_0 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0x0,0x4000}}};
static const mp_obj_str_t const_obj_upysh_1 = {{&mp_type_str}, 25826, 58, (const byte*)"\x54\x79\x70\x65\x20\x66\x69\x6c\x65\x20\x63\x6f\x6e\x74\x65\x6e\x74\x73\x20\x6c\x69\x6e\x65\x20\x62\x79\x20\x6c\x69\x6e\x65\x2c\x20\x66\x69\x6e\x69\x73\x68\x20\x77\x69\x74\x68\x20\x45\x4f\x46\x20\x28\x43\x74\x72\x6c\x2b\x44\x29\x2e"};
static const mp_obj_str_t const_obj_upysh_6 = {{&mp_type_str}, 30724, 256, (const byte*)"\x0a\x75\x70\x79\x73\x68\x20\x69\x73\x20\x69\x6e\x74\x65\x6e\x64\x65\x64\x20\x74\x6f\x20\x62\x65\x20\x69\x6d\x70\x6f\x72\x74\x65\x64\x20\x75\x73\x69\x6e\x67\x3a\x0a\x66\x72\x6f\x6d\x20\x75\x70\x79\x73\x68\x20\x69\x6d\x70\x6f\x72\x74\x20\x2a\x0a\x0a\x54\x6f\x20\x73\x65\x65\x20\x74\x68\x69\x73\x20\x68\x65\x6c\x70\x20\x74\x65\x78\x74\x20\x61\x67\x61\x69\x6e\x2c\x20\x74\x79\x70\x65\x20\x22\x6d\x61\x6e\x22\x2e\x0a\x0a\x75\x70\x79\x73\x68\x20\x63\x6f\x6d\x6d\x61\x6e\x64\x73\x3a\x0a\x63\x6c\x65\x61\x72\x2c\x20\x6c\x73\x2c\x20\x6c\x73\x28\x2e\x2e\x2e\x29\x2c\x20\x68\x65\x61\x64\x28\x2e\x2e\x2e\x29\x2c\x20\x63\x61\x74\x28\x2e\x2e\x2e\x29\x2c\x20\x6e\x65\x77\x66\x69\x6c\x65\x28\x2e\x2e\x2e\x29\x0a\x63\x70\x28\x27\x73\x72\x63\x27\x2c\x20\x27\x64\x65\x73\x74\x27\x29\x2c\x20\x6d\x76\x28\x27\x6f\x6c\x64\x27\x2c\x20\x27\x6e\x65\x77\x27\x29\x2c\x20\x72\x6d\x28\x2e\x2e\x2e\x29\x0a\x70\x77\x64\x2c\x20\x63\x64\x28\x2e\x2e\x2e\x29\x2c\x20\x6d\x6b\x64\x69\x72\x28\x2e\x2e\x2e\x29\x2c\x20\x72\x6d\x64\x69\x72\x28\x2e\x2e\x2e\x29\x0a"};

// constant table
static const mp_rom_obj_t const_obj_table_data_upysh[7] = {
    MP_ROM_PTR(&const_obj_upysh_0),
    MP_ROM_PTR(&const_obj_upysh_1),
    MP_ROM_QSTR(MP_QSTR_rm_space_of_space__squot__percent_s_squot__space_failed),
    MP_ROM_QSTR(MP_QSTR__space__space__space__space__lt_dir_gt__space__percent_s),
    MP_ROM_QSTR(MP_QSTR__space__space__space__space__space__space__space__space__space__space__percent_s),
    MP_ROM_QSTR(MP_QSTR__0x0a__brace_open__colon__comma_d_brace_close_k_space_free),
    MP_ROM_PTR(&const_obj_upysh_6),
};

static const mp_frozen_module_t frozen_module_upysh = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_upysh,
        .obj_table = (mp_obj_t *)&const_obj_table_data_upysh,
    },
    .rc = &raw_code_upysh__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// collection of all frozen modules

const char mp_frozen_names[] = {
    #ifdef MP_FROZEN_STR_NAMES
    MP_FROZEN_STR_NAMES
    #endif
    "_boot.py\0"
    "inisetup.py\0"
    "espnow.py\0"
    "flashbdev.py\0"
    "apa106.py\0"
    "asyncio/__init__.py\0"
    "asyncio/core.py\0"
    "asyncio/event.py\0"
    "asyncio/funcs.py\0"
    "asyncio/lock.py\0"
    "asyncio/stream.py\0"
    "uasyncio.py\0"
    "requests/__init__.py\0"
    "mip/__init__.py\0"
    "ntptime.py\0"
    "webrepl.py\0"
    "webrepl_setup.py\0"
    "urequests.py\0"
    "aioespnow.py\0"
    "dht.py\0"
    "onewire.py\0"
    "ds18x20.py\0"
    "neopixel.py\0"
    "umqtt/robust.py\0"
    "umqtt/simple.py\0"
    "upysh.py\0"
    "\0"
};

const mp_frozen_module_t *const mp_frozen_mpy_content[] = {
    &frozen_module__boot,
    &frozen_module_inisetup,
    &frozen_module_espnow,
    &frozen_module_flashbdev,
    &frozen_module_apa106,
    &frozen_module_asyncio___init__,
    &frozen_module_asyncio_core,
    &frozen_module_asyncio_event,
    &frozen_module_asyncio_funcs,
    &frozen_module_asyncio_lock,
    &frozen_module_asyncio_stream,
    &frozen_module_uasyncio,
    &frozen_module_requests___init__,
    &frozen_module_mip___init__,
    &frozen_module_ntptime,
    &frozen_module_webrepl,
    &frozen_module_webrepl_setup,
    &frozen_module_urequests,
    &frozen_module_aioespnow,
    &frozen_module_dht,
    &frozen_module_onewire,
    &frozen_module_ds18x20,
    &frozen_module_neopixel,
    &frozen_module_umqtt_robust,
    &frozen_module_umqtt_simple,
    &frozen_module_upysh,
};

#ifdef MICROPY_FROZEN_LIST_ITEM
MICROPY_FROZEN_LIST_ITEM("_boot", "_boot.py")
MICROPY_FROZEN_LIST_ITEM("inisetup", "inisetup.py")
MICROPY_FROZEN_LIST_ITEM("espnow", "espnow.py")
MICROPY_FROZEN_LIST_ITEM("flashbdev", "flashbdev.py")
MICROPY_FROZEN_LIST_ITEM("apa106", "apa106.py")
MICROPY_FROZEN_LIST_ITEM("asyncio", "asyncio/__init__.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/core", "asyncio/core.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/event", "asyncio/event.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/funcs", "asyncio/funcs.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/lock", "asyncio/lock.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/stream", "asyncio/stream.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio", "uasyncio.py")
MICROPY_FROZEN_LIST_ITEM("requests", "requests/__init__.py")
MICROPY_FROZEN_LIST_ITEM("mip", "mip/__init__.py")
MICROPY_FROZEN_LIST_ITEM("ntptime", "ntptime.py")
MICROPY_FROZEN_LIST_ITEM("webrepl", "webrepl.py")
MICROPY_FROZEN_LIST_ITEM("webrepl_setup", "webrepl_setup.py")
MICROPY_FROZEN_LIST_ITEM("urequests", "urequests.py")
MICROPY_FROZEN_LIST_ITEM("aioespnow", "aioespnow.py")
MICROPY_FROZEN_LIST_ITEM("dht", "dht.py")
MICROPY_FROZEN_LIST_ITEM("onewire", "onewire.py")
MICROPY_FROZEN_LIST_ITEM("ds18x20", "ds18x20.py")
MICROPY_FROZEN_LIST_ITEM("neopixel", "neopixel.py")
MICROPY_FROZEN_LIST_ITEM("umqtt/robust", "umqtt/robust.py")
MICROPY_FROZEN_LIST_ITEM("umqtt/simple", "umqtt/simple.py")
MICROPY_FROZEN_LIST_ITEM("upysh", "upysh.py")
#endif

/*
byte sizes:
qstr content: 380 unique, 4657 bytes
bc content: 13892
const str content: 2099
const int content: 12
const obj content: 1064
const table qstr content: 0 entries, 0 bytes
const table ptr content: 116 entries, 464 bytes
raw code content: 242 * 4 = 3872
mp_frozen_mpy_names_content: 355
mp_frozen_mpy_content_size: 104
total: 26519
*/
