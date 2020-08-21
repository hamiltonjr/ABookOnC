/**
 * Exercise 14.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This type of exercise isonly educational.In practice
 * we avoid complexity.
 */

int main()
{
    register int a, b = 0, c = 0;

    a = ++b + ++c;
    printf("%d %d %d\n", a, b, c);
    a = b++ + ++c;
    printf("%d %d %d\n", a, b, c);
    a = ++b + c++;
    printf("%d %d %d\n", a, b, c);
    a = b-- + --c;
    printf("%d %d %d\n", a, b, c);

    return EXIT_SUCCESS;
}

