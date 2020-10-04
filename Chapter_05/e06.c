/**
 * Exercise 06.
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

/**
 * 1 < b - a <= 2 is when assert fails. A test was made and found 
 * average times the loop continues near 30 times with standard 
 * deviation great.
 */

int main()
{
    unsigned int cnt = 0;

    srand(time(NULL));
    for (size_t i = 0; i < 1000; ++i)
    {
        int a = rand() % 3 + 1;
        int b = rand() % 30 + 1;
        
        if (b - a <= 1)
        {
            continue;
        }

        assert(b - a > 2);
        printf("\tb - a = %3d   cnt = %3u\n", b - a, ++cnt);
    }

    return EXIT_SUCCESS;
}

