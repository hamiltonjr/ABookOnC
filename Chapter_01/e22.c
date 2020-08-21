/**
 * Exercise 22.
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXSTRING 1024

/**
 * This code implements a letters counter. It counts only
 * uppercase and lowercase letters (punctuation and white
 * spaces are not counted).
 * 
 * The input are made by redirection.
 */
int main()
{
    // definitions
    register size_t counter = 0;
    char c = ' ';

    // take characters of stdin
    while ((c = getchar()) != EOF)
    {
        if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
        {
            counter++;
        }
    }

    // show final message
    printf("\n\tNumber of letters: %zu\n", counter);
    printf("\tWhite spaces and punctuation are not counted.\n\n");

    // the end
    return EXIT_SUCCESS;
}

