#ifndef __LIB_FIXPOINT_1714_H
#define __LIB_FIXPOINT_1714_H

/* 17.14 fixed-point format:
   
   17 bits for integer part
   14 bits for fractional part
*/

#include <stdint.h>

#define F (1 << 14)

/* Converts an integer to a 17.14 fixed-point number. */
int int_to_fixpoint_1714 (int n);
#define int_to_fixpoint_1714(n) (n * F)

/* Converts an 17.14 fixed point to an integer (rouding to zero) */
int fixpoint_1714_to_int_zero (int x);
#define fixpoint_1714_to_int_zero(x) (x / F)

/* Converts a 17.14 fixed-point number to a nearest integer. */
int fixpoint_1714_to_int (int x);
#define fixpoint_1714_to_int(x) ((x) >= 0 ? ((x) + F / 2) / F : ((x) - F / 2) / F)

/* Adds two 17.14 fixed-point numbers and returns the result. */
int fixpoint_1714_add (int x, int y);
#define fixpoint_1714_add(x, y) (x + y)

/* Subtracts two 17.14 fixed-point numbers and returns the result. */
int fixpoint_1714_sub (int x, int y);
#define fixpoint_1714_sub(x, y) (x - y)

/* Adds an integer N to a 17.14 fixed-point number X and returns the result. */
int fixpoint_1714_add_int (int x, int n);
#define fixpoint_1714_add_int(x, n) (x + n * F)

/* Subtracts an integer N from a 17.14 fixed-point number X and returns the result. */
int fixpoint_1714_sub_int (int x, int n);
#define fixpoint_1714_sub_int(x, n) (x - n * F)

/* Multiplies two 17.14 fixed-point numbers and returns the result. */
int fixpoint_1714_mul (int x, int y);
#define fixpoint_1714_mul(x, y) ((int64_t)(x) * (y) / F)

/* Multiplies a 17.14 fixed-point number X by an integer N and returns the result. */
int fixpoint_1714_mul_int (int x, int n);
#define fixpoint_1714_mul_int(x, n) (x * n)

/* Divides two 17.14 fixed-point numbers and returns the result. */
int fixpoint_1714_div (int x, int y);
#define fixpoint_1714_div(x, y) (((int64_t)(x) * F) / (y))

/* Divides a 17.14 fixed-point number X by an integer N and returns the result. */
int fixpoint_1714_div_int (int x, int n);
#define fixpoint_1714_div_int(x, n) (x / n) 

#endif /* lib/fixpoint_1714.h */