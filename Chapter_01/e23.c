/**
 * Exercise 23.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRING 100

/**
 * This code makes some experiments with pointers: the 
 * pointer arithmetic is shown. The behavior issimilar
 * to abc.c program. The else makes if-else a single
 * structure and braces are not ndd in this case.  
 */
int main() 
{
    char s[MAXSTRING];
    char c = 'a';
    char *p = NULL;

    p = &c;
    printf("%c%c%c ", *p, *p + 1, *p + 2);

    strcpy(s, "ABC");
    printf("%s  %c%c%s\n", s, *s + 6, *s + 7, s + 1);
    
    strcpy(s, "she sells a seashell to a seashore");
    p = s + 14;

    for ( ; *p!='\0'; ++p)
    {
        if (*p == 'e')
        {
            *p = 'E';
        } else if (*p == ' ')
        {
            *p = '\n';
        }
    }

    printf("%s\n",s);

    return EXIT_SUCCESS;
}

