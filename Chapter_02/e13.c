/**
 * Exercise 13.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code shows a simple table (one line) with powers of 2.
 * It is a new version with a reverse counting using for loop.
 */
int main()
{
    printf("\n\t");
    for (register size_t power=1024; power>0; power /= 2)
    {
        printf("%-6zu", power);
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}

