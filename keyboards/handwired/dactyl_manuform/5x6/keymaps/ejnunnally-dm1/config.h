/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x8A, 0x86, 0x65, 0x9D, 0x13, 0xE1, 0xCB, 0x81}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#define MK_3_SPEED
#define MK_C_OFFSET_UNMOD 16
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_0 1
#define MK_C_INTERVAL_0 32
#define MK_C_OFFSET_1 8
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 16
#define MK_C_INTERVAL_2 16
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 40
#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 360
#define MK_W_OFFSET_1 1
#define MK_W_INTERVAL_1 120
#define MK_W_OFFSET_2 1
#define MK_W_INTERVAL_2 20

// enables bootloader keys
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0
#define BOOTMAGIC_ROW_RIGHT 6
#define BOOTMAGIC_COLUMN_RIGHT 5

// enables handedness
#define EE_HANDS
