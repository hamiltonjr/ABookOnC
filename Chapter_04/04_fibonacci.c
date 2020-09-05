/**
 * Program: fibonacci.c. p. 17...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIMIT 40

/**
 * This code shows that Fibonacci sequence quotients of consecutive numbers
 * converges to (1 + srt(5)) / 2. It is a interesting property of Fibonacci
 * sequence.
 */

int main()
{
    long f0 = 0, f1 = 1, n, temp;

    // presentation
    printf("\n\tThis code shows that Fibonacci sequence quotients of consecutive"
    " numbers converges \n\tto (1 + srt(5)) / 2. It is a interesting property of "
    "Fibonacci sequence.\n");
    printf("\n\t(1 + sqrt(5)) / 2 = %.16lf\n\n", (1 + sqrt(5)) / 2);

    // header
    printf("\t--------------------------------------------------------\n");
    printf("\t                    Fibonacci           Fibonacci       \n");
    printf("\t      n               number             quotien        \n");
    printf("\t--------------------------------------------------------\n");

    // first values
    printf("\t%7d%19d\n\t%7d%19d\n", 0, 0, 1, 1);

    // table lines
    for (unsigned int i = 2; i < LIMIT; ++i)
    {
        temp = f1;
        f1 += f0;
        f0 = temp;
        printf("\t%7u%19ld%29.16f\n", i, f1, (double)f1/f0);
    }

    // the end
    printf("\t--------------------------------------------------------\n\n");
    return EXIT_SUCCESS;
}

