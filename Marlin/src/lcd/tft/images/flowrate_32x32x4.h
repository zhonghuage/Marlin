/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

const uint8_t flowrate_32x32x4[512] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x88, 0x88, 0x88, 0x87, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x88, 0x88, 0x88, 0x87, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x77, 0x78, 0xce, 0xeb, 0x77, 0x77, 0x87, 0x7c, 0xea, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x89, 0x77, 0xef, 0xfd, 0x67, 0xa8, 0x77, 0x7e, 0xfb, 0x77, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x78, 0xdf, 0xba, 0xff, 0xfe, 0x8b, 0xfd, 0x87, 0x7d, 0xfa, 0x56, 0x87, 0x77, 0x88, 0x88,
  0x87, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x7d, 0xfa, 0x56, 0x77, 0x87, 0x77, 0x88,
  0x87, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x7d, 0xfa, 0x56, 0x9c, 0xdc, 0x97, 0x78,
  0x87, 0x78, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x65, 0x6d, 0xfa, 0x59, 0xff, 0xff, 0xfb, 0x77,
  0x88, 0x89, 0xef, 0xff, 0xa7, 0x7b, 0xff, 0xfd, 0x76, 0x5d, 0xf9, 0x7f, 0xff, 0xff, 0xff, 0x97,
  0x7a, 0xdf, 0xff, 0xfa, 0x55, 0x55, 0xcf, 0xff, 0xec, 0x9c, 0xf9, 0x9f, 0xff, 0xff, 0xff, 0xc6,
  0x7c, 0xff, 0xff, 0xf7, 0x55, 0x55, 0x8f, 0xff, 0xff, 0xac, 0xf9, 0xbf, 0xfd, 0x6c, 0xff, 0xe5,
  0x7c, 0xff, 0xff, 0xf7, 0x56, 0x77, 0xaf, 0xff, 0xff, 0x9b, 0xf9, 0xbf, 0xfe, 0x8d, 0xff, 0xe5,
  0x7a, 0xde, 0xff, 0xfb, 0x56, 0x77, 0xdf, 0xff, 0xed, 0x8c, 0xf9, 0x8f, 0xff, 0xff, 0xff, 0xb5,
  0x87, 0x67, 0xef, 0xff, 0xa8, 0x9c, 0xff, 0xfd, 0x76, 0x5d, 0xf9, 0x6d, 0xff, 0xff, 0xfe, 0x75,
  0x88, 0x66, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x65, 0x5c, 0xfa, 0x57, 0xdf, 0xff, 0xd8, 0x55,
  0x87, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x6d, 0xfa, 0x55, 0x68, 0xa9, 0x65, 0x55,
  0x87, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x7d, 0xfa, 0x56, 0x65, 0x55, 0x55, 0x56,
  0x88, 0x78, 0xdf, 0xa8, 0xff, 0xfe, 0x8a, 0xfc, 0x65, 0x6d, 0xfa, 0x56, 0x77, 0x65, 0x56, 0x67,
  0x88, 0x87, 0x78, 0x55, 0xef, 0xfd, 0x55, 0x86, 0x55, 0x5d, 0xfa, 0x56, 0x88, 0x77, 0x77, 0x88,
  0x88, 0x88, 0x65, 0x55, 0xbe, 0xea, 0x55, 0x55, 0x55, 0x6b, 0xd8, 0x56, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x77, 0x66, 0x76, 0x65, 0x56, 0x76, 0x68, 0xa9, 0x88, 0x88, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x77, 0x76, 0x55, 0x56, 0x87, 0x7b, 0xff, 0xff, 0xfb, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x66, 0x67, 0x88, 0x78, 0xef, 0xff, 0xe7, 0x67, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x87, 0xaf, 0xff, 0x95, 0x56, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7d, 0xfd, 0x65, 0x56, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xf8, 0x55, 0x67, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x96, 0x55, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x65, 0x56, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x76, 0x67, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88
};