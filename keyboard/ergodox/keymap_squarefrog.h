static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * This is my current layout which serves dual purpose. The default layer is a standard QWERTY
     * layout with easy access to brackets, when coding for Objective-C. There is also a layout
     * that is geared more towards gaming so most of the more important keys reside on the left
     * hand. Additionally, there is a helper layout which provides Vim-like access to arrow keys.
     *
     * Layer 0: The basic keyboard
     * Layer 1: Arrow keys, function keys, helper functions for Xcode, Photoshop etc
     * Layer 2: Gaming specific layout
     *
     * Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  |  ~   |           |  -   |   6  |   7  |   8  |   9  |   0  |   +    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   E  |   R  |   Y  |  [   |           |  ]   |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------| +L1  |           |      |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LAlt | LGui | Vol- | Vol+ |                                       |   "  |   :  | RGui | RAlt | RCtrl |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |CpsLck| Del  |       | PgUp | PgDn |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BkSp | ~L1  |------|       |------| Enter| Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap 1: Helper functions
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | CapsLk |      |      |      |      |      |------|           |------| Left | Down |  Up  | Right|      |        |
     * |--------+------+------+------+------+------|      |           | -L1  |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      | Mute | Vol- | Vol+ |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap 2: Gaming Layer (Windows)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | FN5  |           |  -   |   6  |   7  |   8  |   9  |   0  |   +    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   E  |   R  |   T  | FN6  |           |  ]   |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|      |           | FN1  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl|      |   Y  | Vol- | Vol+ |                                       |      |      | RAlt | RGui | RCtrl |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |CpsLck| Del  |       | PgUp | PgDn |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | Space| Enter|------|       |------| Enter| Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

    KEYMAP(  // layout: layer 0: default
        // left hand
        ESC,   1,   2,   3,    4,   5,   GRV,
        TAB,   Q,   W,   E,    R,   T,   LBRC,
        LCTL,  A,   S,   D,    F,   G,
        LSFT,  Z,   X,   C,    V,   B,   FN1,
        LCTL, LALT,LGUI, VOLD, VOLU,
                                      CAPS, DEL,
                                            LALT,
                                 BSPC, FN3, LGUI,
        // right hand
           MINS,  6,   7,    8,   9,   0,   EQL,
           RBRC,  Y,   U,    I,   O,   P,   BSLS,
                  H,   J,    K,   L,  SCLN, QUOT,
           NO,    N,   M,  COMM, DOT, SLSH, RSFT,
                       FN7, FN8, RGUI,RALT, RCTL,
        PGUP,PGDN,
        RALT,
        RGUI, ENT, SPC
    ),

    KEYMAP(  // layout: layer 1: helper functions
        // left hand
        FN4, F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  LEFT,DOWN,UP,  RGHT,TRNS,TRNS,
             FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 2: gaming in windows
        // left hand
        ESC,   1,   2,   3,   4,   5,   FN5,
        TAB,   Q,   W,   E,   R,   T,   FN6,
        LCTL,  A,   S,   D,   F,   G,
        LSFT,  Z,   X,   C,   V,   B,   NO,
        LCTL, NO,   Y, VOLD, VOLU,
                                      CAPS, DEL,
                                            LALT,
                                  SPC, ENT, LGUI,
        // right hand
           MINS,  6,   7,    8,   9,   0,   EQL,
           RBRC,  Y,   U,    I,   O,   P,   BSLS,
                  H,   J,    K,   L,  SCLN, QUOT,
           FN1,   N,   M,  COMM, DOT, SLSH, RSFT,
                       NO,   NO, RALT,RGUI, RCTL,
        PGUP,PGDN,
        RALT,
        RGUI, ENT, SPC
    ),

    /*
    KEYMAP(  // layout: layer X: Template
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
    */
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition - 32 Fn can be defined at most
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),                     // FN0 - switch to Layer 0
    ACTION_DEFAULT_LAYER_SET(1),                     // FN1 - switch to Layer 1
    ACTION_DEFAULT_LAYER_SET(2),                     // FN2 - switch to Layer 2
    ACTION_LAYER_MOMENTARY(1),                       // FN3 - push Layer 1
    ACTION_FUNCTION(TEENSY_KEY),                     // FN4 - Teensy key
    ACTION_MODS_KEY(MOD_LALT, KC_F11),               // FN5 - Take in game screenshot ????
    ACTION_MODS_KEY(MOD_LALT, KC_F12),               // FN6 - Save shadow play ????
    ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),              // FN7 - "
    ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),              // FN8 - :
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}
