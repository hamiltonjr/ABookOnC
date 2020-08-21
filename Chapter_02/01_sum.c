/**
 * Program: sum.c. p. 71.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    register int sum = 0;

    // input
    printf("\n\tInput two integers: ");
    scanf("%d%d", &a, &b);

    // processing
    sum = a + b;

    // output
    printf("\n\t%d + %d = %d\n\n", a, b, sum);

    return EXIT_SUCCESS;
}

