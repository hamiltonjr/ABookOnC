/**
 * Exercise 18.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * The machine calculated x * x = inf.
 */

int main()
{
    double x = 1.0e+307;
    double y = x * x;

    printf("\n\tx = %e\n\ty = %e\n\n", x, y);
    
    return EXIT_SUCCESS;
}
