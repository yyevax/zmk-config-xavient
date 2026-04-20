/* This file is copied and then modified from https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_36keys.h
 * LICENSE for that repo is inlined below.

 * MIT License
 *
 * Copyright (c) 2023 Robert U
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*                              42 KEY MATRIX / LAYOUT MAPPING

  ╭───────────────────────┬────────────────────────╮ ╭─────────────────────────┬─────────────────────────╮
  │ 36  0   1   2   3   4 │  5   6   7   8   9 39  │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 37 10  11  12  13  14 │ 15  16  17  18  19 40  │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 38 20  21  22  23  24 │ 25  26  27  28  29 41  │ │ LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰──────────╮ 30  31  32 │ 33  34  35 ╭───────────╯ ╰───────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────╯
             ╰────────────┴────────────╯                         ╰─────────────┴─────────────╯             */

#pragma once

// Left-hand keys (0-5, 12-17, 24-29)
#define LT5 0   // ESC
#define LT4 1   // Q
#define LT3 2   // W
#define LT2 3   // F
#define LT1 4   // P
#define LT0 5   // B

#define LM5 12  // LSFT
#define LM4 13  // A
#define LM3 14  // R
#define LM2 15  // S
#define LM1 16  // T
#define LM0 17  // G

#define LB5 24  // LCTRL
#define LB4 25  // Z
#define LB3 26  // X
#define LB2 27  // C
#define LB1 28  // D
#define LB0 29  // V

// Right-hand keys (6-11, 18-23, 30-35)
#define RT0 6   // J
#define RT1 7   // L
#define RT2 8   // U
#define RT3 9   // Y
#define RT4 10  // SEMI
#define RT5 11  // BSPC

#define RM0 18  // M
#define RM1 19  // N
#define RM2 20  // E
#define RM3 21  // I
#define RM4 22  // O
#define RM5 23  // RET

#define RB0 30  // K
#define RB1 31  // H
#define RB2 32  // COMMA
#define RB3 33  // DOT
#define RB4 34  // FSLH
#define RB5 35  // DEL

// Thumb keys (36-41)
#define LH2 36  
#define LH1 37 
#define LH0 38 

#define RH0 39  
#define RH1 40  
#define RH2 41

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5 // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5 // right-hand keys
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2                                      // thumb keys

#define LAYER_FROM42( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, \
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, \
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, \
                  k36, k37, k38, k39, k40, k41                 \
) \
    k00 k01 k02 k03 k04 k05 k06 k07 k08 k09 k10 k11 \
    k12 k13 k14 k15 k16 k17 k18 k19 k20 k21 k22 k23 \
    k24 k25 k26 k27 k28 k29 k30 k31 k32 k33 k34 k35 \
                k36 k37 k38 k39 k40 k41
