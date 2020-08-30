/**
 * Exercise 22.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * The output shows that my compiler do onto none widering.
 * 
 * sizeof(float) = 4
 * sizeof(double) = 8
 * sizeof(x + y) = 4
 */

int main()
{
    float x = 1.0;
    float y = 2.0;
    double z = 3.0;
    //long float z = 3.0;

    printf( "\n\t%s%u\n\t%s%u\n\t%s%u\n\n",
            "sizeof(float) = ", sizeof(float),
            "sizeof(double) = ", sizeof(double),
            "sizeof(x + y) = ", sizeof(x + y)
    );

    return EXIT_SUCCESS;
}
