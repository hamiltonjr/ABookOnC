/**
 * Exercise 16.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * The universe perharps never end...
 * but this recursive main function ends after 17 calls!
 */

int main()
{
    static int counter = 17;

    printf("\tThe universe never ends... %d\n", counter);
    
    if (counter > 1)
    {
        --counter;
        main();
    }

    return EXIT_SUCCESS;
}

