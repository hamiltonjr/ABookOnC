/**
 * exercise 17 - while version.
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
    int i = 1;
    while (i<=2*n-1)
    {
        odd_sum += i;
        i += 2;
    }

    // sum of odd numbers
    int j = 2;
    while (j<=2*n)
    {
        even_sum += j;
        j += 2;
    }

    // show results
    printf("\n\tSum of even numbers: %d\n", even_sum);
    printf("\tSum of odd numbers: %d\n\n", odd_sum);

    return EXIT_SUCCESS;
}

