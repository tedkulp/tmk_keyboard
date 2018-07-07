#include <util/delay.h>
#include "bootloader.h"
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * This is my current layout which serves dual purpose. The default layer is a standard QWERTY
     * layout with easy access to brackets, when coding for Objective-C. There is also a layout
     * that is geared more towards gaming so most of the  more important keys reside on the left
     * hand. Additionally, there is a helper layout which provides Vim-like access to arrow keys.
     *
     * Layer 0: The basic keyboard, geared towards an OS X compliant layout.
     * Layer 1: Arrow keys, function keys, helper functions for Xcode, Photoshop etc.
     * Layer 2: Gaming specific layout, for use in Windows.
     *
     * Keymap 0: Default Colemak Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  |  ~   |           |  -   |   6  |   7  |   8  |   9  |   0  |   +=   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   F  |   P  |   G  |  [   |           |  ]   |   J  |   L  |   U  |   Y  |   ;  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
     * |--------+------+------+------+------+------|  (   |           |  )   |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LAlt |  L1  |      | ~L2  |                                       | ~L2  |      |      | RAlt | RCtrl |
     *   `----------------------------------'                                       `-----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |LShift| LCtl |       | PgUp | PgDn |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BkSp | Esc  |------|       |------| Enter| Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

    KEYMAP(
        // left hand
        ESC,    1,   2,   3,   4,   5, GRV,
        TAB,    Q,   W,   F,   P,   G, LBRC,
        LCTL,   A,   R,   S,   T,   D,
        LSFT,   Z,   X,   C,   V,   B, FN20,
        LCTL,LALT, FN1,  NO,FN12,
                                      LSFT, DEL,
                                            LALT,
                                BSPC, ESC,  LGUI,
        // right hand
           MINS,  6,   7,    8,   9,   0,    EQL,
           RBRC,  J,   L,    U,   Y,   SCLN, BSLS,
                  H,   N,    E,   I,   O,    QUOT,
           FN21,  K,   M,    COMM,DOT, SLSH, RSFT,
                       FN12, NO,  NO,  RALT, RCTL,
        PGUP,PGDN,
        RALT,
        RGUI, ENT, SPC
    ),

    /* Keymap 1: QWERTY Emergency Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   :  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |  L0  |      |      |                                       |      |      |      |      |       |
     *   `----------------------------------'                                       `-----------------------------------'
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
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS,    Q,    W,    E,    R,    T, TRNS,
        TRNS,    A,    S,    D,    F,    G,
        TRNS,    Z,    X,    C,    V,    B, TRNS,
        TRNS, TRNS,  FN0, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // right hand
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
           TRNS,    Y,    U,    I,    O,    P, TRNS,
                    H,    J,    K,    L, SCLN, TRNS,
           TRNS,    N,    M, TRNS, TRNS, TRNS, TRNS,
                       TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    /*
     * Layer 2: Helper functions
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           | Vol+ |      |      |  Up  |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      | Left | Down | Right|      |        |
     * |--------+------+------+------+------+------|      |           | Vol- |------+------+------+------+------+--------|
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

    KEYMAP(
        // left hand
        FN31,  F1,  F2,  F3,  F4,  F5, F11,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, TRNS,
             VOLU,TRNS,TRNS,UP,  TRNS,TRNS,TRNS,
                  TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,
             VOLD,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
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

/*
 * Fn action definition - 32 Fn can be defined at most
 */
const action_t PROGMEM fn_actions[] = {
    // Layer shifting
    [0] = ACTION_LAYER_SET(0, ON_PRESS),           // Switch to Layer 0
    [1] = ACTION_LAYER_SET(1, ON_PRESS),           // Switch to Layer 1
    [2] = ACTION_LAYER_SET(2, ON_PRESS),           // Switch to Layer 2

    // Layer toggling
    [11] = ACTION_LAYER_MOMENTARY(1),              // Push Layer 1
    [12] = ACTION_LAYER_MOMENTARY(2),              // Push Layer 2

    // Short modifier shortcuts
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_9),     // Shift+9
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_0),     // Shift+0

    // Teensy
    [31] = ACTION_FUNCTION(TEENSY_KEY),            // Teensy key
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        /* case GOOD_GAME: */
        /*     return (record->event.pressed ? */
        /*             MACRO( I(100), T(T), T(G), T(G), T(ENT), END ) : */
        /*             MACRO_NONE ); */
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
