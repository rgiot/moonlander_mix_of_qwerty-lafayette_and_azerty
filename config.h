/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR


#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000
#define RGB_MATRIX_STARTUP_SPD 60

#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_ALPHA


#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC


#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 350