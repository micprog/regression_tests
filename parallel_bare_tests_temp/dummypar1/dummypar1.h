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
/***********************************************************************/
/*************** TCDM VARIABLE TO BE CHECKED ***************************/
/***********************************************************************/
/* RESULT: matResult                                                   */
/* LENGTH: 256                                                         */
/***********************************************************************/
/****************** EXPECTED RESULT ************************************/
/***********************************************************************/
/* EXPECTED: EXP_RESULT                                                */ 
/***********************************************************************/



void MatrixMul(volatile int*,volatile int*,volatile int*, unsigned int, unsigned int);
void MatrixAdd(volatile int*,volatile int*,volatile int*, unsigned int, unsigned int);
void initialize_mat(volatile int*, unsigned int, unsigned int);


//const int EXP_RESULT[16*16] = {-1070580, -1014080, -957580, -901080, -844580, -788080, -731580, -675080, -631092, -597568, -564044, -530520, -496996, -463472, -429948, -396424, -191604, -181056, -170508, -159960, -149412, -138864, -128316, -117768, 247884, 235456, 223028, 210600, 198172, 185744, 173316, 160888, 687372, 651968, 616564, 581160, 545756, 510352, 474948, 439544, 1126860, 1068480, 1010100, 951720, 893340, 834960, 776580, 718200, 1566348, 1484992, 1403636, 1322280, 1240924, 1159568, 1078212, 996856, 2005836, 1901504, 1797172, 1692840, 1588508, 1484176, 1379844, 1275512, 803661, 842896, 882131, 921366, 960601, 999836, 1039071, 1078306, 486661, 510344, 534027, 557710, 581393, 605076, 628759, 652442, 169661, 177792, 185923, 194054, 202185, 210316, 218447, 226578, -147339, -154760, -162181, -169602, -177023, -184444, -191865, -199286, -464339, -487312, -510285, -533258, -556231, -579204, -602177, -625150, -781339, -819864, -858389, -896914, -935439, -973964, -1012489, -1051014, -1098339, -1152416, -1206493, -1260570, -1314647, -1368724, -1422801, -1476878, -1415339, -1484968, -1554597, -1624226, -1693855, -1763484, -1833113, -1902742, -409332, -387392, -365452, -343512, -321572, -299632, -277692, -255752, 30156, 29120, 28084, 27048, 26012, 24976, 23940, 22904, 469644, 445632, 421620, 397608, 373596, 349584, 325572, 301560, 909132, 862144, 815156, 768168, 721180, 674192, 627204, 580216, 1348620, 1278656, 1208692, 1138728, 1068764, 998800, 928836, 858872, 1788108, 1695168, 1602228, 1509288, 1416348, 1323408, 1230468, 1137528, 2227596, 2111680, 1995764, 1879848, 1763932, 1648016, 1532100, 1416184, 2667084, 2528192, 2389300, 2250408, 2111516, 1972624, 1833732, 1694840, -150963, -158576, -166189, -173802, -181415, -189028, -196641, -204254, -467963, -491128, -514293, -537458, -560623, -583788, -606953, -630118, -784963, -823680, -862397, -901114, -939831, -978548, -1017265, -1055982, -1101963, -1156232, -1210501, -1264770, -1319039, -1373308, -1427577, -1481846, -1418963, -1488784, -1558605, -1628426, -1698247, -1768068, -1837889, -1907710, -1735963, -1821336, -1906709, -1992082, -2077455, -2162828, -2248201, -2333574, -2052963, -2153888, -2254813, -2355738, -2456663, -2557588, -2658513, -2759438, -2369963, -2486440, -2602917, -2719394, -2835871, -2952348, -3068825, -3185302};
