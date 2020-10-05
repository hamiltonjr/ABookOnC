/**
 * Exercise 18.
 */
#include <stdio.h>
#include <stdlib.h>
#include "../includes/_calc.h"

int main()
{
    int p,q;

    // input
    printf("\n\tThis program calculates GDC of to integers...\n");
    printf("\tp: ");
    scanf("%d", &p);
    printf("\tq: ");
    scanf("%d", &q);

    // output
    printf("\tgcd(%d, %d) = %d\n\n", p, q, gcd_r(p, q));

    return EXIT_SUCCESS;
}

