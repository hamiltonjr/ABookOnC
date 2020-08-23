/**
 * Program: power_square.c. p. 127.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main()
{

    double x;

    printf( "\n%s", 
            "\tThe following will be computed\n"
            "\tThe square root of x\n"
            "\tx rised to the power x\n\n"
    );


    while (true)
    {
        // input
        printf("\tInput x: ");
    
        // bdd input
        if (scanf("%lf", &x) != 1)
            break;

        // compute if nonegtive 
        if (x >= 0.0)
        {
            printf( "\n\t%15s%22.15e\n\t%15s%22.15e\n\t%15s%22.15e\n\n",
                    "\tx..........: ", x,
                    "\tsqrt(x)....: ", sqrt(x),
                    "\tpow(x, x)..: ", pow(x, x)
            );
        } else
        {
            printf("\n\tSorry! The number must be nonegative!\n");
            break;
        }
    }


    // the end
    printf("\n\tBye\n\n");
    return EXIT_SUCCESS;

}

