/**
 * Exercise 21.
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * Typing abc and enter key returns 3.
 * 
 * Typing ab and enter key returns 3 because enter is \n.
 * 
 * Typing abcdefghijklmnopqrstuvwxyz returns 3 because excedent
 * characters are not counted.
 * 
 * Typing ctrl+d returns -1.
 */
int main()
{
    char c1, c2, c3;

    // input
    printf("\tInput three characters: ");
    int cnt = scanf("%c%c%c", &c1, &c2, &c3);

    // output
    printf("\tNumber of successful conversion: %d\n", cnt);

    return EXIT_SUCCESS;
}

