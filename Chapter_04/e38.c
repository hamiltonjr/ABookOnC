/**
 * Exercise 38.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PRECISION 1.0e-7

/**
 * This code implements calculation of e, base of neperian logarithm.
 * In truth, it is very unefficient:  n  =  3687 for 7 decimals of 
 * precision.
 */

int main()
{
    int n = 1;
    double x0 = 0.0, x1 = 1.0;
    double error = fabs(x1 - x0);

    printf("\n\t-------------------------------\n");
    while (error > PRECISION)
    {
        x0 = x1;
        x1 = pow(1.0 + 1.0/n, n);
        error = fabs(x1 - x0);
        printf("\t %-5d%10.10lf%10.7lf\n", n++, x1, error);
    }
    printf("\t-------------------------------\n");
    printf("\t Precision: %6e\n", PRECISION);
    printf("\t---------------------------------\n\n");

    return EXIT_SUCCESS;
}

