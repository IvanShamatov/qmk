/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
#ifndef %KEYBOARD_UPPERCASE%_H
#define %KEYBOARD_UPPERCASE%_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments representing the physical
// layout of the board and position of the keys
// The second converts the arguments into a two-dimensional array which 
// represents the switch matrix. 
#define LAYOUT( \
    K00, K01, K02, \
      K10,  K11   \
) \
{ \
    { K00, K01,   K02 }, \
    { K10, KC_NO, K11 }, \
}

#endif