#include QMK_KEYBOARD_H

#define UC_UML X(UMLAUT)
#define UC_ACUT X(ACUTE)
#define UC_CFLX X(CIRCUMFLEX)
#define UC_UMLA XP(SMALL_A_UMLAUT, CAPT_A_UMLAUT)
#define UC_UMLO XP(SMALL_O_UMLAUT, CAPT_O_UMLAUT)
#define UC_UMLU XP(SMALL_U_UMLAUT, CAPT_U_UMLAUT)
#define UC_ACTA XP(SMALL_A_ACUTE, CAPT_A_ACUTE)
#define UC_ACTE XP(SMALL_E_ACUTE, CAPT_E_ACUTE)
#define UC_ACTI XP(SMALL_I_ACUTE, CAPT_I_ACUTE)
#define UC_ACTO XP(SMALL_O_ACUTE, CAPT_O_ACUTE)
#define UC_ACTU XP(SMALL_U_ACUTE, CAPT_U_ACUTE)
#define UC_TLDN XP(SMALL_N_TILDE, CAPT_N_TILDE)

enum unicode_names {
  UMLAUT,
  ACUTE,
  CIRCUMFLEX,
  SMALL_A_ACUTE,
  CAPT_A_ACUTE,
  SMALL_E_ACUTE,
  CAPT_E_ACUTE,
  SMALL_I_ACUTE,
  CAPT_I_ACUTE,
  SMALL_O_ACUTE,
  CAPT_O_ACUTE,
  SMALL_U_ACUTE,
  CAPT_U_ACUTE,
  SMALL_N_TILDE,
  CAPT_N_TILDE,
  SMALL_A_UMLAUT,
  CAPT_A_UMLAUT,
  SMALL_O_UMLAUT,
  CAPT_O_UMLAUT,
  SMALL_U_UMLAUT,
  CAPT_U_UMLAUT
};

const uint32_t PROGMEM unicode_map[] = {
  [UMLAUT] = 0x308,
  [ACUTE] = 0x301,
  [CIRCUMFLEX] = 0x302,
  [SMALL_A_ACUTE] = 0x00E1,
  [CAPT_A_ACUTE] = 0x00C1,
  [SMALL_E_ACUTE] =  0x00E9,
  [CAPT_E_ACUTE] = 0x00C9,
  [SMALL_I_ACUTE] = 0x00ED,
  [CAPT_I_ACUTE] = 0x00CD,
  [SMALL_O_ACUTE] = 0x00F3,
  [CAPT_O_ACUTE] = 0x00D3,
  [SMALL_U_ACUTE] = 0x00FA,
  [CAPT_U_ACUTE] = 0x00DA,
  [SMALL_N_TILDE] = 0x00F1,
  [CAPT_N_TILDE] = 0x00D1,
  [SMALL_A_UMLAUT] = 0x00E4,
  [CAPT_A_UMLAUT] = 0x00C4,
  [SMALL_O_UMLAUT] = 0x00F6,
  [CAPT_O_UMLAUT] = 0x00D6,
  [SMALL_U_UMLAUT] = 0x00FC,
  [CAPT_U_UMLAUT] = 0x00DC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_ansi(
        KC_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1),          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
        KC_LCTL,        KC_LALT, KC_LGUI,                            KC_SPC,                             MO(2),   MO(3),   KC_RALT, KC_RCTL
    ),
    [1] = LAYOUT_60_ansi(
        KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, KC_PGUP, KC_UP,   KC_PGDN, RGB_TOG, KC_BRIU, _______, KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, KC_HOME, KC_END,  _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_BRID, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_GRV,           _______,
        _______,          KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, NK_TOGG, _______, _______, _______, _______,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______
    ),
    [2] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, UC_CFLX, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, UC_UMLU, _______, UC_UMLO, _______, _______, _______, RESET,
        _______, UC_UMLA, _______, _______, _______, _______, _______, _______, _______, _______, UC_UML,  UC_ACUT,          _______,
        _______,          UC_M_MA, UC_M_LN, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______
    ),
    [3] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, UC_CFLX, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, UC_ACTE, _______, _______, _______, UC_ACTU, UC_ACTI, UC_ACTO, _______, _______, _______, RESET,
        _______, UC_ACTA, _______, _______, _______, _______, _______, _______, _______, _______, UC_UML,  UC_ACUT,          _______,
        _______,          UC_M_MA, UC_M_LN, _______, _______, _______, UC_TLDN, _______, _______, _______, _______,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______
    )
};
