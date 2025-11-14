#include "lib/float_1714.h"
#include <stdint.h>

/* Converts an integer to a 17.14 fixed-point number. */
int
int_to_float_1714 (int n)
{
    return n * F;
}

/* Converts an 17.14 fixed point to an integer (rouding to zero) */
int
float_1714_to_int_zero (int x, int y)
{
    return x / F;
}

/* Converts a 17.14 fixed-point number to a nearest integer. */
int
float_1714_to_int (int x)
{
    if (x >= 0)
        return (x + F / 2) / F;
    else
        return (x - F / 2) / F;
}

/* Adds two 17.14 fixed-point numbers and returns the result. */
int
float_1714_add (int x, int y)
{
    return x + y;
}

/* Subtracts two 17.14 fixed-point numbers and returns the result. */
int
float_1714_sub (int x, int y)
{
    return x - y;
}

/* Adds an integer N to a 17.14 fixed-point number X and returns the result. */
int
float_1714_add_int (int x, int n)
{
    return x + n * F;
}

/* Subtracts an integer N from a 17.14 fixed-point number X and returns the result. */
int
float_1714_sub_int (int x, int n)
{
    return x - n * F;
}

/* Multiplies two 17.14 fixed-point numbers and returns the result. */
int
float_1714_mul (int x, int y)
{
    return ((int64_t) x) * y / F;
}

/* Multiplies a 17.14 fixed-point number X by an integer N and returns the result. */
int
float_1714_mul_int (int x, int n)
{
    return x * n;
}

/* Divides two 17.14 fixed-point numbers and returns the result. */
int
float_1714_div (int x, int y)
{
    return ((int64_t) x) * F / y;
}

/* Divides a 17.14 fixed-point number X by an integer N and returns the result. */
int
float_1714_div_int (int x, int n)
{
    return x / n;
}