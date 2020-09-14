/**
 * Exercise 27.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * This program parses a text and points errors with parenthesis and
 * braces pairing. Case a brace is closed with no open brace, it prints 
 * ??. And case braces are open and not closed, it counts and show an 
 * error message "ERROR: Missing braces" and the braces missing. The 
 * same is due by parenthesis. 
 */

int main()
{
    size_t left_parenthesis_cnt = 0;        // keeps track open parenthesis
    size_t right_parenthesis_cnt = 0;       // keeps track closed parenthesis
    bool parenthesis_exceeded = false;      // mark exceed point
    int diff_parenthesis = 0;               // keep track difference of braces open

    size_t left_braces_cnt = 0;             // keeps track open braces
    size_t right_braces_cnt = 0;            // keeps track closed braces
    bool braces_exceeded = false;           // mark exceed point
    int diff_braces = 0;                    // keep track difference of braces open

    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);

        // counts parenthesis
        if (c == ')')
        {
            right_parenthesis_cnt++;
        }

        if (c == '(')
        {
            left_parenthesis_cnt++;
        }

        // counts braces
        if (c == '}') 
        {
            ight_braces_cnt++;
        }

        if (c == '{')
        {
            left_braces_cnt++;
        }


        // differences
        diff_parenthesis = right_parenthesis_cnt - left_parenthesis_cnt;
        diff_braces = right_braces_cnt - left_braces_cnt;

        // points error of exceeding parenthesis
        // mark exceed point with ??
        if (diff_parenthesis == 1 && c==')' && !parenthesis_exceeded)
        { 
            printf("??");
            parenthesis_exceeded = true;
        } else
        {
            parenthesis_exceeded = false;
        }

        // points error of exceeding braces
        // mark exceed point with ??
        if (diff_braces == 1 && c=='}' && !braces_exceeded)
        { 
            printf("??");
            braces_exceeded = true;
        } else
        {
            braces_exceeded = false;
        }
    }
    
    // points error of missing parenthesis
    if (diff_parenthesis < 0)
    {
        printf("ERROR: Missing right parenthesis: ");
        for (int i = diff_parenthesis; i < 0; ++i)
        {
            putchar(')');
        }
    }
    putchar('\n');

    // points error of missing braces
    if (diff_braces < 0)
    {
        printf("ERROR: Missing right braces: ");
        for (int i = diff_braces; i < 0; ++i)
        {
            putchar('}');
        }
    }
    putchar('\n');

    return EXIT_SUCCESS;
}

