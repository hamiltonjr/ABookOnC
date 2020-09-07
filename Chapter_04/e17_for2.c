/**
 * Exercisew 17 - for version 2.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even_sum = 0;
    int odd_sum = 0;
    int n;

    // input
    printf("\n\tn: ");
    scanf("%d", &n);

    // sum of even numbers
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        odd_sum += i;
    }

    // sum of odd numbers
    for (int j = 2; j <= 2 * n; j += 2)
    {
        even_sum += j;
    }

    // show results
    printf("\n\tSum of even numbers: %d\n", even_sum);
    printf("\tSum of odd numbers: %d\n\n", odd_sum);

    return EXIT_SUCCESS;
}

