/**
 * Exercise 26.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Compiling and running the code:
 * a = 2748        b = 2748        c = 2748
 * 
 * All notations ares similar.
 */
int main()
{
    int a = 0xabc;
    int b = 0xABC;
    int c = 0xABc;

    printf("\n\ta = %d\tb = %d\tc = %d\n\n", a, b, c);

    return EXIT_SUCCESS;
}
