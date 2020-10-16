/**
 * Exercise 21.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1024


// prototype
void nospc(char *s, char *ns);
int palin(char *s);
int getstr(char *s);

int main()
{

    char word[MAX];    
    int counter = 0;
    int total = 0;
    int value = 0;


    while (getstr(word) == 1)
    {
        // construct no-spaces version
        char ns[MAX];
        nospc(word, ns);

        value = palin(ns);
        
        // count palindrommes
        if (value == 1)
        {
            counter++;
        }

        // count words
        total++;

        printf("\t%s %s %d\n", word, ns, value);
    }


    // output
    printf("\n\t---------------------------------\n");
    printf("\tTotal words...: %d\n", total);
    printf("\tPalindrommes..: %d\n", counter);
    printf("\t---------------------------------\n");


    return EXIT_SUCCESS;

}


// cut spaces of a phrase
void nospc(char *s, char *ns)
{

    while (*s != '\0')
    {
        if (*s != ' ')
        {
            *ns++ = tolower(*s++);
        } else
        {
            s++;
        }
    }
    *ns = '\0';

}



// return 1 if s is palindromme
// return 0 otherwise
int palin(char *s)
{
    char rev[MAX];
    int sz = strlen(s);
    for (unsigned int i = 0; i < sz; ++i)
    {
        rev[i] = s[sz-i-1];
    }
    rev[sz] = '\0';

    if (!strcmp(s, rev)) 
    {
        return 1;
    } else
    {
        return 0;
    }

}



int getstr(char *s)
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (isalnum(c) || c == ' ' || c == '_' || c == '-')
        {
            *s++ = c;
        } else if (c == '\n')
        {
            *s = '\0';
            return 1;
        } else
        {
            return 0;
        }
    }
}

