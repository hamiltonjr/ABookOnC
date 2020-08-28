/**
 * Exercise 11.
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * The biggest integer is machine-dependent. It is a 64-bits
 * modern computer and biggest is 18.446.744.073.709.551.615.
 * 18 sextillions.
 */

int main()
{
    unsigned long val = -1;
    printf("\n\tThe biggest integer value: %lu\n", val);
    printf("\tEquivalent to UINT_MAX = %u\n\n", UINT_MAX);
    return EXIT_SUCCESS;
}

