/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define LSFT_F LSFT_T(KC_F)
#define LSFT_J LSFT_T(KC_J)
#define LCTL_D LCTL_T(KC_D)
#define LCTL_K LCTL_T(KC_K)
#define LALT_S LALT_T(KC_S)
#define LALT_L LALT_T(KC_L)

#define A_AT   LALT_T(S(KC_2))
#define C_HASH LCTL_T(S(KC_3))
#define S_DLR  LSFT_T(S(KC_4))


#define AR_SPC LT(_AR, KC_SPC)
#define AR_BSPC LT(_AR, KC_BSPC)
#define SY_ENT LT(_SY, KC_ENT)
#define SY_DEL LT(_SY, KC_DEL)
#define NU_E LT(_NU, KC_E)
#define NU_I LT(_NU, KC_I)

#define ZZ_R LT(_ZZ, KC_R)
#define CT_M LT(_CT, KC_M)

#define LSFT_S LSFT_T(KC_S)
#define LSFT_H LSFT_T(KC_H)
#define LCTL_t LCTL_T(KC_T)
#define LCTL_A LCTL_T(KC_A)
#define LALT_R LALT_T(KC_R)
#define LALT_E LALT_T(KC_E)
#define LWIN_A LGUI_T(KC_A)

#define S_TAB LSFT_T(KC_TAB)
#define C_ENT LCTL_T(KC_ENT)

#define C_DWN LCTL_T(KC_DOWN)
#define S_LFT LSFT_T(KC_LEFT)
#define A_RGT LALT_T(KC_RIGHT)

#define CT_V LT(_CT, KC_V) 

#define HY_F1 HYPR(KC_F1)
#define HY_F2 HYPR(KC_F2)
#define HY_F3 HYPR(KC_F3)
#define HY_F4 HYPR(KC_F4)
#define HY_F5 HYPR(KC_F5)
#define HY_F6 HYPR(KC_F6)
#define HY_F7 HYPR(KC_F7)
#define HY_F8 HYPR(KC_F8)
#define HY_F9 HYPR(KC_F9)
#define HY_F10 HYPR(KC_F10)
#define HY_F11 HYPR(KC_F11)
#define HY_F12 HYPR(KC_F12)
#define HY_F13 HYPR(KC_F13)
#define HY_F14 HYPR(KC_F14)
#define HY_F15 HYPR(KC_F15)
#define HY_F16 HYPR(KC_F16)
#define HY_F17 HYPR(KC_F17)
#define HY_F18 HYPR(KC_F18)
#define HY_F19 HYPR(KC_F19)
#define HY_F20 HYPR(KC_F20)
#define HY_F21 HYPR(KC_F21)
#define HY_F22 HYPR(KC_F22)
#define HY_F23 HYPR(KC_F23)

#define SU_F1 RCMD(KC_F1)
#define SU_F2 RCMD(KC_F2)
#define SU_F3 RCMD(KC_F3)
#define SU_F4 RCMD(KC_F4)
#define SU_F5 RCMD(KC_F5)
#define SU_F6 RCMD(KC_F6)
#define SU_F7 RCMD(KC_F7)
#define SU_F8 RCMD(KC_F8)
#define SU_F9 RCMD(KC_F9)
#define SU_F10 RCMD(KC_F10)
#define SU_F11 RCMD(KC_F11)
#define SU_F12 RCMD(KC_F12)
#define SU_F13 RCMD(KC_F13)
#define SU_F14 RCMD(KC_F14)
#define SU_F15 RCMD(KC_F15)
#define SU_F16 RCMD(KC_F16)
#define SU_F17 RCMD(KC_F17)
#define SU_F18 RCMD(KC_F18)
#define SU_F19 RCMD(KC_F19)
#define SU_F20 RCMD(KC_F20)
#define SU_F21 RCMD(KC_F21)
#define SU_F22 RCMD(KC_F22)
#define SU_F23 RCMD(KC_F23)

#define A_F16 A(KC_F16)
#define A_F17 A(KC_F17)
#define A_F18 A(KC_F18)
#define A_F19 A(KC_F19)
#define A_F20 A(KC_F20)
#define A_F21 A(KC_F21)
#define A_F22 A(KC_F22)
#define A_F23 A(KC_F23)

#define KC_VU KC_VOLU
#define KC_VD KC_VOLD
#define KC_VM KC_MUTE

#define CTL_C LCTL(KC_C)
#define CTL_V LCTL(KC_V)
#define A_SPC A(KC_SPC)


enum layer_names {
    _QW,
    _AR,
    _SY,
    _NU,
    _GA,
    _ZZ,
    _CT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
       KC_0,    KC_1,    KC_2,    KC_3,    KC_4,   SU_F1,  SU_F2,  SU_F3,  SU_F4,  SU_F5,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9, 
       KC_Q,    KC_W,    NU_E,    ZZ_R,    KC_T,   SU_F6,  SU_F7,  SU_F8,  SU_F9,  SU_F10,  KC_Y,    KC_U,    NU_I,    KC_O,    KC_P,   
       KC_A,    LALT_S,  LCTL_D,  LSFT_F,  KC_G,   SU_F11, SU_F12, SU_F13, SU_F14, SU_F15,  KC_H,    LSFT_J,  LCTL_K,  LALT_L,  KC_NO,
       KC_Z,    KC_X,    KC_C,    CT_V,    KC_B,   SU_F16, SU_F17, SU_F18, SU_F19, SU_F20,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_NO,
       KC_NO,   KC_NO,   KC_TAB,  AR_SPC,  SY_ENT, SU_F21, SU_F22, SU_F23, KC_NO,  KC_NO,   SY_DEL,  AR_BSPC, KC_ESC,  KC_NO,   KC_NO
    ),
    [_AR] = LAYOUT_ortho_5x15( /* QWERTY */
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_VD, KC_VU, KC_VM, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT, 
       KC_NO,   KC_ESC,  KC_BSPC, KC_DEL , KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_NO, 
       KC_NO,   KC_LALT, C_ENT,   S_TAB,   KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, S_LFT,   C_DWN,   A_RGT,   KC_NO, 
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, CTL_V,   CTL_C,   KC_NO,   KC_NO,   KC_NO,
       KC_NO,   KC_NO,   KC_NO,   A_SPC,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   A_SPC,   KC_NO,   KC_NO,   KC_NO
    ),
    [_SY] = LAYOUT_ortho_5x15( /* QWERTY */
       KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
       KC_GRV,  KC_QUOT, KC_LCBR,   KC_RCBR,   KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_LPRN, KC_RPRN, KC_DQT,  KC_TILD, 
       KC_EXLM, KC_AT,   KC_HASH,   KC_DLR,    KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQUAL,KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, 
       KC_PIPE, KC_BSLS, KC_LABK,   KC_RABK,   KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_LBRC, KC_RBRC, KC_SLSH, KC_QUES,
       KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [_NU] = LAYOUT_ortho_5x15( /* QWERTY */
       KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F10, KC_F11, KC_F12, KC_F13, KC_F5,  KC_F6,    KC_F7,    KC_F8,    KC_F8,    KC_F9, 
       KC_NO,   KC_NO,   MS_UP,   KC_NO,   MS_WHLU,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_NO, 
       KC_NO,   MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_NO, 
       KC_NO,   KC_NO,   KC_F2,   KC_NO,   KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_NO, 
       KC_NO,   KC_NO,   KC_NO,   MS_BTN1, MS_BTN2,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_DOT,   KC_KP_0,  KC_NO,    KC_NO,    KC_NO 
    ),
    [_GA] = LAYOUT_ortho_5x15( /* QWERTY */
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
       KC_B,    KC_L,    KC_D,    KC_C,    KC_V,    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,    KC_J,    KC_F,    KC_O,    KC_U,    KC_NO, 
       KC_N,    LALT_R,  LCTL_t,  LSFT_S,  KC_G,    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,    KC_Y,    LSFT_H,  LCTL_A,  LALT_E,  KC_I, 
       KC_X,    KC_Q,    KC_M,    KC_W,    KC_Z,    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,    KC_K,    KC_P,    KC_NO,   KC_NO,   KC_NO, 
       KC_NO,   KC_NO,   KC_TAB,  AR_SPC,  SY_ENT,  DF(_QW), KC_NO, KC_NO, KC_NO, KC_NO,    SY_DEL,  KC_BSPC, KC_ESC,  KC_NO,   QK_BOOT 
    )
    ,
    [_ZZ] = LAYOUT_ortho_5x15( /* QWERTY */
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO,   HY_F1,   HY_F2,   HY_F3,   KC_NO, 
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO,   HY_F4,   HY_F5,   HY_F6,   KC_NO, 
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO,   HY_F7,   HY_F8,   HY_F9,   KC_NO,
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
   ,
     [_CT] = LAYOUT_ortho_5x15( /* QWERTY */
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,   HY_F13,  HY_F14,  HY_F15,   KC_NO, 
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,   HY_F16,  HY_F17,  HY_F18,   KC_NO, 
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,   HY_F19,  HY_F20,   HY_F21,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
     )     

    // ,
    // [_AR] = LAYOUT_ortho_5x15( /* QWERTY */
    //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    // )
};