#include <stdio.h>
#include <stdlib.h>

/**
 * The compiler complains (a warning). It is the same with flags
 * -Wall ana -pedantic. But running: seg fault.
 */

int main()
{

    char *p = "abc";
    *p = "X";
    printf("\n\t%s\n\n", p);

    return EXIT_SUCCESS;

}

