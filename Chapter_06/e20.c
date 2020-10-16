#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024


// prototype
int palin(char *s);


int main()
{

    char word[MAX];    
    int counter = 0;
    int total = 0;
    int value = 0;


    while (scanf("%s", word) == 1)
    {
        value = palin(word);

        // count palindrommes
        if (value == 1)
        {
            counter++;
        }

        // count words
        total++;

        printf("\t%s %d\n", word, value);
    }


    // output
    printf("\n\t---------------------------------\n");
    printf("\tTotal words...: %d\n", total);
    printf("\tPalindrommes..: %d\n", counter);
    printf("\t---------------------------------\n");


    return EXIT_SUCCESS;

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

