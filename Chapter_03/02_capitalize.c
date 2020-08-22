/**
 * Program: capitalize.c p. 126.
 */
#include <stdio.h>
#include <stdlib.h>


int main()
{

    int c;


    // catch characters
    while((c = getchar()) != EOF)
    {
        if (c>='a'&& c<='z')
        {
            putchar(c - 'a'+ 'A');
        } else 
        {
            putchar(c);
        }
    }

    return EXIT_SUCCESS;

}

