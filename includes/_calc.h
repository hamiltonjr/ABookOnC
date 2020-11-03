#ifndef _CALC_H
#define _CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef long long unsigned int LLUI;

// power of base b and exponent e.
double power(double b, int e);

// 4-th root of x.
double ftrt(int x);

// verify if x is prime.
int is_prime(int x);

// calculate the n-th Fibonacci number.
long nth_fibo(int n);

// calculate the factorial of n.
LLUI factorial(LLUI n);

// Greatest Common Divisor (GCD) of p and q (recursive).
int gcd_r(int p, int q);

// Greatest Common Divisor (GCD) of p and q (iteractive).
int gcd_i(int p, int q);

#endif

