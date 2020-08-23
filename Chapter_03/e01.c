/**
 * Exercise 01.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * 17 digits is the greatest precision reached for double.
 * It is impossible to get better results for double. It is
 * unfruitiful add zeroes or do anyone.
 * 
 * Wikipedia: Double-precision floating-point format.
 */


int main()
{

    double x = 123.45123451234512345;
    double y = 123.45123451234512300;
    printf("\n\t%.17f\n\t%.17f\n\n", x, y);


    return EXIT_SUCCESS;

}

