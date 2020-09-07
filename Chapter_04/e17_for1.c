/**
 * Exercise 17 - for version 1.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even_sum = 0;
    int odd_sum = 0;
    int i, j, n;

    // input
    printf("\n\tn: ");
    scanf("%d", &n);

    // fabulous for
    for (int cnt = 0, i = 1, j = 2; cnt < n; ++cnt, i += 2, j += 2)
    {
        odd_sum += i, even_sum += j;
    }

    // show results
    printf("\n\tSum of even numbers: %d\n", even_sum);
    printf("\tSum of odd numbers: %d\n\n", odd_sum);

    return EXIT_SUCCESS;
}

