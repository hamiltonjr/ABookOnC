#include "08_sum_sqr.h"

// calculate sum of squares of a function f.
double sum_square(double f(double x), int m, int n)
{
    double sum = 0.0;
    
    for (unsigned int k = m; k <= n; ++k)
    {
        sum += f(k) * f(k);
    }

    return sum;
}

