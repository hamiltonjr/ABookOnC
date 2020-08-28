/**
 * Exercise 14.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * If it is compiled with gcc e14.c, it is printed:
 * sizeof('A') = 4
 * because 'A' is stored like int.
 * 
 * If it is compiled with g++ e14.c, it is printed:
 * sizeof('A') = 1
 * because 'A' is stored like char.
 */

int main()
{
    printf("\n\tsizeof('A') = %u\n\n", sizeof('A'));
    return EXIT_SUCCESS;
}

