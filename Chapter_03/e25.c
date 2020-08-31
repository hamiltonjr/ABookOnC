/**
 * Exercise 25.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Compiling and running this code:
 * abs(x) = 2.121996e-314
 * fabs(x) = 2.357000e+00
 * 
 * The values are differents.
 */

int main()
{
    double x = -2.357;

    printf("\n\tabs(x) = %d\n", abs(x));
    printf("\tfabs(x) = %e\n\n", fabs(x));
    
    return EXIT_SUCCESS;
}
