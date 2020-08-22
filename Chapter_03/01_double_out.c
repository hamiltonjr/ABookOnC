/**
 * Program: double_out.c. p. 6124.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c;

    
    // catch characters
    while((c = getchar()) != EOF)
    {
        putchar(c);
        putchar(c);
    }


    return EXIT_SUCCESS;

}

