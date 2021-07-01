/* Copyright 2020 Dennis Nguyen <u/nguyedt>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |                  |              | Knob : Vol Up/Dn  |
        |  Toggle Layer 1  |   Browser Search    |    Press: Mute    |
        |  Browser Back    |   Browser Refresh   |   Browser Forward |
     */
    [0] = LAYOUT(
        MO(1), KC_WSCH, KC_MUTE,
        KC_WBAK , KC_WREF  , KC_WFWD
    ),
    /*
        |               |                        | Knob : Page Up/Dn |
        |               |   Increase Brightness  |     Toggle RGB    |
        |    RGB Cycle  |   Increase Brightness  |  Hue Cycle        |
     */
    [1] = LAYOUT(
        _______  , KC_RSFT, RESET,
        RGB_MOD, RGB_VAI, RGB_HUI
    ),

};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (layer_state_is(0)) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (layer_state_is(1)) {
        if (clockwise) {
            tap_code(KC_UP);
        } else {
            tap_code(KC_DOWN);
        }
    }
}
