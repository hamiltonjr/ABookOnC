/**
 * Exercise 25.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRING 1024

// prototype
void prn_string(char *s);

int main()
{
    char s1[MAXSTRING], s2[MAXSTRING];

    // define strings
    strcpy(s1, "Mary, Mary, quite contrary, \n");
    strcpy(s2, "how does your garden grow?\n");

    // show s1
    printf("Showing s1...\n");
    prn_string(s1);
    printf("\n");

    // show s2
    printf("Showing s2...\n");
    prn_string(s2);
    printf("\n");

    // concatenate strings
    strcat(s1, s2);

    // show result
    printf("Showing s1...\n");
    prn_string(s1);
    printf("\n");

    return EXIT_SUCCESS;
}

/**
 * This function prints string content using 
 * putchar().
 */
void prn_string(char *s)
{
    int len = strlen(s);
    for (register size_t i = 0; i < len; ++i)
    {
        putchar(s[i]);
    }
}

