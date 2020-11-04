/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * Mantainer: Luca Valente, luca.valente2@unibo.it
 */
#include <stdio.h>
#include "common.h"

#define NINPUTS  256

short buf[2*NINPUTS] __sram;

short dataR1[NINPUTS] = {
  /* inputs for test 1 */
  2, -4, -3, -8, -10, -11, -23, 11, 32, 10, 11, 8, 3, 3, -7, -5, 1, -4, -4, -4,
  -9, -5, -4, -8, -5, -2, 0, 0, -6, -7, -2, 3, 3, 8, 15, 10, 6, 6, 1, 4, -1, 
  -10, -4, -2, -9, -5, -7, -8, -2, -5, -6, -2, -3, 1, -3, -8, -6, 0, 5, 4, 15,
  17, 6, 5, 2, 0, 2, -3, -5, 0, -5, -5, -4, -9, -6, -2, -4, -4, -3, -1, 1, -5,
  -7, -4, 3, 5, 6, 20, 16, 8, 7, 3, 7, 4, -5, -4, -3, -8, -6, -7, -7, -1, -2, 
  -2, -2, -3, 1, 1, -5, -4, 2, 6, 7, 13, 17, 8, 7, 6, 2, 7, 4, 0, -3, -6, -2, 
  -3, -7, -7, -4, -5, -4, -2, 1, 4, -2, -4, -1, 3, 5, 5, 18, 19, 9, 7, 2, 4, 2,
  -6, -5, 0, -1, -2, -5, -8, -2, -4, -7, -5, -4, 1, 0, -5, -4, 1, 3, 3, 7, 15,
  11, 6, 5, 2, 6, 3, -5, -4, -4, -7, -6, -9, -8, -3, -4, -5, -5, -4, 1, -3, -7,
  -5, 0, 4, 3, 12, 15, 7, 5, 4, 1, 1, -5, -7, -1, -2, -5, -4, -8, -7, -3, -6, 
  -6, -5, -3, 0, -5, -6, -3, 1, 2, 3, 13, 14, 9, 6, 3, 4, 3, -4, -6, -3, -5,
  -5, -6, -9, -5, -3, -5, -5, -3, 0, 0, -5, -3, 1, 3, 3, 9, 16, 10, 6, 6, 6, 8,
  2, -2, -2,
};

short dataI1[NINPUTS] = {
  /* inputs for test 1 */
  1, -1, -1, -2, -2, -2, -3, -1, 0, 0, 1, 2, 2, 3, 3, 2, 2, 2, 2, 1, 0, 0, -1,
  -1, -2, -2, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 3, 3, 3, 3, 2, 2, 1,
  1, 0, 0, -1, -1, -2, -2, -2, -2, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 3, 3, 4,
  3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1,
  2, 3, 3, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3,
  -2, -2, -1, 0, 1, 2, 2, 3, 3, 4, 3, 3, 3, 2, 2, 1, 0, -1, -1, -2, -2, -3, -3,
  -4, -3, -4, -3, -2, -2, 0, 1, 1, 2, 2, 3, 3, 3, 2, 2, 2, 2, 1, 0, 0, -1, -2,
  -2, -3, -3, -3, -4, -4, -3, -3, -2, -1, 0, 0, 1, 2, 2, 3, 3, 3, 3, 2, 2, 1,
  1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 2, 2, 3, 3, 3,
  2, 2, 2, 2, 1, 0, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, 0, 1, 1,
  2, 3, 3, 4, 4, 3, 3, 3, 2, 1, 1, 0, 0, -1, -2, -2, -2, -3, -3, -3, -3, -2, 
  -2, -1, 0, 1, 2, 2, 3, 4, 4, 4, 3,
};

short ref[2*NINPUTS] = {
 /* outputs for test 1 */
  6, 13, -47, -11, 91, 38, 44, 30, 48, 21, 48, 13,
  71, 26, 92, 41, 162, 76, 598, 139, -1002, -60, -284, 59,
  -210, 40, -154, 65, -100, 67, -23, 35, -98, 92, -18, 96,
  -125, 53, -414, 121, 135, 80, 78, 37, 62, 57, 29, 19,
  40, -16, 84, 115, 23, -6, 52, 8, -3, -52, 283, 126,
  123, -38, 50, -63, 28, -16, 31, -78, 31, -36, -2, -62,
  -12, -54, -33, -43, -1, 60, -12, -141, -44, -49, -21, -68,
  -62, -59, -32, -61, -39, -23, -48, -13, -70, -14, -28, -7,
  5, -98, -28, 10, -50, -10, -32, 2, -42, 11, -4, 36,
  -65, 37, -9, 19, -52, 28, -94, 3, 228, 74, 53, 73,
  69, 22, 52, 52, 56, 8, 21, 80, 55, 6, 41, 5,
  54, 21, 95, 83, 8, -75, -6, -27, 23, -32, 14, -27,
  20, -34, -2, -57, -2, -28, -7, -32, -11, -21, 19, -70,
  -20, -7, -16, -32, -25, -15, -27, -17, -21, -13, -25, 0,
  -10, -7, 17, -20, 48, -41, -154, 48, -59, 75, -44, 45,
  -19, 42, 1, 39, -18, 33, -2, 43, -1, 36, 30, 33,
  48, 150, 46, -33, 10, -11, 17, 5, 23, 9, 36, 2,
  29, 2, 22, -9, -1, -16, 11, -8, 47, -38, -1, -14,
  2, -20, 7, 4, 9, -25, -2, 7, 5, -30, -5, -1,
  8, 0, 14, -18, -7, 0, -6, 2, 10, -10, -4, 8,
  7, -3, 8, -3, 9, 7, -8, 10, 2, -3, 12, 8,
  19, -7, -1, -4, -2, -9, -3, 9, -3, 6, 18, -2,
  10, -1, 2, -1, -1, -6, 0, 5, -4, 10, 4, 1,
  0, -10, -6, 7, -4, 4, 8, 21, 8, -9, 3, 19,
  4, 32, 14, -6, -1, 29, 0, 13, 11, 22, 16, 9,
  56, 55, 5, -11, 2, 28, 22, 9, 25, 8, 22, 12,
  17, -2, 13, -6, 7, 10, 40, 31, 72, -156, 39, -36,
  5, -32, 12, -46, -16, -44, 17, -55, -21, -48, -22, -35,
  -50, -65, -141, -52, 40, 37, 12, 17, -21, -15, -16, -15,
  -28, 6, -10, 3, -21, 24, -14, 18, -20, 4, 8, 62,
  -12, 11, -6, 38, -9, 31, 1, 75, 24, 38, 12, 37,
  26, 38, -11, 31, 5, 80, 98, -86, 64, -30, 31, -18,
  61, -10, 21, -63, 50, -9, 55, -55, 66, -13, 48, -53,
  219, -56, -86, -15, -58, -36, -12, -19, -56, -42, 5, -34,
  -27, -27, -17, 4, -48, -3, -20, -6, -1, 83, -29, 3,
  -65, 7, -45, 10, -44, 29, -23, 62, -58, 49, -28, 52,
  -39, 49, -14, 147, 27, -68, -7, 45, -8, 41, 10, 65,
  31, 40, 32, 63, 36, 6, 56, 71, 122, 39, 289, -121,
  1, 45, 56, 4, 33, 6, 96, -99, 47, 10, 43, -16,
  67, -40, 81, -38, 126, -58, -303, -140, -63, -55, 8, -75,
  -45, -88, 3, -31, -38, -54, -66, -54, -79, -34, -112, -52,
  -396, -18, 216, -26, 69, -15, 42, -17, 25, -15, 34, -26,
  40, 1, 38, -10, 141, -27, -83, 30,
};

static short wprBase_l2[] = {
  32767,  32758,  32729,  32679,  32610,  32522,  32413,  32286,
  32138,  31972,  31786,  31581,  31357,  31114,  30853,  30572,
  30274,  29957,  29622,  29269,  28899,  28511,  28106,  27684,
  27246,  26791,  26320,  25833,  25330,  24812,  24279,  23732,
  23170,  22595,  22006,  21403,  20788,  20160,  19520,  18868,
  18205,  17531,  16846,  16151,  15447,  14733,  14010,  13279,
  12540,  11793,  11039,  10279,   9512,   8740,   7962,   7180,
   6393,   5602,   4808,   4011,   3212,   2411,   1608,    804,
      0,   -804,  -1608,  -2411,  -3212,  -4011,  -4808,  -5602,
  -6393,  -7180,  -7962,  -8740,  -9512, -10279, -11039, -11793,
 -12540, -13279, -14010, -14733, -15447, -16151, -16846, -17531,
 -18205, -18868, -19520, -20160, -20788, -21403, -22006, -22595,
 -23170, -23732, -24279, -24812, -25330, -25833, -26320, -26791,
 -27246, -27684, -28106, -28511, -28899, -29269, -29622, -29957,
 -30274, -30572, -30853, -31114, -31357, -31581, -31786, -31972,
 -32138, -32286, -32413, -32522, -32610, -32679, -32729, -32758,
};

static short wpiBase_l2[] = {
      0,    804,   1608,   2411,   3212,   4011,   4808,   5602,
   6393,   7180,   7962,   8740,   9512,  10279,  11039,  11793,
  12540,  13279,  14010,  14733,  15447,  16151,  16846,  17531,
  18205,  18868,  19520,  20160,  20788,  21403,  22006,  22595,
  23170,  23732,  24279,  24812,  25330,  25833,  26320,  26791,
  27246,  27684,  28106,  28511,  28899,  29269,  29622,  29957,
  30274,  30572,  30853,  31114,  31357,  31581,  31786,  31972,
  32138,  32286,  32413,  32522,  32610,  32679,  32729,  32758,
  32767,  32758,  32729,  32679,  32610,  32522,  32413,  32286,
  32138,  31972,  31786,  31581,  31357,  31114,  30853,  30572,
  30274,  29957,  29622,  29269,  28899,  28511,  28106,  27684,
  27246,  26791,  26320,  25833,  25330,  24812,  24279,  23732,
  23170,  22595,  22006,  21403,  20788,  20160,  19520,  18868,
  18205,  17531,  16846,  16151,  15447,  14733,  14010,  13279,
  12540,  11793,  11039,  10279,   9512,   8740,   7962,   7180,
   6393,   5602,   4808,   4011,   3212,   2411,   1608,    804,
};

short wprBase[NINPUTS/2] __sram;
short wpiBase[NINPUTS/2] __sram;

extern void fft(short *, int, short *, short *);

const char* __attribute__((weak)) get_testname()
{
  return "fft";
}

void test_setup() {
  for (int k=0;k<NINPUTS/2;k++)
    {
      wprBase[k] = wprBase_l2[k];
      wpiBase[k] = wpiBase_l2[k];
    }
}

void test_clear() {
  for (int i = 0; i < NINPUTS; ++i) {
    buf[2 * i] = dataR1[i];
    buf[2 * i + 1] = dataI1[i];
  }
}

void test_run(int n) {
  fft(buf, NINPUTS ,(short *) wprBase, (short *) wpiBase);
}

int test_check() {
  for (int i = 0; i != 2 * NINPUTS; ++i)
    if (buf[i] != ref[i])
      return 0;

  return 1;
}
