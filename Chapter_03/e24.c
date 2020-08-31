/**
 * Exercise 24.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * TRY ME: This code implements a copy of text using stream redirect.
 * After compiling use  ./a.out < text.txt > copy.txt   and the file
 * copy.txt will be a copy of text.txt.
 * 
 * Case it has an EOF in the middle of text, all after this character
 * will not be copied.
 */

int main()
{
    char c;

    while ((c = getchar()) != EOF)
        putchar(c);

    return EXIT_SUCCESS;
}
