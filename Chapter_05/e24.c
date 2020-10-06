/**
 * Exercise 24.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * This code simulates coin tossing for 1000, 10000 and 100000 times.
 * This is a simple  Monte  Carlo  simulation. Using standard random 
 * number generator, the result is reasonable (not good).
 * 
 * Heads: 483
 * Tails: 517
 * 
 * Heads: 5027
 * Tails: 4973
 * 
 * Heads: 49977
 * Tails: 50023
 */

// prototype
int tossing_coin();
int counting_heads(int tosses);

int main()
{
    int heads = 0;
    int tails = 0;

    // initialize seed
    srand(time(NULL));

    // tossing 1000 times
    heads = counting_heads(1000);
    tails = 1000 - heads;
    printf("\n\tHeads: %d\n\tTails: %d\n\n", 
        heads, tails
    );

    // tossing 10000 times
    heads = counting_heads(10000);
    tails = 10000 - heads;
    printf("\n\tHeads: %d\n\tTails: %d\n\n", 
        heads, tails
    );

    // tossing 100000 times
    heads = counting_heads(100000);
    tails = 100000 - heads;
    printf("\n\tHeads: %d\n\tTails: %d\n\n", 
        heads, tails
    );

    return EXIT_SUCCESS;
}

/**
 * This function simulates tossing coin.
 * 
 * parameter: nothing.
 * return: 0 (tails) or 1 (heads)
 */
int tossing_coin()
{
    return rand() % 2;
}

/**
 * This function uses tossing coin for counting heads
 * in the Monte Carlo simulation. The tails is the 
 * complementary value.
 * 
 * parameter: integer total number of coin tosses
 * return: integer value of heads counting (the tail
 * counting is the complementary value).
 */  
int counting_heads(int tosses)
{
    int heads = 0;

    // counting heads
    for (unsigned int i = 0; i < tosses; ++i)
    {
        if (tossing_coin())
        {
            ++heads;
        }
    }

    return heads;
}

