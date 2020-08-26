/**
 * Exercise 02.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TWO_PI 2 * 3.14159265358979323846
#define H 0.5


/**
 * This code shows that sin^2(x) + cos^2(x) = 1 is valid for 
 * floating-point numbers between 0 and 2*PI. It has some var-
 * iation around 1.000000, but it is small. 
 *
 * Using %f the result looks better. 
 */


int main()
{

    printf("\n");
    printf("\t---------------------------------\n");
    printf("\t   x           sin²x + cos²x     \n");
    printf("\t---------------------------------\n");


    for (double x=0.0; x<TWO_PI; x += H)
    {
        printf("\t%5.1f        %.15f\n", 
                x, sin(x)*sin(x) + cos(x)*cos(x));
    }


    printf("\t---------------------------------\n");
    printf("\t---------------------------------\n");
    printf("\n");

    return EXIT_SUCCESS;

}

