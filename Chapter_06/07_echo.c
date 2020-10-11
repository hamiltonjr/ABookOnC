#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    printf("\n\targc = %d\n", argc);
    for (unsigned int i = 0; i < argc; ++i)
    {
        printf("\targv[%d] = %s\n", i, argv[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

