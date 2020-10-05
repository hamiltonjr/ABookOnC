/**
 * Exercise 11.
 */
#include "../includes/_calc.h"

/**
 * This code implements a sieve for prime numbers.
 * It is used sieve of Eratostenes for optimize the
 * process.
 */

// test
int main()
{
    int n;

    // input
    printf("\n\tType a number: ");
    scanf("%d", &n);

    // testing
    if (is_prime(n))
    {
        printf("\tPrime\n\n");
    } else 
    {
        printf("\tNot prime\n\n");
    }

    // the end
    return EXIT_SUCCESS;
}

