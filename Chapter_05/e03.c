/**
 * Exercise 03.
 */
#include <stdio.h>
#include <stdlib.h>

int z;

/**
 * Z is global. z is modified into f() using parameter x,
 * but this parameters is modified into function. The result 
 * is z = 7.
 */

// function
void f(int x)
{
    x = 2;
    z += x;
}

// test
int main()
{
    z = 5;
    f(z);
    printf("\n\tz = %d\n\n", z);

    return EXIT_SUCCESS;
}

