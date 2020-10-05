/**
 * Exercise 14.
 */
#include "../includes/_calc.h"

/**
 * This code implements number factoring.The is_prime() function of
 * 1_lib.h is used o test odd numbers and select only primes like a
 * factor.
 */

int main()
{
    int n;

    // input
    printf("Type a number to be factored: ");
    scanf("%d", &n);

    // factors even prime (only 2)
    while (n % 2 == 0)
    {
        printf("%d", 2);
        n /= 2;
        if (n > 1)
        {
            printf(" x ");
        }
    }

    // all remainder prime factros
    for (int k = 3; k < n && !is_prime(n); k += 2)
    {
        // eliminate odd not primes
        if (!is_prime(k))
        {
            continue;
        }

        // repeated factors
        while (n % k == 0)
        {
            printf("%d", k);
            n /= k;
            if (n > 1)
            {
                printf(" x ");
            }
        }
    }

    // show lasf prime factor if it exists (1 is not prime)
    if (n > 1)
    {
        printf("%d\n", n);
    } else
    {
        printf("\n");
    }

    // the end
    return EXIT_SUCCESS;
}
