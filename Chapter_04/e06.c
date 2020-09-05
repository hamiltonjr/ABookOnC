/**
 * Exercise 06.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code shows results of calculations with bitwisw operators.
 * Such calculation has not practical importance: only for studies.
 */

int main()
{
    char c = 'A';
    int i = 5, j = 10;

    printf("\n\t%d %d %d\n", !c, !!c, !!!c);
    printf("\t%d %d %d\n", -!i, !-i, !-i - !j);
    printf("\t%d %d %d\n\n", !(6*j + i - c), !i - 5, !j - 10);

    return EXIT_SUCCESS;
}
