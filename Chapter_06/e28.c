#include <stdio.h>
#include <stdlib.h>

/**
 * The compiler points an error: assignment of read-only 
 * location ‘*p’.
 */

int main()
{

    char s[] = "abc";
    const char *p = s;

    *p = "A";
    printf("\n\t%s\n\n", p);


    return EXIT_SUCCESS;

}

