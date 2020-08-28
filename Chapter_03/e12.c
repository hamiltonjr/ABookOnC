/**
 * Exercise 12.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * The compiler warnings overflows. It shows:
 * c1 = 0 (256-256 overflow = 0)
 * c2 = 1 (257-256 overflow = 1)
 */

int main()
{
    char c1 = 256, c2 = 257;
    printf("\n\tc1 = %d\n\tc2 = %d\n\n", c1, c2);
    return EXIT_SUCCESS;
}
