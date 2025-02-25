/***************************************************************************************************************\
* Keymap definition.                                                                                            *
*                                                                                                               *
* Copyright 2021-2022  Leandro Emmanuel Reina Kiperman <@kip93>                                                 *
*                                                                                                               *
* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General    *
* Public License as published by the Free Software Foundation, either version 3 of the License, or (at your     *
* option) any later version.                                                                                    *
*                                                                                                               *
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the    *
* implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License   *
* for more details.                                                                                             *
*                                                                                                               *
* You should have received a copy of the GNU General Public License along with this program. If not, see        *
* <http://www.gnu.org/licenses/>.                                                                               *
\***************************************************************************************************************/

// https://docs.qmk.fm/#/keymap
// https://docs.qmk.fm/#/keycodes

#include QMK_KEYBOARD_H

#include "layers.h"
#include "macros.h"
#include "rgb_macros.h"

// clang-format off
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

///////////////////////////////////////////////////// Typing ////////////////////////////////////////////////////

// ------------------------------------------------- 0: Text ------------------------------------------------- //

    [TYPING_0] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSDL,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_APP,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                         KC_LSFT, LT(T1,KC_SPC), KC_LALT,  KC_LGUI, LT(T2,KC_ENT), KC_LCTL
//                      +--------+--------------+--------++--------+--------------+--------+
    ),

// ----------------------------------------------- 1: Others #1 ---------------------------------------------- //

// - - - - - - - - - - - - - - - Functions  - - - - - - - - - - - - - - - Numpad - - - - - - - - - - - - - - - //

    [TYPING_1] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F1,   KC_F4,   KC_F7,   KC_F10,  KC_PSCR, KC_INS,   KC_NUM_LOCK, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_PSLS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F2,   KC_F5,   KC_F8,   KC_F11,  KC_HOME, KC_PGUP,  KC_PDOT, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PAST,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F3,   KC_F6,   KC_F9,   KC_F12,  KC_END,  KC_PGDN,  KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_BSES,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, TO(G0),  KC_TRNS
//                            +--------+--------+--------++--------+--------+--------+
    ),

// ----------------------------------------------- 2: Others #2 ---------------------------------------------- //

// - - - - - - - - - - - - - Numbers & symbols  - - - - - - - - - - - - - - Specials - - - - - - - - - - - - - //

    [TYPING_2] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MSTP, KC_CAPS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MPLY, KC_BRIU,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_CUT,  KC_COPY, KC_PSTE, KC_LBRC, KC_RBRC, KC_EQL,   KC_RGBM, KC_RGBC, KC_UNDO, KC_AGIN, KC_MUTE, KC_BRID,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, TO(G0),  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
//                            +--------+--------+--------++--------+--------+--------+
    ),

///////////////////////////////////////////////////// Gaming ////////////////////////////////////////////////////

// ------------------------------------------------- 0: Basic ------------------------------------------------ //

// - - - - - - - - - - WASD & other basics  - - - - - - - - - - - - Extended #1 (optional) - - - - - - - - - - //

    [GAMING_0] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_ESC,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_PGUP,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_J,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGDN,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_M,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,     KC_MINS, KC_COMM, KC_DOT,  KC_SCLN, KC_SLSH, KC_BSLS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               MO(G1),  KC_LALT, KC_SPC,   KC_ENT,  KC_RALT, KC_RSFT
//                            +--------+--------+--------++--------+--------+--------+
    ),

// ------------------------------------------------ 1: Extras ------------------------------------------------ //

// - - - - - - - - - - - More keybindings  - - - - - - - - - - -  Extended #2 (optional) - - - - - - - - - - - //

    [GAMING_1] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_TRNS, KC_TRNS, KC_L,    KC_TRNS, KC_T,    KC_O,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_P,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_G,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_HOME, KC_END,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_I,    KC_TRNS, KC_B,    KC_N,    KC_H,    KC_K,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, TO(T0)
//                            +--------+--------+--------++--------+--------+--------+
    ),
};
// clang-format on

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom(); // Enable LEDs.
    rgb_next_colour();          // Set colour
    rgb_next_mode();            // Set effect.

    rgblight_set_speed_noeeprom(0x40); // Set speed (~1.5s).
}

// clang-format on

#ifdef OLED_ENABLE


/* 32 * 32 logo */
static void render_logo(void) {
    static const char PROGMEM hell_logo[] = {
	0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0xf0, 0x70, 0xf8, 0xd8, 0xec, 0xec, 0xdc, 0xfc, 0xfc, 
	0xfc, 0xfc, 0xdc, 0xdc, 0x18, 0x38, 0xf0, 0x70, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x01, 0x20, 0x23, 0x2b, 0x5d, 0xb7, 0xff, 0xf9, 0xf9, 0x8f, 0xe7, 0x73, 0x73, 
	0x73, 0x87, 0xff, 0xfd, 0xf3, 0xff, 0xf3, 0xe3, 0xe7, 0xff, 0xff, 0xff, 0xfc, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x20, 0x46, 0x0c, 0x08, 0x20, 0x20, 0xf0, 0xff, 0x3f, 0x97, 0x0b, 0x0b, 0x0a, 0x16, 
	0x2f, 0x9f, 0x9c, 0xfc, 0xf3, 0x73, 0xff, 0xe7, 0x67, 0x1f, 0xcf, 0xeb, 0x3f, 0x0f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x01, 0x00, 0x01, 0x13, 0x02, 0x12, 0x00, 
	0x00, 0x00, 0x09, 0x05, 0x05, 0x05, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};
    oled_write_raw_P(hell_logo, sizeof(hell_logo));
}



/* KEYBOARD PET START */

/* settings */
#    define MIN_WALK_SPEED      10
#    define MIN_RUN_SPEED       40

/* advanced settings */
#    define ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#    define ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int   current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;
bool isBarking = false;

/* logic */
static void render_luna(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {/* 'sit1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'sit2', 32x22px */
                                                   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {/* 'walk1', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90, 0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90, 0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'walk2', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20, 0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {/* 'run1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'run2', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10, 0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   }};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {/* 'bark1', 32x22px */
                                                    {
                                                        0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'bark2', 32x22px */
                                                    {
                                                        0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {/* 'sneak1', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09, 0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
                                                     },

                                                     /* 'sneak2', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40, 0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                     }};

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (led_usb_state.caps_lock) {
            oled_write_raw_P(bark[abs(1 - current_frame)], ANIM_SIZE);

        } else if (isSneaking) {
            oled_write_raw_P(sneak[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - current_frame)], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[abs(1 - current_frame)], ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_luna();
    }

    /* this fixes the screen on and off bug */
    if (current_wpm > 0) {
        oled_on();
        anim_sleep = timer_read32();
    } else if(timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0,0);
        oled_write("                                                                                                    ", false);
        oled_off();
        oled_set_cursor(LUNA_X,LUNA_Y);
    }
}

/* KEYBOARD PET END */

static void print_logo_narrow(void) {
    render_logo();
if (current_wpm > 0) {
    anim_sleep = timer_read32();
    /* wpm counter */
    uint8_t n = get_current_wpm();
    char    wpm_str[4];
    oled_set_cursor(0, 14);
    wpm_str[3] = '\0';
    wpm_str[2] = '0' + n % 10;
    wpm_str[1] = '0' + (n /= 10) % 10;
    wpm_str[0] = '0' + n / 10;
    oled_write(wpm_str, false);

    oled_set_cursor(0, 15);
    oled_write(" wpm", false);

 /* this fixes the screen on and off bug */
   
    } else if(timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0,0);
        oled_write("                                                                                                                        ", false);
        oled_off();
       
   
    }
}

static void print_status_narrow(void) {
   

    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 6);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write("Base ", false);
            break;
        case 1:
            oled_write("Numpd", false);
            break;
        case 2:
            oled_write("Arrow", false);
            break;
        case 3:
            oled_write("Adj  ", false);
            break;
        default:
            oled_write("Undef", false);
    }


    /* KEYBOARD PET RENDER START */

    render_luna(0, 13);

    /* KEYBOARD PET RENDER END */
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }
    return false;
}

#endif
 bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        /* KEYBOARD PET STATUS START */
 
        case KC_LCTL:
            if (record->event.pressed) {
                isSneaking = true;
            } else {
                isSneaking = false;
            }
            break;
        case KC_SPC:
            if (record->event.pressed) {
                isJumping = true;
                showedJump = false;
            } else {
                isJumping = false;
            }
            break;
        case KC_CAPS:
            if (record->event.pressed) {
                isBarking = true;
            } else {
                isBarking = false;
            }
            break;
 
        /* KEYBOARD PET STATUS END */
    }
    return true;
}