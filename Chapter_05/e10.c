/**
 * Exercise 10.
 */
#include <stdio.h>
#include <stdlib.h>
#include "../includes/_calc.h"
#define NLINES 9
#define NCOLS 7

/**
 * This code implements a table of powers. The goal of the exercise is
 * show how far power can go in terms of precision. Using long integers,
 * it can be until ULONG_MAX = 18446744073709551615. Using long double 
 * precision, it can go until 3.4e+4932.
 *
 * It is a copy of e09.c where was erased prototypes and main function
 * was trabnseferd by the end of code. Sure it works properly.
 */


/**
 * This function implements a header for this program.
 */
void prn_heading()
{
    printf("\n");
    for (size_t i = 0; i < 30; ++i)
    {
        printf(":");
    }
    printf(" A TABLE OF POWERS ");
    for (size_t i = 0; i < 30; ++i)
    {
        printf(":");
    }
    printf("\n\n");
}


/**
 * This function implements a footer for this program.
 */
void prn_footer()
{
    printf("\n");
    for (size_t i = 0; i < 80; ++i)
    {
        printf(":");
    }
    printf("\n\n");
}


/**
 * This function implements a table of powers using the function
 * power().
 */
void prn_tbl_of_powers(int n, int c)
{
    for (int i = 1; i < n; ++i)
    {
        printf("\t%1.3lf", power(i, 1));
        for (int j = 2; j < c; ++j)
        {
           printf("%12.3lf", power(i, j));
        }
        printf("\n");
    }
}

/** 
 * Main function.
 */
int main()
{
    prn_heading();
    prn_tbl_of_powers(NLINES, NCOLS);
    prn_footer();
    return EXIT_SUCCESS;
}

