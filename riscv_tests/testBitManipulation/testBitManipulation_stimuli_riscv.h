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
#define NumberOfStimuli 10

#define IMM_0 9

#define LEN_0 18

#define IMM_1 0

#define LEN_1 5

#define IMM_2 10

#define LEN_2 19

#define IMM_3 4

#define LEN_3 2

#define IMM_4 2

#define LEN_4 13

#define IMM_5 20

#define LEN_5 10

#define IMM_6 11

#define LEN_6 7

#define IMM_7 3

#define LEN_7 15

#define IMM_8 31

#define LEN_8 0

#define IMM_9 7

#define LEN_9 16

unsigned int op_a[] = {
0xE56EF83B,
0x87BFAA6A,
0x8BD91B25,
0x1E73D59D,
0x7EE1E454,
0x20E4FB20,
0x10D1599D,
0x828C5227,
0x64FD5AC3,
0x50291B1B,
};

unsigned int op_c[] = {
0xBA7FADE4,
0xAF1EC9F2,
0x66E37509,
0x2F5F4EA9,
0x5218B766,
0xAA56C286,
0x82BC9486,
0xF10313D5,
0x6135CCB6,
0x3209433A,
};

unsigned int res_bset[] = {
0xEFFFFE3B,
0x87BFAA7F,
0xBFFFFF25,
0x1E73D5FD,
0x7EE1FFFC,
0x7FF4FB20,
0x10D7F99D,
0x828FFFFF,
0xE4FD5AC3,
0x50FFFF9B,
};

unsigned int res_bclr[] = {
0xE000003B,
0x87BFAA40,
0x80000325,
0x1E73D58D,
0x7EE10000,
0x0004FB20,
0x10D0019D,
0x82880007,
0x64FD5AC3,
0x5000001B,
};

unsigned int res_bextract[] = {
0x0002B77C,
0xFFFFFFEA,
0x0002F646,
0x00000001,
0xFFFFF915,
0x0000020E,
0x0000002B,
0xFFFF8A44,
0x00000000,
0x00005236,
};

unsigned int res_bextractu[] = {
0x0002B77C,
0x0000002A,
0x0002F646,
0x00000001,
0x00003915,
0x0000020E,
0x0000002B,
0x00008A44,
0x00000000,
0x00005236,
};

unsigned int res_binsert[] = {
0xBDF077E4,
0xAF1EC9EA,
0x646C9509,
0x2F5F4ED9,
0x52189152,
0xB206C286,
0x82BCEC86,
0xF102913D,
0xE135CCB6,
0x328D8DBA,
};

unsigned int op_a_reg[] = {
0xEEA0E3E2,
0x1DFB1B10,
0x1F64027F,
0x28D226E7,
0x60EAF960,
0xFDC384AB,
0x34BD0CB9,
0x12B473D0,
0xCC539881,
0x2E1AADFF,
};

unsigned int op_b_reg[] = {
0x000001AA,
0x0000020F,
0x000000E9,
0x00000133,
0x00000286,
0x0000003E,
0x0000001E,
0x00000117,
0x000002A5,
0x0000000B,
};

unsigned int op_c_reg[] = {
0xA79494DE,
0xA12657E5,
0x1331F454,
0x6CC53B34,
0xA8E5CE39,
0x50659018,
0xA2F34AE1,
0x656DCB95,
0x33642E78,
0xD327F5DC,
};

unsigned int res_bset_reg[] = {
0xEEFFFFE2,
0xFFFF9B10,
0x1F65FE7F,
0x3FFA26E7,
0x67FFFFE0,
0xFDC384AB,
0x74BD0CB9,
0xFFB473D0,
0xCFFFFFE1,
0x2E1AADFF,
};

unsigned int res_bclr_reg[] = {
0xEE0003E2,
0x00001B10,
0x1F64007F,
0x200226E7,
0x60000020,
0x3DC384AB,
0x34BD0CB9,
0x003473D0,
0xC8000001,
0x2E1AA5FF,
};

unsigned int res_bextract_reg[] = {
0xFFFFE838,
0x00003BF6,
0x00000001,
0x0000011A,
0x0003ABE5,
0xFFFFFFFF,
0x00000000,
0x00000025,
0xFFE29CC4,
0xFFFFFFFF,
};

unsigned int res_bextractu_reg[] = {
0x00002838,
0x00003BF6,
0x00000001,
0x0000011A,
0x0003ABE5,
0x00000003,
0x00000000,
0x00000025,
0x00229CC4,
0x00000001,
};

unsigned int res_binsert_reg[] = {
0xA78F88DE,
0x8D8857E5,
0x1330FE54,
0x773D3B34,
0xAABE5839,
0xD0659018,
0xE2F34AE1,
0xE86DCB95,
0x32731038,
0xD327FDDC,
};

