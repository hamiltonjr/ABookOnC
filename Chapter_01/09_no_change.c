/**
 * Program: no_change.c. p. 36..
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code proof that the argument is passed by value 
 * (it is copied and passed by function). The argument
 * here has the same name a, but it is unecessary (it
 * could be x).
 */

int main()
{
    int a = 1;
    void try_to_change(int);

    printf("%d\n", a);
    try_to_change(a);
    printf("%d\n", a);

    return EXIT_SUCCESS;
}

void try_to_change(int a)
{
    a = 777;
}

