/**
 * Exercise 26.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * This program parses a text and points errors with braces pairing.
 * Case a brace is closed with no open brace, it prints ??. And case
 * braces are open and not closed, it counts and show a error message
 * "ERROR: Missing braces" and the braces missing. 
 */

int main()
{
    size_t left_cnt = 0;        // keeps track open braces
    size_t right_cnt = 0;       // keeps track closed braces
    bool exceeded = false;      // mark exceed point
    int diff = 0;               // keep track difference of braces open
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);

        // counts braces
        if (c == '}')
        {
            right_cnt++;
        }

        if (c == '{')
        {
            left_cnt++;
        }

        // difference
        diff = right_cnt - left_cnt;

        // points error of exceeding braces
        // mark exceed point with ??
        if (diff == 1 && c=='}' && !exceeded)
        { 
            printf("??");
            exceeded = true;
        } else
        {
            exceeded = false;
        }

    }
    
    // points error of missing braces
    if (diff < 0)
    {
        printf("ERROR: Missing right braces: ");
        for (int i = diff; i < 0; ++i)
        {
            putchar('}');
        }
    }
    putchar('\n');

    return EXIT_SUCCESS;
}

