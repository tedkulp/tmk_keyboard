static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * This is my current layout which serves dual purpose. The default layer is a standard QWERTY
     * layout with easy access to brackets, when coding for Objective-C. There is also a layout
     * that is geared more towards gaming so most of the more important keys reside on the left
     * hand. Additionally, there is a helper layout which provides Vim-like access to arrow keys.
     *
     * Layer 0: The basic keyboard, geared towards an OS X compliant layout.
     * Layer 1: Arrow keys, function keys, helper functions for Xcode, Photoshop etc.
     * Layer 2: Gaming specific layout, for use in Windows.
     *
     * Keymap 0: Default Qwerty Layer
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
     */

    KEYMAP(
        // left hand
        ESC,   1,   2,   3,    4,   5,   GRV,
        TAB,   Q,   W,   E,    R,   T,   LBRC,
        LCTL,  A,   S,   D,    F,   G,
        LSFT,  Z,   X,   C,    V,   B,   FN1,
        LCTL, LALT,LGUI, VOLD, VOLU,
                                      CAPS, DEL,
                                            LALT,
                                 BSPC,FN11, LGUI,
        // right hand
           MINS,  6,   7,    8,   9,   0,   EQL,
           RBRC,  Y,   U,    I,   O,   P,   BSLS,
                  H,   J,    K,   L,  SCLN, QUOT,
           NO,    N,   M,   COMM, DOT, SLSH, RSFT,
                       FN22,FN23, RGUI,RALT, RCTL,
        PGUP,PGDN,
        RALT,
        RGUI, ENT, SPC
    ),

    /*
     * Layer 1: Helper functions
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | CapsLk |      |      |      |      |      |------|           |------| Left | Down |  Up  | Right|      |        |
     * |--------+------+------+------+------+------| +L2  |           | -L1  |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      | Mute | Play |  RW  |  FF  |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

    KEYMAP(
        // left hand
        FN31, F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, FN2,
        TRNS,MUTE,MPLY,MRWD,MFFD,
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

    /*
     * Keymap 2: Gaming Layer (Windows)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | FN20 |           |  -   |   6  |   7  |   8  |   9  |   0  |   +    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   E  |   R  |   T  | FN21 |           |  ]   |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|      |           | -L2  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| Play | Next | Vol- | Vol+ |                                       |      |      | RAlt | RGui | RCtrl |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  gg  |   Y  |       | PgUp | PgDn |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | Space| Enter|------|       |------| Enter| Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

    KEYMAP(
        // left hand
        ESC,   1,   2,   3,   4,   5,  FN20,
        TAB,   Q,   W,   E,   R,   T,  FN21,
        LCTL,  A,   S,   D,   F,   G,
        LSFT,  Z,   X,   C,   V,   B,   NO,
        LCTL,MPLY,MNXT, VOLD, VOLU,
                                       FN24, Y,
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
     * Layer X: Template
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */
    /*
    KEYMAP(
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

enum macro_id {
    GOOD_GAME,
};

/*
 * Fn action definition - 32 Fn can be defined at most
 */
static const uint16_t PROGMEM fn_actions[] = {
    // Layer shifting
    [0] = ACTION_LAYER_SET(0, ON_PRESS),           // Switch to Layer 0
    [1] = ACTION_LAYER_SET(1, ON_PRESS),           // Switch to Layer 1
    [2] = ACTION_LAYER_SET(2, ON_PRESS),           // Switch to Layer 2
//  [3] = ACTION_LAYER_SET(3, ON_PRESS),           // Switch to Layer 3

    // Layer toggling
    [11] = ACTION_LAYER_MOMENTARY(1),              // Push Layer 1

    // Short modifier shortcuts
    [20] = ACTION_MODS_KEY(MOD_LALT, KC_F11),      // Take in game screenshot ????
    [21] = ACTION_MODS_KEY(MOD_LALT, KC_F12),      // Save shadow play ????
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),     // Shift+' - "
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),     // Shift+; - :
    [24] = ACTION_MACRO(GOOD_GAME),                // Macro: say `gg`

    // Teensy
    [31] = ACTION_FUNCTION(TEENSY_KEY),            // Teensy key
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case GOOD_GAME:
            return (record->event.pressed ?
                    MACRO( I(30), T(Y), T(G), T(G), T(ENT), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}

/*
 * User defined action function
 */
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
