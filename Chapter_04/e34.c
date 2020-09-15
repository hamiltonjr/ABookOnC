/**
 * Exercise 34.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POW 0.5

/**
 * This code implements calculation of square root of a number
 * using a derived of Newton-Raphson method. Really convergence
 * is good, because it is quadratic.
 */

int main()
{
    size_t counter = 0;
    double x0 = 0.0, x1 = 1.0;
    double x;

    // input
    printf("\n\tType a value for calculate its square root: ");
    scanf("%lf", &x);

    // header
    printf("\t%7s%10s%12s\n", 
        "counter", "root", "error"
    );

    // iterations
    while (x0 != x1)
    {
        x0 = x1;
        x1 = POW * (x1 + x/x1); 

        printf("\t%3zu%15lf  [%9lf]\n", ++counter, x1, fabs(x - x1*x1));
    }
    printf("\n");

    // the end
    return EXIT_SUCCESS;
}

