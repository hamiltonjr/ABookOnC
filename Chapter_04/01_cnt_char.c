/**
 * Program: cnt_chars.c. p. 165.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int blanks = 0, 
                 digits = 0, 
                 letters = 0, 
                 newlines = 0, 
                 others = 0;
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
        } else if   ((c >= 'a' && c <= 'z') || 
                    (c >= 'A' && c <= 'Z'))
        {
            letters++;
        } else if (c == '\n')
        {
            newlines++;
        } else
        {
            others++;
        }
    }

    // output
    printf("\n%10s%10s%10s%10s%10s%10s\n%10d%10d%10d%10d%10d%10d\n\n",
        "blanks", "digits", "letters", "lines", "others", "total",
        blanks, digits, letters, newlines, others,
        blanks + digits + letters + newlines + others
    );

    return EXIT_SUCCESS;
}

