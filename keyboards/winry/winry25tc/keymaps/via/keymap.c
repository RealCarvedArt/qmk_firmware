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
        KC_PSCR,   KC_SCRL,   KC_PAUS,   KC_NO,   KC_DEL,
        KC_INS,   KC_HOME,   KC_PGUP,   KC_NO,   RGB_TOG,
        KC_DEL,   KC_END,   KC_PGDN,   KC_PENT,   KC_RCTL,
        KC_NO,   KC_NO,   KC_NO,   KC_UP,   TG(0),
        KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 0:
        rgblight_setrgb(10, 123, 40);
        break;
    case 1:
        rgblight_setrgb(128, 0, 128);
        break;
    default:
        rgblight_setrgb(10, 123, 40);
        break;
    }
    return state;
}
