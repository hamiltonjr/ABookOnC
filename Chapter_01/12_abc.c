/**
 * Program: abc.c. p. 43.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRING 100

/**
 * This code makes some experiments with pointers: the 
 * pointer arithmetic is shown.
 */

int main() 
{
    char s[MAXSTRING];
    char c = 'a';
    char *p = NULL;

    p = &c;
    printf("\n%c%c%c ", *p, *p + 1, *p + 2);

    strcpy(s, "ABC");
    printf("%s  %c%c%s\n", s, *s + 6, *s + 7, s + 1);
    
    strcpy(s, "she sells a seashell to a seashore");
    p = s + 14;

    for ( ; *p!='\0'; ++p)
    {
        if (*p == 'e')
        {
            *p = 'E';
        }

        if (*p == ' ')
        {
            *p = '\n';
        }
    }
    printf("%s\n\n",s);

    return EXIT_SUCCESS;
}

