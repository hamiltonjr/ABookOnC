/**
 * Program: wrt_bkwrds.c. p. 225.
 */
#include <stdio.h>
#include <stdlib.h>

// prototype
void wrt_it();

int main()
{
    // header
    printf("===================\n");
    printf(" WRITE IT BACKWARD \n");
    printf("===================\n");
    printf("This program allows to type a line and show it backward.\n");
    printf("Input a line: ");

    // input
    wrt_it();

    // output
    printf("\n\n");

    // the end
    return EXIT_SUCCESS;
}

/**
 * This function recursively takes a character by turn and show
 * the line typed backwards.
 */
void wrt_it()
{
    int c;

    if ((c = getchar()) != '\n')
        wrt_it();
    putchar(c);    
}

