// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤M1 ├───┐   ┌───┤M2 ├───┘
      *                   └───┤   │   │Ent├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                  KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_LCTL,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                  KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                                  KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ESC,
                                                        KC_LGUI,    MO(1),      KC_SPC,        KC_ENT,     MO(2),      KC_RALT
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│XXX│XXX│XXX│XXX│XXX│       │Lef│Dwn│Up │Rig│XXX│XXX│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│XXX│XXX│XXX│XXX│XXX│       │XXX│XXX│XXX│XXX│XXX│XXX│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤___├───┐   ┌───┤M3 ├───┘
      *                   └───┤   │   │Ent├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        KC_TAB,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                  KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_LCTL,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,    XXXXXXX,
        KC_LSFT,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        KC_LGUI,    _______,    KC_SPC,        KC_ENT,     MO(3),      KC_RALT
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ ! │ @ │ # │ $ │ % │       │ ^ │ & │ * │ ( │ ) │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│XXX│XXX│XXX│XXX│XXX│       │ - │ = │ [ │ ] │ \ │ ` │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│XXX│XXX│XXX│XXX│XXX│       │ _ │ + │ { │ } │ | │ ~ │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤M3 ├───┐   ┌───┤___├───┘
      *                   └───┤   │   │Ent├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_TAB,     KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,                               KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_BSPC,
        KC_LCTL,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_GRV,
        KC_LSFT,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    KC_PIPE,    KC_TILD,
                                                        KC_LGUI,    MO(3),      KC_SPC,        KC_ENT,     _______,    KC_RALT
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │QKB│XXX│XXX│XXX│XXX│XXX│       │XXX│XXX│XXX│XXX│XXX│XXX│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │RTG│RHI│RSI│RVI│XXX│XXX│       │XXX│XXX│XXX│XXX│XXX│XXX│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │RMD│RHD│RSD│RVD│XXX│XXX│       │XXX│XXX│XXX│XXX│XXX│XXX│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤___├───┐   ┌───┤___├───┘
      *                   └───┤   │   │Ent├───┘
      *                       └───┘   └───┘
      */
    [3] = LAYOUT_split_3x6_3(
        QK_BOOT,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        RGB_TOG,    RGB_HUI,    RGB_SAI,    RGB_VAI,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        RGB_MOD,    RGB_HUD,    RGB_SAD,    RGB_VAD,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        KC_LGUI,    _______,    KC_SPC,        KC_ENT,     _______,    KC_RALT
    )
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
            break;
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}
#endif
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
