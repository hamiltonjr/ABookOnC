#include <stdio.h>
#include <stdlib.h>

/**
 */

int main()
{

    // define
    char *p = "abc", *q = "abc";
    
    // compare
    if (p == q)
    {
        printf("\n\tThe 2 strings has the same address\n");
    } else
    {
        printf("\n\tAs expected, the adresses are different\n");
    }

    // show
    printf("\tAddress of p: %p\n\tAddress of q: %p\n\n", p, q);


    return EXIT_SUCCESS;

}

