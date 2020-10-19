#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, mask = 1;
    printf("\n\t");
    for (i = 0; i < 10; ++i)
    {
        printf("%d", i & mask);
    }
    printf("\n\n");
    

    return EXIT_SUCCESS;

}

