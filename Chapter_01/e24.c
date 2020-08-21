/**
 * Exercise 24.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRING 100

/**
 * This code implements a string and pointer relationship
 * understanding. The goal is to write prn_string().
 */
// prototype
void prn_string(char*);

int main()
{
    char s1[MAXSTRING] = {0};
    char s2[MAXSTRING] = {0};

    // input texts
    strcpy(s1, "Mary, Mary, quite contrary,\n");
    strcpy(s2, "how does your garden grow?\n");
    
    // show texts
    printf("s1\n");
    prn_string(s1);
    printf("s2\n");
    prn_string(s2);
    
    // concatenate texts
    strcat(s1, s2);
    
    // show concatenated text
    printf("s1 + s2\n");
    prn_string(s1);

    //the end
    return EXIT_SUCCESS;
}

/**
 * This function shows an array string in screen.
 */
void prn_string(char *a)
{
    register size_t i = 0;
    while (a[i] != '\0')
    {
        putchar(a[i++]);
    }
    printf("\n");
}

