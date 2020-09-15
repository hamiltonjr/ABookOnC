/**
 * Exercise 35.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define POW 0.5

/**
 * This code implements calculation of square root of a number
 * using a derived of Newton-Raphson method. Really convergence
 * is good, because it is quadratic.
 */

int main()
{
    double x0 = 0, x1 = 1;
    double x;
    int n = 0, n_conv = 0;
    bool conv = false;

    // input
    printf("\n\tType a value for calculate its square root: ");
    scanf("%lf", &x);
    printf("\tType how many iterations do you need: ");
    scanf("%d", &n);

    // header
    printf("\n\t%7s%10s%12s\n\t%30s\n", 
        "counter", "root", "n_conv",
        "------------------------------"
    );

    // iterations
    for (size_t i = 1; i <= n; ++i)
    {
        x0 = x1;
        x1 = POW * (x1 + x/x1); 

        if (x1 == x0 && conv == false)
        {
            n_conv = i;
            conv = true;
        }

        printf("\t%-10zu%.6lf\t%3d\n", i, x1, n_conv);
    }

    // the end
    printf("\t------------------------------\n\n");
    return EXIT_SUCCESS;
}

