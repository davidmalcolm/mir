/* This file is a part of MIR project.
   Copyright (C) 2020 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

/* See C11 5.2.4.2.2 */
#ifndef __FLOAT_H
#define __FLOAT_H

#define FLT_RADIX 2

#define FLT_MANT_DIG 24
#define DBL_MANT_DIG 53
#define LDBL_MANT_DIG DBL_MANT_DIG

#define FLT_DECIMAL_DIG 9
#define DBL_DECIMAL_DIG 17
#define LDBL_DECIMAL_DIG DBL_DECIMAL_DIG
#define FLT_DIG FLT_DECIMAL_DIG
#define DBL_DIG DBL_DECIMAL_DIG
#define LDBL_DIG LDBL_DECIMAL_DIG

#define DECIMAL_DIG LDBL_DECIMAL_DIG

#define FLT_MIN_EXP -125
#define DBL_MIN_EXP -1021
#define LDBL_MIN_EXP DBL_MIN_EXP

#define FLT_MIN_10_EXP -37
#define DBL_MIN_10_EXP -307
#define LDBL_MIN_10_EXP DBL_MIN_10_EXP

#define FLT_MAX_EXP 128
#define DBL_MAX_EXP 1024
#define LDBL_MAX_EXP DBL_MAX_EXP

#define FLT_MAX_10_EXP 38
#define DBL_MAX_10_EXP 308
#define LDBL_MAX_10_EXP DBL_MAX_10_EXP

#define FLT_MAX 0x1.fffffep+127
#define DBL_MAX 0x1.fffffffffffffp+1023
#define LDBL_MAX DBL_MAX

#define FLT_EPSILON 0x1p-23
#define DBL_EPSILON 0x1p-52
#define LDBL_EPSILON DBL_EPSILON

#define FLT_MIN 0x1p-126
#define DBL_MIN 0x1p-1022
#define LDBL_MIN DBL_MIN

#define FLT_TRUE_MIN 0x1p-149
#define DBL_TRUE_MIN 0x0.0000000000001p-1022
#define LDBL_TRUE_MIN DBL_TRUE_MIN

#define FLT_EVAL_METHOD 0
#define FLT_ROUNDS 1 /* round to the nearest */

#endif /* #ifndef __FLOAT_H */
