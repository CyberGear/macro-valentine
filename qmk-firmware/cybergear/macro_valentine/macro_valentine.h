/* Copyright 2021 CyberGear Marius Kavoliunas
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

#include "quantum.h"

#define LAYOUT(                            \
         K00,      K01,                    \
    K02, K03, K04, K05, K06,               \
         K07, K08, K09,                    \
              K10                          \
) {                                        \
    { KC_NO,  K00,  KC_NO,  K01,  KC_NO }, \
    {  K02,   K03,   K04,   K05,   K06  }, \
    { KC_NO,  K07,   K08,   K09,  KC_NO }, \
    { KC_NO, KC_NO,  K10,  KC_NO, KC_NO }, \
}
