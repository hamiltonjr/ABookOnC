/**
 * Exercise 03.
 */
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    // all variables are double
    double kilometers = 0.0;
    double yards = 385.0;
    double miles = 26.0;

    // calculating kilometers
    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\n\tA marathon is %f kilometers.\n\n", kilometers);

    return EXIT_SUCCESS;
}

