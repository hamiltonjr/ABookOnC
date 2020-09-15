/**
 * Exercise 39.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  PRECISION 1.0e-7

/**
 * This code implements calculation of e, base of neperian logarithm.
 * It uses a more efficient method (infinite series) to converge to
 * a solution. n = 11 for a solution with 7 decimals of precision.
 */

int main()
{
    int n = 1;
    double e = 2.0, e_previous = 0.0;
    long double fact = 1.0;
    double error = fabs(e - e_previous);

    printf("\n\t-----------------------------\n");
    // show initial value
    printf("\t %-5d%10.10lf%10.7lf\n", n, e, error);

    // iterative method (series convergence)
    while (error > PRECISION)
    {
        e_previous = e;
        fact *= ++n;                    // factorial denominator
        e += 1.0/fact;                  // partial of e
        error = fabs(e - e_previous);   // error

        // show partial result
        printf("\t %-5d%10.10lf%10.7lf\n", n, e, error);
    }
    printf("\t-----------------------------\n");
    printf("\t Precision: %6e", PRECISION);
    printf("\n\t-----------------------------\n\n");

    return EXIT_SUCCESS;
}
