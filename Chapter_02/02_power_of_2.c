/**
 * Program: power_of_2.c. p. 89.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/**
 * This code shows a simple table (one line) with powers of 2.
 */
int main()
{
    register size_t power = 1;
    register size_t i = 0;

    // show powers
    printf("\n\t");
    while (++i <= MAX)
    {
        printf("%-6zu", power *= 2);
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}

