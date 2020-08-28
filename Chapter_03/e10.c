/**
 * Exercise 10.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char          c = -1; // equivalent to signed char
    signed char   s = -1; // signed char  -128 to 127
    unsigned char u = -1; // unsugned cha    0 to 255

    printf("\n\tc = %d s = %d u = %d\n\n", c, s, u);
    return EXIT_SUCCESS;
}

