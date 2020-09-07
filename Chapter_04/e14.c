/**
 * Exercise 14.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code is like:
 *     putchar('1'); 
 *     for (;;)
 *     {
 *         putchar('2'); 
 *         putchar('3'))
 *         putchar('4');
 *     }
 */
int main()
{
    for (putchar('1'); putchar('2'); putchar('3'))
        putchar('4');
    return EXIT_SUCCESS;
}

