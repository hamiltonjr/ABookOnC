/**
 * Program: nice_day.c. p. 37.
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXSTRING 100

/**
 * This code implements a talk between computer and user. Computer
 * ask for user name and show it printed backward and sum of chars
 * of the name.
 */

int main()
{
    // definitions
    char name[MAXSTRING] = "";
    char c = ' ';
    register int i, sum = 0;

    // input name
    printf("\nH! What is your name?: ");
    for (i=0; (c=getchar()) != '\n'; ++i)
    {
        name[i] = c;
        if (isalpha(c))
            sum += c;
    }
    name[i] = '\0';

    // show presentation message
    printf("\n%s%s%s\n%s", 
        "Nice to meet you ",name, ".",
        "Your name spelled backward is "
    );

    // spelling backward the name
    for (--i; i>=0; --i)
    {
        putchar(name[i]);
    }

    // show final message
    printf("\n%s%d%s\n\n%s\n",
        "and the letters of your name sum to ", 
        sum, ".", "Have a nice day!"    
    );

    //the end
    return EXIT_SUCCESS;
}

