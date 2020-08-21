/**
 * Exercise 12.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/**
 * This code implements a table of powers presentation. The powers is 
 * until 5. The number of lines is given by MAX defined constant. 
 */

int main() 
{
    // header
    printf("\n");
    printf("\t::::::::::::::::::::: A TABLE OF POWERS :::::::::::::::::::::\n");
    printf("\tIntegers      Square      3rd power    4th power    5th power\n");
    printf("\t-------------------------------------------------------------\n");

    // outer loop controls lines and values
    for (register size_t i=1; i<=MAX; ++i)
    {
        size_t power = i;
        printf("\t%7zu", power);

        // inner loop controls columns and powers
        for (size_t j=2; j<=5; ++j)
        {
            power *= i;
            printf("%13zu", power);
        }
        printf("\n");
    }

    // footer
    printf("\t-------------------------------------------------------------\n");
    printf("\n");

    return EXIT_SUCCESS;
}

