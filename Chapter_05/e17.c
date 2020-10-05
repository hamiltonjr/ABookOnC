/**
 * Exercise 17.
 */
#include <stdio.h>
#include <stdlib.h>
#include "../includes/_calc.h"
#define MAX 21

/**
 * This code implements factorial, but forgot it grows exponetially.
 * Depending system, factorial(10) goes to overflow.
 * 
 * Conclusion: for greater results (20! for example) it
 * is needed to use double or other resources.
 *
 * Using long long unsigned int I got to calculate 21!. 
 */

int main()
{
    printf("\n");
    for (int n = 0; n <= MAX; ++n)
    {
        printf("\t%d! = %llu\n", n, factorial(n));
    }
    printf("\n");

    return EXIT_SUCCESS;
}

