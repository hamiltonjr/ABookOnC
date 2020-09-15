/**
 * Exercise 30.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Tasting goto...
 */
int main()
{
    unsigned int i = 0;

    printf("\n");
w:  
    printf("\ti = %u\n", ++i);
    if (i < 10)
    {
        goto w;
    }
    printf("\n");

    return EXIT_SUCCESS;
}

