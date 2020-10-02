/**
 * Exercise 04.
 */
#include <stdio.h>
#include <stdlib.h>

int z;

/**
 * Z is global. z is modified into  f()  using parameter  x, but 
 * this parameters is modified into function. The result: z = 7.
 * 
 * The compiler accepted  traditional  function  definiton style 
 * when I used a 64-bits gcc compiler, but complains when I used
 * a  32-bits gcc compiler. At the  64-bits computer, the result  
 * was the same.
 */

// function with traditional C function 
// declaration and definition style
void f()
int x;
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

