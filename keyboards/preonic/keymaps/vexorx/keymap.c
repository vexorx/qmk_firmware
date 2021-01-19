#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_1x2uC( \
		KC_GRV,         KC_1,    KC_2,    KC_3,    KC_4,        KC_5, KC_6,    KC_7,         KC_8,    KC_9,    KC_0,         KC_MINS,
		KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,        KC_T, KC_Y,    KC_U,         KC_I,    KC_O,    KC_P,         KC_DEL, 
		LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,        KC_G, KC_H,    KC_J,         KC_K,    KC_L,    KC_SCLN,      KC_QUOT, 
		KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,        KC_B, KC_N,    KC_M,      KC_COMM,  KC_DOT, LCAG_T(KC_SLSH), KC_SFTENT, 
		MO(3),       KC_LCTL, KC_LGUI, KC_LALT, LT(1,KC_BSPC),    KC_SPC,   LT(2,KC_ENT), KC_LEFT,  KC_DOWN,   KC_UP,        KC_RGHT
	),

	[1] = LAYOUT_preonic_1x2uC(
        KC_PSCR, KC_F1,   KC_F2,   KC_F3,   KC_F4,        KC_F5,    KC_F6,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS, 
        KC_TRNS, KC_NO,   KC_UP,   KC_NO,   KC_NO,   LCTL(KC_T),    KC_INS,  KC_P7,   KC_P8,   KC_P9,   KC_EQL,  KC_TRNS, 
        KC_ESC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   LCTL(KC_PGUP), KC_HOME,  KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO, 
        KC_TRNS, KC_NO,  KC_CUT,  KC_COPY, KC_PSTE, LCTL(KC_PGDN), KC_END,   KC_P1,   KC_P2,   KC_P3,   KC_ENT,  KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,    TO(0),           KC_TRNS,       KC_P0,    KC_P0,   KC_PDOT, KC_PCMM, KC_CALC),

	[2] = LAYOUT_preonic_1x2uC(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS, 
        KC_TRNS, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_NO,   KC_UNDS, KC_PIPE, KC_LBRC, KC_RBRC, KC_TRNS, 
        KC_TRNS, KC_NO,   KC_NO,   KC_HASH, KC_PLUS, KC_NO,   KC_NO,   KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_NO, 
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_GRV,  KC_LPRN, KC_RPRN, KC_DQUO, KC_LT,   KC_GT,   KC_BSLS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_DEL,      KC_BTN1,      KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END),

	[3] = LAYOUT_preonic_1x2uC(
        RESET, DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, 
        KC_TRNS, KC_BTN2, KC_MS_U, KC_BTN1, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_INS, 
        KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_SLCK, 
        KC_CAPS, RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, 
        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, TG(1), KC_NO, KC_MPLY, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT)
};
