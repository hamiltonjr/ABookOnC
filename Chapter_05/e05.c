/**
 * Exercise 05.
 */
#include <stdio.h>
#include <stdlib.h>

// prototype
// double pow();                // traditional C78-
// double pow(double, double);  // standard    C89+

/**
 * Traditional prototype allows only the matching types (no coercing).
 * With standard prototype it is allowed to use types with more freedom
 * because the type coersion is allowed. No prototype only if function
 * code is in the same file as main() (and defined before it).
 */
int main()
{
    printf("\n\tpow(2, 3) = %g\n\n", pow(2, 3));
    return EXIT_SUCCESS;
}

