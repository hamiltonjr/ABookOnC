/**
 * Exercise 02.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../includes/_calc.h"
#define MAX 10

/**
 * This code implements power calculation.
 */

int main()
{
    // testing function
    printf("\n\t----------------------\n");
    printf("\t%2s%20s\n", " n", "4th root(n)");
    printf("\t----------------------\n");
    for (int n = 2; n <= MAX; ++n)
    {
        int power = n*n*n*n;
        printf("\t %-10d%10lf\n", power, ftrt(power));
    }
    printf("\t----------------------\n\n");

    return EXIT_SUCCESS;
}

