/**
 * Program: consecutive_sums.c. p. 23.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i = 0;
    int sum = 0;

    // processing sum
    while (i <= 5) 
    {
        sum += i++;
    }

    // output
    printf("\n\tSum = %d\n\n", sum);
    return EXIT_SUCCESS;
}

