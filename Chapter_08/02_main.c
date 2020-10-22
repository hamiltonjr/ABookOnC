#include "sort.h"


int main()
{
    char a[M];
    float b[N];
    register size_t i;

    // random seed
    srand(time(NULL));


    // char array with random distrivuted characters
    printf("\n");
    FILL( a, M, "char" );
    PRINT( a, M, "%-2c" );
    qsort( a, M, sizeof(char), lexico );
    PRINT( a, M, "%-2c" );
    printf("---\n");


    // float array with random distrivuted numbers
    FILL( b, N, "float" );
    PRINT( b, N, "%-6.1f" );
    qsort( b, N, sizeof(float), compare_fractional_part );
    PRINT( b, N, "%-6.1f" );
    printf("\n\n");


    return EXIT_SUCCESS;

}

