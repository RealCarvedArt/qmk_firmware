#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_BSPC, KC_PSLS, KC_PAST, KC_PMNS, KC_DEL,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS, RGB_TOG,
        KC_P4,   KC_P5,   KC_P6,   KC_PENT, KC_RCTL,
        KC_P1,   KC_P2,   KC_P3,   KC_UP,   TG(1),
        KC_P0,   KC_PDOT, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,   _______,
        KC_INS,  KC_HOME, KC_PGUP, KC_NO,   _______,
        KC_DEL,  KC_END,  KC_PGDN, _______, _______,
        KC_NO,   KC_NO,   KC_NO,   _______, _______,
        KC_NO,   KC_NO,   _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
};

#ifdef RGBLIGHT_ENABLE
    void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
    rgblight_sethsv_noeeprom(HSV_PURPLE);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 0:
        //rgblight_setrgb(10, 123, 40); // Set all keys to one color
        rgblight_sethsv_noeeprom(HSV_PURPLE); // Set underglow color

        rgblight_setrgb_at(10, 123, 40, 20); // Set K00 key color
        rgblight_setrgb_at(10, 123, 40, 21); // Set K01 key color
        rgblight_setrgb_at(10, 123, 40, 22); // Set K02 key color
        rgblight_setrgb_at(10, 123, 40, 23); // Set K03 key color
        rgblight_setrgb_at(10, 123, 40, 24); // Set K04 key color

        rgblight_setrgb_at(10, 123, 40, 19); // Set K10 key color
        rgblight_setrgb_at(10, 123, 40, 6); // Set K11 key color
        rgblight_setrgb_at(10, 123, 40, 7); // Set K12 key color
        rgblight_setrgb_at(10, 123, 40, 8); // Set K13 key color
        rgblight_setrgb_at(10, 123, 40, 9); // Set K14 key color

        rgblight_setrgb_at(10, 123, 40, 18); // Set K20 key color
        rgblight_setrgb_at(10, 123, 40, 5); // Set K21 key color
        rgblight_setrgb_at(10, 123, 40, 0); // Set K22 key color
        rgblight_setrgb_at(10, 123, 40, 1); // Set K23 key color
        rgblight_setrgb_at(10, 123, 40, 10); // Set K24 key color

        rgblight_setrgb_at(10, 123, 40, 17); // Set K30 key color
        rgblight_setrgb_at(10, 123, 40, 4); // Set K31 key color
        rgblight_setrgb_at(10, 123, 40, 3); // Set K32 key color
        rgblight_setrgb_at(255, 165, 0, 2); // Set K33 key color
        rgblight_setrgb_at(10, 123, 40, 11); // Set K34 key color

        rgblight_setrgb_at(10, 123, 40, 16); // Set K40 key color
        rgblight_setrgb_at(10, 123, 40, 15); // Set K41 key color
        rgblight_setrgb_at(255, 165, 0, 14); // Set K42 key color
        rgblight_setrgb_at(255, 165, 0, 13); // Set K43 key color
        rgblight_setrgb_at(255, 165, 0, 12); // Set K44 key color
        break;
    case 1:
        //rgblight_setrgb(128, 0, 128); // Set all keys to one color
        rgblight_sethsv_noeeprom(HSV_PURPLE); // Set underglow color

        rgblight_setrgb_at(128, 0, 128, 20); // Set K00 key color
        rgblight_setrgb_at(128, 0, 128, 21); // Set K01 key color
        rgblight_setrgb_at(128, 0, 128, 22); // Set K02 key color
        rgblight_setrgb_at(10, 123, 40, 23); // Set K03 key color
        rgblight_setrgb_at(128, 0, 128, 24); // Set K04 key color

        rgblight_setrgb_at(128, 0, 128, 19); // Set K10 key color
        rgblight_setrgb_at(128, 0, 128, 6); // Set K11 key color
        rgblight_setrgb_at(128, 0, 128, 7); // Set K12 key color
        rgblight_setrgb_at(10, 123, 40, 8); // Set K13 key color
        rgblight_setrgb_at(128, 0, 128, 9); // Set K14 key color

        rgblight_setrgb_at(128, 0, 128, 18); // Set K20 key color
        rgblight_setrgb_at(128, 0, 128, 5); // Set K21 key color
        rgblight_setrgb_at(128, 0, 128, 0); // Set K22 key color
        rgblight_setrgb_at(128, 0, 128, 1); // Set K23 key color
        rgblight_setrgb_at(128, 0, 128, 10); // Set K24 key color

        rgblight_setrgb_at(10, 123, 40, 17); // Set K30 key color
        rgblight_setrgb_at(10, 123, 40, 4); // Set K31 key color
        rgblight_setrgb_at(10, 123, 40, 3); // Set K32 key color
        rgblight_setrgb_at(255, 165, 0, 2); // Set K33 key color
        rgblight_setrgb_at(128, 0, 128, 11); // Set K34 key color

        rgblight_setrgb_at(10, 123, 40, 16); // Set K40 key color
        rgblight_setrgb_at(10, 123, 40, 15); // Set K41 key color
        rgblight_setrgb_at(255, 165, 0, 14); // Set K42 key color
        rgblight_setrgb_at(255, 165, 0, 13); // Set K43 key color
        rgblight_setrgb_at(255, 165, 0, 12); // Set K44 key color
        break;
    default:
        rgblight_setrgb(10, 123, 40);
        break;
    }
    return state;
}
