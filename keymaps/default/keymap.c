#include QMK_KEYBOARD_H

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                 KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,
    //  |----------|----------|----------|----------|----------|-----------|---------|----------|----------|----------|
        KC_A,      KC_S,      KC_D,      KC_F,      KC_G,                 KC_H,      KC_J,      KC_K,      KC_L,      KC_BSPC,
    //  |----------|----------|----------|----------|----------|-----------|---------|----------|----------|----------|
        KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                 KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_ENT,
                        //    |----------|----------|----------|----------|----------|----------|
      OSM(MOD_LGUI),OSL(2),OSM(MOD_LSFT),          KC_SPACE,   OSL(1),     OSM(MOD_RCTL)
    ),
    [1] = LAYOUT(
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_1,      KC_2,      KC_3,      KC_4,      KC_5,                 KC_6,      KC_7,      KC_8,      KC_9,      KC_0,
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_TAB,     KC_AUDIO_VOL_UP,     KC_AUDIO_VOL_DOWN,    QK_REP,    KC_AUDIO_MUTE,                KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  KC_DEL,
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_ESC,     KC_NO,     KC_NO,     KC_NO,    KC_NO,                KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,    OSM(MOD_RALT),
                        //    |----------|----------|----------|----------|----------|----------|
                              KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [2] = LAYOUT(
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,               KC_CIRC,  KC_AMPR,   KC_ASTR,   KC_GRV,    KC_TILD,
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_DQUO,   KC_LBRC,   KC_LCBR,   KC_LPRN,   KC_LT,                KC_PSLS,   KC_PMNS,   KC_EQL,   KC_COLN,   KC_SCLN,
    //  |----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
        KC_QUOT,   KC_RBRC,   KC_RCBR,   KC_RPRN,   KC_GT,                KC_BSLS,   KC_UNDS,   KC_PLUS,   KC_PIPE,   KC_QUES,
                        //    |----------|----------|----------|----------|----------|----------|
                              KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};
