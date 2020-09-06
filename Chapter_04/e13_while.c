/**
 * Exercise 13 - for version.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code sums a sequence of numbers [n,2n] for n>=0 or
 * [2n, n] for n<0. This version uses for loop.
 */

int main()
{
    int n, sum = 0;

    // input number
    printf("\n\tEnter a integer number: ");
    scanf("%d", &n);

    // decision and sum of sequence
    if (n >= 0)
    {
        for (int i=n; i<=2*n; ++i)
        {
            sum += i;
        }
    } else
    {
        for (int i=2*n; i<=n; ++i)
        {
            sum += i;
        }
    }
    
    // output
    printf("\n\tsum = %d\n\n", sum);

    // the end
    return EXIT_SUCCESS;
}

