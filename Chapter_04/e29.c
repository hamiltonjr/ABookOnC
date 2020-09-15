/**
 * Exercise 29.
 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int c, cnt = 0, digit_ctn = 0;
    int i, n, total = 0;

    while ((c = getchar()) && c != 'E')
    {
        ++cnt;
        if (c >= '0' && c <= '9')
        {
            ++digit_ctn;
        }
    }

    i = -5;
    n = 50;
    printf("\n");
    while (i < n)
    {
        ++i;
        if (i != 0)
        {
            total += i;
            printf("\ti = %d and total = %d\n", i, total);
        }
    }
    printf("\n");

    return EXIT_SUCCESS;
}

