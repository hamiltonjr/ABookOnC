/**
 * Exercise 28.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code implements a characters and words counter that counts 
 * separatedly uppercase and lowercase letters.
 */

int main()
{
    // counters
    int blanks = 0, digits = 0;
    int u_letters = 0, l_letters = 0;
    int newlines = 0, others = 0;
    
    // characters        
    int c;

    // input and decision
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            blanks++;
        } else if (c >= '0' && c <='9')
        {
            digits++;
        } else if (c >= 'A' && c <= 'Z')
        {
            u_letters++;
        } else if (c >= 'a' && c <= 'z')
        {
            l_letters++;
        } else if (c == '\n')
        {
            newlines++;
        } else
        {
            others++;
        }
    }

    // output esults
    printf("\n\t%10s%10s%10s%10s%10s%10s%10s\n\t%10d%10d%10d%10d%10d%10d%10d\n\n",
        "blanks", "digits", "A-Z", "a-z", "lines", "others", "total",
        blanks, digits, u_letters, l_letters, newlines, others,
        blanks + digits + u_letters + l_letters + newlines + others
    );

    return EXIT_SUCCESS;
}

