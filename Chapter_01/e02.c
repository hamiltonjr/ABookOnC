/**
 * Exercise 02.
 */
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    float kilometers = 0.0;
    int yards = 385;
    int miles = 26;

    // calculating kilometers
    kilometers = 1.609 * (miles + yards/1760);
    printf("\n\tA marathon is %f kilometers.\n\n", kilometers);

    return EXIT_SUCCESS;
}

