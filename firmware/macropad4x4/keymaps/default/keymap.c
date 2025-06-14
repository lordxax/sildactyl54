/*
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base
    * ┌──────┬─────┬──────┬───────┐
    * │NUMLK │     │      │QK_BOOT│
    * ├──────┼─────├──────┼───────┤
    * │NUMPAD│MINI │  FN  │       │
    * ├──────┼─────┼──────┼───────┤
    * │   1  │  2  │  3   │   4   │
    * ├──────┼─────┼──────┼───────┤
    * │      │     │RSHIFT│ RCTRL │
    * └──────┴─────┴──────┴───────┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_1, KC_2,  KC_3,      KC_4,
        KC_5,  KC_6,  KC_7,      KC_8,
        KC_A,   KC_B,   KC_C,       KC_D,
        KC_E,  KC_F,  KC_G,    KC_H
    ),

    /* Numpad
    * ┌─────┬─────┬─────┬─────┐
    * │  7  │  8  │  9  │  *  │
    * ├─────┼─────├─────┼─────┤
    * │  4  │  5  │  6  │  -  │
    * ├─────┼─────┼─────┼─────┤
    * │  1  │  2  │  3  │  +  │
    * ├─────┼─────┼─────┼─────┤
    * │  0  │  .  │  /  │  =  │
    * └─────┴─────┴─────┴─────┘
     */
    [1] = LAYOUT_ortho_4x4(
        KC_P7, KC_P8,   KC_P9,   KC_PAST,
        KC_P4, KC_P5,   KC_P6,   KC_PMNS,
        KC_P1, KC_P2,   KC_P3,   KC_PPLS,
        KC_P0, KC_PDOT, KC_PSLS, LT(3, KC_PENT)
    ),

    /* Mini KeyBoard
    * ┌─────┬─────┬─────┬─────┐
    * │ ESC │  1  │  2  │  3  │
    * ├─────┼─────┼─────┼─────┤
    * │ TAB │  Q  │  W  │  E  │
    * ├─────┼─────┼─────┼─────┤
    * │SHIFT│  A  │  S  │  D  │
    * ├─────┼─────┼─────┼─────┤
    * │CTRL │  C  │  R  │SPACE│
    * └─────┴─────┴─────┴─────┘
     */
    [2] = LAYOUT_ortho_4x4(
        LT(3, KC_ESC), KC_1, KC_2, KC_3,
        KC_TAB,        KC_Q, KC_W, KC_E,
        KC_LSFT,       KC_A, KC_S, KC_D,
        KC_LCTL,       KC_C, KC_R, KC_SPC
    ),

    /* FN Keyboard
    * ┌─────┬─────┬─────┬─────┐
    * │ F1  │ F2  │ F3  │ F4  │
    * ├─────┼─────┼─────┼─────┤
    * │ F5  │ F6  │ F7  │ F8  │
    * ├─────┼─────┼─────┼─────┤
    * │ F9  │ F10 │ F11 │ F12 │
    * ├─────┼─────┼─────┼─────┤
    * │BASE │     │     │     │
    * └─────┴─────┴─────┴─────┘
     */
    [3] = LAYOUT_ortho_4x4(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,
        KC_F5,  KC_F6,  KC_F7,  KC_F8,
        KC_F9,  KC_F10, KC_F11, KC_F12,
        TO(0),  KC_NO,  KC_NO, KC_NO
    ),
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
