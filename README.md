# Winry 25TC (Winry 25-Key RGB Backlight Hot Swap Mechanical Keyboard)

*Multiple layers with per key colors*

**Tools used:**
- QMK MSYS
- QMK Toolbox
- VIA

**Example Make with QMK MSYS:**
```
qmk compile -kb winry/winry25tc -km viaPerKey
```

**keymap.c**
```
        KC_BSPC, KC_PSLS, KC_PAST, KC_PMNS, KC_DEL,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS, RGB_TOG,
        KC_P4,   KC_P5,   KC_P6,   KC_PENT, KC_RCTL,
        KC_P1,   KC_P2,   KC_P3,   KC_UP,   TG(1),
        KC_P0,   KC_PDOT, KC_LEFT, KC_DOWN, KC_RGHT

        KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,   _______,
        KC_INS,  KC_HOME, KC_PGUP, KC_NO,   _______,
        KC_DEL,  KC_END,  KC_PGDN, _______, _______,
        KC_F12,  KC_F2,   KC_F3,   _______, _______,
        KC_F4,   KC_F5,   _______, _______, _______
```

**winry25tc.h**
```
    K00, K01, K02, K03, K04,   \
    K10, K11, K12, K13, K14,   \
    K20, K21, K22, K23, K24,   \
    K30, K31, K32, K33, K34,   \
    K40, K41, K42, K43, K44    \

    { K00,   K01,   K02,   K03,   K04   }, \
    { K10,   K11,   K12,   K13,   K14   }, \
    { K20,   K21,   K22,   K23,   K24   }, \
    { K30,   K31,   K32,   K33,   K34   }, \
    { K40,   K41,   K42,   K43,   K44   }, \
```

**LED Map:**

![image](https://user-images.githubusercontent.com/78761379/200986962-b5673965-1834-4bab-a3a2-43af94b449e0.png)
 
 **Layer 0:**
 
![IMG20221111160245](https://user-images.githubusercontent.com/78761379/201430664-39b9d7b3-0d74-47f4-aaef-9c34105327d6.jpg)

**Layer 1:**

![IMG20221111160256](https://user-images.githubusercontent.com/78761379/201430712-acfef1a8-987f-445a-bf20-088273fd380e.jpg)
