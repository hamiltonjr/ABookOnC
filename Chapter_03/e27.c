/**
 * Exercise 27.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * If c is declared char, its value is at the [-128, 127]. In this case,
 * it neverwill be 0xff = 255. For see the message Truth, it is needed to 
 * declare c as unsigned char.
 */

int main()
{
    char c = 0xff;

    if (c == 0xff)
    {
        printf("\t\nTruth\n\n");
    } else
    {
        printf("\n\tc = %d\n\tThis needs to be explained\n\n", c);
    }

    return EXIT_SUCCESS;
}

