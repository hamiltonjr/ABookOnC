/**
 * Exercise 03.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NO_TAN_1 5
#define NO_TAN_2 15

int main() 
{
    // header
    printf("\n");
    printf("\t-----------------------------------------------------\n");
    printf("\t x\tsin(2PIx/20)\tcos(2PIx/20)\ttan(2PIx/20)\n");
    printf("\t-----------------------------------------------------\n");
    
    // lines of table
    for (size_t a=0; a<20; ++a)
    {
        if (a == NO_TAN_1 || a == NO_TAN_2)
        {
            // tan() is not defined
            printf("\t%2zu\t%+1.5f\t%+1.5f\t---------        \n", 
                a, sin(2*M_PI*a / 20), 
                cos(2*M_PI*a / 20));
        } else
        {
            // tan() is defined
            printf("\t%2zu\t%+1.5f\t%+1.5f\t%+1.5f\n", 
                a, sin(2*M_PI*a / 20), 
                cos(2*M_PI*a / 20), 
                tan(2*M_PI*a / 20));
        }
    }

    // footer
    printf("\t-----------------------------------------------------\n");
    printf("\t-----------------------------------------------------\n");
    printf("\n");

    return EXIT_SUCCESS;
}
