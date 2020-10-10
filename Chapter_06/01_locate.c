#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 7, *p = &i;

    printf("\n\tValue of i: %d\n", i);
    printf("\tLocation of i: %p\n\n", p);

    return EXIT_SUCCESS;
}

