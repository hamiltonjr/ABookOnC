/**
 * Exercise 05.
 */
#include <stdio.h>
#include <stdlib.h>
#define NLINES 10

/**
 * This code implements a table with powers of 2. It is
 * interesting to observe the behavior of powers of 2 in
 * hexa and octal basis.
 */

int main()
{
    int val = 1;

    // header
    printf("\n\t%5s%15s%15s%15s\n", "Num","Dec", "Hex", "Oct");
    printf("\t------------------------------------------------------\n");

    // lines of table
    for (size_t i = 1; i <= NLINES; ++i)
    {
        printf("\t%5zu%15d%15x%15o\n", i, val, val, val);
        val *= 2;
    }

    // footer
    printf("\t------------------------------------------------------\n");
    printf("\t------------------------------------------------------\n\n");

    return EXIT_SUCCESS;
}
