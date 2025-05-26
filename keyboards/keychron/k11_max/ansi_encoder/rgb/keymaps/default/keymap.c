/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

#include "keymap.h" // All custom keycodes and aliases can be found in keymap.h
#include "g/keymap_combo.h" // To use dict to maintain combos

// enum layers{
// 	MAC_BASE,
// 	WIN_BASE,
// 	MAC_FN1,
// 	WIN_FN1,
// 	FN2,
// };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,	   KC_2,	 KC_3,	  KC_4,    KC_5,	KC_6,	  KC_7,    KC_8,	KC_9,	 KC_0,	   KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,	   KC_W,	 KC_E,	  KC_R,    KC_T,	KC_Y,	  KC_U,    KC_I,	KC_O,	 KC_P,	   KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,	   KC_S,	 KC_D,	  KC_F,    KC_G,              KC_H,    KC_J,	KC_K,	 KC_L,	   KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,	 KC_X,	  KC_C,    KC_V,	KC_B,	  KC_B,    KC_N,	KC_M,	 KC_COMM,  KC_DOT,	 KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPTN, KC_LCMMD,          KC_SPC,           MO(MAC_FN1), MO(FN2),       KC_SPC,            KC_RCMMD,           KC_LEFT, KC_DOWN, KC_RGHT),

    // [WIN_BASE] = LAYOUT_69_ansi(
    //     KC_ESC,  KC_1,	   KC_2,	 KC_3,	  KC_4,    KC_5,	KC_6,	  KC_7,    KC_8,	KC_9,	 KC_0,	   KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
    //     KC_TAB,  KC_Q,	   KC_W,	 KC_E,	  KC_R,    KC_T,	KC_Y,	  KC_U,    KC_I,	KC_O,	 KC_P,	   KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
    //     KC_CAPS, KC_A,	   KC_S,	 KC_D,	  KC_F,    KC_G,              KC_H,    KC_J,	KC_K,	 KC_L,	   KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
    //     KC_LSFT,           KC_Z,	 KC_X,	  KC_C,    KC_V,	KC_B,	  KC_B,    KC_N,	KC_M,	 KC_COMM,  KC_DOT,	 KC_SLSH,  KC_RSFT, KC_UP,
    //     KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(WIN_FN1), MO(FN2),       KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_69_ansi(
        KC_HOME,  KC_1,	   KC_2,	 KC_3,	  KC_4,       KC_5,	KC_6,  KC_7,     KC_8,	KC_9,	 KC_0,	   KC_MINS,  KC_EQL,   KC_END,          KC_MUTE,
        KC_GRV ,  KC_Q,	   KC_W,	 KC_F,	  KC_P,       KC_B,	       KC_J,	 KC_L,  KC_U,	 KC_Y,	 KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_PGUP,
        KC_TAB ,  LHR_LGUI_A,	   LHR_LALT_R,	 LHR_LSFT_S,	  LHR_LCTL_T,       KC_G,        KC_M,     RHR_RCTL_N,	RHR_RSFT_E,	 RHR_LALT_I,	   RHR_RGUI_O,  KC_MINS,  XXXXXXX,           KC_PGDN,
        LSFT_ESC, KC_Z,	   KC_X,	 KC_C,    KC_D,	      KC_VL,	       KC_VR,     KC_K,	KC_H,	 KC_COMM,  KC_DOT,	 KC_SLSH,  KC_QUOT, KC_UP,
        KC_LCTL,  KC_LWIN, LTH_MAIN_NEAR,           LTH_MAIN_HOME,     LTH_MAIN_FAR,    RTH_MAIN_FAR, RTH_MAIN_HOME,            RTH_MAIN_NEAR,            KC_LEFT, KC_DOWN, KC_RGHT),

    [_NAV] = LAYOUT_69_ansi(
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        KC_NOTEPAD, KC_HOME,  KC_PGDN,  KC_PGUP, KC_ENDX,   _______, _______,  _______, _______, _______, _______,  _______,	 _______,  _______,          _______,
        _______, KC_LEFT,  KC_DOWN,  KC_UPXX, KC_RGHT, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           C_LEFT, S_LEFT, S_RGHT, C_RGHT, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    [MAC_FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_BRID,  KC_BRIU, KC_MCTRL, KC_LNPAD,RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RGB_TOG,
        _______, BT_HST1,  BT_HST2,  BT_HST3, P2P4G,   _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          KC_INS,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,           _______, _______, _______, _______,  _______,  _______,  _______,          KC_END,
        _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, KC_PGUP,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, KC_PGDN, _______),

    // [WIN_FN1] = LAYOUT_69_ansi(
    //     KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FILE, RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RGB_TOG,
    //     _______, BT_HST1,  BT_HST2,  BT_HST3, P2P4G,   _______, _______,  _______, _______, _______, _______,  _______,	 _______,  _______,          KC_INS,
    //     RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,           _______, _______, _______, _______,  _______,  _______,  _______,          KC_END,
    //     _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, KC_PGUP,
    //     _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, KC_PGDN, _______),

    [WIN_FN1] = LAYOUT_69_ansi(
        _______, KC_BRID,  KC_BRIU,  KC_TASK, KC_FILE, RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RGB_TOG,
        _______, BT_HST1,  BT_HST2,  BT_HST3, P2P4G,   _______, _______,  _______, _______, _______, _______,  _______,	 _______,  _______,          KC_INS,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,           _______, _______, _______, _______,  _______,  _______,  _______,          KC_END,
        _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, KC_PGUP,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, KC_PGDN, _______),


    [FN2] = LAYOUT_69_ansi(
        KC_TILD, KC_F1,    KC_F2,	 KC_F3,   KC_F4,   KC_F5,	KC_F6,	  KC_F7,   KC_F8,	KC_F9,	 KC_F10,   KC_F11,	 KC_F12,   _______,          _______,
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, BAT_LVL,  BAT_LVL, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______)
};

#if defined(ENCODER_MAP_ENABLE)
	const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
		[MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
		[WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
		[MAC_FN1]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
		[WIN_FN1]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
		[FN2]	   = {ENCODER_CCW_CW(_______, _______)},
	};
#endif // ENCODER_MAP_ENABLE

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }

    switch (keycode) {

        case KC_NOTEPAD:
        if (record->event.pressed) {
            register_code(KC_LGUI);
            // tap_code(KC_R);
            SEND_STRING(SS_TAP(X_R) SS_DELAY(25));
            unregister_code(KC_LGUI);
            SEND_STRING("notepad" SS_DELAY(25) SS_TAP(X_ENT));
            // tap_code(KC_ENT);
        } else {
            // when keycode is released
        }
        return false;
        break;

    }

    return true;
}

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                      uint16_t other_keycode, keyrecord_t* other_record) {
    // Exceptionally consider the following chords as holds.
    // true: consider the tap-hold key held
    // false: consider it tapped.

    switch (tap_hold_keycode) {
        case LHR_LGUI_A:
            if (other_keycode == KC_D ||
                other_keycode == KC_TAB ||
                other_keycode == KC_V ||
                other_keycode == KC_ENT) {
                return true;
            }
            break;

        case LHR_LALT_R:
            if (other_keycode == KC_TAB ||
            other_keycode == LTH_MAIN_HOME) {
                return true;
            }
            break;

        case LHR_LSFT_S:
            if ((get_mods() & MOD_BIT(KC_LGUI)) || (get_mods() & MOD_BIT(KC_LALT)) || (get_mods() & MOD_BIT(KC_LCTL))) {
                return true;
            } else if (other_keycode == KC_TAB) {
                return true;
            } else { // To disable shift behaviour if shift is singly pressed
                return false;
            }
            break;

        case LHR_LCTL_T:
            if (other_keycode == KC_W ||
                other_keycode == KC_F ||
                other_keycode == LHR_LGUI_A ||
                other_keycode == LHR_LALT_R ||
                other_keycode == LHR_LSFT_S ||
                other_keycode == KC_Z ||
                other_keycode == KC_X ||
                other_keycode == KC_B ||
                other_keycode == KC_G ||
                other_keycode == LTH_MAIN_NEAR ||
                other_keycode == KC_V ||
                other_keycode == LTH_MAIN_HOME ||
                other_keycode == KC_ENT) {
                return true;
            }
            break;

        case RHR_RCTL_N:
            if (other_keycode == KC_H) { // exceptional handling for this as i seem to be pressing ctrl h by accident, not sure why return opposite hand isnt triggering
                return false;
            }
            break;

        case RHR_RSFT_E:
            if ((get_mods() & MOD_BIT(KC_RGUI)) || (get_mods() & MOD_BIT(KC_RALT)) || (get_mods() & MOD_BIT(KC_RCTL))) {
                return true;
            } else if (other_keycode == KC_TAB) {
                return true;
            } else {
                return false; // To disable shift behaviour if shift is singly pressed
            }
            break;

        case LTH_MAIN_HOME:
        case RTH_MAIN_HOME:
            return true;

        break;
    }
    // Otherwise defer to the opposite hands rule.
    return get_chordal_hold_default(tap_hold_record, other_record);
}

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
LAYOUT_69_ansi(
    'L',  'L',	   'L',	 'L',	  'L',       'L',	'L',  'R',     'R',	'R',	 'R',	   'R',  'R',   'R',          'R',
    'L' ,  'L',	   'L',	 'L',	  'L',       'L',	       'R',	 'R',  'R',	 'R',	 'R',  'R',  'R',  'R',          'R',
    'L' ,  'L',	   'L',	 'L',	  'L',       'L',        'R',     'R',	'R',	 'R',	   'R',  'R',  'R',           'R',
    'L', 'L',	   'L',	 'L',    'L',	      'L',	       'R',     'R',	'R',	 'R',  'R',	 'R',  'R', 'R',
    'L',  'L', 'L',           'L',     'L',    'R', 'R',            'R',            'R', 'R', 'R');
