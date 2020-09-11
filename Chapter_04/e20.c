/**
 * Exercise 20.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, x;

    x = 0 && (a = b = 777);
    printf("\n\t%d %d %d\n", a, b, x);

    x = 777 || (a = ++b);
    printf("\t%d %d %d\n\n", a, b, x);

    return EXIT_SUCCESS;
}

