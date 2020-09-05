/**
 * Program: loop.c. p. 174.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This is a modified version that not results an infinite loop.
 * The stop criterium is basedan integer value.
 */
int main()
{
    double sum = 0.0;
    int cnt = 0;

    printf("\n");
    for (double x=0.0; cnt<100; x+=0.1, sum+=x)
    {
        printf("\tcnt = %5d\tx = %1.2f\n", ++cnt, x);
    }
    
    printf("\n\tsum = %18f\n\n", sum);

    return EXIT_SUCCESS;
}

