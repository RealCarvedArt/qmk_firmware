/* Copyright 2021 Andrzej Ressel (andrzej.ressel@gmail.com)
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

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { E6, F0, D6, D2, B6 }
#define MATRIX_COL_PINS { F5, C7, B7, B2, B4 }

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D5
#define RGBLED_NUM 40
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 150 // The maximum brightness level (255)

#define RGB_DISABLE_TIMEOUT 900000 // milliseconds
#define RGB_DISABLE_WHEN_USB_SUSPENDED 1
