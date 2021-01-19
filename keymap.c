#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  FR_LSPO,
  FR_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       FR_1,           FR_2,           FR_3,           FR_4,           FR_5,           TG(5),                                          KC_EQUAL,       FR_6,           FR_7,           FR_8,           FR_9,           FR_0,           FR_MINS,        
    KC_TAB,         FR_A,           FR_Z,           KC_E,           KC_R,           KC_T,           FR_CCIRC,                                       FR_UMLT,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           FR_BSLS,        
    TG(1),          FR_Q,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LSHIFT,                                                                      KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           FR_M,           FR_APOS,        
    LM(1,KC_NO),    FR_W,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           OSL(2),         FR_COMM,        FR_DOT,         FR_SLSH,        LM(1,KC_NO),    
    KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LEFT,        KC_RIGHT,       LALT_T(KC_APPLICATION),                                                                                                LCTL_T(KC_ESCAPE),KC_UP,          KC_DOWN,        FR_LCBR,        FR_RCBR,        KC_RCTRL,       
    KC_SPACE,       KC_BSPACE,      KC_DELETE,                      TT(4),          KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    FR_TILD,        FR_EXLM,        FR_AT,          FR_HASH,        FR_DLR,         FR_PERC,        KC_TRANSPARENT,                                 FR_PLUS,        FR_CIRC,        FR_AMP,         FR_ASTR,        FR_LPRN,        FR_RPRN,        FR_UNDS,        
    LSFT(KC_TAB),   LSFT(FR_A),     LSFT(FR_Z),     LSFT(KC_E),     LSFT(KC_R),     LSFT(KC_T),     RALT(FR_W),                                     RALT(KC_X),     LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_I),     LSFT(KC_O),     LSFT(KC_P),     FR_PIPE,        
    KC_TRANSPARENT, LSFT(FR_Q),     LSFT(KC_S),     LSFT(KC_D),     LSFT(KC_F),     LSFT(KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LSFT(KC_H),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_L),     LSFT(FR_M),     FR_DQUO,        
    KC_TRANSPARENT, LSFT(KC_W),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),                                     LSFT(KC_N),     OSL(3),         FR_SCLN,        FR_COLN,        FR_QUES,        KC_TRANSPARENT, 
    LSFT(KC_LCTRL), LSFT(KC_LGUI),  LSFT(KC_LALT),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_PND,         FR_EURO,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_OVRR,        FR_UNDS,        
    KC_TRANSPARENT, FR_AGRV,        FR_EACU,        FR_EGRV,        KC_TRANSPARENT, KC_TRANSPARENT, FR_LBRC,                                        FR_RBRC,        KC_TRANSPARENT, FR_UGRV,        KC_TRANSPARENT, RALT(KC_O),     FR_SECT,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(FR_A),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_C),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       FR_MU,          KC_TRANSPARENT, 
    KC_TRANSPARENT, FR_LESS,        FR_GRTR,        FR_CCED,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_PGUP,        KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(FR_EACU),  ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UC(0x00C6),      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_PGUP,        KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, FR_EXLM,        FR_LPRN,        FR_RPRN,        FR_APOS,        FR_DQUO,        KC_TRANSPARENT,                                 KC_HOME,        KC_PGUP,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, FR_EQL,         FR_LESS,        FR_GRTR,        FR_MINS,        FR_PLUS,        KC_TRANSPARENT,                                 KC_END,         KC_PGDOWN,      KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, FR_LCBR,        FR_LBRC,        FR_RBRC,        FR_RCBR,        FR_SLSH,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    KC_KP_ENTER,    
    KC_TRANSPARENT, FR_TILD,        FR_GRV,         FR_PIPE,        FR_UNDS,        FR_BSLS,                                        KC_TRANSPARENT, KC_KP_0,        FR_COMM,        FR_DOT,         KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_SLEEP,                                                                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,RGB_MOD,                                                                                                        RGB_TOG,        KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [6] = LAYOUT_moonlander(
    AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,          
    MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_MOD,         KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
  set_unicode_input_mode(UC_LNX);
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {0,0,255}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {0,183,238}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210}, {42,238,210} },

    [2] = { {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {0,0,255}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245}, {16,245,245} },

    [3] = { {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {0,0,255}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204}, {98,190,204} },

    [4] = { {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {0,0,255}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {31,255,255}, {217,248,245}, {217,248,245}, {217,248,245}, {31,255,255}, {31,255,255}, {31,255,255}, {217,248,245}, {31,255,255}, {31,255,255}, {31,255,255}, {217,248,245}, {217,248,245}, {31,255,255}, {31,255,255}, {31,255,255}, {217,248,245}, {217,248,245}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {217,248,245}, {0,205,155}, {0,205,155}, {217,248,245}, {217,248,245}, {0,205,155}, {0,205,155}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245}, {217,248,245} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
 
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_6) ));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2) ));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_4) SS_DELAY(100) SS_TAP(X_KP_6));

    }
    break;
    case FR_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, FR_LPRN);
      return false;
    case FR_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, FR_RPRN);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
  }
  return true;
}
