#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI_E pow(M_PI, M_E)
#define E_PI pow(M_E, M_PI)

/**
 * An approximated value for both is 27, because both numbers are 
 * near 3: e ~ 3,  pi ~ 3   =>   p^e ~ 3^3 = 27,  e^pi ~ 3^3 = 27.
 * 
 * Calculating...
 * pi^e = 22.459157718361041
 * e^pi = 23.140692632779263
 */

int main()
{
    printf("\n\te = %1.15lf\n", M_E);
    printf("\tpi = %1.15lf\n", M_PI);

    printf("\n\tpi^e = %1.15lf\n", PI_E);
    printf("\te^pi = %1.15lf\n\n", E_PI);

    return EXIT_SUCCESS;
}
