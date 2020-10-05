/**
 * Exercise 13.
 */
#include "../includes/_calc.h"
#define START 10
#define FINISH 20

/**
 * This code implements Goldbch's  Theorem  Testing. Based  to  constants
 * BEGIN and FINISH given, the algorithm tests  all  even numbers between
 * this values, verifying if it is sum  of  two prime numbers. Various of
 * thisnumbers has more that one sum combintion. The program show all the
 * combination, but it is easy modify for show only the first combination
 * (maybe it is interesting for user only show that exists a combination:
 * in that case one combination is sufficient).  
 */

int main()
{
    int begin, end;
    
    // adjusts begin
    if (START<4)
    {
        begin = 4;
    } else if (START%2 != 0)
    {
        begin = START + 1;
    } else
    {
        begin = START;
    }

    // adjusts end
    if (FINISH<START)
    {
        end = START + 2;
    } else if (FINISH%2 != 0)
    {
        end = FINISH - 1;
    } else
    {
        end = FINISH;
    }

    if (begin == 4)
    {
        printf("\tn = 4 = 2 + 2: 2 and 2 are primes.\n\n");
        begin += 2;
    }

    printf("\n");
    for (int n=begin; n<=end; n+=2)
    {
        // divide k/2 for avoid simemtric combinations 
        // like 34 = 3 + 31 and 34 = 31 + 3
        for (int k=2; k<=n/2; ++k)
        {
            if (is_prime(k) && is_prime(n-k))
            {
                printf("\tn = %d = %d + %d: %d and %d are primes.\n", 
                        n, k, n-k, k, n-k); 
                // ative break below to show only the first combination found
                //break;
            }
        }
        printf("\n");
    }
    printf("\n");

    return EXIT_SUCCESS;
}

