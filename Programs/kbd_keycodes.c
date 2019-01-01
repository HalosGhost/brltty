/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2019 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#include "prologue.h"

#include "kbd_keycodes.h"

const unsigned char AT2XT[0X80] = {
  [0X00] = 0X00,
  [AT_KEY_00_Escape] = XT_KEY_00_Escape,
  [AT_KEY_00_1] = XT_KEY_00_1,
  [AT_KEY_00_2] = XT_KEY_00_2,
  [AT_KEY_00_3] = XT_KEY_00_3,
  [AT_KEY_00_4] = XT_KEY_00_4,
  [AT_KEY_00_5] = XT_KEY_00_5,
  [AT_KEY_00_6] = XT_KEY_00_6,
  [AT_KEY_00_7] = XT_KEY_00_7,
  [AT_KEY_00_8] = XT_KEY_00_8,
  [AT_KEY_00_9] = XT_KEY_00_9,
  [AT_KEY_00_0] = XT_KEY_00_0,
  [AT_KEY_00_Minus] = XT_KEY_00_Minus,
  [AT_KEY_00_Equal] = XT_KEY_00_Equal,
  [AT_KEY_00_Backspace] = XT_KEY_00_Backspace,
  [AT_KEY_00_Tab] = XT_KEY_00_Tab,
  [AT_KEY_00_Q] = XT_KEY_00_Q,
  [AT_KEY_00_W] = XT_KEY_00_W,
  [AT_KEY_00_E] = XT_KEY_00_E,
  [AT_KEY_00_R] = XT_KEY_00_R,
  [AT_KEY_00_T] = XT_KEY_00_T,
  [AT_KEY_00_Y] = XT_KEY_00_Y,
  [AT_KEY_00_U] = XT_KEY_00_U,
  [AT_KEY_00_I] = XT_KEY_00_I,
  [AT_KEY_00_O] = XT_KEY_00_O,
  [AT_KEY_00_P] = XT_KEY_00_P,
  [AT_KEY_00_LeftBracket] = XT_KEY_00_LeftBracket,
  [AT_KEY_00_RightBracket] = XT_KEY_00_RightBracket,
  [AT_KEY_00_Enter] = XT_KEY_00_Enter,
  [AT_KEY_00_LeftControl] = XT_KEY_00_LeftControl,
  [AT_KEY_00_A] = XT_KEY_00_A,
  [AT_KEY_00_S] = XT_KEY_00_S,
  [AT_KEY_00_D] = XT_KEY_00_D,
  [AT_KEY_00_F] = XT_KEY_00_F,
  [AT_KEY_00_G] = XT_KEY_00_G,
  [AT_KEY_00_H] = XT_KEY_00_H,
  [AT_KEY_00_J] = XT_KEY_00_J,
  [AT_KEY_00_K] = XT_KEY_00_K,
  [AT_KEY_00_L] = XT_KEY_00_L,
  [AT_KEY_00_Semicolon] = XT_KEY_00_Semicolon,
  [AT_KEY_00_Apostrophe] = XT_KEY_00_Apostrophe,
  [AT_KEY_00_Grave] = XT_KEY_00_Grave,
  [AT_KEY_00_LeftShift] = XT_KEY_00_LeftShift,
  [AT_KEY_00_Backslash] = XT_KEY_00_Backslash,
  [AT_KEY_00_Z] = XT_KEY_00_Z,
  [AT_KEY_00_X] = XT_KEY_00_X,
  [AT_KEY_00_C] = XT_KEY_00_C,
  [AT_KEY_00_V] = XT_KEY_00_V,
  [AT_KEY_00_B] = XT_KEY_00_B,
  [AT_KEY_00_N] = XT_KEY_00_N,
  [AT_KEY_00_M] = XT_KEY_00_M,
  [AT_KEY_00_Comma] = XT_KEY_00_Comma,
  [AT_KEY_00_Period] = XT_KEY_00_Period,
  [AT_KEY_00_Slash] = XT_KEY_00_Slash,
  [AT_KEY_00_RightShift] = XT_KEY_00_RightShift,
  [AT_KEY_00_KPAsterisk] = XT_KEY_00_KPAsterisk,
  [AT_KEY_00_LeftAlt] = XT_KEY_00_LeftAlt,
  [AT_KEY_00_Space] = XT_KEY_00_Space,
  [AT_KEY_00_CapsLock] = XT_KEY_00_CapsLock,
  [AT_KEY_00_F1] = XT_KEY_00_F1,
  [AT_KEY_00_F2] = XT_KEY_00_F2,
  [AT_KEY_00_F3] = XT_KEY_00_F3,
  [AT_KEY_00_F4] = XT_KEY_00_F4,
  [AT_KEY_00_F5] = XT_KEY_00_F5,
  [AT_KEY_00_F6] = XT_KEY_00_F6,
  [AT_KEY_00_F7_X1] = XT_KEY_00_F7,
  [AT_KEY_00_F8] = XT_KEY_00_F8,
  [AT_KEY_00_F9] = XT_KEY_00_F9,
  [AT_KEY_00_F10] = XT_KEY_00_F10,
  [AT_KEY_00_NumLock] = XT_KEY_00_NumLock,
  [AT_KEY_00_ScrollLock] = XT_KEY_00_ScrollLock,
  [AT_KEY_00_KP7] = XT_KEY_00_KP7,
  [AT_KEY_00_KP8] = XT_KEY_00_KP8,
  [AT_KEY_00_KP9] = XT_KEY_00_KP9,
  [AT_KEY_00_KPMinus] = XT_KEY_00_KPMinus,
  [AT_KEY_00_KP4] = XT_KEY_00_KP4,
  [AT_KEY_00_KP5] = XT_KEY_00_KP5,
  [AT_KEY_00_KP6] = XT_KEY_00_KP6,
  [AT_KEY_00_KPPlus] = XT_KEY_00_KPPlus,
  [AT_KEY_00_KP1] = XT_KEY_00_KP1,
  [AT_KEY_00_KP2] = XT_KEY_00_KP2,
  [AT_KEY_00_KP3] = XT_KEY_00_KP3,
  [AT_KEY_00_KP0] = XT_KEY_00_KP0,
  [AT_KEY_00_KPPeriod] = XT_KEY_00_KPPeriod,
  [0X7F] = 0X54,
  [0X60] = 0X55,
  [AT_KEY_00_Europe2] = XT_KEY_00_Europe2,
  [AT_KEY_00_F11] = XT_KEY_00_F11,
  [AT_KEY_00_F12] = XT_KEY_00_F12,
  [AT_KEY_00_KPEqual] = XT_KEY_00_KPEqual,
  [0X17] = 0X5A,
  [0X1F] = 0X5B,
  [AT_KEY_00_International6] = XT_KEY_00_International6,
  [0X2F] = 0X5D,
  [0X37] = 0X5E,
  [0X3F] = 0X5F,
  [0X47] = 0X60,
  [0X4F] = 0X61,
  [0X56] = 0X62,
  [0X5E] = 0X63,
  [AT_KEY_00_F13] = XT_KEY_00_F13,
  [AT_KEY_00_F14] = XT_KEY_00_F14,
  [AT_KEY_00_F15] = XT_KEY_00_F15,
  [AT_KEY_00_F16] = XT_KEY_00_F16,
  [AT_KEY_00_F17] = XT_KEY_00_F17,
  [AT_KEY_00_F18] = XT_KEY_00_F18,
  [AT_KEY_00_F19] = XT_KEY_00_F19,
  [AT_KEY_00_F20] = XT_KEY_00_F20,
  [AT_KEY_00_F21] = XT_KEY_00_F21,
  [AT_KEY_00_F22] = XT_KEY_00_F22,
  [AT_KEY_00_F23] = XT_KEY_00_F23,
  [0X6F] = 0X6F,
  [AT_KEY_00_International2] = XT_KEY_00_International2,
  [0X19] = 0X71,
  [AT_KEY_00_CrSel] = XT_KEY_00_CrSel,
  [AT_KEY_00_International1] = XT_KEY_00_International1,
  [AT_KEY_00_ExSel] = XT_KEY_00_ExSel,
  [AT_KEY_00_EnlHelp] = XT_KEY_00_EnlHelp,
  [AT_KEY_00_F24] = XT_KEY_00_F24,
  [AT_KEY_00_Language4] = XT_KEY_00_Language4,
  [AT_KEY_00_Language3] = XT_KEY_00_Language3,
  [AT_KEY_00_International4] = XT_KEY_00_International4,
  [0X65] = 0X7A,
  [AT_KEY_00_International5] = XT_KEY_00_International5,
  [0X68] = 0X7C,
  [AT_KEY_00_International3] = XT_KEY_00_International3,
  [AT_KEY_00_KPComma] = XT_KEY_00_KPComma,
  [0X6E] = 0X7F
};
