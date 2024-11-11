#include QMK_KEYBOARD_H

enum my_keycodes { LC = 102, LS, LM, LT, LD, LR, LK, LJ, LN, LB, LG, LH, LP, RK, RGG, RG, RSS, RH, RN, RO, RT, RR, RM, RC, RS, RD, RP, RB, RJ, NO, NA, NU, NE, NAA, NI, NL };
static uint16_t last_keycode[2] = {KC_NO, KC_NO};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,      LC,      LT,      LK,      LB,      LP, KC_LCTL,    KC_RCTL,     RGG,      RH,      RT,      RC,      RP, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,      LS,      LD,      LJ,      LG,      RK, KC_LNG1,    KC_RALT,      RG,      RN,      RR,      RS,      RB, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      QK_BOOT,      LM,      LR,      LN,      LH,      NL,                          RSS,      RO,      RM,      RD,      RJ, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                               NO,      NA,      NU,         NE,     NAA,      NI
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_LCTL,    KC_RCTL,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'

  )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(XXXXXXX, XXXXXXX), ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(XXXXXXX, XXXXXXX), },
  [1] = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(XXXXXXX, XXXXXXX), ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(XXXXXXX, XXXXXXX), },
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        last_keycode[0] = last_keycode[1];
        last_keycode[1] = keycode;
    }


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        last_keycode[0] = last_keycode[1];
        last_keycode[1] = keycode;
    }

    switch (keycode) {
        case NO: if (record->event.pressed) { SEND_STRING("dh"); } return false;
        case NA: if (record->event.pressed) { SEND_STRING("dk"); } return false;
        case NU: if (record->event.pressed) { SEND_STRING("dn"); } return false;
        case NE: if (record->event.pressed) { SEND_STRING("dm"); } return false;
        case NAA: if (record->event.pressed) { SEND_STRING("dj"); } return false;
        case NI: if (record->event.pressed) { SEND_STRING("dl"); } return false;
        case NL: if (record->event.pressed) { SEND_STRING("dml"); } return false;
        case LD: if (record->event.pressed) { SEND_STRING("ehl"); } return false;
 case RG: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\brh "); } else { SEND_STRING("rh "); } } return false;
 case RN: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\bsms "); } else { SEND_STRING("sms "); } } return false;
 case RB: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\bek. "); } else { SEND_STRING("ek. "); } } return false;
 case RD: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\eh "); } else { SEND_STRING("eh "); } } return false;
 case LR: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\bfh "); } else { SEND_STRING("fh "); } } return false;
 case LM: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\baks "); } else { SEND_STRING("aks "); } } return false;
 case RM: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\bau "); } else { SEND_STRING("au "); } } return false;
 case RS: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\btj "); } else { SEND_STRING("tj "); } } return false;
 case RJ: if (record->event.pressed) {
        if (last_keycode[1] == RG) { SEND_STRING("\bwl "); } else { SEND_STRING("wl "); } } return false;
