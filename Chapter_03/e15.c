/**
 * Exercise 15.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Compiling using gcc:
 * sizeof(c).......: 1
 * sizeof(c + 'A').: 4
 * sizeof(c + c)...: 4
 * sizeof(c = 'A').: 1
 * 
 * Compiling using g++ it results in the same for  64-bits  modern 
 * machine. It happens because none case there are a constant char.    
 */
int main()
{
    char c = 'A';

    printf("\n");
    printf("\tsizeof(c).......: %u\n", sizeof(c));
    printf("\tsizeof(c + 'A').: %u\n", sizeof(c + 'A'));
    printf("\tsizeof(c + c)...: %u\n", sizeof(c + c));
    printf("\tsizeof(c = 'A').: %u\n", sizeof(c = 'A'));
    printf("\n");

    return EXIT_SUCCESS;
}
