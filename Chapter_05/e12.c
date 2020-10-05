/**
 * Exercise 12.
 */
#include "../includes/_calc.h"
#define MAX 30

/**
 * It is not true that from 3 to 10 fibonacci number is prime if and only
 * if n is prime. Counter-example: n = 4 is not prime and fibo(4) = 3 is 
 * prime. The equivalence is true for n from 5 to 104911 (proven).
 * 
 * For n from 3 to 30 almost all n prime goes to a prime fibonacci number.
 * It looks it is common. But the equivalence given is not true. Run the 
 * program and see. 
 */

int is_fib_prime(int);

int main()
{
    printf("\n");
    for (int i=3; i<=MAX; ++i)
    {
        printf("\tFibonacci %d: %ld   is prime? %3s\n", 
            i, nth_fibo(i), is_fib_prime(i) ? "yes" : "no");
    }
    printf("\n");

    return EXIT_SUCCESS;
}

/**
 * This function returns if the nt number of Fibonacci sequence
 * is prime.
 * 
 * parameter: n
 * return 1 if the nt number of Fibonacci sequence is prime, 0 otherwise.
 */
int is_fib_prime(int n)
{
    return is_prime(nth_fibo(n));
}
