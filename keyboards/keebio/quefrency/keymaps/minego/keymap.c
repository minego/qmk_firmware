#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layers {
    BASE,
    FN_1,
    MOUSE
};
#define MS MOUSE

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

/*
    The bottom right corner of this 60% board behaves like arrow keys when
    tapped and like modifiers when held.
*/
#define CTRLESC LCTL_T(KC_ESC)
#define TP_LEFT RGUI_T(KC_LEFT)
#define TP_UP   RSFT_T(KC_UP)
#define TP_RGHT RCTL_T(KC_RGHT)
#define TP_DOWN LT(FN_1, KC_DOWN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    CTRLESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TP_UP,   TP_UP, \
    KC_LCTL, KC_LGUI, KC_LALT, MO(MS),  KC_SPC,           KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, TP_LEFT, TP_DOWN, TP_RGHT
  ),

  [FN_1] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC, \
    RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, TG(FN_1), \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______, \
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [MOUSE] = LAYOUT(
    KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC, \
    RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, KC_WH_U, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, KC_WH_D, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_U, _______, \
    KC_TILD, _______, _______, _______, KC_BTN1,          _______, KC_BTN2, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
  )

};

