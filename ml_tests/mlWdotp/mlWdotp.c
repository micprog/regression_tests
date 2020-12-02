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
 * Mantainer: Luca Valente luca.valente2@unibo.it
 */
/////////////////////////////////////////////////////////
// includes
/////////////////////////////////////////////////////////
#include "mlWdotp.h"
#include "math_fns.h"
#include "pulp.h"

/////////////////////////////////////////////////////////
// shared globals
/////////////////////////////////////////////////////////

  RT_LOCAL_DATA static const float fv1[400] = { 9.94063473F, 9.32191753F, 1.197294F, 9.01022F,
    4.21256351F, 2.13521552F, 8.40606499F, 9.8832655F, 8.77074432F, 9.40082836F,
    3.14181471F, 2.06940627F, 9.44944763F, 3.56248593F, 3.75339603F, 8.63593864F,
    5.86399F, 8.74127579F, 7.53126764F, 7.8477664F, 1.09597039F, 6.9161253F,
    3.68903852F, 8.57765102F, 8.30011177F, 9.16311073F, 4.7882123F, 4.29423237F,
    0.421336055F, 3.17481709F, 7.03194332F, 3.72147894F, 9.02072716F,
    6.25545502F, 5.14513826F, 3.33815455F, 7.7089448F, 7.83746719F, 9.27679157F,
    9.77007103F, 9.65257F, 4.18825483F, 3.01973391F, 5.61323118F, 5.63705683F,
    9.67938232F, 7.84445477F, 1.92683804F, 1.37746668F, 6.81004333F,
    0.325016022F, 6.46123171F, 3.45078421F, 7.59005737F, 3.54005218F,
    0.720024109F, 6.21447802F, 9.43610859F, 3.99778605F, 3.89695382F,
    3.55951071F, 2.00350308F, 5.3813014F, 4.84364748F, 9.30093479F, 1.74388444F,
    2.84558773F, 3.2950027F, 5.94770241F, 7.89502048F, 9.58661556F, 4.33153915F,
    8.65958309F, 6.93872213F, 0.575267136F, 3.11911345F, 1.96413457F,
    3.35224986F, 6.47953653F, 3.82431746F, 5.80190134F, 4.42292166F, 4.4797163F,
    9.71758652F, 1.69793355F, 2.59209633F, 9.30269814F, 0.503990412F,
    1.20656955F, 8.46190071F, 4.23491955F, 4.07757521F, 3.21798825F, 7.5084796F,
    9.43987942F, 5.87746477F, 8.8005724F, 9.16926384F, 4.46760178F, 4.18601608F,
    7.98022652F, 6.34930372F, 9.46337605F, 8.6464262F, 1.11126614F, 1.51850307F,
    4.93511152F, 4.90570354F, 7.83304548F, 4.59050655F, 6.17706299F, 3.84687066F,
    6.63417F, 2.17541552F, 8.37057F, 9.08830261F, 9.91448402F, 3.91620684F,
    1.77886772F, 4.97843075F, 6.73632765F, 0.834239364F, 3.68077278F,
    7.98071241F, 6.35961246F, 7.94112921F, 7.076087F, 8.21998882F, 3.75378847F,
    3.78649855F, 7.5376277F, 1.23008978F, 5.36599874F, 8.01042271F, 3.120754F,
    0.381145507F, 6.53067064F, 1.84341204F, 6.20148039F, 5.80819225F,
    2.22396135F, 6.63338423F, 9.70656109F, 9.63175774F, 7.52110481F, 3.07319427F,
    1.11128139F, 3.04580069F, 7.99897289F, 7.38906097F, 8.5992794F, 5.47320509F,
    7.45321751F, 3.14111972F, 2.00127053F, 7.12153959F, 0.682770848F,
    3.39366961F, 6.9219718F, 4.90203285F, 8.61204147F, 8.21418571F, 7.64828205F,
    4.54448462F, 3.11279416F, 2.04796672F, 4.52178955F, 4.82874F, 1.53608048F,
    9.50756741F, 2.64361072F, 0.0609321222F, 1.45330095F, 9.87635517F,
    4.88952351F, 3.0467813F, 2.98785162F, 1.70986152F, 5.03643799F, 9.50694752F,
    2.7431004F, 3.90064144F, 7.2931118F, 1.60119808F, 2.40517378F, 6.57796288F,
    9.91328526F, 0.0532410517F, 8.25423813F, 6.00129223F, 1.34418428F,
    0.0762049407F, 7.67743206F, 5.49734306F, 1.36983824F, 8.02889633F,
    3.61232305F, 7.22553635F, 0.247880027F, 1.67188346F, 3.15459657F,
    7.86892557F, 7.66510725F, 8.23390102F, 6.76507092F, 2.90087271F, 9.15149593F,
    5.65867949F, 4.06984138F, 5.54920626F, 7.53816891F, 1.57321668F,
    0.139586598F, 6.53978539F, 8.05688477F, 0.961534381F, 4.98381042F, 5.90394F,
    5.35278273F, 2.17899179F, 4.20774317F, 6.91939878F, 1.32767916F, 6.70189667F,
    9.55220795F, 8.96902084F, 0.74418658F, 6.88642454F, 9.01477718F, 6.24459887F,
    9.03581429F, 2.70187783F, 2.04929066F, 1.69974F, 6.80727482F, 2.71352816F,
    4.08557844F, 4.44410324F, 9.55481434F, 6.98447132F, 9.94822598F, 6.80969334F,
    4.37108946F, 0.263215F, 7.80035591F, 9.56284428F, 0.056458313F, 8.49724579F,
    3.0239706F, 8.68306065F, 3.30578446F, 6.78969765F, 6.31105947F, 8.77282333F,
    0.204158992F, 2.98623943F, 4.29699755F, 7.12559795F, 6.09266329F,
    0.684329212F, 8.79502583F, 2.08282351F, 5.56690645F, 7.4199419F, 8.62483406F,
    7.29774475F, 5.7497592F, 3.71052098F, 1.79844356F, 5.51058578F,
    0.0370524153F, 1.32402515F, 0.874519229F, 4.63994598F, 0.897848964F,
    2.4225781F, 9.36135101F, 4.13980103F, 6.20431614F, 3.22582F, 9.73329449F,
    2.05862546F, 9.65057468F, 8.5259552F, 8.97089481F, 0.684018433F, 7.55050945F,
    8.7468338F, 7.6518712F, 4.41165733F, 6.32714939F, 6.92901134F, 1.12014198F,
    1.42062986F, 8.19179726F, 8.77109051F, 8.03610706F, 4.50133085F, 3.50208783F,
    2.08881855F, 8.97633553F, 9.12276649F, 8.69993496F, 6.78489399F, 6.59272575F,
    3.73859692F, 1.75899422F, 1.62873888F, 3.59510183F, 9.78606319F,
    0.928558528F, 4.42020512F, 7.11275578F, 1.78471613F, 4.14181471F,
    1.03945041F, 1.27897274F, 1.92723799F, 7.44108391F, 6.80107546F, 7.01185322F,
    6.11747932F, 9.27203941F, 0.905269682F, 8.44837761F, 5.73197031F,
    8.23163605F, 9.12628555F, 0.279982477F, 9.46893692F, 2.03984213F,
    2.24914098F, 1.58185422F, 4.14172363F, 6.80677414F, 2.15085292F, 2.70717692F,
    9.41019726F, 0.529321134F, 3.27595758F, 6.94901514F, 6.2312F, 9.49120617F,
    7.09938192F, 7.97171354F, 1.0495491F, 1.91203785F, 3.90895104F, 8.33133888F,
    3.11138105F, 7.97698927F, 0.743352532F, 2.47396541F, 5.94954491F,
    1.44861221F, 5.0206356F, 7.19609356F, 9.15719F, 2.49349022F, 5.62437296F,
    7.96057224F, 7.09288406F, 4.36674309F, 7.87073469F, 1.93017972F, 6.35102224F,
    1.0469265F, 7.57791662F, 5.88083649F, 2.84824777F, 0.931433797F, 8.34072F,
    9.54167557F, 0.0610494353F, 3.97423315F, 2.55590796F, 3.96082449F,
    8.53358936F, 6.72358227F, 6.9406352F, 9.1193F, 5.49335051F, 2.8872416F,
    2.94040251F, 6.30022049F, 0.692852795F, 7.8249979F, 0.858304679F,
    9.75100136F, 9.57977772F, 4.37275028F, 6.2943697F, 8.86237431F, 5.85830927F,
    4.87716866F, 5.54574966F, 3.4909544F, 6.70768309F, 8.55281162F, 7.32181072F
  };

  RT_LOCAL_DATA static const float fv2[40] = { 8.95453644F, 7.29508972F, 9.72031879F,
    0.13152352F, 7.32294607F, 3.2017312F, 6.72290659F, 2.54040384F, 5.34950161F,
    4.38279724F, 0.380975544F, 6.67037773F, 0.863368511F, 9.85811901F,
    6.42390585F, 3.11482763F, 9.13811779F, 0.945508957F, 5.79126883F,
    1.32641494F, 0.64442265F, 1.01880991F, 8.7536478F, 4.89953423F, 4.70123482F,
    0.0380137451F, 0.0281573646F, 3.06935382F, 6.20798635F, 5.04765797F,
    2.98669195F, 8.21982288F, 1.55461884F, 7.36669111F, 1.91386187F, 9.26665115F,
    4.97693729F, 2.17581487F, 0.94059056F, 8.05247F };

  RT_LOCAL_DATA static const float fv3[40] = { 5.22246075F, 4.35530567F, 0.555995345F,
    7.32832623F, 2.52411556F, 2.43094087F, 8.45510864F, 5.64706373F, 7.43870831F,
    0.849631F, 7.90986824F, 2.76864314F, 4.97495031F, 4.03800583F, 0.427450567F,
    2.09895277F, 6.40272F, 0.531282425F, 2.86804795F, 1.52552342F, 4.51813316F,
    0.657503247F, 6.82680464F, 5.7474618F, 9.23154449F, 7.80182457F, 4.02518797F,
    0.806343198F, 6.88905F, 5.25401068F, 6.60934401F, 5.30189896F, 7.43939066F,
    7.37286711F, 3.74675322F, 5.86554718F, 5.16080618F, 9.34296894F, 6.16295719F,
    5.21580124F };


  RT_LOCAL_DATA static const float fv4[8] = { 13792.2275F, 13791.9521F, 7600.69336F,
    7600.54102F, 9808.18555F, 9807.99F, 14690.0312F, 14689.7383F };


/////////////////////////////////////////////////////////
// subfunctions
/////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////
// main testing function 
/////////////////////////////////////////////////////////
int main(int argc, const char * const argv[])
{
  if (rt_cluster_id() != 0)
    return bench_cluster_forward(0);

  (void)argc;
  (void)argv;

  int coreid;
  int it;

  boolean_T pass;
  int k;
  float fv0[10];
  float f0;
  int i0;
  int i1;
  float golden[2];

  
  /////////////////////////////////////////////////////////
  // main test loop 
  // each core loops over a kernel instance
  /////////////////////////////////////////////////////////

  coreid = rt_core_id();
  printf("starting %d kernel iterations... (coreid = %d)\r\n",KERNEL_ITS,coreid);

    if (coreid>3)
    coreid= (coreid-4) % 4;

  synch_barrier();

  perf_begin();

  for(it = 0; it < KERNEL_ITS; it++)
  {
    // matlab kernel
    f0 = 0.0F;
    for (i0 = 0; i0 < 10; i0++) {
      fv0[i0] = 0.0F;
      for (i1 = 0; i1 < 10; i1++) {
        fv0[i0] += fv2[i1 + 10 * coreid] * fv1[(i1 + 10 * i0) + 100 * coreid];
      }

      f0 += fv0[i0] * fv3[i0 + 10 * coreid];
    }

  }

  synch_barrier();

  perf_end();

  /////////////////////////////////////////////////////////
  // check results
  /////////////////////////////////////////////////////////

  pass = (f0 <= fv4[(coreid << 1)]) && (f0 >= fv4[1 + (coreid << 1)]);
  printErrors(!pass, 0, f0 ,fv4[(coreid << 1)] ,fv4[1 + (coreid << 1)]);
  
  flagPassFail(pass, get_core_id());
  
  synch_barrier();

/////////////////////////////////////////////////////////
// synchronize and exit
/////////////////////////////////////////////////////////

  return !pass;
}

