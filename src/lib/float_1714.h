#ifndef __LIB_FLOAT_1714_H
#define __LIB_FLOAT_1714_H

/* 17.14 fixed-point format:
   
   17 bits for integer part
   14 bits for fractional part
*/

#include <stdint.h>

#define F (1 << 14)

/* Converts an integer to a 17.14 fixed-point number. */
int int_to_float_1714 (int n);

/* Converts an 17.14 fixed point to an integer (rouding to zero) */
int float_1714_to_int_zero (int x, int y);

/* Converts a 17.14 fixed-point number to a nearest integer. */
int float_1714_to_int (int x);

/* Adds two 17.14 fixed-point numbers and returns the result. */
int float_1714_add (int x, int y);

/* Subtracts two 17.14 fixed-point numbers and returns the result. */
int float_1714_sub (int x, int y);

/* Adds an integer N to a 17.14 fixed-point number X and returns the result. */
int float_1714_add_int (int x, int n);

/* Subtracts an integer N from a 17.14 fixed-point number X and returns the result. */
int float_1714_sub_int (int x, int n);

/* Multiplies two 17.14 fixed-point numbers and returns the result. */
int float_1714_mul (int x, int y);

/* Multiplies a 17.14 fixed-point number X by an integer N and returns the result. */
int float_1714_mul_int (int x, int n);

/* Divides two 17.14 fixed-point numbers and returns the result. */
int float_1714_div (int x, int y);

/* Divides a 17.14 fixed-point number X by an integer N and returns the result. */
int float_1714_div_int (int x, int n); 

#endif /* lib/float_1714.h */