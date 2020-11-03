#include <math.h>
#include "../../includes/_calc.h"

// this function calculate power of
// base b and exponent e.
double power(double b, int e)
{
    double result = b;
    
    for (size_t i = 1; i < e; ++i)
    {
        result *= b;
    }
    
    return result;
}

// this function calculate 4th root
// of a number.
double ftrt(int x)
{
    return sqrt(sqrt(x*1.0));
}

// this function return 1 if a number is prime.
int is_prime(int n)
{
    int r, prime = 1;

    // no negative prime
    if(n <= 1)
    { 
        return 0;
    }

    // 2 is the unique even prime
    if(n != 2 && n % 2 == 0)
    {
       prime = 0;
    } else
    {
        // searching for some divisor using Sieve of Eratostenes.
        // if no divisor, the number is prime.
        for(int i = 3, r = sqrt(n); i <= r && prime; i += 2)
        {
            if (n % i == 0)
            {
                prime = 0;
            }
        }
    }

    return prime;
}

// this function calculate the n-th Fibonacci number.
long nth_fibo(int n)
{
    long int f0 = 1, f1 = 1, temp;
    
    // increase until n-th Fibonacci number
    for (long int i = 2; i < n; ++i)
    {
        temp = f1;
        f1 += f0;
        f0 = temp;
    }

    return f1;
}

// this function calculate factorial of a number.
LLUI factorial(LLUI n)
{
    if (n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}


// this function calculate the Great Common Divisor (GCD)
// of two numbers. The algorithm is recursive.
int gcd_r(int p, int q)
{
    int r; //  remainder

    if ((r = p%q) == 0)
        return q;
    else
        return gcd_r(q, r);
}

// this function calculate the great Common nDivisor (GCD)
// of two numbers. The algorithm is iterative.
int gcd_i(int p, int q)
{
    int r; //  remainder

    while (p != 0)
    {
        r = p;
        p =q%p;
        q = r;
    }

    return q;
}

