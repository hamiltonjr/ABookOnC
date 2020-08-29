/**
 * Exercise 16.
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define ULONG_MIN 0L

/**
 * The min unsigned long int is 0U. 
 * The max unsigned long int is 18446744073709551615U.
 */

int main()
{
    printf("\n\t%lu\n", ULONG_MIN);
    printf("\t%lu\n\n", ULONG_MAX);

    return EXIT_SUCCESS;
}
