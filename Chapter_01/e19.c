/**
 * Exercise 19.
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * This code allows user input 3 integer numbers by keyboard.
 * Typing 2 3 4 the return is 3.
 * Typing 2 3 x the return is 2.
 * Typing ctrl + d (EOF in Linux) the return is -1;
 */

int main()
{
    int n1, n2, n3;
    int cnt = scanf("%d%d%d", &n1, &n2, &n3);
    printf("\t%d\n", cnt);
    return EXIT_SUCCESS;
}

