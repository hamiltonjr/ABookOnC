/**
 * Exercise 12.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code shows a simple table (one line) with powers of 2.
 * It is a new version with a reverse counting. Integer division
 * allows to stop loop because 1/2 = 0.  
 */
int main()
{
    register size_t power = 2048;
    register size_t i = 0;

    printf("\n\t");
    while ((power /= 2) > 0)
    {
        printf("%-6zu", power);
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}

