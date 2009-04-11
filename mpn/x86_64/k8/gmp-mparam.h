/* Generated by tuneup.c, 2009-04-11, gcc 4.2 */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD              87
#define MUL_TOOM4_THRESHOLD             767
#define MUL_TOOM7_THRESHOLD             767

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          34
#define SQR_TOOM3_THRESHOLD             120

#define MULLOW_BASECASE_THRESHOLD         5
#define MULLOW_DC_THRESHOLD              28
#define MULLOW_MUL_N_THRESHOLD          339

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 56
#define POWM_THRESHOLD                  154

#define GCD_ACCEL_THRESHOLD             110
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD              5
#define GET_STR_PRECOMPUTE_THRESHOLD      7
#define SET_STR_THRESHOLD              7059

#define MUL_FFT_TABLE  { 848, 1696, 3776, 7936, 23552, 61440, 180224, 458752, 2359296, 7340032, 0 }
#define MUL_FFT_MODF_THRESHOLD          976
#define MUL_FFT_THRESHOLD             43008

#define SQR_FFT_TABLE  { 880, 1760, 3904, 7424, 19456, 45056, 147456, 458752, 1835008, 5242880, 0 }
#define SQR_FFT_MODF_THRESHOLD          976
#define SQR_FFT_THRESHOLD             17920

/* Tuneup completed successfully, took 1026 seconds */
