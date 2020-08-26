/**
 * Exercise 04.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * For simple precision occured truncation.
 * For double precision occured rounding. 
 * 
 * Simple precision: truncation
 * 123.4512345
 * 123.45123451
 * 123.451234512
 * 
 * Double precision: rounding
 * 123.4512345123451240
 * 123.45123451234512402
 * 123.451234512345124017
 */

int main()
{
    double x = 123.4512345123451234512345;

    // verify rounding for floatin-point
    // simple precision
    printf("\n");
    printf("\t%3.7f\n", x);
    printf("\t%3.8f\n", x);
    printf("\t%3.9f\n", x);
    printf("\n");

    // verify rounding for floatin-point
    // double precision
    printf("\t%3.16lf\n", x);
    printf("\t%3.17lf\n", x);
    printf("\t%3.18lf\n", x);
    printf("\n");
    
    return EXIT_SUCCESS;
}
