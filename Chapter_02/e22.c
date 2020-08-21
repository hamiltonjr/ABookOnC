/**
 * Exercise 22.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code tests constant string representation.
 */

int main()
{
    printf("\n\t%c%c%c%c%c\n\n", "ghi"[1], *("def" + 1),
            *"abc" + 11, "klm"[1], *"ghi" + 8        
    );

    return EXIT_SUCCESS;
}

