/**
 * Exercise 04.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code reads a text file and counts letters Aa Bb Cc.  
 */

int main()
{
    unsigned int counter = 0;
    int c;

    // reads stdin and counts Aa Bb Cc
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'C') || (c >= 'a' && c <= 'c'))
        {
            ++counter;
        }
    }

    // show result
    printf("\n\tOccurrences of A, B, C or a, b, c: %d\n\n", counter);

    // the end
    return EXIT_SUCCESS;
}

